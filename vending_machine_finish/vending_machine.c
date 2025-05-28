#include <stdio.h>
#include <string.h>
#include "vending_machine.h"

// 자판기 생성 함수
VendingMachine createVendingMachine(const char* name) {
    VendingMachine vm;
    strncpy(vm.name, name, sizeof(vm.name) - 1);
    vm.name[sizeof(vm.name) - 1] = '\0';
    vm.productCount = 0;
    vm.balance = 0;
    return vm;
}

// 자판기에 제품 추가 - 새 자판기 반환
VendingMachine addProductToMachine(VendingMachine vm, int id, const char* name, int price, int stock) {
    if (vm.productCount >= MAX_PRODUCTS) {
        printf("제품 추가 실패: 최대 제품 수 초과\n");
        return vm; // 변경 없이 반환
    }
    
    // 제품 ID 중복 검사
    for (int i = 0; i < vm.productCount; i++) {
        if (vm.products[i].id == id) {
            printf("제품 추가 실패: ID 중복\n");
            return vm; // 변경 없이 반환
        }
    }
    
    // 새 제품 추가
    vm.products[vm.productCount] = createProduct(id, name, price, stock);
    vm.productCount++;
    
    return vm; // 새로운 상태 반환
}

// 자판기 제품 목록 출력
void displayProducts(const VendingMachine vm) {
    printf("===== %s 자판기 =====\n", vm.name);
    printf("현재 잔액: %d원\n", vm.balance);
    printf("------------------\n");
    
    for (int i = 0; i < vm.productCount; i++) {
        displayProduct(vm.products[i]);
    }
    
    printf("------------------\n");
}

// 돈 투입 - 새 자판기 반환
VendingMachine insertMoney(VendingMachine vm, int amount) {
    if (amount > 0) {
        vm.balance += amount;
        printf("%d원이 투입되었습니다. 현재 잔액: %d원\n", amount, vm.balance);
    }
    return vm;
}

// 현재 잔액 확인
int getBalance(const VendingMachine vm) {
    return vm.balance;
}

// 제품 구매 - 구매 결과와 새 자판기 상태 반환
PurchaseResult purchaseProduct(VendingMachine vm, int productId) {
    PurchaseResult result;
    result.machine = vm;
    result.success = 0;
    
    // 해당 ID의 제품 찾기
    int index = -1;
    for (int i = 0; i < vm.productCount; i++) {
        if (vm.products[i].id == productId) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        strcpy(result.message, "해당 제품이 존재하지 않습니다.");
        return result;
    }
    
    Product selectedProduct = vm.products[index];
    
    // 재고 확인
    if (checkStock(selectedProduct) <= 0) {
        strcpy(result.message, "해당 제품의 재고가 없습니다.");
        return result;
    }
    
    // 잔액 확인
    if (vm.balance < selectedProduct.price) {
        sprintf(result.message, "잔액이 부족합니다. 필요한 금액: %d원, 현재 잔액: %d원", 
                selectedProduct.price, vm.balance);
        return result;
    }
    
    // 구매 처리
    vm.balance -= selectedProduct.price;
    vm.products[index] = decreaseStock(selectedProduct);
    
    sprintf(result.message, "%s를 구매했습니다. 남은 잔액: %d원", 
            selectedProduct.name, vm.balance);
    
    result.machine = vm;
    result.success = 1;
    return result;
}

// 잔돈 반환 - 반환된 금액과 새 자판기 상태 반환
ChangeResult returnChange(VendingMachine vm) {
    ChangeResult result;
    result.amount = vm.balance;
    
    if (result.amount > 0) {
        printf("잔돈 %d원이 반환되었습니다.\n", result.amount);
        vm.balance = 0;
    } else {
        printf("반환할 잔돈이 없습니다.\n");
    }
    
    result.machine = vm;
    return result;
} 
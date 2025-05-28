#include <stdio.h>
#include <string.h>
#include "vending_machine.h"

// 자판기 생성 함수
VendingMachine createVendingMachine(const char* name) {
    VendingMachine vm;
    // TODO: 자판기 이름 설정 (strncpy 사용)
    strcpy(vm.name, ""); // 임시 초기화
    // TODO: 제품 개수 초기화
    vm.productCount = 0; // 기본 초기화
    // TODO: 잔액 초기화
    vm.balance = 0; // 기본 초기화
    (void)name; // 경고 방지용
    return vm;
}

// 자판기에 제품 추가 - 새 자판기 반환
VendingMachine addProductToMachine(VendingMachine vm, int id, const char* name, int price, int stock) {
    // TODO: 최대 제품 수 확인
    
    // TODO: 제품 ID 중복 검사
    
    // TODO: 새 제품 추가
    
    // 경고 방지용
    (void)id; (void)name; (void)price; (void)stock;
    
    return vm; // 새로운 상태 반환
}

// 자판기 제품 목록 출력
void displayProducts(const VendingMachine vm) {
    // TODO: 자판기 이름과 현재 잔액 출력
    
    // TODO: 모든 제품 정보 출력 (반복문 사용)
    
    // 경고 방지용
    (void)vm;
}

// 돈 투입 - 새 자판기 반환
VendingMachine insertMoney(VendingMachine vm, int amount) {
    // TODO: 유효한 금액인지 확인
    // TODO: 잔액에 추가
    // TODO: 투입 완료 메시지 출력
    
    // 경고 방지용
    (void)amount;
    
    return vm;
}

// 현재 잔액 확인
int getBalance(const VendingMachine vm) {
    // TODO: 현재 잔액 반환
    
    // 경고 방지용
    (void)vm;
    
    return 0;
}

// 제품 구매 - 구매 결과와 새 자판기 상태 반환
PurchaseResult purchaseProduct(VendingMachine vm, int productId) {
    PurchaseResult result;
    result.machine = vm;
    result.success = 0;
    strcpy(result.message, ""); // 기본 초기화
    
    // TODO: 해당 ID의 제품 찾기
    
    // TODO: 제품 존재 여부 확인
    
    // TODO: 재고 확인
    
    // TODO: 잔액 확인
    
    // TODO: 구매 처리 (잔액 차감, 재고 감소)
    
    // 경고 방지용
    (void)productId;
    
    return result;
}

// 잔돈 반환 - 반환된 금액과 새 자판기 상태 반환
ChangeResult returnChange(VendingMachine vm) {
    ChangeResult result;
    // TODO: 현재 잔액을 반환 금액으로 설정
    result.amount = 0; // 기본 초기화
    
    // TODO: 잔돈 반환 메시지 출력
    
    // TODO: 자판기 잔액 초기화
    
    result.machine = vm;
    return result;
} 
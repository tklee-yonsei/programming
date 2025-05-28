#include <stdio.h>
#include <stdlib.h>
#include "vending_machine.h"
#include "utils.h"

int main() {
    // 자판기 생성
    VendingMachine vm = createVendingMachine("음료수");
    
    // 제품 등록
    vm = addProductToMachine(vm, 1, "콜라", 1500, 10);
    vm = addProductToMachine(vm, 2, "사이다", 1300, 8);
    vm = addProductToMachine(vm, 3, "오렌지 쥬스", 2000, 5);
    vm = addProductToMachine(vm, 4, "에너지 드링크", 2500, 3);
    vm = addProductToMachine(vm, 5, "물", 1000, 15);
    
    printf("자판기 프로그램을 시작합니다.\n");
    
    // 메인 루프
    while (1) {
        int choice = displayMenu();
        
        switch (choice) {
            case 0: // 종료
                printf("프로그램을 종료합니다.\n");
                // ChangeResult finalChange = returnChange(vm);
                returnChange(vm);
                return 0;
                
            case 1: // 제품 목록 보기
                clearScreen();
                displayProducts(vm);
                break;
                
            case 2: // 돈 넣기
                printf("얼마를 넣으시겠습니까? ");
                int amount = getIntInput();
                if (amount > 0) {
                    vm = insertMoney(vm, amount);
                } else {
                    printf("유효한 금액을 입력해주세요.\n");
                }
                break;
                
            case 3: // 제품 구매하기
                displayProducts(vm);
                printf("구매할 제품 번호를 입력하세요: ");
                int productId = getIntInput();
                PurchaseResult result = purchaseProduct(vm, productId);
                printf("%s\n", result.message);
                if (result.success) {
                    vm = result.machine;
                }
                break;
                
            case 4: // 잔돈 반환하기
                // ChangeResult change = returnChange(vm);
                // vm = change.machine;
                returnChange(vm);
                break;
                
            default:
                printf("잘못된 선택입니다. 다시 선택해주세요.\n");
        }
    }
    
    return 0;
} 
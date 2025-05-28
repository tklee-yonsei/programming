#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

#include "product.h"

#define MAX_PRODUCTS 10

typedef struct {
    char name[50];
    Product products[MAX_PRODUCTS];
    int productCount;
    int balance;
} VendingMachine;

// 자판기 생성 함수
VendingMachine createVendingMachine(const char* name);

// 자판기에 제품 추가 - 새 자판기 반환
VendingMachine addProductToMachine(VendingMachine vm, int id, const char* name, int price, int stock);

// 자판기 제품 목록 출력
void displayProducts(const VendingMachine vm);

// 돈 투입 - 새 자판기 반환
VendingMachine insertMoney(VendingMachine vm, int amount);

// 현재 잔액 확인
int getBalance(const VendingMachine vm);

// 제품 구매 - 구매 결과와 새 자판기 상태 반환
typedef struct {
    VendingMachine machine;
    int success;
    char message[100];
} PurchaseResult;

PurchaseResult purchaseProduct(VendingMachine vm, int productId);

// 잔돈 반환 - 반환된 금액과 새 자판기 상태 반환
typedef struct {
    VendingMachine machine;
    int amount;
} ChangeResult;

ChangeResult returnChange(VendingMachine vm);

#endif // VENDING_MACHINE_H 
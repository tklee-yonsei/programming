#include <stdio.h>
#include <string.h>
#include "product.h"

// 새 제품 생성 함수
Product createProduct(int id, const char* name, int price, int stock) {
    Product product;
    product.id = id;
    strncpy(product.name, name, sizeof(product.name) - 1);
    product.name[sizeof(product.name) - 1] = '\0'; // null 종료 문자 보장
    product.price = price;
    product.stock = stock;
    return product;
}

// 제품 정보 출력 함수
void displayProduct(const Product product) {
    printf("[%d] %s - %d원 (재고: %d개)\n", 
           product.id, product.name, product.price, product.stock);
}

// 제품 재고 확인 함수
int checkStock(const Product product) {
    return product.stock;
}

// 제품 재고 감소 함수 (구매 시 호출) - 새 제품 반환
Product decreaseStock(Product product) {
    if (product.stock > 0) {
        product.stock--;
    }
    return product;
} 
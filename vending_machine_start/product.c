#include <stdio.h>
#include <string.h>
#include "product.h"

// 새 제품 생성 함수
Product createProduct(int id, const char* name, int price, int stock) {
    Product product;
    // TODO: 제품 ID 설정
    product.id = 0; // 기본 초기화
    // TODO: 제품 이름 설정 (strncpy 사용)
    strcpy(product.name, ""); // 기본 초기화
    // TODO: 제품 가격 설정
    product.price = 0; // 기본 초기화
    // TODO: 제품 재고 설정
    product.stock = 0; // 기본 초기화
    
    // 경고 방지용
    (void)id; (void)name; (void)price; (void)stock;
    
    return product;
}

// 제품 정보 출력 함수
void displayProduct(const Product product) {
    // TODO: 제품 정보를 "[ID] 이름 - 가격원 (재고: 개수개)" 형식으로 출력
    
    // 경고 방지용
    (void)product;
}

// 제품 재고 확인 함수
int checkStock(const Product product) {
    // TODO: 제품의 재고 수량 반환
    
    // 경고 방지용
    (void)product;
    
    return 0;
}

// 제품 재고 감소 함수 (구매 시 호출) - 새 제품 반환
Product decreaseStock(Product product) {
    // TODO: 재고가 0보다 크면 1 감소
    return product;
} 
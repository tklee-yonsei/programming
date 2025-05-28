#ifndef PRODUCT_H
#define PRODUCT_H

typedef struct {
    int id;
    char name[50];
    int price;
    int stock;
} Product;

// 새 제품 생성 함수
Product createProduct(int id, const char* name, int price, int stock);

// 제품 정보 출력 함수
void displayProduct(const Product product);

// 제품 재고 확인 함수
int checkStock(const Product product);

// 제품 재고 감소 함수 (구매 시 호출) - 새 제품 반환
Product decreaseStock(Product product);

#endif // PRODUCT_H 
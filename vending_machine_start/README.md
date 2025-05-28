# 자판기 프로그램 - 학습용 시작 프로젝트

이 프로젝트는 C 언어로 자판기 시뮬레이터를 구현하는 학습용 프로젝트입니다.
현재는 기본 틀만 제공되며, TODO 주석을 따라 단계별로 구현해나가면 됩니다.

## 프로젝트 구조

```
vending_machine_start/
├── main.c              # 메인 프로그램 (TODO: 메인 루프 구현)
├── vending_machine.h   # 자판기 구조체 및 함수 선언 (완성됨)
├── vending_machine.c   # 자판기 핵심 기능 (TODO: 구현 필요)
├── product.h           # 제품 구조체 및 함수 선언 (완성됨)
├── product.c           # 제품 관련 기능 (TODO: 구현 필요)
├── utils.h             # 유틸리티 함수 선언 (완성됨)
├── utils.c             # 유틸리티 함수 (일부 TODO)
├── makefile            # 빌드 설정
└── README.md           # 이 파일
```

## 학습 순서

### 1단계: 기본 구조 이해
- 헤더 파일들(.h)을 읽어보고 구조체와 함수 선언을 이해하세요
- 각 파일의 역할과 관계를 파악하세요

### 2단계: 제품(Product) 기능 구현
`product.c` 파일의 TODO를 구현하세요:
- `createProduct()`: 제품 생성
- `displayProduct()`: 제품 정보 출력
- `checkStock()`: 재고 확인
- `decreaseStock()`: 재고 감소

### 3단계: 자판기(VendingMachine) 기능 구현
`vending_machine.c` 파일의 TODO를 구현하세요:
- `createVendingMachine()`: 자판기 생성
- `addProductToMachine()`: 제품 추가
- `displayProducts()`: 제품 목록 출력
- `insertMoney()`: 돈 투입
- `getBalance()`: 잔액 확인
- `purchaseProduct()`: 제품 구매
- `returnChange()`: 잔돈 반환

### 4단계: 유틸리티 기능 구현
`utils.c` 파일의 TODO를 구현하세요:
- `displayMenu()`: 메뉴 출력

### 5단계: 메인 프로그램 구현
`main.c` 파일의 TODO를 구현하세요:
- 자판기 생성 및 제품 등록
- 메인 루프와 사용자 입력 처리
- 각 메뉴 선택에 따른 기능 호출

## 빌드 및 실행

### 컴파일
```bash
make
```

### 실행
```bash
./vending_machine
```

### 정리
```bash
make clean
```

## 구현 힌트

### 문자열 복사
```c
strncpy(destination, source, sizeof(destination) - 1);
destination[sizeof(destination) - 1] = '\0';
```

### 배열 순회
```c
for (int i = 0; i < count; i++) {
    // 배열 요소 처리
}
```

### 조건 확인
```c
if (condition) {
    // 조건이 참일 때 실행
} else {
    // 조건이 거짓일 때 실행
}
```

### 문자열 출력
```c
printf("형식 문자열", 변수1, 변수2, ...);
sprintf(buffer, "형식 문자열", 변수1, 변수2, ...);
strcpy(destination, "문자열");
```

## 완성 목표

모든 TODO를 구현하면 다음 기능이 동작해야 합니다:

1. **제품 목록 보기**: 등록된 모든 제품의 정보 출력
2. **돈 넣기**: 사용자가 입력한 금액을 자판기에 투입
3. **제품 구매하기**: 제품 선택, 잔액/재고 확인, 구매 처리
4. **잔돈 반환하기**: 투입된 돈을 모두 반환
5. **종료**: 프로그램 종료

## 테스트 시나리오

1. 프로그램 시작 후 제품 목록 확인
2. 돈 투입 (예: 3000원)
3. 제품 구매 (예: 콜라 1500원)
4. 남은 잔액 확인
5. 잔돈 반환
6. 프로그램 종료

완성된 버전은 `vending_machine_finish` 폴더에서 확인할 수 있습니다. 
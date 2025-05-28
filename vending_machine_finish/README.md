# C언어 자판기 프로그램

이 프로그램은 C언어로 구현된 간단한 자판기 시뮬레이션입니다. 구조체와 포인터를 활용하여 객체지향적인 설계를 모방하였습니다.

## 구현된 기능

1. 제품 목록 보기
2. 돈 넣기
3. 제품 구매하기
4. 잔돈 반환하기

## 파일 구조

- `main.c`: 메인 프로그램
- `vending_machine.h`/`vending_machine.c`: 자판기 구조체와 관련 함수
- `product.h`/`product.c`: 제품 구조체와 관련 함수 
- `utils.h`/`utils.c`: 입출력 및 화면 관련 유틸리티 함수
- `makefile`: 컴파일 설정

## 컴파일 및 실행 방법

### Linux/Mac 환경
```bash
# 컴파일
make

# 실행
./vending_machine

# 정리
make clean
```

### Windows 환경

#### 명령 프롬프트(CMD) 사용:
```batch
# 컴파일
build.bat

# 실행
run.bat

# 정리
clean.bat
```

#### PowerShell 사용 (권장):
```powershell
# 컴파일
.\build.ps1

# 실행
.\run.ps1

# 정리
Remove-Item *.o, vending_machine.exe -ErrorAction SilentlyContinue
```

**주의사항**: 윈도우에서는 gcc가 설치되어 있어야 합니다. MinGW-w64나 MSYS2를 통해 설치할 수 있습니다.

### 윈도우에서 한글 출력 문제 해결
윈도우에서 한글이 깨져 보이는 경우 다음 방법을 시도해보세요:

1. **명령 프롬프트에서 직접 실행하는 경우**:
   ```batch
   chcp 949
   vending_machine.exe
   ```

2. **PowerShell에서 실행하는 경우**:
   ```powershell
   [Console]::OutputEncoding = [System.Text.Encoding]::GetEncoding("euc-kr")
   ./vending_machine.exe
   ```

3. **제공된 스크립트 파일 사용** (권장):
   - PowerShell: `.\run.ps1`
   - 명령 프롬프트: `run.bat`

## 학습 요소

이 프로그램에서 다음과 같은 C언어 요소를 학습할 수 있습니다:

1. 구조체(struct)를 활용한 데이터 모델링
2. 포인터를 이용한 함수 간 데이터 전달
3. 배열을 이용한 여러 제품 관리
4. 조건문(if-else)과 반복문(for, while)
5. 함수 모듈화와 헤더 파일 설계
6. 메모리 안전 프로그래밍(strncpy 등)
7. 다중 파일 프로젝트 구성

## 확장 가능성

- 관리자 모드 추가 (재고 추가/제거, 가격 변경 등)
- 파일 입출력을 통한 데이터 영구 저장
- 다양한 결제 방식 추가 
#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

typedef struct {
    char name[50];
    char phone[20];
    char email[50];
} Contact;

Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void initializeContacts() {
    strcpy(contacts[0].name, "Hong");
    strcpy(contacts[0].phone, "010-1234-5678");
    strcpy(contacts[0].email, "hong@gmail.com");

    strcpy(contacts[1].name, "Kim");
    strcpy(contacts[1].phone, "010-8765-4321");
    strcpy(contacts[1].email, "kim@gmail.com");

    strcpy(contacts[2].name, "Jack");
    strcpy(contacts[2].phone, "010-1234-1234");
    strcpy(contacts[2].email, "jack@gmail.com");

    strcpy(contacts[3].name, "Julia");
    strcpy(contacts[3].phone, "010-1234-4321");
    strcpy(contacts[3].email, "julia@gmail.com");

    contactCount = 4;
}

void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("주소록이 가득 찼습니다.\n");
        return;
    }
    printf("이름: ");
    fgets(contacts[contactCount].name, sizeof(contacts[contactCount].name), stdin);
    contacts[contactCount].name[strcspn(contacts[contactCount].name, "\n")] = 0;

    printf("전화번호: ");
    fgets(contacts[contactCount].phone, sizeof(contacts[contactCount].phone), stdin);
    contacts[contactCount].phone[strcspn(contacts[contactCount].phone, "\n")] = 0;

    printf("이메일: ");
    fgets(contacts[contactCount].email, sizeof(contacts[contactCount].email), stdin);
    contacts[contactCount].email[strcspn(contacts[contactCount].email, "\n")] = 0;

    contactCount++;
    printf("연락처가 추가되었습니다.\n");
}

void displayContacts() {
    printf("주소록 목록:\n");
    for (int i = 0; i < contactCount; i++) {
        printf("%d. 이름: %s, 전화번호: %s, 이메일: %s\n", i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

int selectContact() {
    int index;
    printf("번호를 입력하세요: ");
    scanf("%d", &index);
    getchar();  // 버퍼 비우기
    if (index < 1 || index > contactCount) {
        printf("잘못된 입력입니다.\n");
        return -1;
    }
    return index - 1;
}

void editContact() {
    int index = selectContact();
    if (index == -1) return;

    printf("새 이름 (현재값: %s): ", contacts[index].name);
    fgets(contacts[index].name, sizeof(contacts[index].name), stdin);
    contacts[index].name[strcspn(contacts[index].name, "\n")] = 0;

    printf("새 전화번호 (현재값: %s): ", contacts[index].phone);
    fgets(contacts[index].phone, sizeof(contacts[index].phone), stdin);
    contacts[index].phone[strcspn(contacts[index].phone, "\n")] = 0;

    printf("새 이메일 (현재값: %s): ", contacts[index].email);
    fgets(contacts[index].email, sizeof(contacts[index].email), stdin);
    contacts[index].email[strcspn(contacts[index].email, "\n")] = 0;

    printf("연락처가 수정되었습니다.\n");
}

void deleteContact() {
    int index = selectContact();
    if (index == -1) return;

    for (int i = index; i < contactCount - 1; i++) {
        contacts[i] = contacts[i + 1];
    }
    contactCount--;
    printf("연락처가 삭제되었습니다.\n");
}

void moveContact() {
    int index1 = selectContact();
    if (index1 == -1) return;
    int index2 = selectContact();
    if (index2 == -1 || index1 == index2) return;

    Contact temp = contacts[index1];
    contacts[index1] = contacts[index2];
    contacts[index2] = temp;

    printf("연락처 위치가 변경되었습니다.\n");
}

int main() {
    char choice;
    initializeContacts();

    do {
        printf("\n[1] 연락처 추가\n[2] 연락처 표시\n[3] 연락처 위치이동\n[4] 연락처 수정\n[5] 연락처 삭제\n[6] 종료\n선택: ");
        choice = getchar();
        getchar(); // 버퍼 비우기
        switch (choice) {
            case '1': addContact(); break;
            case '2': displayContacts(); break;
            case '3': moveContact(); break;
            case '4': editContact(); break;
            case '5': deleteContact(); break;
            case '6': printf("프로그램을 종료합니다.\n"); break;
            default: printf("잘못된 선택입니다. 다시 입력하세요.\n");
        }
    } while (choice != '6');

    return 0;
}

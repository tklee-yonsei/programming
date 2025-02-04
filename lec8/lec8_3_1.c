#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    Date birthday;  // 내부 구조체
} Person;

Date build_date(int day, int month, int year);
Person build_person(char* name, Date date);

int main() {
  Date p1_birth = build_date(2000, 3, 2);
  Person p1 = build_person("James", p1_birth);

  return 0;
}

Date build_date(int day, int month, int year) {
  Date d;
  d.day = day;
  d.month = month;
  d.year = year;

  return d;
}

Person build_person(char* name, Date date) {
  Person p;
  strcpy(p.name, name);
  p.birthday = date;

  return p;
}

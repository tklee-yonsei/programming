#include <stdio.h>
#include <string.h>

typedef enum {
  INT, FLOAT, STRING
} DataType;

typedef struct {
  DataType type;
  union {
    int i;
    float f;
    char* s;
  } data;
} TaggedData;

void printValue(TaggedData* tu);

int main() {
  TaggedData td1 = { INT, {3} };
  TaggedData td2 = { FLOAT, {0} };
  td2.data.f = 3.14;
  TaggedData td3 = { STRING, {0} };
  td3.data.s = "abcd";

  TaggedData td_array[3] = { td1, td2, td3 };
  for (int i = 0; i < 3; i++) {
    printf("td%d ---->\n", i);
    printValue(&td_array[i]);
  }

  return 0;
}

void printValue(TaggedData* d) {
  switch (d->type) {
  case INT:
    printf("Integer: %d\n", d->data.i);
    break;
  case FLOAT:
    printf("Float: %f\n", d->data.f);
    break;
  case STRING:
    printf("String: %s\n", d->data.s);
    break;
  }
}
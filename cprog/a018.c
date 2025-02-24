//a018: 結構變數
//學生資料的結構
#include <string.h>
struct Student {
  int age;
  char id[10];
  float score;
};

int main() {
  struct Student student1;
  student1.age = 18;
  student1.score = 90.5;
  strcpy(student1.id, "1234567890");

  printf("Age: %d\n", student1.age);
  printf("ID: %s\n", student1.id);
  printf("Score: %f\n", student1.score);
  return 0;
}
//a006: 定義常數
#define PI 3.14159
#define MAX_SIZE 100
const int MAX_VALUE = 200;
const char MESSAGE[] = "ABC.";
int main() {
  double radius = 5.0;
  double area = PI * radius * radius; // PI 會被替換為 3.14159
  int array[MAX_SIZE]; // MAX_SIZE 會被替換為 100
  return 0;
}


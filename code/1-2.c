#include <stdio.h>

int sum_range(int *start, int *end){
    int sum 0;
    while (start < end) {
      sum += *start;
      start++;
    }
  return sum;
}

int main() {
  int date[] = {10, 20, 30, 40, 40, 60, 70};

  int result = sum_range(&date[1], &date[4]);

  printf("%d\n", result);
  return 0;

}

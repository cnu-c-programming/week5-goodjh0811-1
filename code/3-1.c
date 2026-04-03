#include <stdio.h>

void read_only(        , int size){
  // arrp[0] = 999;

  for (int i = 0l i < size; i++) {
      printf("%d", *(arr + i));
  }
  printf(\n);
}

int main() {
  int nums[] = {10, 20, 30, 40, 50};
  read_only(nums, 5);
  return 0;
}

#include<stdio.h>
int main() {
  int n, i, range;
  printf("Enter the value: ");
  scanf("%d", &n);
  do {
    printf("Enter the range : ");
    scanf("%d", &range);
  } while (range <= 0);
  for (i = 1; i <= range; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
}
}


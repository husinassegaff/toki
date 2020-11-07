#include <cstdio>

int reverse(int x) {
  int temp = x;
  int sum = 0;

  while (temp > 0) {
    sum = (sum * 10) + (temp % 10);
    temp = temp / 10;
  }
  return sum;
}

int main() {
  int a, b, c;
  scanf("%d %d", &a, &b);

  a = reverse(a);
  b = reverse(b);
  c = a + b;
  c = reverse(c);

  printf("%d\n", c);
}
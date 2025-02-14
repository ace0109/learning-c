#include <stdio.h>

int main()
{
  int a = 4;
  short b;
  double c;
  int *ptr;

  /* & 和 * 运算符实例 */
  ptr = &a; /* 'ptr' 现在包含 'a' 的地址 */
  printf("a 的值是 %d\n", a);
  printf("*ptr 是 %d\n", *ptr);
}
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "h";
  char str2[] = "w";
  int result = strcmp(str1, str2);

  printf("Result: %d\n", result);
  printf("Comparing '%s' with '%s':\n", str1, str2);
  if (result < 0) {
    printf("str1 is less than str2\n");
  } else if (result > 0) {
    printf("str1 is greater than str2\n");
  } else {
    printf("str1 is equal to str2\n");
  }
}
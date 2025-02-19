#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("Storage size for int : %zu \n", sizeof(int));
  printf("INT_MAX : %d\n", INT_MAX);  

  printf("Storage size for float : %zu \n", sizeof(float));
  printf("Minimum float positive value: %E\n", FLT_MIN );
  printf("Maximum float positive value: %E\n", FLT_MAX );
  printf("Precision value: %d\n", FLT_DIG );

  return 0;
}
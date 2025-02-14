#include <stdio.h>

// #define 预处理器

// #define LENGTH 10
// #define WIDTH 5
// #define NEWLINE '\n'

// int main() {
//   int area;  
  
//   area = LENGTH * WIDTH;
//   printf("value of area : %d", area);
//   printf("%c", NEWLINE);

//   return 0;
// }

// const 关键字

int main()
{
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   return 0;
}
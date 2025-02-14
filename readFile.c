#include <stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("./tmp/test.txt", "r");

  // char c = fgetc(fp);
  // printf("%c", c);

  // fgets
  char buff[255];
  fgets(buff, 255, (FILE *)fp);

  // 循环读取每一行，直到文件结束
  while (fgets(buff, 255, fp) != NULL)
  {
    printf("%s", buff);
  }

  printf("%s", buff);

  fclose(fp);
}
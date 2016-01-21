#include<stdio.h>
#include<unistd.h>

int main()
{
  int i;
  char wish[]="Happy Pongal";
  
  for (i = 0; wish[i] != '\0'; i++)
  {
    printf("%c",wish[i]);
    sleep(10);
  }
  return 0;
}

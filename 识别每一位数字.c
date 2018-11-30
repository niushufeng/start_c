#include "stdio.h"
/*输入数字分离各个位数*/

main(){
  int a,x1,x2,x3;
  printf("input a triple-digit number ");
  // scanf("%d", a);
  scanf("%d", &a);
  x1 = a / 100;
  x2 = a / 10 % 10;
  x3 = a % 10;
  printf("%d %d %d", x1, x2, x3);
}

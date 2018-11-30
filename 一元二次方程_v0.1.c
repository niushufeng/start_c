#include "stdio.h"
#include "math.h"

/*一元二次方程Ⅰ
时间限制: 1 Sec  内存限制: 12 MB
提交: 15  解决: 2
[提交] [状态] [讨论版] [命题人:外部导入]
题目描述

解一元二次方程ax2+bx+c=0的解。保证有解

输入

a,b,c的值。

输出

两个根X1和X2，其中X1>=X2。 结果保留两位小数。

样例输入

1 5 -2

样例输出

0.37 -5.37

提示



来源/分类*/
int main() {
  int a, b, c, delta;
  float x1, x2;
  scanf("%d %d %d", &a, &b, &c);
  delta = b*b - 4*a*c;
  if (delta >= 0) {
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    printf("%.2f %.2f", x1,x2);

  }
  else{
    printf("UNCOUNTABLE SOLUTIONS");
  }
  return 0;
}

/*
矩阵输出（一维数组）
时间限制: 1 Sec  内存限制: 128 MB
提交: 1  解决: 1
[提交] [状态] [讨论版] [命题人:外部导入]
题目描述

输入n个整数，输出由这些整数组成的n行矩阵。

输入

第一行输入一个正整数N（N<=20），表示后面要输入的整数个数。
下面依次输入N个整数。

输出

以输入的整数为基础，输出有规律的n行数据。

样例输入

5
3 6 2 5 8

样例输出

3 6 2 5 8
8 3 6 2 5
5 8 3 6 2
2 5 8 3 6
6 2 5 8 3

*/
#include "stdio.h"
int main() {
  int count,i,j;
  scanf("%d", &count);
  int a[count][count];
  for (i = 0; i < count; i++) {
    scanf("%d", &a[0][i]);
  }
  for ( i = 0; i < count; i++) {
    for ( j = 0; j < count; j++) {
      /* code */
    }
  }
  return 0;
}

// 余弦（库函数练习）
// 时间限制: 1 Sec  内存限制: 12 MB
// 提交: 14  解决: 14
// [提交] [状态] [讨论版] [命题人:外部导入]
// 题目描述
//
// 输入n的值，计算cos(x)。
//
// 输入
//
// 输入数据有多行，每行两个数，包括x和n。第一数据为x，第二个数据为n。
//
// 输出
//
// 输出cos(x)的值，保留4位小数。
//
// 样例输入
//
// 0.0 100
//
// 样例输出
//
// 1.0000
#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  float x;
  int n;
  scanf("%f %d", &x, &n);
  printf("%.4f\n", cos(x));
  return 0;
}

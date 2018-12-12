/* 冒泡法排序,由大到小v1.0*/
#include "stdio.h"

/**
 * 冒泡排序
 * @param p   要排序的字符串
 * @param len 字符串长度
 */
void bubble_sort(int *p, int len) {
  int _,i, j;
  for (i = 0; i < len-1; i++) {
    for (j = 0; j < len-1-i; j++) {
      if (*(p+j)<*(p+j+1)) {
        _ = *(p+j);*(p+j) = *(p+j+1);*(p+j+1) =_;
      }
    }
  }

}
int main() {
  int i, a[5];
  int *p = a;
  for ( i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  bubble_sort( p, 5);
  for ( i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}

/* 冒泡法排序,由大到小v1.0*/
#include "stdio.h"

int main() {
  int _,i,j, a[5];
  for ( i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5-i; j++) {
      if (a[j]<a[j+1]) {
        _ = a[j];a[j] = a[j+1];a[j+1] =_;
      }
    }
  }
  for ( i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}

#include "stdio.h"
/*
题目描述

输出100->200之间的素数的个数，以及所有的素数。

输入

无

输出

100->200之间的素数的个数，以及所有的素数。

样例输出

21
101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199
*/
int judge_prime(int x){
  int i ;
  for ( i = 2; i < x; i++) {
    if (x % i == 0) {
      return 0;
      break;
    }
    if (i == x) {
      return 1;
    }

  }
}
int main() {
	
  int i,n=0;
  for ( i = 100; i < 201; i++) {
    if (judge_prime(i)) {
      n++;
    }
}
    printf("%d\n",n);
  for ( i = 100; i < 201; i++) {
    if (judge_prime(i)) {
      printf("%d ", i);
    }
    
  }
  return 0;
}

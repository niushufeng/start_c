// 结构体是将不同数据类型组织在一起的有机整体
#include "stdio.h"
int main(int argc, char const *argv[]) {
  struct student{
    int num;
    char name[20];
    char sex;
    int age;
    float scroe;
    char addr[30];
  };
  return 0;
}

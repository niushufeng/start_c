#include"stdio.h"
#include"stdlib.h"//sizeof malloc
// #define NULL 0

// 定义数据结构体
struct data{
  int x;
  char c;
  struct data *next;//指向下一个结构体的指针
}*head;//定义了指针 head

//         x     |-->x
//         c     |   c
//         next -|   NULL
//

// 测试结构体指针
int main()
{
  struct data *p, *q;
  int i;
  p =(struct data*)malloc(sizeof(struct data));
  //  ↑              ↑      ↑
  //  ↑              ↑      返回字符串的长度
  //  ↑              向系统申请存储空间
  //  指针需要数据类型相同,进行强制类型转换
  p->x = 0;
  p->c = 'a';
  p->next = NULL;
  //          0
  //         'a'
  //         NULL
  //          ↑p

  head = p;
  //          0
  //         'a'
  //         NULL
  //          ↑p/head
  for(i=1; i<4; i++){
    q=(struct data*)malloc(sizeof(struct data));
    // 以下以第一轮为例,其他同理
    //         x     |-->x
    //         c     |   c
    //         next -|   NULL
    //         ↑ q

    scanf("%d %c", &(q->x), &(q->c));
    q->next=NULL;
    //     0        x
    //    'a'       c
    //    NULL      NULL
    //     ↑head/p    ↑ q
    p -> next = q;
    //     0      |->x
    //    'a'     |  c
    //     q -----  NULL
    //     ↑head/p    ↑ q
    p=q;
    //     0      |->x
    //    'a'     |  c
    //     q -----  NULL
    //     ↑head    ↑ q/p
  }
  p=head;//循环结束,p回到开始
  while(p !=NULL){
    printf("%d %c\n", p->x, p->c);
    p = p->next;//到下一个p
  }
}
// input
// 1 b
// 2 c
// 3 d
//
// output
// 0 a
// 1 b
// 2 c
// 3 d

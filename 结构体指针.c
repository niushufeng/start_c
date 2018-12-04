#include"stdio.h"
#include"stdlib.h"
#define NULL 0
struct data
{int x；char c；struct data *next；
}*head；
int main（）
{struct data*p，*q；int i；
p=（struct data*）malloc（sizeof（struct data））；p->x=1；p->c='a'；p->next=NULL；
head=p
；for（i=1；i<4；i++）
{q=（struct data*）malloc（sizeof（struct data））；scanf（"%d%c"，&（q->x），&（q->c））；q->next=NULL；p->next=q；p=q；}
p=head；while（p！=NULL）
{
printf（"%d%c\n"，p->x，p->c）；p=p->next；L}}

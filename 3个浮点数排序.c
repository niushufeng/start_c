#include<stdio.h>
int main()
{
  float a,b,c,_;
  //scanf("%f,%f,%f",a,b,c);
  scanf("%f,%f,%f",&a,&b,&c);
  if (a>b) {_ = a;a = b; b=_;}
  if (a > c)
  {_ = c; c = a; a = _;}
  if (b > c)
  {_ = b;b = c;c = _;}
  //printf("%f5.2 < %f5.2 <%5.2",a,b,c);
  printf("%5.2f < %5.2f <%5.2f",a,b,c);
  return 0;
}

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three distinct numbers:\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
    if(a>c)
    {
      if(b>c)
      printf("Increasing sequence is %d, %d, %d",c,b,a);
      else
      printf("Increasing sequence is %d, %d, %d",b,c,a);
    }
    else if (c>a)
      printf("Increasing sequence is %d ,%d, %d",b,a,c);
  }
  else if(b>a)
  {
    if(b>c)
    {
      if(a>c)
      printf("Increasing sequence is %d, %d, %d",c,a,b);
      else
      printf("Increasing sequence is %d, %d, %d",a,c,b);
    }
    else if (c>b)
      printf("Increasing sequence is %d, %d, %d",a,b,c);
  }
  else if(c>a)
  {
    if(c>b)
    {
      if(a>b)
      printf("Increasing sequence is %d, %d, %d",b,a,c);
      else
      printf("Increasing sequence is %d, %d, %d",a,b,c);
    }
    else if(b>c)
    printf("Increasing sequence is %d, %d, %d",a,c,b);
  }
}
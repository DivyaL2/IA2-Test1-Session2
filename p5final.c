#include<stdio.h>
int input()
{
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  return x;
}
int gcd(int a,int b)
{
    int large,small,i,rem;
    large=a>b?a:b;
    small=a<b?a:b;
    rem=1;
    i=1;
    while (rem)
    {
      rem=large-i*small;
      if(rem<small)
      {
        large=small;
        small=rem;
        i=0;
        
      }
      i++;
    }
    return large;
}    
void output(int a,int b,int large)
{
  printf("The gcd of %d and %d is %d\n",a,b,large);
}
int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=gcd(a,b);
  output(a,b,c);
  return 0;
}



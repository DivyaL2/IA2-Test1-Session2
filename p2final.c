#include<stdio.h>
int input_side(int *a,int *b,int *c)
{
  printf("enter the three sides\n");
  scanf("%d %d %d",a,b,c);
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c && c!=a)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void output(int a,int b,int c, int isscalene)
{
  if(isscalene == 1)
  {
    printf(" It is a scalene triangle\n");
  }
  else 
  {
    printf("It is not a scalene triangle\n");
  }  

}
int main()
{
  int x,y,z,scalene;
  input_side(&x,&y,&z);
  scalene=check_scalene(x,y,z);
  output(x,y,z,scalene);
  return 0;
}
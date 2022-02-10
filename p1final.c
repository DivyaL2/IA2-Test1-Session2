#include<stdio.h>
#include<math.h>
void input(float *b,float *h)
{
  printf("enter the value of base and height\n");
  scanf("%f %f",&b,&h);
}
void find_area(float b,float h,float*area)

{
   *area=(b*h)/2;
}
void output(float base,float height,float area)
{
  printf("The area of a triangle is %f",area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;

}
#include<stdio.h>
#include<math.h>
struct _triangle
{
 float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle();
{
  Triangle k;
  printf("enter the value of k\n");
  scanf("%f",&k);
  return k;
}
Triangle find_area(Triangle b,Triangle h,Triangle *t)
{
  *t=(b * h)/2;
}
void output(Triangle t)
{
  printf("The area of a triangle is %f\n",t);
}
int main()
{   
   Triangle base,altitude,area;
   base=input_triangle();
  altitude=input_triangle();
  find_area(base,altitude,&area);
  output(area);
  return 0;
  } 

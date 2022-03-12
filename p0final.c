#include<stdio.h>
#include<math.h>
struct _triangle
{
  float b,h,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle(Triangle t)
{
  
  printf("enter the base and height\n");
  scanf("%f,%f",&t.b,&t.h);
  return t;
}
void find_area(Triangle t)
{ 
   Triangle t.a;
   t.a= (t.b * t.h)/2;
  
  
}
void output(Triangle area)
{
  printf("the area of a triangle is %f",area);

}
int main()
{
  Triangle c,t;
   t. =input_triangle();
   
  c = find_area(t);
  output(c);
  return 0;
}


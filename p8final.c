#include<stdio.h>
#include<string.h>
char input_string(char *a)
{
  printf("Enter the string/n");
  scanf("%s",a);
}
char str_reverse(char str[20])
{
   char temp;
   int i, j = 0;
 
  
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) 
     {   
       temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
     }
  return str[j];
  }  
void output(char str,char reversea)
{
  printf("the reverse string of %s is %s \n",str,reversea);
}
int main()
{
  char str[20],reverse;
  input_string(str);
  reverse=str_reverse(str);
  output(str,reverse);
  
  
}

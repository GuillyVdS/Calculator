#include "stdio.h"
#include "stdlib.h"

int multiply(int x, int y)
{
  return x * y;
}

int divide(int x, int y)
{
  return x / y;
}

int add(int x, int y)
{
  return x + y;
}

int subtract(int x, int y)
{
  return x - y;
}

void printresult(int x, int y, char operation, int result)
{
  printf("%d %c %d = %d\n", x , operation, y , result);
}

int main(){
char op = 'c';
int x , y;
while(op != 'e')
{
  printf("What operation would you like to perform: add(+), subtract (-), divide(/), multiply(*), exit(e): ");
  //printf(" test");
  scanf(" %c" , &op);
  printf("Enter value 1: ");
  scanf(" %d" , &x);
  printf("Enter value 2: ");
  scanf(" %d" , &y);

  switch(op)
  {
    case '+':
      printresult(x,y,op,add(x,y));
      break;
    case '-':
      printresult(x,y,op,subtract(x,y));
      break;
    case '*':
      printresult(x,y,op,multiply(x,y));
      break;
    case '/':
      printresult(x,y,op,divide(x,y));
      break;
    case 'e':
      return 0;

  }

  /*
  switch(op)
  {
    case '+':
      scanf("%d" , &x);
      scanf("%d" , &y);
      //printf("%d + %d = %d\n", x , y , add(x,y));
      printresult(x,y,op,add(x,y));
    break;
    case '-':
      scanf("%d" , &x);
      scanf("%d" , &y);
      printf("%d - %d = %d\n", x , y , subtract(x,y));
    break;
    case '*':
      scanf("%d" , &x);
      scanf("%d" , &y);
      printf("%d * %d = %d\n", x , y , multiply(x,y));
    break;
    case '/':
      scanf("%d" , &x);
      scanf("%d" , &y);
      printf("%d / %d = %d\n", x , y , divide(x,y));
    break;
  }
  */
}

}

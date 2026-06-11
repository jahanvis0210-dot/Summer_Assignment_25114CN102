#include<stdio.h>
int max(int a, int b) 
{
    return (a > b) ? a : b;
}
int main()
{
  int x,y;
  print("Enter first number :");
  scanf("%d\n",&x);
  print("Enter second number :");
  scanf("%d\n",&y);

  printf("Maximum: %d\n", max(x, y));
  return 0;
}

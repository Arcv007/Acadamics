// write a program to find the address of 1-D array
#include<conio.h>
#include<stdio.h>

// Calculatig the address
void address(int a,int b, int c, int d)
{
    int add;
    add=a+b*(c-d);
    printf("\nAddress of element is : %d",add);
}


void main()
{
  int base,l=0,w,i;
  printf("Enter base address: ");
  scanf("%d",&base);
  printf("\nEnter size of element: ");
  scanf("%d",&w);
  printf("\nEnter index of element: ");
  scanf("%d",&i);
  printf("\nEnter the lower bound: ");
  scanf("%d",&l);
  address(base,w,i,l);
  getch();
}

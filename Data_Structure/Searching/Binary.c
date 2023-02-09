#include<conio.h>
#include<stdio.h>

int binary(int arr[], int low, int high, int x)
{
    if (high>=low)
    {
        int mid= low+(high-1)/2;    
        if (arr[mid] ==x)
            return mid;
        if(x>arr[mid])
            binary(arr,mid+1,high,x);
        if(x<arr[mid])
            binary(arr,low,mid-1,x);
    }        
    return -1;               
}

void create(int arr[], int x)
{
    printf("\nEnter the elements: ");
    for (int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    return;
}

void main()
{
  int x,test;
  int size;
  printf("\nEnter the size of element: ");
  scanf("%d",&size);
  int arr[size];
  create(arr,size);
  printf("\nEnter the target element: ");
  scanf("%d",&x);
  test=binary(arr,0,size-1,x);
  if (test>=0)
    printf("\nThe element is fount and its index is: %d",test);
  else  
    printf("\nElement not found");   
  getch();
}

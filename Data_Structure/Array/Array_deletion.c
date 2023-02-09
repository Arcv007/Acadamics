// write a program to create a array and delete an element from the given index of array
#include<conio.h>
#include<stdio.h>


// Deleting the element from the given position
void deletion(int arr[], int a)
{
    int index;
    printf("enter the index: ");
    scanf("%d",&index);
    
    for(int i=index;i<a;i++)
    {
        arr[i]=arr[i+1];
    }
    return;
}

// Display the elements of the array
void display(int arr[], int y)
{
    printf("the elements in the array are: ");
    for(int i=0;i<y;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}

// creating the array
void create(int arr[], int x)
{
    printf("Enter the elements: ");
    for (int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    return;
}

int main()
{
    int size;
    printf("enter the size of the array:  ");
    scanf("%d",&size);
    int arr[size];
    printf("\n");
    create(arr,size);
    printf("Before deletion ");
    display(arr,size);
    deletion(arr,size);
    printf("After deletion ");
    display(arr,size-1);
    return 0;
}


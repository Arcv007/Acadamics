// Write a program to create two sets and perform intersation operation
#include<conio.h>
#include<stdio.h>

// To enter the elements in the array
void insert(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    return ;
}


// Main function
void main()
{
  int n1,n2,k=0,i,j;
  printf("Enter the limit of set A and set B :");
  scanf("%d%d",&n1,&n2);

  int n3=n1+n2;
  int a[n1],b[n2],c[n3];

  printf("\nEnter the elements of the set A :");
  insert(a,n1);

  printf("\nEnter the elements of the set B :");
  insert(b,n2);

  for (i=0;i<n2;i++)
  {
    for(j=0;j<n1; j++) 
    {
        if(a[i]==b[j])
        {
          c[k]=a[i];
          k++;
        }
    }
  }

  if(k==0)
  {
    printf("\n The intersation of the sets is : { }");
  }

  else
  {
    printf("\n The intersation of the sets is :");

    for (int i=0; i<k; i++)
    {
      printf("%d ",c[i]);
    }
  }

  getch();
}

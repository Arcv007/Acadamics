// write a program to create two sets and perform union operation on sets
#include<conio.h>
#include<stdio.h>

// To insert elements in array
void insert(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}


// main body
void main()
{
  int i,j,k=0,n1,n2;
  printf("\nEnter the limit of set A: ");
  scanf("%d",&n1);
  
  printf("\nEnter the limit of set B: ");
  scanf("%d",&n2);

  int n3=n1+n2;
  int a[n1],b[n2],c[n3];
  // To insert element in set A   
  printf("\nEnter the elements in the set A");
  insert(a,n1);

  // To insert element in set B
  printf("\nEnter the elements in the set b");
  insert(b,n2);

  // To insert elements of set A in set C   
  for (i=0; i<n1; i++)
  {
    // To check element is already exist in set C  
    for (j=0; j<k; j++)
    {
        if (c[j]==a[i])
        {
            break;
        }    
    }
 
    if(j==k)
    {
        c[k]=a[i];
        k++;
    }
  }

  // To insert elements of set B in set C   
  for (i=0; i<n2; i++)
  {
    // To check element is already exist in set C  
    for (j=0; j<k; j++)
    {
        if (c[k]==b[i])
        {
            break;
        }    
    }
 
    if(j==k)
    {
        c[j]=b[i];
        k++;
    }
  }

  //To print set C
  for (i=0;i<n3;i++)
  {
    printf("%d",c[i]);
  }   

  getch();
}

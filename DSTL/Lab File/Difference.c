// write a program to perform the difference of set
#include<conio.h>
#include<stdio.h>

// function to create an array
void create(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    return;
}
void difference(int a[], int b[], int n, int m)
{
    int c[n],k=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<m;j++)
        {
            if(a[i]==b[j])
                break;
            else
            {
                c[i]==a[i];
                k++;
            }    
        }
    }
    printf("The difference is: ");
    for(int i=0; i<k; i++)
    {
        printf("%d",c[i]);
    }
    return;
}
int main()
{
  int x,y;
  printf("Enter the limit of set A");
  scanf("%d",&x);
  printf("\nEnter the limit of set B");
  scanf("%d",&y);
  int set1[x],set2[y];
  printf("Enter the element in set A");
  create(set1,x);
  printf("Enter the element in set B");
  create(set2,y);
  difference(set1,set2,x,y);
  return 0;
}
 
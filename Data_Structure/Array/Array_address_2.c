// write a program to calculate address of an element in 2-D array by row major and column major
#include<conio.h>
#include<stdio.h>

// for calculating row major
void rowmajor(int b, int w, int i, int j, int lr, int lc)
{
    int add,n;
    printf("\nEnter the number of Column: ");
    scanf("%d",&n);
    add=b+w*((i-lr)*n+(j-lc));
    printf("\n The address of the element by row major is : %d \n",add);
}

// for calculating column major
void columnmajor(int b, int w, int i, int j, int lr, int lc)
{
    int add,m;
    printf("\nEnter the number of Row: ");
    scanf("%d",&m);
    add=b+w*((i-lr)+(j-lc)*m);
    printf("\n The address of the element by co;umn major is : %d\n",add);

}


void main()
{
  int base,i,j,lr,lc,size,n;
  printf("Enter the base address of the element: ");
  scanf("%d",&base);
  printf("\nEnter the size of the element: ");
  scanf("%d",&size);
  printf("\nEnter the value of i: ");
  scanf("%d",&i);
  printf("\nEnter the value of j: ");
  scanf("%d",&j);
  printf("\nEnter the lower bound of row: ");
  scanf("%d",&lr);
  printf("\nEnter the lower bound of column: ");
  scanf("%d",&lc);
  
  for (int k=0;k<=1;k++)
  {
      printf("\n For Row major: 1");
      printf("\n For Column major: 2\n");
      scanf("%d",&n);
      switch(n)
        {
            case 1:
            {
                rowmajor(base,size,i,j,lr,lc);
                break;
            }
            case 2:
            {
                columnmajor(base,size,i,j,lr,lc);
                break;
            }
            default:
            {
                printf("invalid input");
            }
        }
  }
  getch();
}

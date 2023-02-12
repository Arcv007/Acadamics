// write a program to find the roots of a quadratic equation
#include<conio.h>
#include<stdio.h>
#include<math.h>


// for calculating the real and distinct roots of the quadratic equation 
void real(int a, int b, int c, int d)
{
    float root1,root2;
    root1=-(b-sqrt(d))/2*a;
    root2=-(b+sqrt(d))/2*a;
    printf("The roots are %.2f & %.2f\n",root1,root2);
    return;
}

// for calculating the real and distinct roots of the quadratic equation 
void imaginary(int a, int b, int c, int d)
{
    float root1;
    root1=-(b)/2*a;
    printf("The roots are %.2f+%di & %.2f-%di\n",root1, abs(d),root1, abs(d));
    return;
}

// for calculating the real and distinct roots of the quadratic equation 
void equal(int a, int b, int c, int d)
{
    float root1;
    root1=-b/2*a;
    printf("The roots are %.2f & %.2f\n",root1,root1);
    return;
}

// Main function 
void main()
{
  int a,b,c,d;
  printf("Your quadratic equation is of the form ax2+bx+c\nEnter the value of a, b and c: \n");
  scanf("%d%d%d",&a,&b,&c);
  d=b*b-4*a*c;

  if (a==0)
  {
    printf("It is not a quadratic equation\n");
  }
  else if (d>0)
  {
    printf("Roots are real and distinct\n");
    real(a,b,c,d);
  }
  else if (d<0)
  {
    printf("Roots are imaginary\n");
    imaginary(a,b,c,d);
  }
  else
  {
    printf("Roots are equal\n");
    equal(a,b,c,d);
  }
  getch();
}

/*write a program to prnt the sum of the individual digits of a number*/
#include<iostream>
using namespace std;

int main()
{
    int sum=0,num,count=0,num1,i;
    cout<<"Enter the number";
    cin>>num;
    num1=num;
    while(num1>0)
    {
        num1/=10;
        count++;
    }
    for (i=0;i<count;i++)
    {
        sum+=num%10;
        num=num/10;
    }
    cout<<"The sum of the number is "<<sum;
    return 0;
}
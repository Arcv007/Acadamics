/* #include<iostream>
using namespace std;
int main()
{
    int num,rev,x,count=0,y,num1;
    //cin>>x;
    x=123;
    num=x;
    num1=num;
    while(num>0)
    {
        num/=10;
        count++;
    }
    for(int i=0;i<count;i++)
    {
        y=num1%10;
        rev=rev*10+y;
        num1/=10;
    }
    if(rev==x)
        cout<<"tree";
    else
        cout<<"false";    
    
}
*/
#include<iostream>
using namespace std;
int main()
{
    int num,rev,x,count=0,y,num1;
    cin>>x;
    num=x;
    num1=num;
    while(num>0)
    {
        num/=10;
        count++;
    }
    for(int i=0;i<count;i++)
    {
        y=num1%10;
        rev=rev*10+y;
        num1/=10;
    }
    if(rev==x)
        cout<<"true";
    else
        cout<<"false";    
}
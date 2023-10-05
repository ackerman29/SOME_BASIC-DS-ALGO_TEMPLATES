#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0, f=0,s=1,sum1=0;
    for(int i=0;i<n;i++)
    {
        if(f%2==0)
            sum1=sum1+f;


        cout<<f<<" ";
        sum=f+s;
        f=s;
        s=sum;

         
       }
      


       // int sum1;
       // if(sum%2==0)
       // {
       //      sum1=sum1+sum;
       //      cout<<sum1;
       // }



return 0; }


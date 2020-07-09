#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,sum=0;;
    cin>>n;
    if(n<0){
    for(int i=-1;i>=n;i--)
    {
        sum=sum+i;
    }
    cout<<sum+1<<"\n";
 }
    if(n>0){
        for(int j=1;j<=n;j++)
        {
            sum=sum+j;
        }
        cout<<sum<<"\n";
    }
    if(n==0)
    {
        cout<<"1\n";
    }

  }




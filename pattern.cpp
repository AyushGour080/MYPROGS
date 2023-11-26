#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n;
    cin>>n;
      for(int i=1; i<=n ; i++)
      {
        int j=1;

        for(;j<=n-i;j++)
        cout<<" ";

        int k=i;
        for(;j<=n;j++)
        {
        cout<<k;
        k--;
        }

        int h=2;
        for(;j<=n+i-1;j++)
        {
        cout<<h;
        h++;
        }
        cout<<endl;
      }
return 0;
}
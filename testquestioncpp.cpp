// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ="AYUSHHGOUR";
    int size =s.length();
    int a[size];
    for(int i=0;i<size;i++)
    {
        a[i]=s[i];
    }
    sort(a,a+size);
   int count=1;
     for(int i=0;i<size;i++)
     {
         if(a[i]==a[i+1])
         count++;
         else
         {
             if(count>1){
             char x=a[i];
             cout<<x<<" "<<count<<endl;}
             count=1;
         }
         
     }
 
    return 0;
}
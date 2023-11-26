#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n != 0)
    {
        int temp;
        temp = n % 10;
        ans += x * temp;
        x *= 2;
        n = n / 10;
    }
    return ans;
}
int OctalToDdecimal(int n)
{
    int ans = -0;
    int x = 1;
    while (n != 0)
    {
        int temp;
        temp = n % 10;
        ans += x * temp;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int HexaDecimalTODecimal(string s)
{
    int ans = 0;
    int x = 1;
    int size = s.size();

    for (int i = size - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
        
            ans += x * (s[i] - '0');
        }
        else if (s[i]>='A' && s[i]<='F')
        {
            ans += x * (s[i] - 'A'+ 10);
        }
        x*=16;
    }
    return ans;
}

int main()
{
    string n;
    cout << "enter the number " << endl;
    cin >> n;
    // int ans =BinaryToDecimal(n);
    // cout<<ans <<endl;
    // int ans =OctalToDdecimal(n);
    // cout<<ans <<endl;
       cout<< HexaDecimalTODecimal(n)<<endl;
    return 0;
}
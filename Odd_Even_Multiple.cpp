#include<bits/stdc++.h>
using namespace std;

void multiple(int n)
{
    if (n%3!=0)
    {
        cout << "-1";
    }else if (n%3==0)
    {
        if(n%2==0)
        {
            cout << "0";
        }else
        {
            {
                cout << "1";
            }
        }
    }
}

int main()
{
    int n; cin >> n;
    multiple(n);
    return 0;
}
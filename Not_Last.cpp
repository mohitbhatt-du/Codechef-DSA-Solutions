#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n{1234},sd;
    n = n/10;
   sd = n%10;
   if(sd==7)
   {
       cout << "1" << endl;
   }else
   {
       cout << "0" << endl;
   }
    return 0;
}
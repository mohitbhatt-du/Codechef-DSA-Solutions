/**************************************************************************************************
************************************SOLUTION-BY-MOHIT**********************************************
***************************************************************************************************/
#include <bits/stdc++.h>
int main()
{
    int t; std::cin >> t;
    while(t--)
    {
       float h,cc,ts; std::cin >> h >> cc >> ts;
       if(h > 50 && cc < 0.7 && ts > 5600)
       {
           std::cout << 10 << std::endl;
       }
       else if(h > 50 && cc < 0.7)
       {
           std::cout << 9 << std::endl;
       }
       else if (cc < 0.7 && ts > 5600)
       {
           std::cout << 8 << std::endl;
       }
       else if (h > 50 && ts > 5600)
       {
           std::cout << 7 << std::endl;
       }
       else if((h>50 && cc>=0.7 && ts<=5600) || (cc<0.7 && h<=50 && ts<=5600) || (ts>5600 && h<=50 && cc>=0.7))
       {
           std::cout << 6 << std::endl;
       }
       else
       {
            std::cout << 5 << std::endl;
       }
    }
    return 0;
}
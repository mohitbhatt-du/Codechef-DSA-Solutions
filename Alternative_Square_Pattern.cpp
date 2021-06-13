#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int k = -4;
    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0)
        {
            k += 4;
            for(int j=1;j<=5;j++)
            {
                printf("%d",++k);
                printf(" ");
            }
            printf("\n");
        }
        else
        {
            k += 6;
            for(int j=1;j<=5;j++)
            {
                printf("%d",--k);
                printf(" ");
            }
            printf("\n");
        }

        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}
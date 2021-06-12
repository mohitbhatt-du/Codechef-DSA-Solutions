#include<iostream>
using namespace std;

void odd(long int n)
{
    long int odd_sum = n*n;
    cout << odd_sum;
}
void even(long int n)
{
    long int even_sum = n*(n+1);
    cout << even_sum;
}

int main(){
    long int n;
    cin >> n;
    odd(n);
    cout << " ";
    even(n);
    return 0;
}
#include<iostream>
#include<string>
#include<array>
using namespace std;

int main()
{
	// your code goes here
	string s;
	int t,m,a;
	char c;
	cin>>t;
	std::array<int,26> arr1={0},arr2={0};
	for(int j=0;j<t;j++)
	{
	    arr1={0},arr2={0};
	    cin>>s;
	    m=s.size()/2;
	    for(int i=0;i<m;i++)
	    {
	      c=s[i];
	      a=c-97;
	      arr1[a]+=1;
	    }

	    if(s.size()%2!=0)
	        m+=1;
	    for(int i=m;i<s.size();i++)
	    {
          c=s[i];
	      a=c-97;
	      arr2[a]+=1;
	    }
	    if(arr1==arr2)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}


	return 0;
}

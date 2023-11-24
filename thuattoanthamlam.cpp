#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {500,200,100,50,20,10,5,2,1};
	int n = 2200;
	int res = 0;
	for (int i = 0;i < 9;i++)
	{
		res += n / a[i];
		n %= a[i];
	}
	cout<<res<<endl;
}

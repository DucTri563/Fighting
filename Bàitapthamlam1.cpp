#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A[8] = {500,200,100,50,10,5,2,1};
	int n = 2200;
	int res = 0;
	for (int i = 0; i < 8;i++)
	{
		res += n / A[i];
		n %= A[i];
	}
	cout<<res<<endl;
}


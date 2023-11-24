#include <bits/stdc++.h>
using namespace std;
int xuly(int n, char p, char q)
{
	string N = to_string(n);
	for (int i = 0;i < N.length();i++)
	{
		if(N[i] == p) N[i] == q;
	}
	return stod(N);
}
int main()
{
	int a = 11;
	int b = 25;
	cout<<xuly(a,'5','6')<<endl;
}

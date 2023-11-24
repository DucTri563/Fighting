#include <bits/stdc++.h>
using namespace std;
int xuly(int n, char p, char q)
{
	string s = to_string(n);
	for(int i = 0;i < s.length();i++)
	{
		if(s[i] == p) s[i] = q;
		return stoi(s);
	}
}
int main()
{
	int A = 11,B = 25;
	cout<<xuly(A,'5','6') + xuly(B,'5','6');
	cout<<xuly(A,'6','5') + xuly(B,'6','5');
}

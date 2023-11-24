#include <bits/stdc++.h>
using namespace std;
string so_thanh_string(int x)
{
	string s = "";
	while(x != 0)
	{
		int du = x % 10 ;//tach
		char c = du + 48;//ki tu
		s.insert(s.begin() + 0,c);//them dau
		x = x / 10; //vut
	}
	return s; 
}
int string_thanh_so(string s)
{
	int so = 0; //ki thuat ghep
	int n = s.length();
	for(int i = 0; i < n;i++)
	{
		int x = s[i] - 48;
		so = so * 10 + x;
	}
	return so;
}
int main()
{
	int x;
	cin>>x;
	string s = so_thanh_string(x);
	cout<<s<<endl;
}

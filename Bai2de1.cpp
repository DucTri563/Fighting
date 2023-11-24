#include <bits/stdc++.h>
using namespace std;
int sum = 0;
long long n,a,b,p,q;
int main()
{
	freopen("C:\\Users\\84988\\Downloads\\THOSON.INP","r",stdin);
	freopen("C:\\Users\\84988\\Downloads\\THOSON.OUT","w",stdout);
	cin>>n>>a>>b>>q>>p;
	for(int i = 1; i <= n;i++)
	{
		if(i%a == 0 && i%b == 0) sum += max(q, p);
		else if(i%a == 0) sum += q;
		else if(i%b == 0) sum += p;
	}
	cout<< sum <<endl;
}

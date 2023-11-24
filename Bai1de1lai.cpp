#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("C:\\Users\\84988\\Desktop\\THOSON.INP","r",stdin);
	freopen("C:\\Users\\84988\\Desktop\\THOSON.OUT","w",stdout);
	int n,a,b,p,q;
	cin>>n>>a>>b>>p>>q;
	int S,x = 0,d = 0,temp = 0,s;
	for(int i = 1; i <= n; i++)
	{
		if(i % a == 0 and i % b == 0)
		{
			temp++;
		}
		if (i % a == 0)
		{
			x++;
		}
		else if(i % b == 0)
		{
			d++;
		}
	}
	if(p < q)
	{
		s = temp*q;
	}
	else 
	{
		s = temp*p;
	}
	S = (x - temp)*p + (d - temp)*q + s;
	cout<<"So tien lon nhat co the nhan la "<<S;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("C:\\Users\\84988\\Desktop\\PHONGBI.INP","r",stdin);
	freopen("C:\\Users\\84988\\Desktop\\PHONGBI.OUT","w",stdout);
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int S;
	while(n > a or n > b)
	{
		n = n / 2;
		S++;
	}
	while(m > a or m > b)
	{
		m = m / 2;
		S++;
	}
	cout<<"So lan gap it nhat co the la: "<<S;
}

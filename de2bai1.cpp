#include <bits/stdc++.h>
using namespace std;
float n,m,a,b;
int main()
{
	freopen("C:\\Users\\84988\\Desktop\\PHONGBI.INP","r",stdin);
	freopen("C:\\Users\\84988\\Desktop\\PHONGBI.OUT","w",stdout);
	cin>>n>>m>>a>>b;
	int dem = 0;
	int res = 0;
	while(n > a)
	{
		if(n < b && m < a)
		{
			break;
		}
		while(m > b)
		{
			dem++;
			m = m / 2;
		}
		dem++;
		n = n / 2;
		
	}
	
	cout<<dem<<endl;
}

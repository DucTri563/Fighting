#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("C:\\Users\\84988\\Desktop\\THAMQUAN.INP","r",stdin);
	freopen("C:\\Users\\84988\\Desktop\\THAMQUAN.OUT","w",stdout);
	int T,N,a[100],Q,n,t;
	cin>>T>>N;
	for(int i = 1;i <= N;i++)
	{
		cin>>a[i];
	}
	int min = 0;
	for(int i = 0; i < N;i++)
	{
		while (Q < T)
		{
			if(min > a[i])
			{
				min = a[i];
				a[i] = a[i] - a[i];
				Q = Q + a[i];
			}
		}
	}
	cout<<Q<<endl;
	
}

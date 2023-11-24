#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long f[N];
int n,t,m = 2019;
void qhd()
{
	memset(f,0,sizeof(f));
	f[1] = 1;
	f[2] = 2;
	for(int i = 3; i <= n;i++)
	{
		f[i] = f[i-1] % m + f[i-2] % m;
	}
}
int main()
{
	freopen("C:\\Users\\84988\\Desktop\\LATGACH.INP","r",stdin);
	freopen("C:\\Users\\84988\\Desktop\\LATGACH.OUT","w",stdout);
	cin>>t;
	while(t--){
		cin>>n;
		qhd();
		cout<<f[n]%m<<endl;
	}
	return 0;
}


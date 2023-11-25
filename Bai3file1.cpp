#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100],b[100],c[100];
	cin>>n;
	for(int i = 1 ;i < n;i++)
	{
		cin>>a[i]<<endl;
	}
	for(int i = 2 ;i < n;i++)
	{
		cin>>b[i]<<endl;
	}
	for(int i = 3 ;i < n;i++)
	{
		cin>>c[i]<<endl;
	}
	float t;
	for (int i = 1; i < n;i++)
	{
		for(int j = 2; j < n; j++)
		{
			for (int z = 3; z < n; z++)
			{
				t = t + a[i] + (b[j] / c[z]);
				max = t;
			}
		}
		if(max < t)
		{
			max  = t;
			res++;
		}
	}
	cout<<"So cac xe ve dich truoc nhat la : "<<res<<endl;
}

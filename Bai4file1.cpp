#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100],b[100];
	for(int i = 1; i <= 7;i++)
	{
		cout<<"Nhap gio den: "<<endl;
		cin>>a[i]<<endl;
	}
	for(int i = 1; i <= 7;i++)
	{
		cout<<"Nhap gio di: "<<endl;
		cin>>b[i]<<endl;
	}
	int n,i = 1,res = 0;
	cout<<"Nhap so gio can thong ke: ";cin>>n;
	for(int j = 1; j <= 7;j++)
	{
		while(a[i] <= b[j])
		{
			i++;
			if(a[i] == n)
			{
				res++;
				break;
			}
		}
	}
	cout<<"Tong so xe dang dau tai ben"<<n<< "h la "<<res<<endl;
	int i = 1, max,dem = 0;
	for(int z = 1; z <= 24;z++)
	{
		for(int j = 1; j <= 7;j++)
		{
			while(a[i] <= b[j])
			{
				i++;
				if(a[i] == n)
				{
					dem++;
					max = dem;
					if(max < dem)
					{
						max = dem;
			
					}
					cout<<"Xe tap trung dong nhat là luc: "<<a[i]<<endl;
					break;
				}
			}
		}
		
	}
	
	
}

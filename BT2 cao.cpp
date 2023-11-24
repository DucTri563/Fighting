#include <iostream>
using namespace std;
int n,a[100000];
int c[100000],l[100000];
void nhap()
{
	cout<<"Nhâp so phan tu cua mang a:";cin>>n;
	for(int i = 0;i < n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void sx_nguyen(int c[])
{
	for(int i = 0;i < n - 1;i++)
	{
		for(int j = i + 1;j < n;j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
void sx_le(int l[])
{
	for(int i = n;i >= 0;i--)
	{
		for(int j = n - 1;j > 0;j--)
		{
			if(a[i] > a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
int main()
{
	nhap();
	int S =0;int T= 0;
	
	for(int i =0; i < n;i++)
	{
		if(a[i]%2==0)
		{
			c[S] == a[i];
			S++;
		}
		else
		{
			l[T] == a[i];
			T++;
		}
	}
	sx_nguyen(c);
	sx_le(l);
	for(int i =0;i < S;i++)
	{
		cout<<c[i]<<" ";
	}
	for(int i = 0;i < T;i++)
	{
		cout<<l[i]<<" ";
	}
}

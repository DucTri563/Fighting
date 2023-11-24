#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x; 
	cout<<"Nhap so nguyen duong can tinh: ";cin>>x;
	if(x <= 0)
	{
		cout<<"INVALID! "<<endl;
	}
	else 
	{
		int sum = 0;
		for(int i = x; i > 0;i /= 10)
		{
			sum = sum + i %10;
	 	}
	 	cout<<sum<<endl;
	}
}

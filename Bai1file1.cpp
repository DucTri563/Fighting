#include <bits/stdc++.h>
using namespace std;
string so_thanh_string(int x)
{
	string s = "";
	while (x != 0)
	{
		int du = x % 10;
		char c = du + 48;
		s.insert(s.begin() + 0,c);
		x = x /10;
	}
}
int main()
{
	freopen("C:\\Users\\84988\\Desktop\\NEAR.INP","r",stdin);
	freopen("C:\\Users\\84988\\Desktop\\NEAR.OUT","w",stdout);
	int N,c;
	cin>>N>>c;
	for(int i = N;i >= N;i++)
	{
		string b = so_thanh_string(i);
		for(int j = 0; j < b.length(); j++)
		{
			if(c = b[j])
			{
				int k = i;
				cout<<k<<endl;
				break;
			}
		}
	}

	return 0;
}

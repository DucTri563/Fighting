#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("C:\\Users\\84988\\Desktop\\LAMGIAU.INP","r",stdin);
	freopen("C:\\Users\\84988\\Desktop\\LAMGIAU.OUT","w",stdout);
	int n,m,a[100][100],min,S;
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1; j <= m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	int res = 0;
	
	int canh = 3;
	for(int i = 1;i <= n-2;i++)
	{
//			min = a[1][1] + a[1][2] + a[1][3] +a[2][1] + a[2][2] + a[2][3] + a[3][1] + a[3][2] + a[3][3];
//			S = a[i][j] + a[i][j+1] + a[i][j+2] +a[i+1][j] +a[i+1][j+1] + a[i+1][j+2] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
//			if(S < min)
//			{
//				min = S;
//			}
		
		for (int j = 1; j < canh; j++)
			res += a[i][i] + a[i][i + 1] + a[i][i+2]
	}
	cout<<"Tong tru luong quang nho nhat can de lai la: "<<S;
}

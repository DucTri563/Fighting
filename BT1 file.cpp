#include <iostream>
using namespace std;
#include <fstream>
int main()
{
	ifstream Filein;
	Filein.open("C:\\Users\\84988\\Desktop\\songuyen.txt",ios_base::in);
	int a[100000],n;
	int x,Sum = 0;
	Filein >> n;
	for(int i = 0;i < n; i++)
	{
		Filein >> a[i];
		Sum += a[i];
	}
	ofstream Fileout;
	Fileout.open("C:\\Users\\84988\\Desktop\\ketqua.txt",ios_base::out);
	Fileout<<"Tong cac so nguyen là: ";
	Fileout<<Sum;
	Fileout.close();
	Filein.close();
}

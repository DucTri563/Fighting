#include <iostream>
using namespace std;
#include <fstream>
bool kt_snt(int x)
{
	if(x < 2)
	{
		return false;
	}
	else if(x = 2)
	{
		return true;
	}
	else if(x > 2)
	{
		if(x%2==0)
		{
			return false;
		}
		else
		{
			for(int i = 2; i < x; i++)
			{
				if(x%i==0)
				{
					return false;
				}
			}
		}
	}
	return true;
}
int main()
{
	ifstream FileIn;
	FileIn.open("C:\\Users\\84988\\Desktop\\INPUT.txt",ios_base::in);
	if(FileIn.fail() == true)
	{
		cout<<"File khong ton tai!";
		return 0;
	}
	int n;
	FileIn >> n;
	}
	ofstream FileOut;
	FileOut.open("C:\\Users\\84988\\Desktop\\OUTPUT.txt",ios_base::out);
	if(kt_snt(n) == true)
	{
		FileOut<<n;
	}
	fileout.close();
	filein.close();
	return 0;
}

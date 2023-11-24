// Cho t?p dulieu.txt g?m các s? nguyên, m?i s? trên 1 dòng. Vi?t chuong trình tìm giá tr? nh? nh?t, l?n nh?t trong t?p. Ghi k?t qu? vào t?p minmax.txt
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream Filein;
    Filein.open("C:\\Users\\84988\\Desktop\\dulieu.txt",ios_base::in);
    int x,a[100];
    Filein>>x;
    for(int i = 0; i < x; i++)
    {
        Filein >> a[i];
    }
    ofstream Fileout;
    Fileout.open("minmax.txt",ios_base::out);
    int min,max;
    for (int i = 0 ; i < x; i++)
    {
        max = a[0];
        if(max < a[i])
        {
            max = a[i];
        }
    }
    Fileout<<"Giá tr? l?n nh?t là: "<<max<<endl;
    for (int i = 0 ; i < x; i++)
    {
        min = a[0];
        if(min > a[i])
        {
            min = a[i];
        }
    }
    Fileout<<"Giá tr? nh? nh?t là: "<<min<<endl;
    Filein.close();
    Fileout.close();

    return 0;
}


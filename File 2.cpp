// Cho t?p dulieu.txt g?m c�c s? nguy�n, m?i s? tr�n 1 d�ng. Vi?t chuong tr�nh t�m gi� tr? nh? nh?t, l?n nh?t trong t?p. Ghi k?t qu? v�o t?p minmax.txt
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
    Fileout<<"Gi� tr? l?n nh?t l�: "<<max<<endl;
    for (int i = 0 ; i < x; i++)
    {
        min = a[0];
        if(min > a[i])
        {
            min = a[i];
        }
    }
    Fileout<<"Gi� tr? nh? nh?t l�: "<<min<<endl;
    Filein.close();
    Fileout.close();

    return 0;
}


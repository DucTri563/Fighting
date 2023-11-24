#include <iostream>

using namespace std;
int snt(int x)
{
    if(x < 2)
    {
        return 0;
    }
    for(int i = 2;i < x; i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Nh?p giá tr? t?i da c?n hi?n th? :";cin>>n;
    cout<<"Các s? nguyên t? bé hon "<<n<<" là: ";
    for(int i = 1;i < n;i++)
    {
        if(snt(i) == 1)
            cout<<i<<" ";
    }

    return 0;
}


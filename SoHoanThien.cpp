#include <iostream>

using namespace std;
int sht(int x)
{
    int S = 0;
    for(int i = 1;i < x;i++)
    {
        if(x % i == 0)
        {
            S = S + i;
        }
    }
    if(S == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Nh?p giá tr? t?i da c?n hi?n th?: ";cin>>n;
    cout<<"Các s? hoàn thi?n bé hon "<<n<<" là: ";
    for(int i = 1;i < n;i++)
    {
        if(sht(i) == 1)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}


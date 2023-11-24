#include <iostream>
using namespace std;
int a[1000],L[1000],n;
void nhap()
{
    cout<<"Nhập số phần tử của mảng: ";cin>>n;
    for(int i = 0;i < n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
int main()
{
    nhap();
    int result = 1;
    for (int i = 0;i < n;i++)
    {
        L[i] = 0;
        for(int j =0 ;j < i;j++)
        {
            if(a[i] > a[j])
            {
                L[i]=max(L[i],L[j] + 1); 
            }
        }
        result = max(result,L[i]);
    }
}
#include <iostream>
using namespace std;
int a[100],n;
void nhap()
{
    cout<<"Nh?p s? ph?n t? c?a m?ng: ";cin>>n;
    for(int i =0 ; i <n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
void insertionSort()
{
    int i,j;
    for(i = 1; i < n ;i++)
    {
        for(j = 0;j < i;j++)
        {
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
}
int main()
{
    nhap();
    insertionSort();
    for(int i = 0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

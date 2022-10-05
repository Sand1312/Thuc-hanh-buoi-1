#include<iostream>
using namespace std;
signed main(){
    int a[10];
    for (int i=0;i<10;i++) {
        cout<<"Nhap gia tri thu "<<i<<": ";
        cin>>a[i];
    }
    for (int i=0;i<10;i++)
        for (int j=i;j<10;j++) if (a[i]>a[j]) swap(a[i],a[j]);
    for (int i=0;i<10;i++) cout<<a[i]<<" \n"[i==9];    
}

#include "iostream"
using namespace std;
long long tong_le(int a[],int length){
    long long res{};
    for (int i=0;i<length;i++) res+= (a[i]%2==0) ? 0:a[i];
    return res;
}
int32_t main(){
    int a[10];
    for (int i=0;i<10;i++) {
        cout<<"nhap gia tri phan tu thu "<<i<<"=";cin>>a[i];
    }
    cout<<"tong cac so le co trong mang tren = "<<tong_le(a,10);
}

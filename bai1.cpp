#include "iostream"
int32_t main(){
    int a,b,c;
    std::cout<<"nhap gia tri so thu 1=";std::cin>>a;
    std::cout<<"nhap gia tri so thu 2=";std::cin>>b;
    std::cout<<"nhap gia tri so thu 3=";std::cin>>c;
    double res=static_cast<double>(a+b+c)/3;
    a=(a>b)?a:b; c=(c>a)?c:a;
    std::cout<<"gia tri lon nhat cua 3 so vua nhap la "<<c<<"\n";
    std::cout<<"gia tri trung binh cua 3 so vua nhap la "<<res;
}

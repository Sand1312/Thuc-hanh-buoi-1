#include "iostream"
int32_t main(){
    std::cout<<"hay nhap vao mot chuoi: ";std::string s;std::cin>>s;
    int res{};
    for (int i=0;i<s.length()-1;i++) res+=(s[i]=='i'&&s[i+1]=='t') ? 1:0;
    std::cout<<"so chuoi con it co trong chuoi tren la: "<<res;
}

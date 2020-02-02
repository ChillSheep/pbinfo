#include <bits/stdc++.h>
int main(){
    int a,b,c,x;
    std::cin>>a>>b>>c;
    x=(a+b+c)*100/3;
    std::cout<<x/100<<"."<<x%100;
    if(x%100%10==0)
        std::cout<<0;
}

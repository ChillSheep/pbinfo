#include <bits/stdc++.h>

int main(){
    int h,m,x;
    std::cin>>h>>m>>x;
    m+=x;
    h+=m/60;
    m%=60;
    h%=24;
    std::cout<<h<<' '<< m;
    return 0;
}

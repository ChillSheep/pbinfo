#include <bits/stdc++.h>

int main()
{
    int a,b,c,maxim;
    std::cin>>a>>b>>c;
    maxim = a%10+a/10;
    if(b%10+b/10 > maxim)
        maxim = b%10+b/10;
    if(c%10+c/10 > maxim)
        maxim = c%10+c/10;
    if(maxim == a/10 + a%10)
        std::cout<<a<<' ';
    if (maxim == b/10 + b%10)
        std::cout<<b<<' ';
    if (maxim == c/10 + c%10)
        std::cout<<c<<' ';
    return 0;
}

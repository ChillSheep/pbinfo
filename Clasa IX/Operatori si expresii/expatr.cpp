#include <bits/stdc++.h>

int main()
{
    short x;
    std::cin>>x;
    x=3*(x*x+x*x*x*x)/(x*x+x*x*x*x+sqrt(x*x+x*x*x*x))+sqrt(x*x+x*x*x*x);
    std::cout<<x;
    return 0;
}

#include<iostream>

int main()
{
    int x,y,n;
    std::cin>>x>>y>>n;
    int a=n/(x*y);
    int z=(n-a*(x*y))/y;
    int h=n-a*(x*y)-z*y;
    std::cout<<a<<'\n'<<z<<'\n'<<h;

    return 0;
}

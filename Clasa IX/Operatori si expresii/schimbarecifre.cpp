#include <bits/stdc++.h>

int main()
{
    //100<=nr<=999
    int nr;
    std::cin>>nr;
    nr=nr/10%10+(nr%10)*10;
    std::cout<<nr*nr;
    return 0;
}

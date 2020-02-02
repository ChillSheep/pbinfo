#include <bits/stdc++.h>

int main()
{
    //100<=nr<=999
    int nr;
    std::cin>>nr;
    std::cout<<(nr%10)+(nr/10%10)+nr/100;
    return 0;
}

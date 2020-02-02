#include <bits/stdc++.h>
int main()
{
    double lungime,arie,raza;
    std::cin>>raza;
    double pi=3.14159265358979323846; //pi = atan(1) * 4;
    lungime=2*pi*raza;
    arie=pi*raza*raza;
    std::cout<<std::setprecision(32)<<arie<<' '<<lungime;
    return 0;
}

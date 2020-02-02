#include <bits/stdc++.h>

int main()
{
    int L,l,perimetru,arie,patratDiagonala;
    std::cin>>L>>l;
    perimetru=2*(L+l);
    arie=L*l;
    patratDiagonala=L*L+l*l;
    std::cout<<perimetru<<' '<<arie<<' '<<patratDiagonala;
    return 0;
}

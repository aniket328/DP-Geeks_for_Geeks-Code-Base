#include <iostream>

using namespace std;

int BinomialCoeff(int n, int k)
{
    if(k==0 || n==k) return 1;
    else return BinomialCoeff(n-1,k-1)+BinomialCoeff(n-1,k);
}
int main()
{
    int n,k;
    while(1)
    {
      cin>>n>>k;
      cout<<"Binomial Coeff of" << k <<"in x^"<<n<<"is: "<<BinomialCoeff(n,k)<<endl;
    }
    return 0;
}

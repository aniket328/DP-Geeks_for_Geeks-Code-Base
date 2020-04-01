#include <iostream>
#define R 3
#define C 3
using namespace std;
int minCost(int cost[R][C], int m, int n)
{
    if(m==0 && n ==0) return cost[0][0];
    if(m==0 && n!=0) return minCost(cost,m,n-1)+cost[m][n];
    if(n==0 && m!=0) return minCost(cost,m-1,n)+cost[m][n];
    return min(minCost(cost, m-1,n-1),min(minCost(cost,m-1,n), minCost(cost,m,n-1)))+cost[m][n];
}
int main()
{
    int cost[R][C] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
    cout<<minCost(cost,2,2)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

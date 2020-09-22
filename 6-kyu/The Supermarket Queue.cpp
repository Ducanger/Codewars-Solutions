#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std; 

int main()
{
    int n;
    cin>>n;
    int res=n;
    for (int i=2; i<=sqrt(n); i++)
    for (int j=i; j<=n/i; j++)
    if (i*j<=n) res++;
    cout<<res;
    return 0;
}

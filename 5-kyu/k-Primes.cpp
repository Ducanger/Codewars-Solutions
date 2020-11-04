#include <bits/stdc++.h>
using namespace std;

class KPrimes
{
public:
    static std::vector<long long> countKprimes(int k, long long start, long long end);
    static int puzzle(int s);
};

bool solve (long long n, int k)
{
    int res = 0;
    for (int i = 2; i*i <= n; i++)
    {
        int d = 0;
        while(n % i == 0)
        {
            d++;
            n /= i;
        }
        res += d;
        if (res>k) return false;
    }
    if (n>1) res++;
    if (res == k) return true;
    return false;
}

vector<long long> KPrimes::countKprimes(int k, long long start, long long end)
{
    vector<long long> res;
    for (int i=start; i <= end; i++)
    if (solve(i,k)) res.push_back(i);
    return res; 
}

int KPrimes::puzzle(int s)
{
    vector<long long> v1 = countKprimes(1,2,s);
    vector<long long> v3 = countKprimes(3,8,s);
    int res = 0;
  
    for (int i=0; i<v1.size(); i++)
    for (int j=0; j<v3.size(); j++)
    if (v1[i]+v3[j]<s && solve(s-v1[i]-v3[j],7)) res++;
   
    return res;
}

#include <bits/stdc++.h>

using namespace std;

class Dioph
{
  public:
  static std::vector<std::pair <long, long>> solEquaStr(long long n);
};

vector<pair <long, long>> Dioph::solEquaStr(long long n)
{
    vector<pair <long, long>> res;
    pair <long, long> p;
  
    for (int i = 1; i <= trunc(sqrt(n)); i++)
    if (n % i == 0)
    {
        long long j = n/i;
      
        long long x = 0;
        if ((i+j) % 2 == 0) x = (i+j)/2;
      
        long long y = 0;
        if ((j-i) % 4 == 0) y = (j-i)/4;
      
        if (x != 0 && y != 0) 
        {
            p = make_pair(x,y);
            res.push_back(p);
        }
    }
    return res;
}

#include <math.h>
#include <queue>

using namespace std;

class GapInPrimes
{
public:
    static pair <long long, long long> gap(int g, long long m, long long n);
};

bool isPrime (long long n)
{
    if (n < 2) return false;
    for (int i = 2; i <= trunc(sqrt(n)); i++)
    if (n % i == 0) return false;
    return true;
}

pair <long long, long long> GapInPrimes::gap(int g, long long m, long long n)
{
    pair <long long, long long> res;
    queue <long long> q; 
    for (int i = m; i <= n; i++)
    if (isPrime(i))
    {
        q.push(i);
        if (q.size() == 2) 
        {
            if (q.back() - q.front() == g) 
            {
                res = make_pair(q.front(), q.back());
                return res;
            }
            else q.pop();
        }        
    } 
    res = make_pair(0,0);
    return res;  
}

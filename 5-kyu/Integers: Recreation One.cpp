#include <utility>
#include <vector>
#include <math.h>

using namespace std;

class SumSquaredDivisors
{
public:
    static vector<pair<long long, long long>> listSquared(long long m, long long n);
};

long long check(long long n)
{
    long long sum=0;
    for ( int i = 1; i*i <= n; i++ ) 
    if ( n % i == 0 ) sum += i*i + (n/i)*(n/i);
    if ( sqrt(n) == trunc(sqrt(n)) ) sum -= n;
    if ( sqrt(sum) == trunc(sqrt(sum)) ) return sum;
    return -1;
}

vector<pair<long long, long long>> SumSquaredDivisors::listSquared(long long m, long long n)
{
    vector<pair<long long, long long>> res;
    for ( int i = m; i < n; i++ )
    {
        int k = check(i);
        if ( k != -1 ) res.push_back(make_pair(i, k));
    }
    return res;
}

#include <math.h>

using namespace std; 

class Fracts
{
    public:static string convertFrac(vector<vector<unsigned long long>> &lst);
};

long long LCM(long long a, long long b)
{
    long long gcd = __gcd(a,b);
    return a/gcd*b;
}

string Fracts::convertFrac(vector<vector<unsigned long long>> &lst)
{
    long long D = LCM(lst[0][1], lst[1][1]);
    for (int i = 2; i < lst.size(); i++) D = LCM(D, lst[i][1]);
    string res = "";
    for (int i = 0; i < lst.size(); i++) res += '(' + to_string(D/lst[i][1]*lst[i][0]) + ',' + to_string(D) + ')';
    return res;
}

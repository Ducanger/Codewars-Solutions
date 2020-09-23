#include <vector>

using namespace std;

typedef unsigned long long ull;
class ProdFib
{
    public:static vector<ull> productFib(ull prod);
};

vector<ull> ProdFib::productFib(ull prod)
{
    ull f[1000];
    f[0] = 0; f[1] = 1;
    for ( int i = 2; i < 1000; i++) 
    {  
        f[i] = f[i-1] + f[i-2];
        if ( f[i]*f[i-1] == prod ) return {f[i-1],f[i],1};
        if ( f[i]*f[i-1] > prod ) return {f[i-1],f[i],0};
    }
}

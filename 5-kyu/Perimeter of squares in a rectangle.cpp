
typedef unsigned long long ull;
class SumFct
{
  public:static ull perimeter(int n);
};

ull SumFct::perimeter(int n)
{
    ull f[1000] = {};
    f[0] = 1; f[1] = 1;
    ull sum = 2;
    for ( int i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
        sum += f[i];
    }
    return sum*4;
}

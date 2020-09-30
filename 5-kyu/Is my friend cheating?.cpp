using namespace std;

class RemovedNumbers
{
public:
  static vector<vector<long long>> removNb(long long n);
};

vector<vector<long long>> RemovedNumbers::removNb(long long n)
{
    vector<vector<long long>> res;
    long long sum = (n + 1)*n/2;
    for (int i = 1; i <= n; i++)
    if ( (sum - i) % (i+1) == 0 ) 
    {
        long long b = (sum - i) / (i+1);
        if (b <=n ) res.push_back({i,b});
    }
    return res;
}

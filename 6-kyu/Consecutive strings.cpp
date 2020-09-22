#include <string>
#include <vector>

using namespace std;

class LongestConsec
{
public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k);
};

string LongestConsec::longestConsec(vector <string> &strarr, int k)
{
    if ( strarr.size() == 0 || k > strarr.size() || k <= 0 ) return "";
    int max=0;
    for ( int i = 0; i < k; i++ ) max += strarr[i].length();
    int sum=max;
    string res = "";
    for ( int i = 0; i < k; i++ ) res += strarr[i];
    for ( int i = 1; i < strarr.size() - k + 1; i++ )
    {
        sum -= strarr[i-1].length();
        sum += strarr[i+k-1].length();
        if ( max < sum )
        {
            max=sum;
            res = "";
            for ( int j = i; j < k + i; j++ ) res += strarr[j];
        }
    }
    return res;
}

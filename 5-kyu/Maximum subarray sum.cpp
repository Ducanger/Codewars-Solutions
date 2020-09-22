#include <vector>

using namespace std;

int maxSequence(const vector<int>& arr){
    if ( arr.size() == 0 ) return 0;
    int sum = 0;
    int res = 0;
    for ( int i = 0; i < arr.size(); i++ )
    {
        sum += arr[i];
        if ( sum < 0 ) sum = 0;
        res = max(res, sum);
    }
    return res;
}

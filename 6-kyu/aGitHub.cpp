// Two Sum
// https://www.codewars.com/kata/52c31f8e6605bcc646000082

using namespace std;

pair<size_t, size_t> two_sum(const vector<int>& numbers, int target) 
{
    unordered_map <int, int> hash;
    pair <size_t, size_t> res;
    for ( int i = 0; i < numbers.size(); i++ )
    {
        int n = target - numbers[i];
        if ( hash.find(n) != hash.end() )
        {
            res = make_pair( hash[n], i );
            return res;
        }
        hash[numbers[i]] = i;
    }
    return res;
}
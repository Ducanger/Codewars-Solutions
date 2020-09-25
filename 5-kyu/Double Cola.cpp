#include <vector>

using namespace std;

string who_is_next(const vector<string>& names, long long r) {
    string s[names.size() + 1];
    int k = names.size();
    int d = 1;
  
    for (int i = 0; i < names.size(); i++) s[i+1] = names[i];
    while ( r > k )
    {
        r -= k;
        k *= 2;
        d *= 2;
    }
  
    if (r % d != 0) return s[r/d + 1];
    else return s[r/d]; 
}

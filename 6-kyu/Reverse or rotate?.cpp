// Reverse or rotate?
// https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991

#include <string>

using namespace std;

class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz);
};

string reserveString (string s)
{
    string x = "";
    for ( int i = s.length() - 1; i >= 0; i--) x += s[i];
    return x;
}

string RevRot::revRot(const string &strng, unsigned int sz)
{
    if ( sz <= 0 || strng == "" || sz > strng.length() ) return "";
    string res = "";
    string s = strng;
    int len = s.length();
    for ( int i=0; i <= len-sz; i += sz )
    {
        int sum = 0;
        string x = "";
        for ( int j = i; j < i + sz; j++) 
        { 
            sum += s[j] - '0';
            x += s[j];
        }
        if ( sum % 2 == 0 ) res += reserveString(x);
        else
        {
            x += x[0];
            x.erase(0,1);
            res += x;
        } 
    }
    return res;
}

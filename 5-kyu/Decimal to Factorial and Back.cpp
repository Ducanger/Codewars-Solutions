#include <bits/stdc++.h>

using namespace std;

class Dec2Fact
{
public:
  static std::string dec2FactString(long long nb);
  static long long factString2Dec(const std::string &str);
};

string Dec2Fact::dec2FactString(long long nb)
{
    long long f = 1;
    int k = 1;
    for (int i = 2; i < 100; i++)
    {
        f *= i;
        if (f*(i+1) > nb)   
        {
            k = i;
            break;
        }
    }
    string res = "";
    for (int i = k; i >= 1; i--)
    {
        int x = nb/f;
        if (x > 0 && x <= 9) 
        {
            res += to_string(x);
            nb -= f*x;
        }
        else if (x > 9) 
        {
            res += char(x+55);
            nb -= f*x;
        }
        else res += '0';
        f /= i;
    }
    res += '0';
    return res;
}


long long Dec2Fact::factString2Dec(const std::string &str)
{
    int len = str.length();
    long long f = 1;
    for (int i = 2; i < len; i++) f *= i;
    int k = len - 1;
    long long res = 0; 
    for (int i = 0; i < len-1; i++)
    {
        res += (str[i] - 48) * f;
        f /= k--;
    }
    return res;     
}

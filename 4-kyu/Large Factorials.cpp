#include <bits/stdc++.h> 

using namespace std;

string multiply(string a, string b) {
    string x = a;
    string y = b;
    string res = "";
    if (x.find('.') != -1) 
    while ( x[x.length() - 1] == '0' ) x.erase(x.length()-1, 1);
    if (y.find('.') != -1) 
    while ( y[y.length() - 1] == '0' ) y.erase(y.length()-1, 1);
    int d1 = 0;
    int d2 = 0;
    if (x.find('.') != -1) 
    {
        d1 = x.length() - x.find('.') - 1;
        x.erase(x.find('.'), 1);
    }
    if (y.find('.') != -1) 
    {
        d2 = y.length() - y.find('.') - 1;
        y.erase(y.find('.'), 1);
    }
    int d = 0;
    if (x[0] == '-') {d++; x.erase(0,1);}
    if (y[0] == '-') {d++; y.erase(0,1);}
    int n = x.length();
    int m = y.length();
    int len = n + m - 1;
    int carry = 0;
    for(int i = len; i >= 0; i--)
    {
        int s = 0;
        for(int j = n-1; j >= 0; j--)
        if(i-j <= m && i-j >= 1)
        {
            int a1 = x[j] - 48;
            int b1 = y[i-j-1] - 48;
            s += a1*b1;
        }
        s += carry;
        carry = s/10;
        res = (char)(s%10 + 48) + res;
    }
    string c = ".";
    while(res.length() > 1 && res[0] == '0') res.erase(0,1);
    if (d1 + d2 > 0 && res.length() > d1 + d2) res.insert(res.length() - d1 - d2, c);
    if (res.length() == 1 && res[0] == '0') return "0";
    if (d%2 == 1) res = '-' + res;
    return res;
}

string factorial(int factorial){
    string res = "1";
    for (int i = 2; i <= factorial; i++) res = multiply(res, to_string(i));
    return res;
}

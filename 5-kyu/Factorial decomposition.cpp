#include <bits/stdc++.h>

using namespace std;

bool isPrime (int n)
{   
    if (n < 2) return false;
    for (int i = 2; i <= trunc(sqrt(n)); i++)
    if (n % i == 0) return false;
    return true;
}

string decomp(int n)
{
    string res = "";
    for (int i = 2; i <= n; i++)
    if (isPrime(i)) 
    {
        int m = n;    
        int count = 0;
        while (m >= i)
        {
            count += m/i;
            m /= i;
        }
        if (count > 1) res += " * " + to_string(i) + '^' + to_string(count);
        else if (count == 1) res += " * " + to_string(i);
    }
    res.erase(0,3);
    return res;
}

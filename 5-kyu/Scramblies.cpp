#include <bits/stdc++.h> 

using namespace std;

bool scramble(const string& s1, const string& s2)
{
    int d1[130], d2[130];
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
    for ( int i = 0; i < s1.length(); i++ ) d1[ (int) s1[i] ]++;
    for ( int i = 0; i < s2.length(); i++ ) d2[ (int) s2[i] ]++;
    for ( int i = 0; i < s2.length(); i++ )
    if ( d2[ (int) s2[i] ] > d1[ (int) s2[i] ] ) return false;
    return true;
}

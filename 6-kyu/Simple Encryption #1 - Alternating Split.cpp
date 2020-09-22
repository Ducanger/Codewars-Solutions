// Simple Encryption #1 - Alternating Split
// https://www.codewars.com/kata/57814d79a56c88e3e0000786

using namespace std;

string encrypt(string text, int n)
{
    if ( text == "" ) return "";
    if ( n <= 0 ) return text;
    string s = text;
    int len = s.length();
    for ( int i = 0; i < n; i++ )
    {
        string l = "", r = "";
        for ( int j = 0; j < len; j++ )
        if ( j % 2 == 1 ) l += s[j]; 
        else r += s[j]; 
        s = l;
        s += r;
    }
    return s;
}

string decrypt(string encryptedText, int n)
{
    if ( encryptedText == "" ) return "";
    if ( n <= 0 ) return encryptedText;
    string s = encryptedText;
    int len = s.length();
    int x = len / 2;
    for ( int i = 0; i < n; i++ )
    {
        string str = "";
        for ( int j = x; j < len; j++ )
        {
            str += s[j];
            if ( j - x < x ) str += s[j-x];
        } 
        s = str;
    }
    return s;
}

#include <stack>

using namespace std;

bool valid_braces(string braces) 
{
    string s=braces;
    stack <char> st;
    for ( int i = 0; i < s.length(); i++)
    if ( s[i] == '(' || s[i] == '[' || s[i] == '{' ) st.push(s[i]);
    else 
    {
        string x="";
        if (!st.empty()) x+=st.top(); x+=s[i];
        if ( x == "()" || x == "[]" || x == "{}" ) st.pop(); 
        else return false;
    }
    return true;
}

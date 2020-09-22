using namespace std;

string rot13(string msg)
{
    string s = msg; 
    for ( int i = 0; i < s.length(); i++)
    if ( (s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M') ) s[i] = s[i] + 13;
    else  if ( (s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z') ) s[i] = s[i] - 13;
    return s;
}

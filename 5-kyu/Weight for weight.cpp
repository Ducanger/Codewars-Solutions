using namespace std;

class WeightSort
{
public:
    static string orderWeight(const string &strng);
};

int weight(string s)
{
    int w = 0;
    for ( int i = 0; i < s.length(); i++ ) w += s[i] - '0';
    return w;
}

string WeightSort::orderWeight(const string &strng)
{
    vector <string> s;
    string temp = "";
    string str=strng;
    str += ' ';       

    for ( int i = 0; i < str.length(); i++ )
    if ( str[i] == ' ' ) 
    {
        if ( temp != "") s.push_back(temp);
        temp = "";
    }
    else temp += str[i];

    int n = s.size();

    for ( int i = 0; i < n-1; i++ )        
    for ( int j = 0; j < n-i-1; j++ )  
    if ( weight(s[j]) > weight(s[j+1]) ) swap( s[j], s[j+1] ); 
    else if ( weight(s[j]) == weight(s[j+1]) && s[j] > s[j+1] ) swap( s[j], s[j+1] );

    string res = "";
    for ( int i = 0; i < n; i++) res += ' ' + s[i];
    res.erase(0,1);
    
    return res;
}

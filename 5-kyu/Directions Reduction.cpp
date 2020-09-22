using namespace std;

class DirReduction
{
public:
    static vector<string> dirReduc(vector<string> &arr);
};

vector<string> DirReduction::dirReduc(vector<string> &arr)
{
    string s = "";
    for ( int i = 0; i < arr.size(); i++ ) s += arr[i] + ' ';
    while ( s.length() > 0 )
    {
        if ( s.find("NORTH SOUTH") != -1 ) s.erase(s.find("NORTH SOUTH"),12);
        else if ( s.find("SOUTH NORTH") != -1 ) s.erase(s.find("SOUTH NORTH"),12);
        else if ( s.find("EAST WEST") != -1 ) s.erase(s.find("EAST WEST"),10);
        else if ( s.find("WEST EAST") != -1 ) s.erase(s.find("WEST EAST"),10);
        else break;  
    }
    vector<string> res;
    string temp = "";
    for ( int i = 0; i < s.length(); i++ ) 
    if ( s[i] == ' ' ) 
    {
        res.push_back(temp);
        temp = "";
    }
    else temp += s[i];
    for (int i=0; i<res.size(); i++) cout<<res[i];
    return res;
}

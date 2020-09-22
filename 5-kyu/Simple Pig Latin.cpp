using namespace std;

string move(string s)
{
    s += s[0];
    s.erase(0,1);
    return s;
}

string pig_it(string str)
{
    string temp = "", res = "", punctuation = "?!.,";
    str += ' ';
    for ( int i = 0; i < str.length(); i++ )
    if ( str[i] == ' ' )
    {
        res += ' ' + move(temp);
        if ( punctuation.find(temp) == -1 ) res += "ay";
        temp = "";
    }
    else temp += str[i];
    res.erase(0,1);
    return res;
}

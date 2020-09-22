using namespace std;

class Kata
{
public:
    vector <string> towerBuilder(int nFloors)
    {
        vector <string> res;
        int n = 1 + 2*(nFloors - 1);
        string s = "";
      
        for ( int i = 0; i < n ; i++ ) s+=' ';
        s[n/2] = '*';
        res.push_back(s);
      
        int l = n/2 - 1;  int r = n/2 + 1;
      
        for ( int i = 2; i <= nFloors; i++ )
        {
            s[l] = '*';  s[r] = '*';
            l--;  r++;
            res.push_back(s);
        }
        return res;
    }
};

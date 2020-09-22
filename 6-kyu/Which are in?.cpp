#include <set>

using namespace std;
class WhichAreIn
{
  public:
  static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2);
};

vector <string> WhichAreIn::inArray (vector <string> &array1, vector <string> &array2)
{
    set <string> s;
    for ( int i = 0; i < array1.size(); i++ )
    {
        for ( int j = 0; j < array2.size(); j++ )
        if ( array2[j].find(array1[i]) != -1 )
        {
            s.insert (array1[i]);
            break;
        }
    }
    vector <string> res( s.begin(), s.end() );
    return res;
}

// Rectangle into Squares
// https://www.codewars.com/kata/55466989aeecab5aac00003e

#include <vector>

using namespace std;

class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth);
};

vector<int> SqInRect::sqInRect(int lng, int wdth)
{
    int l = lng, w =  wdth;
    if ( l == w ) return {};
    vector<int> res;

    while ( l>0 && w>0 )
    {
        if ( l < w ) swap(l,w);
        res.push_back(w);
        l-=w;
    }
    for (int i=0; i<res.size(); i++) cout<<res[i];
    return res;
}
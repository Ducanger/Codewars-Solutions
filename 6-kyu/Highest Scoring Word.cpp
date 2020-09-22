#include <string>

using namespace std;

string highestScoringWord(const string &str)
{
   int sum = 0;  int max = 0;
   string res = "";  string s = "";
   string st = str;
   st+=' ';
   for ( int i = 0; i < st.length(); i++)
   if ( st[i] == ' ' )
   {
       if ( max < sum ) 
       {
           max = sum; res = s;
       }
       sum = 0;
       s = ""; 
   }
   else
   {
       sum += ((int) st[i]) - 96;
       s += st[i];
   }
   return res;
}

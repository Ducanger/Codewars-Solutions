// Roman Numerals Decoder
// https://www.codewars.com/kata/51b6249c4612257ac0000005

#include <string>

using namespace std;

int helper(char s) 
{
   toupper(s);
   switch (s) 
   {
      case 'I': return 1;
      case 'V': return 5;
      case 'X': return 10;
      case 'L': return 50;
      case 'C': return 100;
      case 'D': return 500;
      case 'M': return 1000;
      default: return 0;
   }
}

int solution(string roman) {
    string s = roman;
    int res = 0;
    for ( int i = 0; i < s.length(); i++) 
    {
        if ( i < s.length()-1 && helper(s[i]) < helper(s[i+1]) )  res -= helper(s[i]);
        else res += helper(s[i]);   
    }
    return res;
}

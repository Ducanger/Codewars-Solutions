using namespace std;

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b);
};

string toHexadecimal(int n)
{
    char d[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    if ( n < 0 ) return "00";
    if ( n > 255 ) return "FF";
    string s = "";
    if ( n < 16 ) { s += '0'; } else s += d[n/16];
    s += d[n%16];
    return s;
}

string RGBToHex::rgb(int r, int g, int b)
{
    return ( toHexadecimal(r) +  toHexadecimal(g) +  toHexadecimal(b));
}

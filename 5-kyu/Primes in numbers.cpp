using namespace std;

class PrimeDecomp
{
public:
    static std::string factors(int lst);
};

string PrimeDecomp::factors(int lst)
{
    string res = "";
    for (int i = 2; i <= lst; i++)
    if (lst % i == 0)
    {
        int count = 0;
        while (lst % i == 0)
        {
            count++;
            lst /= i;
        }
        if (count == 1) res += '(' + to_string(i) + ')';
        else res += '(' + to_string(i) + "**" + to_string(count) + ')';
    }
    return res;
}

using namespace std;

class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window)
{
    if ( h <= 0 ) return -1;
    if ( bounce <= 0 || bounce >= 1 ) return -1;
    if ( window >= h ) return -1;
    int count = 1;
    h*=bounce;
    while ( h > window )
    {
        count+=2;
        h*=bounce;
    }
    return count;
}

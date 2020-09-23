long zeros(long n) 
{
    int res = n / 5;
    int i = 25;
    int count = 1;
    while ( i <= n )
    {
        res += count*(n/i);
        i *= 5;
    }
    return res;
}

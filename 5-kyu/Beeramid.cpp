int beeramid(int bonus, double price)
{
    int sum = 0;
    int i = 0;
    if ( bonus/price < 1) return i;
    while (sum <= bonus/price)
    {
        i++;
        sum += i*i;
    }
    return i-1;
}

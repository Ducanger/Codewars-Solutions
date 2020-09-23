long zeros(long n) {
    long result = 0;
    while (n) result += n/=5;
    return result;
}

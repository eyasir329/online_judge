ssize_t nCr(ssize_t n, ssize_t r)
{
    if(n < r)
        return -1;
    ssize_t p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
        for (ssize_t m = 0; r; p/=m, k/=m, n--,r--) {
            p *= n;
            k *= r;
            m = gcd(p, k);
        }
    else
        p = 1;
    return p;
}
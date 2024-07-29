#include <stdio.h>

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 2) + fibo(n - 1);
    }
}

int lfibo(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            s = t0+t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }
}
int main()
{
    printf("%d\n", fibo(4));
}
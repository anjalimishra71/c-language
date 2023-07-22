
int power(int a, int b)
{
    if (b == 1)
        return a;
    int p = power(a, b / 2) * power(a, b / 2);
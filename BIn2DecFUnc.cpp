typedef long long l;
int bin2dec(l bin)

{
    int base=1,rem,dec=0;
    while (bin!=0)
    {
        rem=bin%10;
        bin/=10;
        dec+=base*rem;
        base*=2;
    }
    return dec;

}
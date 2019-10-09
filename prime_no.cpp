ll IsPrime(ll n)
{
    if(n==0||n==1)
        return n;
    if(n%2==0)
        return (ll)2;
    if(n%3==0)
        return (ll)3;
    else
    {
        for(ll i=5;i*i<=n;i+=6)
        {
            if(n%i==0)
                return i;
            if(n%(i+2)==0)
                return (i+2);
        }
        return n;
    }
}

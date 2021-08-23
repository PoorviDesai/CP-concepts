#include<bits/stdc++.h>

using namespace std;

int is_prime[1000001];

int sieve(int n)
{
    int maxN = 1000000;
    
    for(int i=0;i*i<=maxN;i++)
    {
        is_prime[i]=1;
    }
    is_prime[0] = is_prime[1] = 0;
    
    for(int i=2; i*i<=maxN;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=maxN;j+=i)
            {
                is_prime[j]=0;
            }
        }
    }
    
    int p = count(is_prime, is_prime + n, 1);
    return p;
}

int main()
{
    int a,n,cnt=0;
    cin>>n;
    
    
    cout<<"the number of prime numbers up till n(exclusive) are: "<<sieve(n)<<endl;
    return 0;
}

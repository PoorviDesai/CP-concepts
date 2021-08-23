#include<bits/stdc++.h>

using namespace std;

int power(int a, int n, int p)
{
    int res = 1;
    while(n)
    {
        if(n%2==1)
        {
            res=(res*a)%p;
            n--;
        }
        else
        {
            a=(a*a)%p;
            n/=2;
        }
        
    }
    return res;
}

int main()
{
    int a,n;
    cin>>a>>n>>p;
    cout<<a<<"^"<<n<<": "<<power(a,n,p)<<endl;
    
    return 0;
}

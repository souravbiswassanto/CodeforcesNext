#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi              2*acos(0.0)
#define N               100006
#define max_3(a,b,c)    max(a, max(b,c))
#define max_4(a,b,c,d)  max(a,max(b,max(c,d)))
#define min_3(a,b,c)    min(a, min(b,c))
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    ll n,i,d=0,e=0,j=1,m,k,t,f=0,l,sum,c;
    for(int i=0;i<26;i++){
        cout<<(i+1)<<" "<<char(97+i)<<endl;
    }
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        set<ll> s;
        ll a[n+1];
        d=0;
        e=0;
        j=1;
        c=1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
            if(a[i]%k==0)
                d++;
            if(a[i]==0)
                e++;
        }
        sort(a,a+n);
        for(i=n-1; i>=0; i--)
            if(a[i])
                l=i;
        if(s.size()==1)
        {
            if(n==1||e==n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(l)
            {
                //c=ln m/ln a;
                for(j=1; j<=100; j++)
                {
                    if(a[l]<pow(k,j))
                    {
                        sum=pow(k,(j+1)-1)/2;
                        if(sum==a[l])
                            f++;
                    }
                    else if(a[l]==pow(k,j))
                        f++;
                    l++;
                }
            }
            if(f+e==n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        s.clear();
    }
}

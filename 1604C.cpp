
// Problem: C. Di-visible Confusion
// Contest: Codeforces - Codeforces Round #752 (Div. 2)
// URL: https://codeforces.com/contest/1604/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Wsign-compare"
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std ;

#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<'\n'
#define no   cout<<"NO"<<'\n'
void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX], B[MAX], C[MAX];

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> t;

    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> A[i];
        }
        if(A[1] % 2 == 0){
            no; continue;
        }
        ll LCM = 1;
        map<ll, ll> M; vector<ll> vec;
        for(int i = 2; i <= 100000; i++){
            if(LCM >= 1e15 or LCM <= 0)break;
            LCM = lcm(LCM, (ll) i);
            M[LCM] = i - 1;
            vec.pb(LCM);
        }
        for(int i = 2; i <= n; i++){
            Max = 0;
             for(int j = 0; j < vec.size(); j++){
                 if(A[i] % vec[j] == 0){
                     Max = max(Max, M[vec[j]]);
                 }
             }  
             if(Max >= i){
                 check = 1; break;
             } 
        }
        if(check)no;
        else yes;
        check = 0;
    }
    /* 
        precedence : ! * / % + - << >> 
        < > <= >= == != & ^ | && ||
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}

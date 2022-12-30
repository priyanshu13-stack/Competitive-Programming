#include <bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
#define fr_eq(k,x) for(ll i=k; i<=x;i++)
#define fr(k,x) for(ll i=k; i<x;i++)
#define arr(a,n) ll a[n];for(ll i=0;i<n;i++) cin>>a[i];
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define pob pop_back
#define ve vector
#define nextline cout<<endl;
#define mod 1000000007
#define pi 3.14159265
#define setbits(x) __builtin_popcountll(x)
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(int x)


void start_activity(){
    ll n,k;
    cin >> n >> k;
    char s[k];
    map<char,ll> mp;
    fr (0,n){
        cin >> s[i];
        mp[s[i]]++;
    }
    ll cnt = 0;
    for (auto i : mp){
        if (i.first == 'o' or i.first == 'x'){
            if (i.second % 2 == 0){
                cnt++;
            }
        }
        else {
            cout << 0 << endl;
            return;
        }
    }
    cout << cnt << endl;
}

//main_function starts here

signed main(int argc, char const *argv[])
{
    fio
    // ll tt;
    // cin>>tt;
    // while(tt--){
    // }
        start_activity();
    return 0;
}
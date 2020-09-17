#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

bool check(ll board[], ll n, ll k, ll time) {
    ll sum = 0;
    ll painter = 1;
    loop(i,0,n) {
        if(board[i] > time) {
            return false;
        }
        if(board[i] + sum <= time) {
            sum += board[i];
        }
        else {
            painter++;
            sum = board[i];
            if(painter > k) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    hypertest
    ll n,k,t,sum=0;
    cin>>n>>k>>t;
    ll board[n];
    loop(i,0,n) {
        cin>>board[i];
        sum += board[i];
    }
    ll s = *max_element(board,board + n);
    ll e = sum;
    ll ans = e;
    while(s <= e) {
        ll mid = (s + e) / 2;
        if(check(board,n,k,mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    cout<<((ans % 10000003) * t) % 10000003;
    return 0;
}
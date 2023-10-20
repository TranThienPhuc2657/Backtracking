#include <bits/stdc++.h>
using namespace std;
#define file(name) if(fopen(name".inp","r")) {freopen(name".INP","r",stdin); freopen(name".OUT","w",stdout);}
#define FOR(i,n) for (int i=0; i<n; i++)
#define FORD(i,n) for (int i=n-1; i>=0; i--)
#define pb push_back
#define fi first
#define se second
using ll=long long;
const int N=1e6+5;

int n,a[N];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("PERMUTATIONGEN");

    cin >> n;
    FOR(i,n) cin >> a[i];
    int i,j;
    for (i=n-1; i>0; i--) if (a[i]>a[i-1]) {
        for (j=n-1; j>0; j--) if (a[j]>a[i-1]) break;
        break;
    }
    if (i==0) cout << -1;
    else {swap(a[i-1],a[j]); sort(a+i,a+n); FOR(i,n) cout << a[i] << " ";}
    return 0;
}

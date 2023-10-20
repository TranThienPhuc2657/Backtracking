#include <bits/stdc++.h>
using namespace std;
#define file(name) if (fopen(name".inp","r")) {freopen(name".inp","r",stdin); freopen(name".out","w",stdout);}
#define FOR(i,n) for (int i=0; i<n; i++)
#define FORD(i,n) for (int i=n-1; i>=0; i--)
#define pb push_back
#define fi first
#define se second
using ll=long long;
const int N=1e6+5;

int n,m,a[N];

ll factorial(int n) {
    if (n==1 or n==0) return 1;
    return n*factorial(n-1);
}

void next_per() {
    int i,j;
    for (i=n-1; i>0; i--) if (a[i]>a[i-1]) {
        for (j=n-1; j>0; j--) if(a[j]>a[i-1]) break;
        break;
    }
    swap(a[i-1],a[j]);
    sort(a+i,a+n);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("");

    cin >> n >> m;
    if (m>factorial(n)) {cout << -1; return 0;}
    FOR(i,n) a[i]=i+1;
    FOR(i,m-1) next_per();
    FOR(i,n) cout << a[i] << " ";
    return 0;
}


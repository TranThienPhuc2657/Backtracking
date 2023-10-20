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

int n;
vector <int> a;

void print() {
    cout << n << "=";
    for (int i=0; i<a.size()-1; i++) cout << a[i] << "+";
    cout << a[a.size()-1] << "\n";
}

void tong(int sum, int previ) {
    if (sum==n) {print(); return;}
    for (int i=previ; i<=n-sum; i++) {
        a.pb(i);
        tong(sum+i,i);
        a.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("TONG");

    cin >> n;
    tong(0,1);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define file(name) if (fopen(name".inp","r")) {freopen(name".inp","r",stdin); freopen(name".out","w",stdout);}
#define pn push_back
#define fi first
#define se second
using ll=long long;
const int N=1e6+5;

int n,a[25],cnt=0;
string s[N];

void hanoi(int n, int cot) {
    if (n<=0) return;
    if (a[n]!=cot) {
        hanoi(n-1,3-a[n]-cot); //Chuyen n-1 dia qua cot trung gian
        cnt++;
        s[cnt]=char(a[n]+'A'); s[cnt]+=char(cot+'A'); //Chuyen so 0 1 2 ve nguoc lai A B C
        a[n]=cot; //Chuyen dia hien tai sang cot can den
    }
    hanoi(n-1,cot); //Neu dia da o cac cot can den san thi chi can chuyen tiep n-1 dia qua cot can den
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("HANOI");
    //Y tuong o day la se chuyen dia qua cot trung gian. Cot trung gian duoc xac dinh bang (3 - cot cua dia do - cot can di chuyen toi)
    //Vi tong cua ba cot la 0+1+2=3 nen lay 3 tru cot dau va cot di toi thi ra cot trung gian
    cin >> n;
    char temp;
    for (int i=1; i<=n; i++) {cin >> temp; a[i]=temp-'A';} //temp-'A' de chuyen so thu tu A B C sang 0 1 2 ('A'-'A'=0; 'B'-'A'=1; 'C'-'A'=2;)
    hanoi(n,2);
    cout << cnt << "\n";
    for (int i=1; i<=cnt; i++) cout << s[i] << "\n";
    return 0;
}

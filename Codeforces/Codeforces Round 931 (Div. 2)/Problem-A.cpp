// ******************* Ritesh Gadre ********************** 
#include<bits/stdc++.h>
using namespace std;
#define pyes cout << "YES" << "\n"
#define pno cout << "NO" << "\n"
#define endl "\n"
#define ff first
#define br cout << "\n"
#define ss second
#define pb push_back
#define ppb pop_back
#define int long long
#define sz(x) ((long long)x.size())
#define all(x) x.begin(), x.end()
#define int long long
// Debug
#define debug(x)
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef map<int, int> mp;
typedef map<int, string> mis;
typedef map<string ,int> msi;
typedef map<int, char> mic;
typedef map<char ,int> mci;
// For vector Input and Output
template<typename T>
ostream& operator<<(ostream& os, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cout << a << ' '; return os; }
template<typename T>
istream& operator>>(istream& is, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cin >> a; return is; }
// 1   2  9  10
// 4   3  8  11
// 5   6  7  12
// 16 15 14  13

int sumOfNNumbers(int n){
	return (n*(n+1))/2;
}

int gcdOfArr(vector<int> v){
	int gcd= v[0];
	for(int i=1; i<v.size(); i++){
		gcd= __gcd(gcd, v[i]);
	}
	return gcd;
}



void solve(){
	int n; cin >> n;
	vi arr(n); cin >> arr;
	sort(all(arr));
	int mn1= *min_element(all(arr));
	int mn2= *min_element(arr.begin()+1, arr.end());
	reverse(all(arr));
	int mx1= *max_element(arr.begin()+1, arr.end());
	int mx2= *max_element(all(arr));
	
	// cout << mn1 << " " << mn2 << " ";
	// cout << mx1 << " " << mx2 << " ";
	int ans= abs(mn1-mx1) + abs(mx1-mn2) + abs(mn2-mx2) + abs(mx2-mn1);
	cout << ans << endl;

}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r" , stdin);
        freopen("output.txt", "w" , stdout);
    #endif
    int tt= 1;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
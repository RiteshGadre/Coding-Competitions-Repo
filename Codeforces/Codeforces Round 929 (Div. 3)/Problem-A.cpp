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




/* 

3 6 7 9 10
2 3 5 9 9

6 8
3 6
2

*/

void solve(){
	int n; cin >> n;
	vi arr(n); cin >> arr;
	for(int i=0; i<n; i++){
		if(arr[i]<0) arr[i]= arr[i]* -1;
	}
	cout << accumulate(all(arr), 0) << endl;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r" , stdin);
        freopen("output.txt", "w" , stdout);
    #endif
    int tt= 0;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
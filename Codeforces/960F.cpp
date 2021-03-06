#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long int
#define mod 1000000007
#define p push
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define vi vector <int> 
#define vvi vector < vector <int> >
#define vppi vector < pair < pair <int, int>, int> > 
#define pi pair <int, int> 
#define ppi pair < pair <int, int>, int> 
#define zp mp(0, 0)

const int N = 100007;

bool cmp(ppi a, ppi b) {
	if(a.s < b.s) return 1;
	return 0;
}

vppi vs;
pi dp[N];

signed main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		// ifstream cin ("/Users/Aulene/Desktop/input.txt");
		// ofstream cout ("/Users/Aulene/Desktop/output.txt");

		// ifstream cin ("input.txt");
		// ofstream cout ("output.txt");
		
		int n, m, i, j, u, v, w, ans = 0;

		cin >> n >> m;

		for(i = 0; i < m; i++) {
			cin >> u >> v >> w;
			vs.pb({{u, v}, w});
		}

		// sort(vs.begin(), vs.end(), cmp);

		// cout << endl; for(auto it : vs) cout << it.f.f << " " << it.f.s << " " << it.s << endl;

		for(i = 0; i < N; i++) dp[i] = mp(1, 0);

		for(auto it : vs) {
			u = it.f.f, v = it.f.s, w = it.s;
			if(dp[u].s <= w) {
				if(dp[v].f <= 1 + dp[u].f || dp[v].s > w) 
					dp[v] = mp(1 + dp[u].f, w);
			}
		}

		for(i = 0; i < N; i++) ans = max(ans, dp[i].f);
		cout << ans << endl;
		return 0;
	}
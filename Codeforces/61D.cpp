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
#define pi pair <int, int> 
#define ppi pair < pair <int, int>, int> 
#define zp mp(0, 0)

const int N = 100007;
vector < vector < pi > > g(N);

int dfs(int idx, int p = -1) {

	int sum = 0;

	for(int i = 0; i < g[idx].size(); i++)
		if(g[idx][i].f != p) sum = sum = max(sum, g[idx][i].s + dfs(g[idx][i].f, idx));

	return sum;
}

signed main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		// ifstream cin ("/Users/Aulene/Desktop/input.txt");
		// ofstream cout ("/Users/Aulene/Desktop/output.txt");

		// ifstream cin ("input.txt");
		// ofstream cout ("output.txt");
		
		int n, m, i, j, u, v, w, sum = 0;

		cin >> n;	

		for(i = 0; i < n - 1; i++) {
			cin >> u >> v >> w;
			g[u].pb({v, w});
			g[v].pb({u, w});
			sum += w;
		}

		u = dfs(1);
		
		// cout << u << endl;

		cout << (2 * sum) - u << endl;

		return 0;
	}
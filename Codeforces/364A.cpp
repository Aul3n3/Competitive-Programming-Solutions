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
#define vpi vector < pi >
#define vppi vector < ppi >
#define vvpi vector < vector < pi > > 
#define zp mp(0, 0)

const int N = 4007;

int a[N], pre[N];
map <int, int> mx;

signed main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		// ifstream cin ("/Users/Aulene/Desktop/input.txt");
		// ofstream cout ("/Users/Aulene/Desktop/output.txt");

		// ifstream cin ("input.txt");
		// ofstream cout ("output.txt");
		
		// ifstream cin ("usaco.in");
		// ofstream cout ("usaco.out");
		
		int n, m, i, j, u, v, ans = 0;
		string s;

		cin >> m >> s;

		if(m == 0) {
			cout << 0 << endl;
			return 0;
		}

		n = s.size();

		for(i = 1; i <= n; i++) a[i] = (int) (s[i - 1] - '0');
		for(i = 1; i <= n; i++) pre[i] = pre[i - 1] + a[i];

		for(i = 1; i <= n; i++)
			for(j = i; j <= n; j++) mx[pre[j] - pre[i - 1]]++;

		for(i = 1; i <= n; i++)
			for(j = i; j <= n; j++) {
				int sum = pre[j] - pre[i - 1];
				
				mx[sum]--;
				
				if(m % sum == 0) {
					v = m / sum;
					ans += mx[v];
				}

				mx[sum]++;
			}

		cout << ans << endl;

		return 0;
	}
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
#define N 1007
#define M 20007

int a[N], ways[N][M];

signed main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int n, m, i, j, k, l, u, v, sum, x = 1e4, ans = 0;

		cin >> n;
		
		for(i = 1; i <= n; i++) {
			cin >> m;
			ways[i][x + m]++;
			ways[i][x - m]++;

			for(j = -x; j <= x; j++)
				ways[i][x + j] = (ways[i][x + j] + ways[i - 1][x + j - m] + ways[i - 1][x + j + m]) % mod;
			ans = (ans + ways[i][x]) % mod;		 
		}

		cout << (ans) % mod << endl;
		return 0;
	}
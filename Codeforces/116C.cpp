#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <set>
#include <list>

using namespace std;

#define int long long int
#define mod 1000000007
#define p push
#define pb push_back
#define mp make_pair
#define f first
#define s second

vector <int> g(1007), dfsfrom(1007);

bool lvl[2007];
int ans = 0;

int dfs(int idx, int l)
{
	if(!lvl[l])
		{

		}

}

signed main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		int n, i, j, u, v;

		cin >> n;

		for(i = 1; i <= n; i++)
			{
				cin >> u;

				if(u != -1) g[u].pb(i);
				else dfsfrom.pb(i);
			}

		return 0;
	}
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

int a[1000007];

signed main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		int i, j, n, sum = 0, odd = 0, even = 0;

		cin >> n;

		for(i = 0; i < n; i++)
			{
				cin >> a[i];

				if(a[i] % 2 == 1) odd++;
				else even++;
				sum += a[i];
			}

		if(even > odd) cout <<"s";
		else cout << "o";
		return 0;
	}
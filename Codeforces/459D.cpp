#include <bits/stdc++.h>
#include <unordered_map>

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
#define mid (start + end) / 2
#define pi pair <int, int>
#define N 1000007

int a[N];

signed main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		// ifstream cin ("/Users/Aulene/Desktop/input.txt");
		// ofstream cout ("/Users/Aulene/Desktop/output.txt");

		// ifstream cin ("input.txt");
		// ofstream cout ("output.txt");
		
		int n, i, j, u, v;

		multiset <int> m1, m2;

		cin >> n;

		for(i = 1; i <= n; i++) cin >> a[i], m2.insert(a[i]);

		return 0;
	}
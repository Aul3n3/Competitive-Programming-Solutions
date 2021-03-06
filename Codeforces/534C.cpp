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

const int N = 200007;

int a[N], ans[N];

int bs(int a, int sum, int val) {
	int low = 0, high = val, ans;

	while(low <= high) {
		int mid = (low + high) / 2;

		if(sum + mid >= a) {
			ans = mid;
			high = mid - 1;
		}
		else low = mid + 1;
	}

	return ans;
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
		
		int n, m, i, j, u, v, sum = 0;

		cin >> n >> m;

		for(i = 1; i <= n; i++) {
			cin >> a[i], sum += a[i];
		}

		for(i = 1; i <= n; i++) ans[i] = bs(m, sum - a[i], a[i]);
		for(i = 1; i <= n; i++) cout << ans[i] << " "; cout << endl;

		return 0;
	}
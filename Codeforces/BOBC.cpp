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
#define vvi vector < vector <int> > > n;
#define pi pair <int, int> 
#define ppi pair < pair <int, int>, int>
#define vpi vector < pi >
#define vppi vector < ppi >
#define vvpi vector < vector < pi > > 
#define zp mp(0, 0)
#define MpI 3.14159265358979323846
#define ld long double
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
		
		int t, n, i, j, u, v; 

		cin >> t;

		for(int T =1; T <= t; T++) {
			cin >> n;
			ld agfa = (ld) M_PI * n * n / 2.0;
			ld aef = (ld) n * n / 4.0;
			ld ahfea = (ld) M_PI * n * n / 4.0;
			ld ans = (ld) agfa + aef - ahfea;
			cout << agfa << " " << aef << " " <<	 ahfea << endl;
			cout << fixed << setprecision(4) << "Case " << T << " " << ans << endl;
		}	
		return 0;
	}
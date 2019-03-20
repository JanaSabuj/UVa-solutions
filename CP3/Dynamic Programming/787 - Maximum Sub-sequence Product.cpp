//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India
//God is Great
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define endl "\n"
#define int long long int
#define double long double
const int INF = 1e9 + 5; //billion
#define pb push_back
#define mp make_pair
#define PI acos(-1)

#define MAX 100007

signed main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	crap;

	int x;
	vector<int> vec;
	while ((cin >> x)) {
		vec.pb(x);


		while (1) {
			int y;
			cin >> y;
			if (y == -999999) { break;}
			vec.pb(y);
		}

		int max_fwd = INT_MIN, max_bkd = INT_MIN, prod = 1;

		for (int i = 0; i < vec.size(); ++i)
		{
			/* code */
			prod *= vec[i];
			max_fwd = max(max_fwd, prod);
			if (prod == 0) {
				prod = 1;
			}

		}

		reverse(vec.begin(), vec.end());
		prod=1;
		for (int i = 0; i < vec.size(); ++i)
		{
			/* code */
			prod *= vec[i];
			max_bkd= max(max_bkd, prod);
			if (prod == 0) {
				prod = 1;
			}

		}


		int ans=max(max_fwd,max_bkd);

 		cout<<ans<<endl;

		vec.clear();
	}


	return 0;

}


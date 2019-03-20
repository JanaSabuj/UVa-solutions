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

	int t,tc=0,p;
	cin >> t;
	p=t;
	while (t--)

	{	

		string s;
		cin>>s;

		int n=s.length();
 
		int arr[n][n];

		for (int j = 0; j< n; ++j)
		{
			/* code */
			int x= (s[j]-'0');
			if(x==0) x=INT_MIN;

			arr[0][j]=x;
		}

		for (int i = 0; i < n; ++i)
		{
			/* code */
			if(i==0) {
				 
				 for(int j=0; j<n; j++)
			 		if (j > 0) arr[i][j] += arr[i][j - 1];
								 
 
			}
			else 
			{string str; cin >> str;
						for (int j = 0; j < n; j++) {
							int x = (str[j] - '0');
							if (x == 0) x = INT_MIN;
							arr[i][j] = x;
			
							if (i > 0) arr[i][j] += arr[i - 1][j];
							if (j > 0) arr[i][j] += arr[i][j - 1];
							if (i > 0 and j > 0) arr[i][j] -= arr[i - 1][j - 1];
			
						}}
		}

		int ans = LLONG_MIN, sum = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				for (int k = i; k < n; k++)
					for (int l = j; l < n; l++) {

						sum = arr[k][l];
						if (i > 0) sum -= arr[i - 1][l];
						if (j > 0) sum -= arr[k][j - 1];
						if (i > 0 and j > 0) sum += arr[i - 1][j - 1];
						ans = max(ans, sum);


					}

					++tc;


		cout << ((ans>0)?ans:0) << endl;
		if(tc!=p)cout<<endl;
	}

	return 0;

}


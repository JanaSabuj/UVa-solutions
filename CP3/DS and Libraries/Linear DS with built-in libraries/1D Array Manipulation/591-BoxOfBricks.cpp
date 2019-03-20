//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great------------/////\\\\\\\--------------------------------
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define int long long int
 #define endl "\n"
 #define INF LLONG_MAX
 #define pb push_back
 #define mp make_pair
 #define loop(i,a,b) for(int i=a;i<b;i++)
 typedef vector<int> vi;
 
 

	#undef int
 int main() {
 	#define int long long int
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	crap;
                  
     int c=1;
     int n;
     while(cin>>n,n){
		 
		 int arr[n+7];
		 int sum=0;
		 loop(i,0,n){
			 
			 cin>>arr[i];
			 sum+=arr[i];
		 }
		 
		 int avg= sum/n;
		 int steps=0;
		 loop(i,0,n){
			 
			 steps+= abs(avg-arr[i]);
		 }
		 
		 cout<<"Set #"<<c++<<endl;
		 cout<<"The minimum number of moves is "<<steps/2<<"."<<endl<<endl;
		 
	 }
     
      
    return 0;
 }


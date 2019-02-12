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
 typedef std::vector<int> vi;
 typedef std::pair<int,int> pii;
 typedef std::vector<pii> vii;
 
 

	#undef int
 int main() {
 	#define int long long int
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	//~ crap;
         
                  
     int t;
     cin>>t;
     
     //~ bool state=true;
     for(int i=0; i<t; i++){
		 
			 
			vector< pair<int,string> > vec;
			while(1){
				
				int x;cin>>x;
				 vec.pb({x,""});
				if(getchar()=='\n')
					break;
			}
		 
		 int k=0;
		 while(1){
			 
			 string x;cin>>x;
			 vec[k].second=x;
			 k++;
			 if(getchar()=='\n')
				break;
			 
		 }
		 
		 sort(vec.begin(),vec.end());
		 for(auto x:vec)
			cout<<x.second<<endl;
		 
		 if(i!=t-1)
		 cout<<endl;
	 }
     
       
      
    return 0;
 }


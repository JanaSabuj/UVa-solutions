//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	 string arr[9]={
		 
		 " ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
		 
		 };
		 
		 int t;
		  cin>>t; 
		  cin.ignore();
		  int c=1;
		 
		 while(t--){
			 
		 string line;
		 getline(cin,line);
		 int sz=line.length();
		 
		 int press=0;
		 for(int i=0; i<sz; i++){
			 //take a character from the line
			 for(int j=0; j<9; j++){
				 //take a key from the mobile
					int len=arr[j].length();
						for(int k=0; k<len; k++){
							//explore the letters in that one key
							if(line[i]==arr[j][k])
								press+=(k+1);
								
						
						}
			 }
			 
		 }
                  
     
     //~ cout<<"Case #"<<c++<<" "<<press<<endl;
     printf("Case #%d: %d\n",c++,press);
     
 }
     
    return 0;
 }


#include <bits/stdc++.h>
using namespace std;
  int main() {
    // cout<<"Hello World!";
long long int n; 
    while(cin>>n,n){
     
            long long int arr[n];
            for(long long int i=0; i<n; i++){
                cin>>arr[i];
            }

            long long int sum=0,ans= INT_MIN;
            for(long long int i=0; i<n; i++){
                sum+=arr[i];
                if(sum>ans)
                    ans=sum;
                if(sum<0)
                    sum=0;
            }

            if(ans<=0)
                cout<<"Losing streak."<<endl;
            else {
                cout<<"The maximum winning streak is "<<ans<<"."<<endl;
            }

   
    
    }
    return 0;
}

 #include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;cin>>t;
    for(int r=1; r<=t; r++){
        
     int x; cin>>x;
     int n; n=x-1;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0,ans=0;
    int start=0,end=0,s=0;
    
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum<0)
            {sum=0;s=i+1;}
        if(sum>ans)
            {ans=sum; start=s; end=i;}
            //updates
         if(sum==ans){
                int xstart=s;
                int xend=i;
                if((xend-xstart)>(end-start))
                    {start=xstart;
                    end=xend;}
                else if((xend-xstart)==(end-start)){
                            if(xstart<start){
                                start=xstart;
                                end=xend;
                            }
                }
         }
        
    }

    // cout<<ans<<endl;
    // cout<<start<<" "<<end<<endl;
    // }
    if(ans<=0){
            cout<<"Route "<<r<<" has no nice parts"<<endl;
    }
    else {
        cout<<"The nicest part of route "<<r<<" is between stops "<<start+1<<" and "<<end+2<<endl;
    }

    
}
return 0;
}

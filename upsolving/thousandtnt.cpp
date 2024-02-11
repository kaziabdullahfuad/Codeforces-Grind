//problem link:https://codeforces.com/contest/1899/problem/B
#include<iostream>
#include<numeric>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
void all_divisors(vector<ll> &all_divisors,ll n){

    // finding all divisors
    // ar i*i hocche less value
    for(ll i=2;i<=n;i++){

        if(n%i==0){
            all_divisors.push_back(i);
           // cout<<i<<endl;
        }
    }

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*
        Test case that went wrong
        14
        789833318 213732253 331366087 596077533 553434184 968488085 
        823504748 572865158 38494642 975537967 968107493 
        24457534 795472306 12784195 

        My answer- 2128952561
        Actual Answer- 962753772


    */

    int t;
    cin>>t;
    
    while(t){

    	ll n;
        cin>>n;
        vector<ll> v1(n);
        // cout<<n<<endl;

        for(int i=0;i<n;i++){
            cin>>v1[i];
        }

        ll max_diff=-1e18;
        //cout<<max_diff<<endl;
        for(int i=2;i<n;i++){



            if(n%i==0){
               // cout<<"Number that divides: "<<i<<endl;
                
                ll max_val=-1e18;
                ll min_val=1e18;
                for(int j=0;j<n;j+=i){
                    //cout<<j<<" ";
                    ll sum=0;
                    for(int k=j;k<j+i;k++){
                        //cout<<k<<" ";
                        sum+=v1[k];
                    }
                    //cout<<sum<<endl;
                    if(sum<min_val){
                        min_val=sum;
                    }
                    if(sum>max_val){
                        max_val=sum;
                    }
                    //cout<<endl;

                }
                //cout<<endl;
                // cout<<"MIN VAL: "<<min_val<<endl;
                // cout<<"MAX VAL: "<<max_val<<endl;
                if(abs(max_val-min_val)>max_diff){
                    max_diff=abs(max_val-min_val);
                }
                //cout<<max_diff<<endl;
            }
            //  cout<<min_val<<endl;
            // cout<<max_val<<endl;
        }

        // if k=1 then find max and min element
        ll holder=*max_element(v1.begin(),v1.end())-*min_element(v1.begin(),v1.end());
      
        //cout<<max_diff<<endl;

        if(holder>max_diff){
            cout<<holder<<endl;
        }
        else{
            cout<<max_diff<<endl;
        }

    	t--;
    }

    return 0;
}
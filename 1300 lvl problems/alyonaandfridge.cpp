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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
bool check(ll mid,vector<ll> v1,ll h){


    sort(v1.begin(),v1.begin()+mid,greater<ll>());
    bool found=true;

    //debug(mid)

    // for(int i=0;i<mid;i++){
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;

    for(int i=0;i<mid;i+=2){

        if(i==mid-1){

            if(h<v1[i]){
                found=false;
                break;
            }
            else{
                h-=v1[i];
            }
        }
        else{

            if(h<v1[i]){
                found=false;
                break;
            }
            else{
                h-=v1[i];
            }
        }
    }

    //debug(found)
    return found;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,h;
    cin>>n>>h;
    vector<ll> v1(n);
    //cout<<n<<" "<<h<<endl;
    
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }

    //printVector(v1);

    ll low=1;
    ll high=n;

    //sort(v1.begin(),v1.begin()+4);

    // for(int i=0;i<3;i++){
    //     cout<<v1[i]<<" ";
    // }

    //printVector(v1);
    ll ans=1;
    while(low<=high){


        //ll mid=(low+high)/2;
        ll mid=low+(high-low)/2;

        if(check(mid,v1,h)){

            // aro beshi kora jai ki na
            ans=max(ans,mid);
            low=mid+1;
        }
        else{

            high=mid-1;
        }


    }

    cout<<ans<<endl;


        

    return 0;
}
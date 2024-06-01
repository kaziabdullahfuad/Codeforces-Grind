#include<iostream>
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
// #define fl(i,n) for(int i=0;i<n;i++)
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
bool check(ll k, vector<ll> &v,int n){
    vector<ll> bits(22,0);
    cout<<k<<endl;
    for(int i=0;i<k;i++){
    	//debug(i);
        int j=0;
        int x=v[i];
        while(x>0){
            if(x%2)
                bits[j]++;
            j++;
            x/=2;
        }
    }
    cout<<"MAIN FREQ"<<endl;
    for(int i=0;i<5;i++){
        cout<<bits[i]<<" ";
    }
    cout<<endl;
    cout<<"OTHER"<<endl;
    vector<ll> freq=bits;
    for(int i=k;i<n;i++){
    	//cout<<i-k<<endl;
        int j=0;
        int x=v[i];
        while(x>0){
            if(x%2)
                freq[j]++;
            j++;
            x/=2;
        }
        j=0;
        x=v[i-k];
        while(x>0){
            if(x%2)
                freq[j]--;
            j++;
            x/=2;
        }
        for(int i=0;i<5;i++){
        	cout<<freq[i]<<" ";
        }
        cout<<endl;
        //break;
        for(int i=0;i<22;i++){
            if(freq[i]>0&&bits[i]==0)return false;
            if(freq[i]==0&&bits[i]>0)return false;
        }
    }
    return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   vector<ll> v1={5,3,1,8,7,6,2,1};

   

   cout<<check(4,v1,8)<<endl;

   string s="NEVAS";
   cout<<s<<endl;
   int n=s.size();
   for(int i=0;i<n;i++){
        cout<<s[i];
   }



    return 0;
}
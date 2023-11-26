#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
void printVector(vector<ll> v1){

	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll summation=n*(n+1)/2;
    //cout<<summation<<endl;

    if(summation%2==0){
    	cout<<"YES"<<endl;
    	ll summation_half=summation/2;
    	
        if(n%4==0){

            ll first=2;

            cout<<n/2<<endl;
            while(first<=n){

                cout<<first<<" ";
                if(first%2==0){
                    first+=1;
                }
                else{
                    first+=3;
                }
            }
            cout<<endl;

            ll second=1;
            cout<<n/2<<endl;
            while(second<=n){
                cout<<second<<" ";
                if(second%2==0){
                    second+=1;
                }
                else{
                    second+=3;
                }
            }
        }
        else{

            ll first=1;
            cout<<(n-3)/2+2<<endl;
            while(first<=n){

                cout<<first<<" ";
                if(first%2==0){
                    first+=3;
                }
                else{
                    first+=1;
                }
            }
            cout<<endl;

            ll second=3;
            cout<<n-((n-3)/2+2)<<endl;
            while(second<=n){

                cout<<second<<" ";
                if(second%2==0){
                    second+=3;
                }
                else{
                    second+=1;
                }
            }
            cout<<endl;
        }




    }
    else{
    	cout<<"NO"<<endl;
    }

    return 0;
}
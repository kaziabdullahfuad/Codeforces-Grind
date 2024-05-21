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
template<typename t1>
void printVector(vector<t1> v1){

    for(int i=0;i<v1.size();i++){

        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

        ll n;
        cin>>n;
        vector<ll> v1(n);
        
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        
        
        int zero_count=0;
        

        for(int i=0;i<n;i++){
            if(v1[i]==0){
                zero_count++;
            }

        }
        

        if(zero_count==n || zero_count==0){
            cout<<0<<endl;
        }
        else{

            ll left=0,right=n-1;
            while(left<right){

                //debug(left) debug(right)
                if(v1[left]==0){
                    left++;
                }
                if(v1[right]==0){
                    right--;
                }
                if(v1[left]!=0 && v1[right]!=0){
                    //cout<<v1[left]<<" "<<v1[right]<<endl;
                    break;
                }
            }

            cout<<left<<" "<<right<<endl;
            bool zero_found=false;

            for(int i=left;i<=right;i++){

                //cout<<v1[i]<<" ";
                if(v1[i]==0){
                    zero_found=true;
                    break;
                }
            }
            
            if(zero_found){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }


        t--;
    }

    return 0;
}
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

        ll n;
        cin>>n;


        string s1;
        cin>>s1;

        string s2;
        cin>>s2;

        vector<vector<ll>> v1(26,vector<ll>(n+1,0));

        // for(int i=0;i<26;i++){

        //     for(int j=0;j<n;j++){

        //         cout<<v1[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        int hold='a';
        debug(hold)
        cout<<hold-'a'<<endl;
         for(int i=0;i<26;i++){

            for(int j=1;j<=n;j++){

               if(s1[j-1]-hold==0){

                    v1[i][j]=v1[i][j-1]+1;
               }
               else{
                    v1[i][j]=v1[i][j-1];
               }
               
            }
            hold++;
            //break;
            //cout<<endl;
        }

         for(int i=0;i<26;i++){

            for(int j=0;j<=n;j++){

                cout<<v1[i][j]<<" ";
            }
            cout<<endl;
        }

        ll l=4;
        ll r=7;
        cout<<"HERE"<<endl;
        for(int i=0;i<4;i++){

            
            cout<<v1[i][r]<<" "<<v1[i][l-1]<<endl;
            cout<<v1[i][r]-v1[i][l-1]<<endl;
        }

        t--;
    }

    return 0;
}
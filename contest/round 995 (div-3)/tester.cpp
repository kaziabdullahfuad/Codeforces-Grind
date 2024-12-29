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

        //1,1,2,2,3,3,4,5,6,6,7
        vector<ll> v1={3,4,5};
        ll n=v1.size();
        printVector(v1);
        auto upper=upper_bound(all(v1),4);
        if(upper==v1.end()){
            cout<<"END"<<endl;
        }
        else{

           ll fl=9-6;
           ll rl=11-6;

           cout<<fl<<" "<<rl<<endl;

           auto left=lower_bound(all(v1),fl);
           auto right=upper_bound(all(v1),rl);

           if(right==v1.end()){

                // mane purata?
                cout<<"HERE"<<endl;
                cout<<v1.end()-left<<endl;
           }
           else{

                cout<<right-left<<endl;
           }

        }
       // cout<<*upper<<endl;

        t--;
    }

    return 0;
}
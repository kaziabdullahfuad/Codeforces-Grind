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

    ll n;
    cin>>n;
    vector<ll> v1(n);
    vector<ll> v2(n);
    vector<ll> v3(n);
    ll ingred=0;

    for(int i=0;i<n;i++){
    	cin>>v1[i];
        ingred+=v1[i];
    }

    for(int i=0;i<n;i++){
    	cin>>v2[i];
    }

    for(int i=0;i<n;i++){
    	cin>>v3[i];
    }


    // printVector(v1);
    // printVector(v2);
    // printVector(v3);
    ll min_val=1e18;
    bool a=true;
    bool b=true;
    
    for(int i=0;i<n;i++){

        if(v2[i]==0){
            continue;
        }
        if(v2[i]>v1[i]){
            a=false;
        }
        if(v3[i]>v1[i]){
            b=false;
        }
    	min_val=min(min_val,(v1[i]/v2[i]));

        

    	//cout<<min_val<<endl;
    }
    // cout<<a<<endl;
    // cout<<b<<endl;
    // A value minimum koto bar vaag jabe
    //cout<<min_val<<endl;
    

    // 0 bar nibo,1 bar,2 bar ... min val porjonto nibo
    // and dekhbo a ato bar nile b koto bar nawa jai
    // and proti bar n ar shathe dekhbo
    ll holder;
    ll max_val=-1e18;
    ll div;

    if(a==false && b==false){
        cout<<0<<endl;
    }
    else if(a==false){

        // then b ar value diye divide koro
        // b ar shobche min val
        ll min_valb=1e18;
        for(int i=0;i<n;i++){

            if(v3[i]==0){
                continue;
            }
            
            min_valb=min(min_valb,(v1[i]/v3[i]));

            //cout<<min_val<<endl;
        }
        cout<<min_valb<<endl;

    }
    else if(b==false){

        cout<<min_val<<endl;
    }
    else{
        
        for(int i=0;i<=min_val;i++){

            // i=0, hole b ar value koto pabo for recipies
            ll min_val=1e18;
            //cout<<i<<" ";
            for(int j=0;j<n;j++){

                if(v3[j]==0){
                    continue;
                }
                else{

                    holder=v1[j]-(i*v2[j]);
                    //cout<<holder<<" ";
                    // divide korte hobe
                    div=holder/v3[j];
                    min_val=min(min_val,div);
                }

            }
            // cout<<min_val;
            // cout<<endl;
            max_val=max(max_val,min_val+i);
            //cout<<max_val<<endl;
        	
        }

        cout<<max_val<<endl;
    }
    

    return 0;
}
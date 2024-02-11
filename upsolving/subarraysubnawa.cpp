//problem link:https://codeforces.com/contest/1899/problem/B
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

    /* 
    Test Cases
    2 - t
    2 - n
    1 2 - ai
    6
    10 2 3 6 1 3

    

    */

    /*
        Test case that went wrong
        14
        789833318 213732253 331366087 596077533 553434184 968488085 
        823504748 572865158 38494642 975537967 968107493 
        24457534 795472306 12784195 

        My answer- 2128952561
        Actual Answer- 962753772


    */


    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int tester_stuff=t-12+1;
    //cout<<tester_stuff<<endl;
    while(t){

    	ll n;
        cin>>n;
        vector<ll> v1(n);
        // cout<<n<<endl;

        for(int i=0;i<n;i++){
            cin>>v1[i];
        }

       // for(auto x:v1){
       //  cout<<x<<" ";
       // }
       // cout<<endl;

       // find all the divisors of n
       vector<ll> divisor;
       all_divisors(divisor,n);

       for(auto x:divisor){
        cout<<x<<" ";
       }
       cout<<endl;

       int no_divisors=divisor.size();

       // max_val=*max_element(v1.begin(),v1.end());
       // min_val=*min_element(v1.begin(),v1.end());

       
       int index=0;
       //int only_once=1;
       //no_divisors=2;
       no_divisors--;
       ll max_diff=INT_MIN;
       
       // cout<<"HEre: "<<max_diff<<endl;

       cout<<"Max element: "<<*max_element(v1.begin(),v1.end())<<endl;
       cout<<"Min element: "<<*min_element(v1.begin(),v1.end())<<endl;
       max_diff=*max_element(v1.begin(),v1.end())-*min_element(v1.begin(),v1.end());
       cout<<"Starting max diff: "<<max_diff<<endl;
        //cout<<"HEre: "<<max_diff<<endl;

       
       while(no_divisors){

            //cout<<only_once<<endl;
            //cout<<"The index val  v1[]: "<<divisor[index]<<endl;
            int incr_index=divisor[index];
            ll max_val=INT_MIN;
            ll min_val=INT_MAX;
            for(int i=0;i<n;i++){

                int go_on=i+incr_index;
                ll sum=0;
                for(int j=i;j<go_on;j++){
                     cout<<j<<" ";
                    sum+=v1[j];
                }
                // cout<<endl;
                i=go_on;
                i--;
                cout<<sum<<endl;
                if(sum>max_val){
                    max_val=sum;
                }
                if(sum<min_val){
                    min_val=sum;
                }
                

            }
            ll diff=abs(max_val-min_val);

             
             cout<<"Max val each time:"<<max_val<<endl;
             cout<<"Min val each time:"<<min_val<<endl;
             cout<<"Each diff: "<<diff<<endl;

             if(diff>max_diff){
                max_diff=diff;
                cout<<"Change hoise: "<<max_diff<<endl;
             }

            no_divisors--;
            //only_once--;
            index++;
       }


       // cout<<min_val<<endl;
       // cout<<max_val<<endl;
       // cout<<max_val-min_val<<endl;
       // cout<<diff<<endl;
       cout<<"Max diff: "<<max_diff<<endl;
       //cout<<max_diff<<endl;

       if(t==tester_stuff && max_diff==2128952561){
            cout<<n<<endl;
            for(auto x:v1){
                cout<<x<<" ";
            }
            cout<<endl;
       }
       else{
        cout<<max_diff<<endl;
       }
   

    	t--;
    }

    return 0;
}
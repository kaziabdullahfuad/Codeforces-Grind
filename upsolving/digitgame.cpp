//problem link:https://codeforces.com/problemset/problem/1419/A
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;
    	//cout<<s<<endl;

     	ll total_even=0;
     	ll total_odd=0;
     	ll start=1;
     	ll for_raze=0;
     	ll for_bre=0;
    	for(int i=0;i<s.size();i++){
    		
    		ll x=s[i]-48;
    		//cout<<x<<" ";
    		if(x%2==0){
    			total_even++;
    		}
    		else{
    			total_odd++;
    		}

    		if(start%2!=0){
    			if(x%2==0){
    				for_raze++;
    			}
    		}
    		else{
    			if(x%2!=0){
    				for_bre++;
    			}
    		}
    		start++;
    	}
    	// cout<<endl;
    	// cout<<total_even<<" "<<total_odd<<endl;
    	// cout<<for_raze<<" "<<for_bre<<endl;

    	bool razer_wins=false;
    	bool bre_wins=false;
    	for(int i=1;i<=n;i++){
    		// cout<<"HERE: "<<i<<endl;
    		// cout<<"TOTAL EVEN: "<<total_even<<endl;
    		// cout<<"TOTAL ODD: "<<total_odd<<endl;
    		// cout<<"TOTAL for raze: "<<for_raze<<endl;
    		// cout<<"TOTAL for bre: "<<for_bre<<endl;

    		if(total_even==0){
    			razer_wins=true;
    			break;
    		}
    		if(total_odd==0){
    			bre_wins=true;
    			break;
    		}

    		if(i%2!=0){

    			if(for_raze){
    				//cout<<"Razer even katse"<<endl;
    				for_raze--;
    				total_even--;
    			}
    			else{
    				//cout<<"Razer odd katte hoise"<<endl;
    				total_odd--;
    			}
    		}
    		else{

    			if(for_bre){
    				//cout<<"Breeze odd katse"<<endl;
    				for_bre--;
    				total_odd--;
    			}
    			else{
    				//cout<<"Breeze even katte hoise"<<endl;
    				total_even--;
    			}

    		}

    	}

    	if(razer_wins){
    		cout<<1<<endl;
    	}
    	else if(bre_wins){
    		cout<<2<<endl;
    	}
    	


    	t--;
    }

    return 0;
}
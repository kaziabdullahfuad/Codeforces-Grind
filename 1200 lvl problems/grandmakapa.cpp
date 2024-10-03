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

    	string s;
    	cin>>s;

    	// age check koro palindrome ki na

    	bool found=true;

    	ll left=0;
    	ll right=n-1;

    	while(left<right){

    		if(s[left]!=s[right]){
    			found=false;
    			break;
    		}
    		else{
    			left++;
    			right--;
    		}
    	}

    	if(found){
    		cout<<0<<endl;
    	}
    	else{

    		// now dekho ki kora jai

    		// age first element diye kora jai ki na
    		ll left=0;
    		ll right=n-1;

    		while(s[left]==s[right]){

    			left++;
    			right--;
    		}

    		ll a_left=left;
    		ll a_right=right;
    		//cout<<left<<" "<<right<<endl;

    		// prothome dekhob first character diye kora jai ki na
    		char temp=s[right];
    		//cout<<temp<<endl;
    		bool found=true;
    		int count1=0;
    		while(left<right){

    			if(s[left]==s[right]){

    				left++;
    				right--;
    			}
    			else{

    				if(s[left]==temp){
    					count1++;
    					left++;
    				}
    				else if(s[right]==temp){
    					count1++;
    					right--;
    				}
    				else{
    					// duitai temp na complete alada
    					found=false;
    					break;
    				}
    			}
    		}

    		//cout<<found<<" "<<count1<<endl;
    		left=a_left;
    		right=a_right;
    		bool found_two=true;
    		int counttwo=0;
    		temp=s[left];

    		while(left<right){

    			if(s[left]==s[right]){
    				left++;
    				right--;
    			}
    			else{

    				if(s[left]==temp){
    					counttwo++;
    					left++;
    				}
    				else if(s[right]==temp){
    					counttwo++;
    					right--;
    				}
    				else{
    					// duita alada plus temp o na
    					found_two=false;
    					break;
    				}
    			}
    		}
    		//cout<<"HERE"<<endl;
    		//cout<<found_two<<" "<<counttwo<<endl;

    		if(found==false && found_two==false){
    			cout<<-1<<endl;
    		}
    		else if(found==true && found_two==false){

    			cout<<count1<<endl;
    		}
    		else if(found==false && found_two==true){
    			cout<<counttwo<<endl;
    		}
    		else if(found==true && found_two==true){

    			cout<<min(count1,counttwo)<<endl;
    		}


    	}


    	t--;
    }

    return 0;
}
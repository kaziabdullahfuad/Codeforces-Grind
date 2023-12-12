// problem link-https://codeforces.com/problemset/problem/1902/A
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

    	int n;
    	cin>>n;

    	string s;
    	cin>>s;
    	int no_zeroes=0;
    	int ones=0;
    	for(int i=0;i<s.size();i++){

    		if(s[i]=='0'){
    			no_zeroes++;
    		}
    		else{
    			ones++;
    		}
    	}


    	if(no_zeroes>ones){

    		cout<<"YES"<<endl;
    	}
    	else{

    		//cout<<ones<<" "<<no_zeroes<<endl;
    		bool found=false;
    		for(int i=0;i<s.size()-1;i++){
    			if(s[i]!=s[i+1]){
    				found=true;
    				break;
    				//no_zeroes++;
    			}
    		}
    		//cout<<endl;

	    // 	string holder;

	    // 	for(int i=0;i<s.size()-1;i++){

	    // 		if(s[i]!=s[i+1]){
	    // 			holder.push_back(s[i]);
	    // 			holder.push_back('0');
	    // 			holder.push_back(s[i+1]);
	    // 		}
	    // 		else{
	    // 			if(i==s.size()-2){

	    				
	    // 				holder.push_back(s[i+1]);
	    // 			}
	    // 			else{

	    // 				holder.push_back(s[i]);
	    // 			}
	    // 		}
	    		
	    // 	}
	    // 	cout<<holder<<endl;
	    // 	no_zeroes=0;
	    // 	ones=0;
	    // 	for(int i=0;i<holder.size();i++){

	    // 		if(holder[i]=='0'){
    	// 		no_zeroes++;
    	// 	}
    	// 	else{
    	// 		ones++;
    	// 	}
	    // }
    	//cout<<no_zeroes<<endl;
	    if(found){
	    	cout<<"YES"<<endl;
	    }
	    else{
	    	cout<<"NO"<<endl;
	    }
	 }

    	t--;
    }

    return 0;
}
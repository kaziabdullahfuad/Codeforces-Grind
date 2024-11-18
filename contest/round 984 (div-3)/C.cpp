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

    	// string containing only 0's and 1's
    	string s;
    	cin>>s;
    	// no of queries
    	ll q;
    	cin>>q;

    	// len of s
    	ll n=s.size();
    	//debug(n)

    	if(n<=3){

    		while(q){

    			ll i,v;
    			cin>>i>>v;

    			cout<<"NO"<<endl;

    			q--;
    		}
    	}
    	else{

    		string substring = "1100";    		
    		//cout<<s<<endl;
    		bool found=false;
    		set<ll> s1;
    	// 	if (s.find(substring) !=string::npos) {
    	// 		found=true;
        // 	cout << "Substring found!" << endl;
    	// } 
    	// else {
        // cout << "Substring not found." << endl;
    	// }
    		// cout<<"EKDOM PROTHOM"<<endl;
    		// cout<<s1.size()<<endl;
    		for(int i=0;i<n;i++){

    			if(i>=0 && i+3<n){

    				if(s[i]=='1' && s[i+1]=='1'
    					&& s[i+2]=='0' && s[i+3]=='0'){

    					//cout<<"EKHANE"<<" "<<i<<endl;
    					s1.insert(i);
    					// s1.insert(i+1);
    					// s1.insert(i+2);
    					// s1.insert(i+3);
    				}
    			}
    		}
    		// debug(found)
    		// cout<<"HERE"<<endl;

    		// for(auto x:s1){

    		// 	cout<<x<<" ";
    		// }
    		// cout<<endl;
    		//cout<<"EKDOM"<<endl;
    		//cout<<s1.size()<<endl;
    		while(q){

    			ll i,v;
    			cin>>i>>v;
    			//debug(i)
    			i--;
    			//cout<<i<<" "<<v<<endl;
    			//debug(s)
    			 //debug(i)
    			// debug(v)
    			if((s[i]=='0' && v==0) || (s[i]=='1' && v==1)){

    				// that means kono change hoi nai so ager tai

    				// if(found){
    				// 	cout<<"YES"<<endl;
    				// }
    				// else{
    				// 	cout<<"NO"<<endl;
    				// }
    				if(s1.size()>=1){
    					cout<<"YES"<<endl;
    				}
    				else{
    					cout<<"NO"<<endl;
    				}
    			}
    			else{

    				// ar maane duita alada
    				// left and right a dekhte hobe

    				// baam and daan a ase koita
    				ll left=i+1;
    				ll right=n-i;

    				// debug(left)
    				// debug(right)

    				// age check korbo intersect kore naki set ar shathe

    				if(s1.find(i)!=s1.end()){
    					s1.erase(i);
    				}
    				else{

    					//cout<<"AIJAGAI"<<endl;
    					ll temper=i-3;
    					for(int j=i;j>=max(0ll,temper);j--){

    							if(s1.find(j)!=s1.end()){
    								//cout<<"HERE"<<endl;
    								//cout<<j<<endl;
    								s1.erase(j);
    							}
    					}
    				}
    				// cout<<"AR EKHON"<<endl;
    				// cout<<s1.size()<<endl;

    				if(s[i]=='0'){
    					s[i]='1';
    				}
    				else{
    					s[i]='0';
    				}

    				if(v==0){

    					ll left_index=i-3;
    					if(left>=4){

    						if(s[left_index]=='1' && s[left_index+1]=='1'
    						&& s[left_index+2]=='0' && s[left_index+3]=='0'){

    							s1.insert(left_index);
    						}
    					}

    					if(left>=3 && (n-1-i)>=1){

    						ll left_index=i-2;
    						if(s[left_index]=='1' && s[left_index+1]=='1'
    						&& s[left_index+2]=='0' && s[left_index+3]=='0'){

    							s1.insert(left_index);
    						}
    					}
    				}
    				else if(v==1){

	    					if(right>=4){


	    					if(s[i]=='1' && s[i+1]=='1'
	    						&& s[i+2]=='0' && s[i+3]=='0'){

	    						s1.insert(i);
	    					}
	    				}

	    				if((i-0)>=1 && right>=3){

	    					if(s[i-1]=='1' && s[i]=='1'
	    						&& s[i+1]=='0' && s[i+2]=='0'){
	    						s1.insert(i-1);
	    					}
	    				}
    				}

    				//debug(s1.size())
    				if(s1.size()>=1){
    					cout<<"YES"<<endl;
    				}
    				else{
    					cout<<"NO"<<endl;
    				}

    			}

    			q--;
    		}

    	}
    	

    	t--;
    }

    return 0;
}
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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	string s;
    	cin>>s;

    	vector<ll> prefix(n+1);
    	bool found=false;
    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]+v1[i-1];
    	}

    	//printVector(v1);
    	//printVector(prefix);

    	ll left=0;
    	ll right=n-1;
    	ll sum=0;
    	while(left<right){

    		//cout<<left<<" "<<right<<" "<<sum<<endl;

    		if(s[left]=='L'){

    			if(s[right]=='R'){

    				//cout<<left<<" "<<right<<" "<<sum<<endl;
    				//cout<<left+1<<" "<<right+1<<" ";
    				if(left==0){

    					// first ta tei
    					sum+=prefix[right+1];
    					left++;
    					right--;
    				}
    				else{
    					//cout<<left<<" "<<right<<" "<<sum<<endl;
    					//cout<<"HERE"<<endl;
    					sum+=prefix[right+1]-prefix[left];
    					left++;
    					right--;
    				}
    				//cout<<sum<<endl;
    			}
    			else{

    				while(right>left && s[right]=='L'){

    						right--;
    				}

    				if(right<=left){

    					break;
    				}
    				else{

    					// paise
    					//cout<<"HERE"<<endl;
    					//cout<<left+1<<" "<<right+1<<" ";
    					if(left==0){

    					// first ta tei
	    					sum+=prefix[right+1];
	    					left++;
	    					right--;
    					}
    					else{
	    					sum+=prefix[right+1]-prefix[left];
	    					left++;
	    					right--;

    					}
    					//cout<<sum<<endl;
    				}
    			}
    		}
    		else{
    			left++;
    		}
    		//debug(sum)
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}
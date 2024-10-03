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
    	
    	ll max_val=*max_element(v1.begin(),v1.end());
    	ll min_val=*min_element(v1.begin(),v1.end());

    	//cout<<max_val<<" "<<min_val<<endl;
    	// so the subsegment must be of size 4 or greater
    	// 1,2,3 size ar howa shomvhob na
    	// l,l+1,l+2,...r size ar moddhe jei max and min oita niye concern
    	ll left=0;
    	ll right=n-1;
    	bool found=false;
    	ll baam=0;
    	ll daan=n-1;
    	
    	while(left<right){

    		if((v1[left]==min_val && v1[right]==max_val)
    			|| (v1[left]==max_val && v1[right]==min_val)){

    			// change lagbe duita tei
    			max_val--;
    			min_val++;
    			left++;
    			right--;
    		}
    		else if(v1[left]==min_val){

    			min_val++;
    			left++;
    		}
    		else if(v1[left]==max_val){

    			max_val--;
    			left++;
    		}
    		else if(v1[right]==min_val){

    			min_val++;
    			right--;
    		}
    		else if(v1[right]==max_val){

    			max_val--;
    			right--;
    		}
    		else{
    			found=true;
    			baam=left+1;
    			daan=right+1;
    			break;
    		}
    	}

    	if(found){

    		cout<<baam<<" "<<daan<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}
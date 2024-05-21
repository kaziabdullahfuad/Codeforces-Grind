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

    	string a,b;
    	cin>>a>>b;

    	int len_a=a.size();
    	int len_b=b.size();

    	//debug(len_a) debug(len_b)

    	// duitar moddhe shobche boro contigous sum ber korte hobe

    	if(a==b){
    		cout<<0<<endl;
    	}
    	else{

    		int max_val=0;
    		//cout<<max_val<<endl;
    		int cur=0;
    		for(int i=0;i<len_a;i++){

    			for(int j=0;j<len_b;j++){

    				if(a[i]==b[j]){

    					int temp_i=i;
    					int temp_j=j;
    					cur=0;
    					//cout<<a[i]<<" "<<b[j]<<endl;
    					while(temp_i<len_a && temp_j<len_b && a[temp_i]==b[temp_j]){
    						//cout<<a[temp_i]<<" ";
    						cur++;
    						temp_i++;
    						temp_j++;
    					}
    					//cout<<endl;
    					//debug(cur)
    					max_val=max(max_val,cur);
    				}
    			}
    		}
    		//cout<<max_val<<endl;
    		ll ans=(len_a-max_val)+(len_b-max_val);

    		cout<<ans<<endl;
    	}


    	t--;
    }

    return 0;
}
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

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;

    	ll max_val=0;
    	ll count=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='<'){

    			int go_to=i;
    			count=0;
    			//cout<<go_to<<endl;
    			//debug(go_to);
    			while(go_to<n && s[go_to]=='<'){

    				go_to++;
    				count++;
    				max_val=max(count,max_val);
    			}
    			//debug(go_to);
    			go_to--;
    			//debug(go_to);
    			i=go_to;
    		}
    	}

    	ll another_max=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='>'){

    			int go_to=i;
    			count=0;
    			//cout<<go_to<<endl;
    			//debug(go_to);
    			while(go_to<n && s[go_to]=='>'){

    				go_to++;
    				count++;
    				another_max=max(count,another_max);
    			}
    			//debug(go_to);
    			go_to--;
    			//debug(go_to);
    			i=go_to;
    		}
    	}
    	//cout<<max_val+1<<endl;
    	//cout<<another_max+1<<endl;

    	ll real_max=max(max_val+1,another_max+1);
    	cout<<real_max<<endl;

    	t--;
    }

    return 0;
}
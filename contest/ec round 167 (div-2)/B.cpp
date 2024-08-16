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

    	string s1,s2;
    	cin>>s1>>s2;

    	ll len1=s1.size();
    	ll len2=s2.size();
    	// in s2 check the first char in s1 that matches
    	// ar por oi index ar por ki aro ase naki
    	bool found=false;
    	ll count=0;
    	ll max_count=0;
    	for(int i=0;i<len2;i++){

    		for(int j=0;j<len1;j++){

    			if(s2[i]==s1[j]){
    				found=true;
    				count=1;
    				ll index=i+1;
    				ll index2=j+1;
    				//debug(i) debug(j)
    				while(index<len2){

    					if(index2>=len1){
    						break;
    					}
    					while(index2<len1){

    						if(s1[index2]==s2[index]){
    							//debug(index2) debug(index)
    							index2++;
    							count++;
    							//debug(count)
    							break;
    						}

    						index2++;
    					}
    					index++;
    				}
    				//debug(count)
    				max_count=max(max_count,count);
    			}
    			
    		}

    		
    	}

    	//debug(count)
    	//debug(max_count)
    	ll ans=len1+(len2-max_count);
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}
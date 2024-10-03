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

    	string s1,s2;
    	cin>>s1>>s2;

    	if(s1==s2){

    		cout<<"YES"<<endl;
    	}
    	else{

    		int zero=0;
    		int one=0;	
    		int index=0;
    		
    		
    		bool ekhon=false;
    		for(int i=n-1;i>=0;i--){

    			
    			if(s1[i]!=s2[i]){

    				// oikhan theke shuru kore last
    				
    				ll j=i;
    				
    				index=i;
    				for(;j>=0;j--){
    					
    					if(s1[j]=='0'){
    						zero++;
    					}
    					else{
    						one++;
    					}
    				}
    				ekhon=true;
    				break;
    			}
    			if(ekhon){
    				break;
    			}
    		}

    		cout<<zero<<" "<<one<<" "<<index<<endl;

    		for(int i=0;i<=index;i++){

    			if(s1[i]=='1'){
    				s1[i]='0';
    			}
    			else{
    				s1[i]='1';
    			}
    		}

    		if(zero!=one){
    			cout<<"NO"<<endl;
    		}
    		else{
    			bool found=true;
    			bool convert=false;
    			//cout<<s1<<endl;
    			for(int i=index;i>=0;i--){

    				if(convert){

    					// ekhane equal hobe na
    					//  hole dekhte hobe zero and one equal ki na
    					// equal hole convert  false
    					if(s1[i]!=s2[i]){

    						if(s1[i]=='1'){
    							zero--;
    						}
    						else{
    							one--;
    						}
    					}
    					else{
    						//cout<<i+1<<" "<<s1[i]<<" "<<s2[i]<<endl;
    						//debug(zero) debug(one)
    						if(one==zero){

    							convert=false;
    							i-=1;
    						}
    						else{
    							found=false;
    							break;
    						}
    					}
    				}
    				else{

    					// ekhane equal hote hobe
    					// na hole dekhte hobe zero and one equal ki na
    					// equal hole convert nahole false
    					if(s1[i]==s2[i]){

    						if(s1[i]=='1'){
    							one--;
    						}
    						else{
    							zero--;
    						}
    					}
    					else{
    						//cout<<i+1<<" "<<s1[i]<<" "<<s2[i]<<endl;
    						//debug(zero) debug(one)
    						if(one==zero){

    							convert=true;
    							i-=1;
    						}
    						else{
    							found=false;
    							break;
    						}
    					}
    				}
    			}

    			if(found){
    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}
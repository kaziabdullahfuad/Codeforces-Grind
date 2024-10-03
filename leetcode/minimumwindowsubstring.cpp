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
class Solution {
public:
    string minWindow(string s, string t) {
        
        string ans="";
        int n=s.size();
        int ts=t.size();

        int have=0;
        int need=0;
        unordered_map<char,int> m2; // t ar jonno
        unordered_map<char,int> m1; // s ar jonno
        for(int i=0;i<ts;i++){

        	m2[t[i]]++;
        }

        //cout<<s<<endl;
        //cout<<t<<endl;

        need=m2.size();
        //cout<<need<<endl;
        int left=0;
        bool found=false;
        int baam=0;
        int daan=n-1;
        int min_val=1e9;
        for(int i=0;i<n;i++){

        	m1[s[i]]++;

        	if(m2.count(s[i])){

        		if(m1[s[i]]==m2[s[i]]){
        			have++;
        		}
        	}

        	if(have==need){

        		// shobche age shei dui index ber korbo
        		found=true;
        		int sublen=i-left+1;
        		//cout<<"HERE"<<" "<<left<<" "<<i<<" "<<sublen<<endl;
        		if(sublen<min_val){
        			min_val=sublen;
        			baam=left;
        			daan=i;
        		}

        		// now make sure korte hobe have<need

        		while(have==need){

        			m1[s[left]]--;
        			//debug(left)
        			if(m2.count(s[left])){
        				// mane ata te achhe ki na

        				if(m1[s[left]]<m2[s[left]]){
        					have--;
        					left++;
        					break;
        				}
        				else{
        					// keep taking len?

        					left++;
        					int len=i-left+1;
        					if(len<min_val){

        						min_val=len;

        						baam=left;
        						daan=i;
        						//cout<<"PATAL"<<" "<<baam<<" "<<daan<<" "<<min_val<<endl;
        					}
        				}
        			}
        			else{
        				left++;
        				int len=i-left+1;
    					if(len<min_val){
    						min_val=len;
    						baam=left;
    						daan=i;
    						//cout<<"PATAL"<<" "<<baam<<" "<<daan<<" "<<min_val<<endl;
    					}
        			}
        			
        		}

        	}
        }
        //cout<<baam<<" "<<daan<<" "<<min_val<<endl;

        if(!found){
        	return "";
        }
        else{

        	for(int i=baam;i<=daan;i++){
        		ans+=s[i];
        	}

        	return ans;
        }

        
    }
};
int main()
{
	Solution sol1;

	int z;
	cin>>z;

	while(z){

		string s,t;
		cin>>s>>t;

		string ans;
		ans=sol1.minWindow(s,t);

		cout<<ans<<endl;


		z--;
	}
	

    return 0;
}
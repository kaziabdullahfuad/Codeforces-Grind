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
    	set<char> s1;

    	for(int i=0;i<s.size();i++){
    		s1.insert(s[i]);
    	}
    	
    	if(s.size()==1){

    		cout<<s<<endl;
    	}
    	else{

    		if(s1.size()==1){
    			cout<<s<<endl;
    		}
    		else{

    			//int x=s.size()-1;
    			//debug(x)

    		if(s[0]<s[s.size()-1]){

    			cout<<s<<endl;
    		}
    		else if(s[0]==s[s.size()-1]){

    			int left=1;
    			int right=s.size()-2;
    			//debug(left);
    			//debug(right);
    			if(left==right){
    				cout<<s<<endl;
    			}
    			else{

    				bool left_found=false;
    				bool right_found=false;
    				while(left<right){

    					if(s[left]<s[right]){
    						//cout<<"LEFT FOUND"<<endl;
    						left_found=true;
    						break;
    					}
    					else if(s[left]>s[right]){
    						//cout<<"Right FOUND"<<endl;
    						right_found=true;
    						break;
    					}

    					left++;
    					right--;
    				}

    			if(left_found==false && right_found==false){
    				//cout<<"DUITA FALSE"<<endl;
    				cout<<s<<endl;
    			}
    			else if(left_found){
    				cout<<s<<endl;
    			}
    			else if(right_found){

    				string temp=s;
    				//debug(temp)
    				reverse(all(s));

    				s+=temp;
    				cout<<s<<endl;
    			}
    		}



    		}
    		else{

    			

				string hold=s;

				reverse(all(s));
				//debug(s)
				//reverse(hold.begin(),hold.end());
				s+=hold;
				cout<<s<<endl;

    			
    		}
    	}

    	}

    	t--;
    }

    return 0;
}
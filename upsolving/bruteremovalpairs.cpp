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

    	// cout<<s<<endl;
    	// s.erase(0,2);
    	// cout<<s<<endl;

    	//cout<<s<<endl;

    	ll left=0;
    	ll right=1;

    	while(left<right && right<s.size()){

    		if(s[left]!=s[right]){
    			//cout<<"Left and Right"<<endl;
    			//cout<<left<<" "<<right<<endl;
    			//cout<<s<<endl;
    			s.erase(left,2);
    			left=0;
    			right=1;
    		}
    		else{

    			left++;
    			right++;
    		}
    		cout<<s<<endl;

    		if(s.size()==0 || s.size()==1){
    			break;
    		}
    		
    	}
    	//cout<<"Last"<<endl;
    	//cout<<s<<endl;
    	cout<<s.size()<<endl;


    	t--;
    }

    return 0;
}
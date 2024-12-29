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

    	string s;
    	cin>>s;

    	ll n=s.size();

    	ll sum=0;
    	ll full_sum=0;
    	ll two=0;
    	ll three=0;
    	for(int i=0;i<n;i++){

    		full_sum+=s[i]-'0';

    		if(s[i]=='2'){
    			two++;
    		}
    		else if(s[i]=='3'){
    			three++;
    		}
    	}

    
    	ll mod=full_sum%9;
    	//debug(mod)

    	ll remain=9-mod;

    	// debug(full_sum)
    	// debug(mod)
    	// debug(remain)
    	// debug(two)
    	// debug(three)
    	if(full_sum%9ll==0){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// even hobe
    		//ll remain=9-mod;

    		if(remain==2 && two>=1){
    			cout<<"YES"<<endl;
    		}
    		else if(remain==4 && two>=2){
    			cout<<"YES"<<endl;
    		}
    		else if(remain==6 && (two>=3 || three>=1)){

    			cout<<"YES"<<endl;
    		}
    		else if(remain==8 && (two>=4 || (two>=1 && three>=1))){

    			cout<<"YES"<<endl;
    		}
    		else if(mod==2 && (two>=8 || (three>=1 && two>=5)
    			||(three>=2 && two>=2))){

    			// so 18-2=16 banate hobe
    			cout<<"YES"<<endl;

    		}
    		else if(mod==4 && (two>=7 || (three>=1 && two>=4)
    			||(three>=2 && two>=1))){

    			// so 18-4=14 banate hobe
    			cout<<"YES"<<endl;
    		}
    		else if(mod==6 && (two>=6 || (three>=1 && two>=3)
    			||(three>=2))){

    			// so 18-6=12 banate hobe
    			cout<<"YES"<<endl;
    		}
    		else if(mod==8 && (two>=5 || (three>=1 && two>=2))){

    			// so 18-8=10 banate hobe
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}

    	}

    	t--;
    }

    return 0;
}
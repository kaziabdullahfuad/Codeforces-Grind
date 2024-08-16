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

    	ll a,b,c;
    	cin>>a>>b>>c;

    	ll ba=b-a;
    	ll cb=c-b;

    	if(cb==ba){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// a,b,c individually dekhte hobe

    		// first a
    		//debug(cb)
    		ll for_a=b-cb;
    		//cout<<for_a<<endl;
    		// now b
    		ll ca=c-a;
    		bool ca_dif=false;
            if(ca%2==0){
                ca_dif=true;
                ca/=2;
            }
    		ll for_b=(a+ca);
    		//cout<<ca<<" "<<for_b<<endl;

    		// now c
    		ll for_c=a+(2*ba);
    		if(for_a%a==0 && for_a>a){
    			cout<<"YES"<<endl;
    		}
    		else if(for_b%b==0 && for_b>b && ca_dif==true){
    			cout<<"YES"<<endl;
    		}
    		else if(for_c%c==0 && for_c>c){
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
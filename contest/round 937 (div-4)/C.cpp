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

    	// 12 theke boro hole pm
    	// 00 mane 12am
    	// 12 amnite mane 12 pm

    	string s;
    	cin>>s;


    	// 0 diye shuru howa manei am a pore

    	if(s[0]=='0' && s[1]=='0'){
    		// 12 am aita
    		s[0]='1';
    		s[1]='2';
    		cout<<s<<" "<<"AM"<<endl;
    	}
    	else if(s[0]=='0'){

    		// am ai pore ata
    		cout<<s<<" "<<"AM"<<endl;
    	}// am shob handled
    	else if((s[0]=='1' && s[1]=='0')){

    			//cout<<"AITATE"<<endl;
    			cout<<s<<" "<<"AM"<<endl;
    	}
    	else if((s[0]=='1' && s[1]=='1')){
    		//cout<<"AITATE"<<endl;
    		cout<<s<<" "<<"AM"<<endl;
    	}
    	else if(s[0]=='1' && s[1]=='2'){
    		// ar maane pm
    		cout<<s<<" "<<"PM"<<endl;
    	}
    	else{

    		// hour ar ta dekho 1 theke 9 hole ar age ekta 0 boshai diba

    		string holder="";
    		holder+=s[0];
    		holder+=s[1];
    		ll val=stoi(holder);
    		//cout<<holder<<endl;
    		//cout<<val<<endl;

    		if(val>=1 && val<=21){

    			ll mod_val=val%12;
    			//cout<<mod_val<<endl;

    			s[0]='0';
    			s[1]='0'+mod_val;

    			cout<<s<<" "<<"PM"<<endl;
    		}
    		else{

    			ll mod_val=val%12;

    			if(mod_val==10){

    				s[0]='1';
    				s[1]='0';

    				cout<<s<<" "<<"PM"<<endl;
    			}
    			else if(mod_val==11){

    				s[0]='1';
    				s[1]='1';

    				cout<<s<<" "<<"PM"<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}
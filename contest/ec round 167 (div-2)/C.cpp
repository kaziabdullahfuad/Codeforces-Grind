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
    	vector<ll> v1(n);
    	vector<ll> v2(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    		
    	}
    	
    	ll pos=0;
    	ll neg=0;
    	ll ra=0;
    	ll rb=0;
    	for(int i=0;i<n;i++){

    		if(v1[i]==v2[i]){

    			if(v1[i]==1){
    				pos++;
    			}
    			else if(v1[i]==-1){
    				neg++;
    			}
    		}
    		else{

    			if(v1[i]==1){
    				ra++;
    			}
    			else if(v2[i]==1){
    				rb++;
    			}
    		}
    	}

    	//cout<<ra<<" "<<rb<<" "<<pos<<" "<<neg<<endl;


    	if(ra==rb){

    		// tahole just positive and negative distribute
    		// ra>rb
    		// so prothom positive ja ase oita ra dite hobe
    		ll rem=ra-rb;
    		//cout<<rem<<endl;
    		ll rem_pos=min(pos,rem);
    		//cout<<rem_pos<<endl;

    		rb+=rem_pos;
    		pos-=rem_pos;
    		//debug(pos)

    		// now distributing
			ll mid=pos/2;
			ra+=mid+(pos%2);
			rb+=mid;
    		

			//cout<<ra<<" "<<rb<<endl;

    		// now handling negative
			// rb always boro hobe

			rem_pos=ra-rb;
			rem_pos=min(rem_pos,neg);
			ra-=rem_pos;
			neg-=rem_pos;
			//cout<<rb<<" "<<rem_pos<<" "<<neg<<endl;

			// now distribute

			ra-=(neg/2);
			ra-=(neg%2);
			rb-=(neg/2);

			cout<<min(ra,rb)<<endl;

    	}
    	else if(ra>rb){

    		// ra>rb
    		// so prothom positive ja ase oita ra dite hobe
    		ll rem=ra-rb;
    		//cout<<rem<<endl;
    		ll rem_pos=min(pos,rem);
    		//cout<<rem_pos<<endl;

    		rb+=rem_pos;
    		pos-=rem_pos;
    		//debug(pos)

    		// now distributing
			ll mid=pos/2;
			ra+=mid+(pos%2);
			rb+=mid;
    		

			//cout<<ra<<" "<<rb<<endl;

    		// now handling negative
			// rb always boro hobe

			rem_pos=ra-rb;
			rem_pos=min(rem_pos,neg);
			ra-=rem_pos;
			neg-=rem_pos;
			//cout<<rb<<" "<<rem_pos<<" "<<neg<<endl;

			// now distribute

			ra-=(neg/2);
			ra-=(neg%2);
			rb-=(neg/2);

			cout<<min(ra,rb)<<endl;
    	}
    	else{

    		// rb>ra
    		// so prothom positive ja ase oita ra dite hobe
    		ll rem=rb-ra;
    		//cout<<rem<<endl;
    		ll rem_pos=min(pos,rem);
    		//cout<<rem_pos<<endl;

    		ra+=rem_pos;
    		pos-=rem_pos;
    		//debug(pos)

    		// now distributing
			ll mid=pos/2;
			rb+=mid+(pos%2);
			ra+=mid;
    		

			//cout<<ra<<" "<<rb<<endl;

    		// now handling negative
			// rb always boro hobe

			rem_pos=rb-ra;
			rem_pos=min(rem_pos,neg);
			rb-=rem_pos;
			neg-=rem_pos;
			//cout<<rb<<" "<<rem_pos<<" "<<neg<<endl;

			// now distribute

			rb-=(neg/2);
			rb-=(neg%2);
			ra-=(neg/2);

			cout<<min(ra,rb)<<endl;

    	}

    	t--;
    }

    return 0;
}
//problem link:https://codeforces.com/problemset/problem/1879/A
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // pair<int,int> p1;
    // p1={12,43};

    // cout<<p1.first<<endl;
    // cout<<p1.second<<endl;

    int t;
    cin>>t;

    while(t){
		    int n;
		    cin>>n;
		    vector<pair<int,int>> v1;

		    for(int i=0;i<n;i++){
		    	int val1,val2;
		    	cin>>val1>>val2;

		    	//cout<<val1<<" "<<val2<<endl;
		    	pair<int,int>holder={val1,val2};

		    	v1.push_back(holder);
		    }

		    // for(auto x:v1){
		    // 	cout<<x.first<<" "<<x.second<<endl;
		    // }

		    int first_str=v1[0].first;
		    int first_endu=v1[0].second;

		    bool found;

		    for(int i=1;i<v1.size();i++){
		    	found=true;

		    	if(v1[i].first>=first_str && v1[i].second>=first_endu){
		    		found=false;
		    		break;
		    	}
		    }

		    if(found){
		    	cout<<first_str<<endl;
		    }
		    else{
		    	cout<<-1<<endl;
		    }


		    // // if(t==(100-4+1)){

		    // // 	cout<<n<<endl;

		    // // 	for(auto x:v1){
		    // // 		cout<<x.first<<" "<<x.second<<endl;
		    // // 	}
		    // // }

		    // // another way

		    // //find the highest endurance
		    // int max_end=1;
		    // // find first endurance
		    // int first_str=v1[0].first;
		    // int first_endu=v1[0].second;

		    // // find max endurance and str
		    // int str=1;
		    // for(int i=1;i<v1.size();i++){

		    // 	if(v1[i].second>max_end){
		    // 		max_end=v1[i].second;
		    // 		str=v1[i].first;
		    // 	}

		    // }
		    // // cout<<first_str<<" "<<first_endu<<endl;
		    // // cout<<str<<" "<<max_end<<endl;

		    // if(str>=first_str){
		    // 	cout<<-1<<endl;
		    // }
		    // else{
		    	
		    // 	//cout<<first_str<<endl;
		    // 	bool found=true;
		    // 	for(int i=1;i<v1.size();i++){
		    // 		found=true;
		    // 		if(v1[i].first>=first_str && v1[i].second>=first_endu){
		    // 			found=false;
		    // 			break;
		    // 		}
		    // 	}

		    // 	if(found){
		    // 		cout<<first_str<<endl;
		    // 	}
		    // 	else{
		    // 		cout<<-1<<endl;
		    // 	}
		    // }

		    // int max_str=v1[0].first;
		    // int endu=v1[0].second;
		    // bool found=true;
		    // int i=1;
		    // //cout<<max_str<<endl;
		    // for(i;i<=max_str;i++){
		    // 	found=true;
		    // 	for(int j=1;j<v1.size();j++){

		    // 		if(v1[j].first>=i){
		    			
		    // 			if(v1[j].second>=endu){
		    // 				found=false;
		    // 				break;
		    // 			}
		    // 		}
		    		
		    // 	}
		    // 	if(found)
		    // 		break;

		    // }

		    // if(found){
		    // 	cout<<i<<endl;
		    // }
		    // else{
		    // 	cout<<-1<<endl;
		    // }
    	t--;
	}

    return 0;
}
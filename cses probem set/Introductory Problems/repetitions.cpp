#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //ATTCGGGA
    // ACACACACAC-> 1
    string s;
    cin>>s;
    int count=1;
    int max_count=0;
    bool found=false;


    for(int i=1;i<s.size();i++){

    	if(s[i]!=s[i-1]){

    		max_count=max(max_count,count);
    		count=0;
    	}
    	
    	count++;
    }

    max_count=max(max_count,count);

    cout<<max_count<<endl;

    // for(int i=0;i<s.size()-1;i++){
    // 	found=false;

    // 	if(s[i]==s[i+1]){
    // 		count=0;
    // 		count++;
    // 		found=true;
    // 		while(s[i]==s[i+1] && i!=s.size()-1){

    // 			count++;
    // 			i++;
    // 		}
    // 	}

    // 	if(count>max_count){
    // 		max_count=count;
    // 	}

    // 	if(found){
    // 		i--;
    // 	}

    // }

    // cout<<max_count<<endl;

    return 0;
}
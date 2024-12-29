vector<ll> holder;
    			for(int i=0;i<n;i++){

    				if(v1[i]==0){
    					holder.push_back(i);
    				}
    			}

    			//printVector(holder);
    			bool found=true;
    			for(int i=1;i<holder.size();i++){

    				//debug(holder[i])
    				ll diff=holder[i]-holder[i-1];
    				debug(diff)
    				if(diff>1){
    					found=false;
    					break;
    				}
    			}

    			if(found){

    				cout<<1<<endl;
    			}
    			else{
    				cout<<2<<endl;
    			}
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	char end;
	int a[1010];
	int i=0;
    cin>>a[i];
    cin>>end;
    while(end!='#'){
    	cin>>a[i++];
    	cin>>end;
	}
	int k;
	cin>>k;
	for(int j=0;j<i;j++){
		if(j+3<i){
			for(int t=j+2;t>=j;t--){
				cout<<a[t]<<"->";
			}
		}
		else{
			cout<<a[j]<<endl;
		}
	}
	return 0;
}

//git is a distrributed version control system.
//git is free software distributed under the GPL. 
//git has a mutable index called stage.
//git tracks changes.

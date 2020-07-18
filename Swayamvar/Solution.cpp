#include <bits/stdc++.h>
using namespace std;

int getCount(string bride, int r, int m, int N){
	int count=0;
	for(int i=0; i<N; i++){
		if(bride[i]=='r'){
			if(r<=0) return count;
			r--; count++;
		}
		else if(bride[i]=='m'){
			if(m<=0) return count;
			m--; count++;
		}
	}
	return count;
}

int main(){
	int r=0, m=0, N; cin >> N;
	string bride, groom;
	cin >> bride >> groom;
	for(int i=0;i<N;i++){
		if(groom[i]=='r') r++;
		else if(groom[i]=='m') m++;
	}
	cout << N-getCount(bride, r, m, N);
	
	return 0;
}

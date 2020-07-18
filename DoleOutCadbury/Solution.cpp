#include <bits/stdc++.h>
using namespace std;

int main(){
    int P,Q,R,S; 
    cin >> P;
    cin >> Q;
    cin >> R;
    cin >> S;
    int x, y, xMody, count=0;
    for(int i=P; i<=Q; i++){
        for(int j=R; j<=S; j++){
            x = max(i,j); y = min(i,j);
            while(y != 0){
                if(x%y==0) break;
                count += x/y;
                xMody = x%y;
                x = y; y = xMody;
            }
            count += x/y;
        }
    }
    cout << count;
    return 0;
}

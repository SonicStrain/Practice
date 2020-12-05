#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    int ar[n+m];
    
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    for(int i=0;i<m;i++){
        cin >> ar[n+i];
    }
    
    sort(ar,ar+(n+m));
    int count = 1,temp = ar[0];
    for(int i=0;i<(n+m);i++){
        if(temp == ar[i]) continue;
        temp = ar[i];
        count++;
    }
    cout << count << "\n";
}

int main() {
	//code
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    solve();
	}
	return 0;
}

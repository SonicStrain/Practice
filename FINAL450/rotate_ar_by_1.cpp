#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n-1;i++){
        cin >> ar[i+1];
    }
    cin >> ar[0];
    
    for(int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
    cout << "\n";
}

int main() {
	//code
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
	    solve();
	}
	return 0;
}

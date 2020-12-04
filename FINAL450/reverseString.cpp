#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int len = (int)s.size();
    string es = s;
    /*----------------------*/
    /*        Simple        */
    /*----------------------*/
    string temp1 = s;
    
    for(int i=0;i<len;i++){
        temp1[i] = s[len-i-1];
    }
    
    cout << temp1 << "\n";
    /*----------------------*/
    /*     Using STL        */
    /*----------------------*/

    reverse(s.begin(),s.end());  
    // Alternatively string rev = string(s.rbegin(),s.rend());
    // Using the constructor
    cout << s << "\n";
    
    /*---------------------*/
    /*    Efficient        */
    /*---------------------*/
    
    for(int i=0;i<len/2;i++){
        swap(es[i],es[len-i-1]);
    }
    
    cout << es;
    
    /*---------------------*/
    
	return 0;
}

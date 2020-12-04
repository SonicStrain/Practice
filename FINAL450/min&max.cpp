#include <iostream>
using namespace std;

//<----------------------------------------------------->

struct Pair{
    int max;
    int min;
};

Pair getValue(int ar[],int s){
    Pair p;
    
    p.max = ar[0];
    p.min = ar[0];
    for(int i=1;i<s;i++){
        if(p.max < ar[i]) p.max = ar[i];
        if(p.min > ar[i]) p.min = ar[i];
    }
    return p;
}

//<----------------------------------------------------->

int main() {
    
    int ar[] = {1,2,3,4,5,6,7,5,4,3,2,1};
    
    Pair value = getValue(ar,12); //12 is the size of the array
    
    cout << value.min << " " << value.max;
    
	return 0;
}

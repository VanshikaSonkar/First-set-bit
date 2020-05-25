#include<stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n){
    
    if(n==0)
        return 0;
    int i=0;
    while(true){
        int x= n&(1<<i);
        if(x!=0)
            return i+1;
        i++;  
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printf("%u\n", getFirstSetBit(n));
    }
    return 0;
}

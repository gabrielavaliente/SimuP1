#include <iostream>

using namespace std;


int main(){

    int n, total=0;
    int values [5] = {1,5,10,20,100};
    cin>>n;

    for(int i=4;i>=0;i--){
        int aux = n/values[i];
        if(n>0 && aux>0){
            
            total += aux;
            n-= (aux*values[i]);
        }
        
        
    }

    cout<<total<<"\n";




    return 0;
};
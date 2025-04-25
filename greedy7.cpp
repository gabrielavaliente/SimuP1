#include <iostream>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n, ones=0,twos=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int aux ;
            cin>>aux;
            if(aux==1) ones++;
            else twos++;

        }

        int total = ones+2*twos;
        if(total%2!=0){
            cout<<"NO"<<"\n";
        }else if(twos%2!=0 && ones==0){
            cout<<"NO"<<"\n";

        }else{
            cout<<"YES"<<"\n";

        }


    }


    return 0;
}
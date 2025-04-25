#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<string> s; 

    cin>>n;
    

    

    while(n>0){
        
        string aux;
        cin>>aux;
        s.push_back(aux);
        n--;
        
    }

    for(string res: s){
        if(res.length()<=10){
            cout<<res<<"\n";
        }else{
            cout<<res[0]<<res.length()-2<<res[res.length()-1]<<"\n";

        }
    }


    
    
   
    return 0;
}
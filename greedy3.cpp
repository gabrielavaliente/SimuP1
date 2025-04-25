#include <set>
#include <iostream>

using namespace std;


int main(){

    set<int> nums;
    int n,p,q;
    cin>>n;
    cin>>p;
    while (p>0)
    {
        int aux;
        cin>>aux;
        nums.insert(aux);
        p--;
    }
    cin>>q;
    while(q>0){
        int aux;
        cin>>aux;
        nums.insert(aux);
        q--;

    }

    if(nums.size()>=n){
        cout<<"I become the guy."<<"\n";
    }else{
        cout<<"Oh, my keyboard!"<<"\n";
    }
    

    return 0;
}
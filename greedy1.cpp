#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main()
{
    int n, total=0;
    tuple<int,int,int> nums;
    vector<tuple<int,int,int>> problems;
    
    cin>>n;

    while(n>0){
        int p,v,t;
        cin>>p>>v>>t;
        nums = make_tuple(p,v,t);
        problems.push_back(nums);
        nums= make_tuple(0,0,0);
        n--;
        
    }

    for(tuple<int,int,int> p :problems){
        int aux = get<0>(p)+get<1>(p)+get<2>(p);
        if(aux>=2){
            total++;
        }
    }


    cout<<total<<"\n";
    



    
   
    return 0;
}
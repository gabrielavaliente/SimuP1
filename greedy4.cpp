#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){

    string s,res;
    vector<int> nums;
    
    cin>>s;
    
    for(int i=0;i<s.length();i+=2){
        int aux = s[i] - '0';
        nums.push_back(aux);
    }

    sort(nums.begin(),nums.end());
    

    for(int i=0;i<nums.size()-1;i++){
        res+= to_string(nums[i])+"+";
    }
 
    res+= to_string(nums.back());

    cout<<res<<"\n";


    



    return 0;
}
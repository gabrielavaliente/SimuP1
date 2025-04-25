#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){


    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> nums;
        cin>>n;

        for(int i=0;i<n;i++){
            int aux;
            cin>>aux;
            nums.push_back(aux);
        }

        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());

            



    }


    return 0;
}
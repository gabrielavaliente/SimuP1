#include <iostream>
#include <vector>

using namespace std;


int main(){

        int n;
        vector<int> nums;
        cin>>n;

        for(int i=0;i<n;i++){
            int aux;
            cin>>aux;
            nums.push_back(aux);
        }

        int prev = nums[0];
        int count = 1, max = 1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>prev){
                count++;
                if(count>max){
                    max=count;
                }
                
            }else{
                count=1;
            }

            prev=nums[i];

        }

        cout<<max<<"\n";



    return 0;
}
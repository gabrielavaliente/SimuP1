#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

int t;

cin>>t;
while(t>0){
    int n,x;
    cin>>n>>x;

    vector<int> nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }

    sort(nums.begin(),nums.end(),[](int a,int b){return a>b;});
    vector<int> sols;
    int count = 0;
    for(int m:nums){
        sols.push_back(m);
        int size = sols.size();
        int min = *min_element(sols.begin(),sols.end());
        if(min*size>=x){
            count++;
            sols.clear();
        }
    }

    cout<<count<<"\n";




t--;


}

    return 0;
}
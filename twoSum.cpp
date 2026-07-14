#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> seen;
    vector<int> nFound = {-1, -1};
    for(size_t i = 0 ; i<nums.size() ; i++){
        int complement = target - nums[i];
        if (seen.count(complement)){
            return {complement, nums[i]};
        }
        seen[nums[i]] = i;
    }
    return nFound;
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> results = twoSum(nums, target);

    if(results[0] == -1){
        cout << "No pair found";
    }else{
        for (int indx : results){
            cout << indx << "\n";
        }
    }
    return 0;
}
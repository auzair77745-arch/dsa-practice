#include <iostream>
#include <vector>
using namespace std;

int SubarraySumOfSizeK(vector<int>& num, size_t k){
    int total = 0;
    int greatest = 0;
    for(size_t i = 0; i<k; i++){
        total = total + num[i];
    }
    greatest = total;
    for(size_t i = 0; i<=num.size()-k-1; i++){
        total = total - num[i] + num[k + i];
        if(total>greatest){
            greatest = total;
        }
    }
    return greatest;
}

int main(){
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 2;
    cout << "The greatest is " << SubarraySumOfSizeK(nums, k);
    return 0;
}
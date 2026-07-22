#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& num, int target){
    int sPointer = 0;
    int ePointer = num.size() - 1;
    while(ePointer >= sPointer){
        int midpoint = (sPointer + ePointer) / 2;
        if(target>num[midpoint]){
            sPointer = midpoint + 1;
        }else if(target<num[midpoint]){
            ePointer = midpoint - 1;
        }else{
            return midpoint;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 5;
    cout << "The index position is " << binarySearch(nums, target);
    return 0;
}
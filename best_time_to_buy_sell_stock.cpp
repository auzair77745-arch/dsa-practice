#include <iostream>
#include <vector>
using namespace std;

int stockPrice(vector<int>& prices){
    int profit = 0;
    int smallestNum = prices[0];
    int diff;
    for(size_t i = 0 ; i<prices.size() ; i++){
        int num = prices[i];
        if(smallestNum > prices[i]){
            smallestNum = prices[i];
        }
        diff = num - smallestNum;
        if(diff > profit){
            profit = diff;
        }
    }
    return profit;
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << stockPrice(prices);
    return 0;
}
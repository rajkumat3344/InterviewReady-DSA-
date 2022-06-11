#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_set<int> visited;
    bool canReach(vector<int>& arr, int start) {
       
       if(start >= 0 && start < arr.size() && visited.insert(start).second){
           return arr[start] == 0 ||
                  canReach(arr, start + arr[start]) || canReach(arr, start - arr[start]);
       }
       return false;
    }
};

int main(){
    return 0;
}
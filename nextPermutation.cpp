#include <iostream>
#include <vector>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) {
       return; 
    } 
    int i = n - 2;
    int j = n - 1;
    int k = n - 1;
    
    while (i >= 0 && nums[i] >= nums[j]) {
        i--;
        j--;
    }

    if (i >= 0) {
        while (nums[k] <= nums[i]) {
            k--;
        }
        swap(nums[k], nums[i]);
    }

    i = j;
    j = n - 1;
    while (i < j) {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}

void printVector(vector<int> t) {
    for (int i : t) {
        cout << i << " " ;
    }
    cout << endl;
}
int main() {
    vector<int> t1 = {4,5,2,6,3,1}; //453126
    vector<int> t2 = {2,3,1}; //312
    vector<int> t3 = {1,2,3,4,5,6}; //123465
    vector<int> t4 = {1,2,3,8,5,7,6,4}; //12386457
    vector<int> t5 = {1,2,3}; //132
    vector<vector<int>> tt = {t1, t2, t3, t4, t5};
    
    for (vector<int> t : tt) {
        nextPermutation(t);
        printVector(t);
    }
    
    return 0;
}


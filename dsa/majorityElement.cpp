#include<iostream>
#include<vector>
using namespace std;

int findMajorityElement(vector<int>& arr) {
    int candidate = - 1, count = 0;

    // phase 1: find a candidate
    for (int num : arr) {
        if (count == 0) {
            candidate = num;
            count  = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count --;
        }
    }
    // phase 2: verify the candidate

    count  = 0;
    for (int num: arr) {
        if (num == candidate) {
            count++;
        }
    }

    // check if candidate is majority element
    if (count > arr.size() / 2) {
        return candidate;
    } else {
        return -1; // no majority element
    }
}

int main() {
    vector<int> arr = {3, 3 ,4 ,2, 4, 4, 2, 4, 4};

    int result = findMajorityElement(arr);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element" << endl;
    }
    return 0;
}

// Question: Find the second largest element in an array
//You are given an array of integers arr[]. Your task is to find the second largest element in the array.

//Examples:
// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.

// Input: arr[] = [10, 5, 10]
// Output: 5
// Explanation: The largest element of the array is 10 and the second largest element is 5.

// Input: arr[] = [10, 10, 10]
// Output: -1
// Explanation: The largest element of the array is 10 and the second largest element does not exist.

// Code Solution: Only the main logic.

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int l=arr.size();
        if(l<2) {
            return -1;
        }
        int first=INT_MIN;
        int second=INT_MIN;
        for(int i=0;i<l;i++) {
            if (arr[i] > first) {
                second=first;
                first=arr[i];
            } else if (arr[i] > second && arr[i] != first) {
                second=arr[i];
            }
        }
        if (second == INT_MIN)
            return -1;
        else 
            return second;
    }
};
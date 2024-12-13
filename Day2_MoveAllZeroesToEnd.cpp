// Question: To move all the zeroes to the end
//You are given an array of integers arr[]. Your task is to move all the zeroes to the end of the array

//Examples:
// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: [1, 2, 4, 3, 5, 0, 0, 0]
// Explanation: There are three 0s that are moved to the end.

// Input: arr[] = [10, 20, 30]
// Output: [10, 20, 30]
// Explanation: No change in array as there are no 0s.

// Input: arr[] = [0, 0]
// Output: [0, 0]
// Explanation: No change in array as there are all 0s.

// Code Solution: Only the main logic.

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int count=0;
        int l=arr.size();
        for(int i=0;i<l;i++) {
            if(arr[i]!=0) {
                int temp=arr[i];
                arr[i]=arr[count];
                arr[count]=temp;
                count+=1;
            }
        }
    }
};
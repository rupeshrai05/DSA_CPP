//implement binary search algorithm using recursion

// #include <iostream>
// using namespace std;    
// int binarySearch(int arr[], int left, int right, int target) {
//     if (left > right) {
//         return -1; // Target not found
//     }
//     int mid = left + (right - left) / 2;
//     if (arr[mid] == target) {
//         return mid; // Target found
//     }
//     else if (arr[mid] > target) {
//         return binarySearch(arr, left, mid - 1, target); // Search in the left half
//     }
//     else {
//         return binarySearch(arr, mid + 1, right, target); // Search in the right half
//     }
// }
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " sorted elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter target element to search: ";
//     cin >> target;
//     int result = binarySearch(arr, 0, n - 1, target);
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found in the array." << endl;
//     }
//     return 0;
// }

//find algorithm whoes time complexity is n cude, n square and constant
//Time complexity n cube
// #include <iostream>
// using namespace std;
// void printCubic(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             for (int k = 0; k < n; k++) {
//                 cout << "Cubic operation: " << i << ", " << j << ", " << k << endl;
//             }
//         }
//     }
// }
// //Time complexity n square
// void printQuadratic(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "Quadratic operation: " << i << ", " << j << endl;
//         }
//     }
// }
// //Time complexity constant
// void printConstant() {
//     cout << "Constant time operation" << endl;
// }
// int main() {
//     int n;
//     cout << "Enter a number for cubic and quadratic operations: ";
//     cin >> n;
//     printCubic(n);
//     printQuadratic(n);
//     printConstant();
//     return 0;
// }

//You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int left = 0;
//         int right = height.size() - 1;
//         int maxWater = 0;

//         while (left < right) {
//             int h = min(height[left], height[right]);
//             int w = right - left;
//             maxWater = max(maxWater, h * w);

//             // move the smaller height pointer
//             if (height[left] < height[right]) {
//                 left++;
//             } else {
//                 right--;
//             }
//         }

//         return maxWater;
//     }
// };


//Remove Element
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int idx = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != val) {
//                 nums[idx] = nums[i];
//                 idx++;
//             }
//         }

//         return idx;
//     }
// };

//Find the Index of the First Occurrence in a String

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n = haystack.size();
//         int m = needle.size();

//         if (m == 0) return 0;

//         for (int i = 0; i <= n - m; i++) {
//             int j = 0;
//             while (j < m && haystack[i + j] == needle[j]) {
//                 j++;
//             }
//             if (j == m) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };


//tapping water problem

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int left = 0, right = n - 1;
//         int leftMax = 0, rightMax = 0;
//         int water = 0;

//         while (left < right) {
//             if (height[left] < height[right]) {
//                 if (height[left] >= leftMax)
//                     leftMax = height[left];
//                 else
//                     water += leftMax - height[left];
//                 left++;
//             } else {
//                 if (height[right] >= rightMax)
//                     rightMax = height[right];
//                 else
//                     water += rightMax - height[right];
//                 right--;
//             }
//         }
//         return water;
//     }
// };

//Valid Palindrome

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int left = 0, right = s.size() - 1;

//         while (left < right) {
//             // skip non-alphanumeric characters
//             while (left < right && !isalnum(s[left]))
//                 left++;
//             while (left < right && !isalnum(s[right]))
//                 right--;

//             // compare characters
//             if (tolower(s[left]) != tolower(s[right]))
//                 return false;

//             left++;
//             right--;
//         }
//         return true;
//     }
// };


//is subsequence

// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int i = 0, j = 0;

//         while (i < s.size() && j < t.size()) {
//             if (s[i] == t[j]) {
//                 i++;
//             }
//             j++;
//         }

//         return i == s.size();
//     }
// };

//intersection of two array 
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> s(nums1.begin(), nums1.end());
//         vector<int> result;

//         for (int x : nums2) {
//             if (s.count(x)) {
//                 result.push_back(x);
//                 s.erase(x);  // ensure uniqueness
//             }
//         }
//         return result;
//     }
// };

/*
    Following solution comes from Leetcode, but I can't run it 
*/

#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int>& nums){
    vector<int>::iterator nums_iter = nums.begin(); 	 
    cout << "[" ;
    while (nums_iter != nums.end()){
	cout << *nums_iter << ", ";
	nums_iter += 1;
    }
    cout << "]" ;
}

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int index = m + n - 1;
        while (i >= 0 && j >= 0){
            if (nums1[i] > nums2[j]){
                nums1[index--] = nums1[i--];
            }
            else{
                nums1[index--] = nums2[j--];
            }
        }
        
        while (j >= 0)
            nums1[index--] = nums2[j--];
    }
};

int main(){
  Solution mySol = Solution();
  int num1_base[] = {1, 2, 4, 5, 6};
  int num2_base[] = {3, 7, 8, 9, 10};
  vector<int> num1(num1_base, num1_base + sizeof(num1_base)/sizeof(int));
  vector<int> num2(num2_base, num2_base + sizeof(num2_base)/sizeof(int));
  mySol.merge(num1, num1.size(), num2, num2.size());
  /*
  int num1_base[] = {0};
  int num2_base[] = {1};
  vector<int> num1(num1_base, num1_base + sizeof(num1_base)/sizeof(int));
  vector<int> num2(num2_base, num2_base + sizeof(num2_base)/sizeof(int));
  mySol.merge(num1, 0, num2, 1);
  */
}

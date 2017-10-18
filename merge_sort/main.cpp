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
    	vector<int>::iterator nums1_iter = nums1.begin(); 	 
    	vector<int>::iterator nums2_iter = nums2.begin();	 
	vector<int>::iterator nums1_end = nums1.begin() + m;
	vector<int>::iterator nums2_end = nums2.begin() + n;
	vector<int> sortedVecotr;
	while (nums1_iter != nums1_end && nums2_iter != nums2_end){
	    if (*nums1_iter < *nums2_iter){
	        sortedVecotr.push_back(*nums1_iter);
		nums1_iter+=1;
	    }
	    else{
		sortedVecotr.push_back(*nums2_iter);
		nums2_iter+=1;
	    }
	}

	if (nums1_iter != nums1_end && nums2_iter != nums2_end)
	    cout << "something wrong !" << endl;

	while (nums1_iter != nums1_end){
	    sortedVecotr.push_back(*nums1_iter);
	    nums1_iter += 1;
    	}
	while (nums2_iter != nums2_end){
	    sortedVecotr.push_back(*nums2_iter);
	    nums2_iter += 1;
    	}

	// let nums1 = sotredVector	
        /*
	for (int i=0; i < m; ++i)
	    nums1[i] = sortedVecotr[i];
	for (int i=0; i < n; ++i)
	    nums1.push_back(sortedVecotr[m+i]);
	*/
	nums1 = sortedVecotr;
	print_vector(nums1);
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

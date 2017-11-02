#include <iostream>
#include <vector>

using namespace std;

int count = 0;

void print_vector(vector<int>& nums){ vector<int>::iterator nums_iter = nums.begin(); 	 
    cout << "[" ;
    while (nums_iter != nums.end()){
	cout << *nums_iter << ", ";
	nums_iter += 1;
    }
    cout << "]" << endl;
}

void quick_sort(vector<int> &input){
  count += 1;
  if (input.size() <= 1)
    return;
  else if (input.size() == 2){
    if (input[0] > input[1]){
      int tmp = input[0];
      input[0] = input[1];
      input[1] = tmp;
    }
    return;
  }
  else{
	vector<int> left;
	vector<int> right;
	vector<int> pivot_vec;
	int size = input.size();
	vector<int>::iterator pivot = input.begin() + size/2;
	vector<int>::iterator iter = input.begin();
	for(iter; iter != input.end(); ++iter){
	  if (*iter < *pivot){
	    left.push_back(*iter);
	  }
	  else if (*iter == *pivot){
	    pivot_vec.push_back(*iter);
	  }
	  else{
	    right.push_back(*iter);
	  }
	}
	quick_sort(left);
	quick_sort(right);
	left.insert(left.end(), pivot_vec.begin(), pivot_vec.end());
	left.insert(left.end(), right.begin(), right.end());
 	input = left;
  }
  
}

int main(){

  int num1_base[] = {8, 2, 5, 7, 4, 3};
  vector<int> num1(num1_base, num1_base + sizeof(num1_base)/sizeof(int));
  quick_sort(num1);
  print_vector(num1);
}

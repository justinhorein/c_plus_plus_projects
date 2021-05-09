// Filters numbers in vector by Odd or Even and subtracts of multiplies them accordingly, into seperate values.  Returns those values.

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> nums = {2, 4, 3, 6, 1, 9};
  int even = 0;
  int odd = 1;

  for (int i = 0; i < nums.size(); i++){
    if (nums[i] % 2 == 0){
      even += nums[i];
    } else {
      odd = odd * nums[i];
    }
  }

  cout << "Sum of even numbers in " << even << "\n";
  cout << "Product of odd number is " << odd << "\n";
}
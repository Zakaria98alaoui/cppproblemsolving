#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isEven(int num){
    return num % 2 == 0;
}
int countEvenNums(const vector<int> &nums){
    int sum {count_if(nums.begin(),nums.end(),isEven)};
    return sum;
}
void printEvenNums(const vector<int> &nums){
    cout << "The number of even numbers is: " << countEvenNums(nums) << " numbers" << endl;
}
int main()
{
    vector<int> myNums{1,5,3,6,10,23,11,4};
    printEvenNums(myNums);
    return 0;
}

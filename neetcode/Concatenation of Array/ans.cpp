#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int nums[] = {1,4,1,2};
	int size = sizeof(nums) / sizeof(nums[0]);

	cout<<size<<endl;
	return 0;
}
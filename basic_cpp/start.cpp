#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	
	std::vector<int> evens;
	std::vector<int> odds;

	cin>>n;
	cin>>k;

	for(int i=0; i<=n; i++){
		if (i%2 != 0){
			evens.push_back(i);
		}else if (i%2 == 0 && i != 0){
			odds.push_back(i);
		}
	}

	vector<int> result;
	result.insert(result.end(), evens.begin(), evens.end());
	result.insert(result.end(), odds.begin(), odds.end());

	cout<<result[k-1]<<endl;
}
#include <iostream>
#include <vector>

using std::cin, std::cout, std::endl;

#define FILESTREAM_

void init() {
	int N, K, a;
	cin >> N >> K;
//	int *MASS = new int[N];
	std::vector<int> MASS;
	for(auto &i: MASS)
		cin >> i;
}

int min_distance() {
	init();
	
	return 0;
}

int main() {

#ifdef FILESTREAM_
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 	
	
	min_distance();

	return 0;
}

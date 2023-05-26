#include <iostream>

int main() {
	uint32_t n = 0,diff;

    bool sort = 1;

	std::cin >> n;
    uint64_t* v = (uint64_t*) malloc(n*sizeof(uint64_t));
	
	for(uint32_t i = 0;i < n;++i){
        std::cin >> v[i];
        if(i >= 1) {
            if(v[i] < v[i - 1]) {
                sort = 0;
            }
        }
    }
	
    if (sort) {
        diff = v[n-1] - v[0];  // back - последний элемент, front - первый
        std::cout << diff;
    }

    else std::cout << -1;

    free(v);
    return 0;
}

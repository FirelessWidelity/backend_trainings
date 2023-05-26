#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using std::cin, std::vector;

#define FILESTREAM_

typedef vector<int32_t> V;

void const print(vector<V> &diff_abs, V &sum) {
//    for (auto const &i: diff_abs) {
//        for (auto const &j: i) printf("%i ", j);
//            printf("\n");
//    }

    for (auto const &j: sum) {
        printf("%i ", j);
    }
}


void calculate_this_shit(const V &numbers, vector<V> &diff_abs, V &sum, const int &k) {
	
	//numbers - наш числовой массив
	//diff_abs[n][V] - посчитанный двумерный массив абсолютной разности
	//sum - массив минимальной суммы по k элементам

	uint16_t absolute = 0;

// eсли индекс равен, либо меньше  предпоследнего, то перебираем цикл. Это нужно для того, чтобы не
// начинать счет заново, а использовать уже посчитанные элементы разности

#define i_ (&i - &numbers[0])
#define last_el numbers[numbers.size() - 1]
	
	for (auto const &i: numbers) {
		uint16_t x = 0;
		if (&i != &last_el) {	// если мы не находимся в конце V numbers, то
			for (uint16_t j = 1 + i_; j < numbers.size(); ++j) {// начинаем считать два соседних элемента 
				absolute = abs(i - numbers.at(j));
				diff_abs[i_][x] = absolute;	
				diff_abs[j][x] = absolute;	
				++x;
				//diff_abs[i_].push_back(absolute);		// в i_ - индекс тоже записываем (см диаг.)
				//diff_abs[j].push_back(absolute);		// в j - индекс тоже записываем (см диаг.)
			}
		}
       std::sort(diff_abs[i_].begin(),diff_abs[i_].end()); //  ======== переделать сортировку для маллок
       for (uint16_t n = 0; n < k; ++n) sum.at(i_) += diff_abs[i_][n];
	}
}





int main() {
	
	int16_t n = 0, k;
	
#ifdef FILESTREAM_
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif	
	
    cin >> n >> k;

    V numbers(n), sum(n);
    
    
    vector<V> diff_abs(n, V());

    diff_abs.reserve(n * (n - 1));

    for (auto &i: numbers) cin >> i;

    calculate_this_shit(numbers, diff_abs, sum, k);
    print(diff_abs, sum);

    return 0;
}

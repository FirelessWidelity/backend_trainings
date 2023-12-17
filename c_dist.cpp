#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using std::cin, std::vector;

#define FILESTREAM_

typedef vector<int32_t> V;

<<<<<<< Updated upstream
<<<<<<< Updated upstream
void const print(vector<V> &diff_abs, V &sum) {
=======
//void print (vector<list<int>> const &diff_abs, V const &sum) {
>>>>>>> Stashed changes
=======
//void print (vector<list<int>> const &diff_abs, V const &sum) {
>>>>>>> Stashed changes
//    for (auto const &i: diff_abs) {
//        for (auto const &j: i) printf ("%i ", j);
//            printf ("\n");
//    }
<<<<<<< Updated upstream
<<<<<<< Updated upstream

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
		if (&i != &last_el) {	// если мы не находимся в конце V numbers, то
			for (uint16_t j = 1 + i_; j < numbers.size(); ++j) {// начинаем считать два соседних элемента 
				absolute = abs(i - numbers.at(j));
				diff_abs[i_].push_back(absolute);		// в i_ - индекс записываем разность
				diff_abs[j].push_back(absolute);		// в j - индекс тоже записываем (см диаг.)
			}
		}

       std::sort(diff_abs[i_].begin(),diff_abs[i_].end());
       for (uint16_t n = 0; n < k; ++n) sum.at(i_) += diff_abs[i_][n];
	}
=======
//    for (auto const &j: sum) printf ("%i ", j);
//}

void print (V const &sum) {
    for (auto const &j: sum) 
        printf ("%i ", j);
>>>>>>> Stashed changes
}



<<<<<<< Updated upstream


int main() {
	
=======
//    for (auto const &j: sum) printf ("%i ", j);
//}

void print (V const &sum) {
    for (auto const &j: sum) 
        printf ("%i ", j);
}



=======
>>>>>>> Stashed changes
void diff_calc_sort (V &numbers, vector<list<int>> &diff_abs, V &sum, const int &k) {
    int absolute = 0;

    for (unsigned i = 0; i < numbers.size ();++i) {                          // бежим по строкам
       for (unsigned j = 0; j < numbers.size ();++j) {                       // бежим по столбцам
           if (i == j) continue;                                        // если тот же индекс, идем дальше
           else {														// иначе считаем разность между ними
               absolute = abs (numbers.at (i) - numbers.at (j));			//
               diff_abs[i].push_back (absolute);
           }
       }
       diff_abs[i].sort ();
	   int counter = 0;
       for (auto const &n: diff_abs[i]) {
		   if (counter == k) { 
		   	break;
		   }
	   	//cout << n << " <- n" << endl;
	    sum.at (i) += n;
	    ++counter;
	   }
    }
}

int main () {

>>>>>>> Stashed changes
	int16_t n = 0, k;
	
#ifdef FILESTREAM_
<<<<<<< Updated upstream
<<<<<<< Updated upstream
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
=======
=======
>>>>>>> Stashed changes
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
#endif

    cin >> n >> k;

    V numbers (n), sum (n);


    vector<list<int>> diff_abs (n, list<int> ());

    //diff_abs.reserve (n * (n - 1));

    for (auto &i: numbers) cin >> i;

    diff_calc_sort (numbers, diff_abs, sum, k);
    //print (diff_abs, sum);
    print (sum);
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes

    return 0;
}

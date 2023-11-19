#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<list>

using std::cin, std::cout, std::endl, std::vector, std::list;

#define FILESTREAM_

typedef vector<int> V;

//void print(vector<list<int>> const &diff_abs, V const &sum) {
//    for (auto const &i: diff_abs) {
//        for (auto const &j: i) printf("%i ", j);
//            printf("\n");
//    }
//    for (auto const &j: sum) printf("%i ", j);
//}

void print(V const &sum) {
    for (auto const &j: sum) printf("%i ", j);
}



void diff_calc_sort(V &numbers, vector<list<int>> &diff_abs, V &sum, const int &k) {
    int absolute = 0;

    for (unsigned i = 0; i < numbers.size();++i) {                          // бежим по строкам
       for (unsigned j = 0; j < numbers.size();++j) {                       // бежим по столбцам
           if (i == j) continue;                                        // если тот же индекс, идем дальше
           else {														// иначе считаем разность между ними
               absolute = abs(numbers.at(i) - numbers.at(j));			//
               diff_abs[i].push_back(absolute);
           }
       }
       diff_abs[i].sort();
	   int counter = 0;
       for (auto const &n: diff_abs[i]) {
		   if (counter >= k) { break; }
		   //cout << n << " <-- n" << endl;
		   sum.at(i) += n;
		   ++counter;
	   }
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


    vector<list<int>> diff_abs(n, list<int>());

    //diff_abs.reserve(n * (n - 1));

    for (auto &i: numbers) cin >> i;

    diff_calc_sort(numbers, diff_abs, sum, k);
    //print(diff_abs, sum);
    print(sum);

    return 0;
}

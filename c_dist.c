#include <stdio.h>
#include <stdlib.h>


int abs (int a);
int qsort_comp (const void* a, const void* b);

void init_variables (int** ARR, int* arr_size, int* cnt_of_neigh);
void init_array (int** ARR, const int* arr_size);
void print_array (const int* ARR, const int arr_size);

void calc_diff (int* ARR, const int* arr_size, int* cnt_of_neigh);

int main () {

freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);

    int* ARR;
    int arr_size;
    int cnt_of_neigh;

    init_variables (&ARR, &arr_size, &cnt_of_neigh);

    calc_diff (ARR, &arr_size, &cnt_of_neigh);

    free (ARR);
    return 0;
}

int abs (int a) {
    if (a > 0)
        return a;
    else
        return -a;
}

int qsort_comp (const void* a, const void* b) {
    int* x = (int*) a;
    int* y = (int*) b;
    return (*x - *y);
}

void init_variables (int** ARR, int* ptr_arr_size, int* ptr_cnt_of_neigh) {
    scanf ("%d %d", ptr_arr_size, ptr_cnt_of_neigh);
    init_array (ARR, ptr_arr_size);
}

void init_array (int** ARR, const int* ptr_arr_size) {
    *ARR = malloc (sizeof (int) * (*ptr_arr_size));
    int i;
    for (i = 0; i < *ptr_arr_size; ++i) {
        scanf("%d", &(*ARR)[i]);
    }
    print_array (*ARR, *ptr_arr_size);
}

void print_array (const int* ARR, const int arr_size) {
    int i;
    for (i = 0; i < arr_size; ++i)
        printf ("%d ", ARR[i]);
    printf ("\n");
}

void calc_diff (int* ARR, const int* ptr_arr_size, int* ptr_cnt_of_neigh) {
    qsort (ARR, *ptr_arr_size, sizeof (int), qsort_comp);
    int sum[*ptr_arr_size];
    int i,j;
    for (i = 0; i < *ptr_arr_size; ++i) {
        sum[i] = 0;
        for (j = 1; j <= *ptr_cnt_of_neigh; ++j) {
            if ((i - j) < 0)
                continue;
            else if ((i + j) > *ptr_arr_size - 1)
                break;
            
/*Если левая сторона меньше, чем правая, суммируем все, что слева. Иначе работаем с правой стороной */
            if (ARR[i - j] < ARR[i + j]) {
                sum[i] += 
            }
            
            sum[i] += abs (ARR[i] - ARR[j]);
        }
    }
    print_array (ARR, *ptr_arr_size);
    print_array (&sum, *ptr_arr_size);
}

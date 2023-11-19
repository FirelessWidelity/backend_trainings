﻿# С. Расстояние
Рассмотрим целочисленный массив a длины n. Назовём расстоянием от индекса $i$ до множества индексов $S$ величину $dist(i,S)=\sum_{j\in S}\vert (a_i - a_j \vert $

Зафиксируем целое число $k$. Рассмотрим функцию $f(i) =  min ~  dist(i,S)$, где минимум берётся по множествам $S$ размера $k$, не содержащим индекс $i$.

Определите значение $f(i)$ для всех $i$ от $1$ до $n$. 

## Формат ввода
В первой строке заданы два целых числа $n$ и $k$ $(2 \leq n \leq 300000, 1 \leq k < n)$, описанные в условии.

Во второй строке содержится $n$ целых чисел $a_i$ $(1 \leq a_i \leq 10^9)$ — элементы массива $a$.
## Формат вывода
Выведите $n$ целых чисел: значения $f(i)$ для $i=1,i=2,…,i=n$. 
## Пример

| Ввод<br> | Вывод<br> |
| --- | --- |
| 5 3<br>3 2 5 1 2 | <br>4 2 8 4 2 |


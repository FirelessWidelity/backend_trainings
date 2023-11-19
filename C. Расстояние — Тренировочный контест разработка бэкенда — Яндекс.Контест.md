Любите решать сложные задачи? Приходите на стажировку в Яндексе![Подробнее](https://clck.ru/aiCpL)

[Яндекс](https://www.ya.ru/)[](https://contest.yandex.ru/)

[Контест](https://contest.yandex.ru/)

Русский

- Русский
- [Английский](http://contest.yandex.ru/contest/28412/problems/C/?success=82780821&lang=en)
- [Ещё](http://tune.yandex.ru/lang/)

[tungus.rulit1337](https://passport.yandex.ru/passport?mode=passport)

- [99+ новых писем](https://mail.yandex.ru/)
- [Написать письмо](https://mail.yandex.ru/compose)
- [Мой Диск](https://disk.yandex.ru/?source=main-loginmenu)

- [Настройка](http://tune.yandex.ru/)
- [Паспорт](https://passport.yandex.ru/)
- [Выйти](https://passport.yandex.ru/passport?mode=logout&yu=2904081411700340340&retpath=http%3A%2F%2Fcontest.yandex.ru%2Fcontest%2F28412%2Fproblems%2FC%2F%3Fsuccess%3D82780821)
- [Пробный контест](https://contest.yandex.ru/contest/3/enter/)
- [Архив соревнований](https://contest.yandex.ru/contest-list/)
- [Настройки компиляторов](https://contest.yandex.ru/compilers/)
- [Значения ошибок](https://contest.yandex.ru/errors/)
- [Команды](https://contest.yandex.ru/teams/)

[Тренировочный контест: разработка бэкенда](https://contest.yandex.ru/contest/28412/enter/?retPage=)

19 ноя 2023, 01:54:22

старт:

29 окт 2022, 00:05:19

начало:

1 янв 2021, 02:00:00

...

Объявления жюри

Завершить

- [Задачи](https://contest.yandex.ru/contest/28412/problems/)
- [Посылки](https://contest.yandex.ru/contest/28412/submits/)
# **C. Расстояние**

<table><tr><th><b>Язык</b></th><th><b>Ограничение времени</b></th><th><b>Ограничение памяти</b></th><th><b>Ввод</b></th><th><b>Вывод</b></th></tr>
<tr><td>Все языки</td><td>2 секунды</td><td>512Mb</td><td rowspan="5">стандартный ввод или input.txt</td><td rowspan="5">стандартный вывод или output.txt</td></tr>
<tr><td>Python 3.7.3</td><td>4 секунды</td><td>512Mb</td></tr>
<tr><td>Python 3.7 (PyPy 7.3.3)</td><td>4 секунды</td><td>512Mb</td></tr>
<tr><td>Python 2.7</td><td>4 секунды</td><td>512Mb</td></tr>
<tr><td>PHP 7.3.5</td><td>4 секунды</td><td>512Mb</td></tr>
</table>
Рассмотрим целочисленный массив 

a

длины 

n

. Назовём *расстоянием* от индекса 

i

до множества индексов 

S

величину 

d

i

s

t

(

i

,

S

)

\=

∑

j

∈

S

∣

∣

a

i

−

a

j

∣

∣

. 

Зафиксируем целое число 

k

. Рассмотрим функцию 

f

(

i

)

\=

min

d

i

s

t

(

i

,

S

)

, где минимум берётся по множествам 

S

размера 

k

, **не** **содержащим индекс** 

i

. 

Определите значение 

f

(

i

)

для всех 

i

от 

1

до 

n

. 
## **Формат ввода**
В первой строке заданы два целых числа 

n

и 

k

(

2

≤

n

≤

3

0

0	

0

0

0

, 

1

≤

k

<

n

), описанные в условии. 

Во второй строке содержится 

n

целых чисел 

a

i

(

1

≤

a

i

≤

1

0

9

) — элементы массива 

a

. 
## **Формат вывода**
Выведите 

n

целых чисел: значения 

f

(

i

)

для 

i

\=

1

,

i

\=

2

,

…

,

i

\=

n

. 
### **Пример 1**

|<p>**Ввод**</p><p>** </p>|<p>**Вывод**</p><p>** </p>|
| :-: | :-: |
|<p>4 2</p><p>1 2 3 4</p>|3 2 2 3|
### **Пример 2**

|<p>**Ввод**</p><p>** </p>|<p>**Вывод**</p><p>** </p>|
| :-: | :-: |
|<p>5 3</p><p>3 2 5 1 2</p>|4 2 8 4 2|
### **Пример 3**

|<p>**Ввод**</p><p>** </p>|<p>**Вывод**</p><p>** </p>|
| :-: | :-: |
|<p>6 2</p><p>3 2 1 101 102 103</p>|3 2 3 3 2 3|
## **Примечания**
Рассмотрим первый пример. 

При 

i

\=

1

оптмиальное 

S

` `— это 

{

2

,

3

}

; 

d

i

s

t

(

1

,

{

2

,

3

}

)

\=

|

1

−

2

|

\+

|

1

−

3

|

\=

3

. 

При 

i

\=

2

оптмиальное 

S

` `— это 

{

1

,

3

}

; 

d

i

s

t

(

2

,

{

1

,

3

}

)

\=

|

2

−

1

|

\+

|

2

−

3

|

\=

2

. 

При 

i

\=

3

оптмиальное 

S

` `— это 

{

2

,

4

}

; 

d

i

s

t

(

3

,

{

2

,

4

}

)

\=

|

3

−

2

|

\+

|

3

−

4

|

\=

2

. 

При 

i

\=

4

оптмиальное 

S

` `— это 

{

2

,

3

}

; 

d

i

s

t

(

4

,

{

2

,

3

}

)

\=

|

4

−

2

|

\+

|

4

−

3

|

\=

3

. 

<a name="46814/2021_01_28/eujkiypw7n"></a>ЯзыкGNU c++17 7.3 FORMDROPDOWN 

Набрать здесьОтправить файл






1

#include<iostream>

2

#include<vector>

3

#include<cmath>

4

#include<algorithm>

5

#include<list>

6

​

7

using std::cin, std::cout, std::endl, std::vector, std::list;

8

​

9

#define FILESTREAM\_

10

​

11

typedef vector<int> V;

12

​

13

//void print(vector<list<int>> const &diff\_abs, V const &sum) {

14

//    for (auto const &i: diff\_abs) {

15

//        for (auto const &j: i) printf("%i ", j);

16

//            printf("\n");

17

//    }

18

//    for (auto const &j: sum) printf("%i ", j);

19

//}

20

​

21

void print(V const &sum) {

22

`    `for (auto const &j: sum) printf("%i ", j);

23

}

24

​

25

​

26

​

27

void diff\_calc\_sort(V &numbers, vector<list<int>> &diff\_abs, V &sum, const int &k) {

28

`    `int absolute = 0;

29

​

30

`    `for (unsigned i = 0; i < numbers.size();++i) {                          // бежим по строкам

31

`       `for (unsigned j = 0; j < numbers.size();++j) {                       // бежим по столбцам

32

`           `if (i == j) continue;                                        // если тот же индекс, идем дальше

33

`           `else {                                                       // иначе считаем разность между ними

34

`               `absolute = abs(numbers.at(i) - numbers.at(j));           // 

35

`               `diff\_abs[i].push\_back(absolute);

36

`           `}

37

`       `}

38

`       `diff\_abs[i].sort();

39

`       `int counter = 0;

40

`       `for (auto const &n: diff\_abs[i]) {

41

`           `if (counter >= k) { break; }

42

`           `//cout << n << " <-- n" << endl;

43

`           `sum.at(i) += n;

44

`           `++counter;

45

`       `}

46

`    `}

47

}

48

​

Выбрать<a name="46814/2021_01_28/euj"></a>Файл не выбран

Отправить

осталось 92 попытки

[Предыдущая](https://contest.yandex.ru/contest/28412/problems/B/)[Следующая](https://contest.yandex.ru/contest/28412/problems/D/)

- [A. Андрей и кислота](https://contest.yandex.ru/contest/28412/problems/A/)

[](https://contest.yandex.ru/contest/28412/problems/A/)[](https://contest.yandex.ru/contest/28412/run-report/73286426/)

- [B. Посадка в самолет](https://contest.yandex.ru/contest/28412/problems/B/)

[](https://contest.yandex.ru/contest/28412/problems/B/)[](https://contest.yandex.ru/contest/28412/run-report/80829410/)

- [C. Расстояние](https://contest.yandex.ru/contest/28412/problems/C/)

[](https://contest.yandex.ru/contest/28412/problems/C/)[](https://contest.yandex.ru/contest/28412/run-report/88710713/)

- [D. Посчитать графы](https://contest.yandex.ru/contest/28412/problems/D/)
- [E. Множества](https://contest.yandex.ru/contest/28412/problems/E/)
- [F. Спутниковая съёмка](https://contest.yandex.ru/contest/28412/problems/F/)

|**Время посылки**|**ID**|**Задача**|**Компилятор**|**Вердикт**|**Тип посылки**|**Время**|**Память**|**Тест**|**Баллы**||
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|1 июл 2023, 13:38:12|88710713|C|GNU c++17 7.3|[ML](https://contest.yandex.ru/contest/28412/run-report/88710713/)|-|1\.603s|524\.65Mb|14|-|[отчёт](https://contest.yandex.ru/contest/28412/run-report/88710713/)|
|23 май 2023, 18:10:44|87621035|C|GNU c++17 7.3|[TL](https://contest.yandex.ru/contest/28412/run-report/87621035/)|-|2\.085s|424\.70Mb|14|-|[отчёт](https://contest.yandex.ru/contest/28412/run-report/87621035/)|
|23 май 2023, 17:53:14|87620494|C|GNU c++17 7.3|[RE](https://contest.yandex.ru/contest/28412/run-report/87620494/)|-|54ms|4\.18Mb|14|-|[отчёт](https://contest.yandex.ru/contest/28412/run-report/87620494/)|
|9 мар 2023, 02:09:59|83626254|C|GNU c++17 7.3|[RE](https://contest.yandex.ru/contest/28412/run-report/83626254/)|-|56ms|4\.18Mb|14|-|[отчёт](https://contest.yandex.ru/contest/28412/run-report/83626254/)|
|9 мар 2023, 02:07:31|83626182|C|GNU c++17 7.3|[TL](https://contest.yandex.ru/contest/28412/run-report/83626182/)|-|2\.084s|412\.46Mb|14|-|[отчёт](https://contest.yandex.ru/contest/28412/run-report/83626182/)|
|9 мар 2023, 02:00:21|83625968|C|GNU c++17 7.3|[TL](https://contest.yandex.ru/contest/28412/run-report/83625968/)|-|2\.115s|431\.79Mb|14|-|[отчёт](https://contest.yandex.ru/contest/28412/run-report/83625968/)|
|9 мар 2023, 01:59:38|83625946|C|GNU c++17 7.3|[CE](https://contest.yandex.ru/contest/28412/run-report/83625946/)|-|0ms|0B|-|-|[отчёт](https://contest.yandex.ru/contest/28412/run-report/83625946/)|
|9 мар 2023, 01:59:11|83625928|C|GNU c++17 7.3|[TL](https://contest.yandex.ru/contest/28412/run-report/83625928/)|-|2\.087s|470\.01Mb|14|-|[отчёт](https://contest.yandex.ru/contest/28412/run-report/83625928/)|

[Справка](https://yandex.ru/support/contest/index.html)[Обратная связь](https://yandex.ru/support/contest/troubleshooting.xml?form1580-cntst_link=http%3A%2F%2Fcontest.yandex.ru%2Fcontest%2F28412%2Fproblems%2FC%2F%3Fsuccess%3D82780821&form1580-cntst_login=tungus.rulit1337)[Пользовательское соглашение](https://yandex.ru/legal/contest_termsofuse/)

© 2013–2023  ООО «[Яндекс](http://www.ya.ru/)»


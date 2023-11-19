# С. Расстояние
Рассмотрим целочисленный массив a длины n. Назовём расстоянием от индекса $i$ до множества индексов $S$ величину $dist(i,S)=\sum_{j\in S}\vert (a_i - a_j \vert $

Зафиксируем целое число $k$. Рассмотрим функцию $f(i) =  min ~  dist(i,S)$, где минимум берётся по множествам $S$ размера $k$, не содержащим индекс $i$.

Определите значение $f(i)$ для всех $i$ от $1$ до $n$. 

## Формат ввода
В первой строке заданы два целых числа $n$ и $k$ $(2 \leq n \leq 300000, 1 \leq k < n)$, описанные в условии.

Во второй строке содержится $n$ целых чисел $a_i$ $(1 \leq a_i \leq 10^9)$ — элементы массива $a$.
## Формат вывода
Выведите $n$ целых чисел: значения $f(i)$ для $i=1,i=2,…,i=n$. 
## Пример

Рассмотрим первый пример.

При i\=1<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi> <mo>=</mo> <mn>1</mn></math> оптмиальное S<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math> — это {2,3}<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>{</mo><mrow><mn>2</mn><mo>,</mo><mn>3</mn></mrow><mo>}</mo></mrow></math>; dist(1,{2,3})\=|1−2|+|1−3|\=3<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi><mi>i</mi><mi>s</mi><mi>t</mi><mrow><mo>(</mo><mrow><mn>1</mn><mo>,</mo><mrow><mo>{</mo><mrow><mn>2</mn><mo>,</mo><mn>3</mn></mrow><mo>}</mo></mrow></mrow><mo>)</mo></mrow> <mo>=</mo> <mo>|</mo><mn>1</mn> <mo>−</mo> <mn>2</mn><mo>|</mo> <mo>+</mo> <mo>|</mo><mn>1</mn> <mo>−</mo> <mn>3</mn><mo>|</mo> <mo>=</mo> <mn>3</mn></math>.

При i\=2<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi> <mo>=</mo> <mn>2</mn></math> оптмиальное S<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math> — это {1,3}<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>{</mo><mrow><mn>1</mn><mo>,</mo><mn>3</mn></mrow><mo>}</mo></mrow></math>; dist(2,{1,3})\=|2−1|+|2−3|\=2<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi><mi>i</mi><mi>s</mi><mi>t</mi><mrow><mo>(</mo><mrow><mn>2</mn><mo>,</mo><mrow><mo>{</mo><mrow><mn>1</mn><mo>,</mo><mn>3</mn></mrow><mo>}</mo></mrow></mrow><mo>)</mo></mrow> <mo>=</mo> <mo>|</mo><mn>2</mn> <mo>−</mo> <mn>1</mn><mo>|</mo> <mo>+</mo> <mo>|</mo><mn>2</mn> <mo>−</mo> <mn>3</mn><mo>|</mo> <mo>=</mo> <mn>2</mn></math>.

При i\=3<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi> <mo>=</mo> <mn>3</mn></math> оптмиальное S<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math> — это {2,4}<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>{</mo><mrow><mn>2</mn><mo>,</mo><mn>4</mn></mrow><mo>}</mo></mrow></math>; dist(3,{2,4})\=|3−2|+|3−4|\=2<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi><mi>i</mi><mi>s</mi><mi>t</mi><mrow><mo>(</mo><mrow><mn>3</mn><mo>,</mo><mrow><mo>{</mo><mrow><mn>2</mn><mo>,</mo><mn>4</mn></mrow><mo>}</mo></mrow></mrow><mo>)</mo></mrow> <mo>=</mo> <mo>|</mo><mn>3</mn> <mo>−</mo> <mn>2</mn><mo>|</mo> <mo>+</mo> <mo>|</mo><mn>3</mn> <mo>−</mo> <mn>4</mn><mo>|</mo> <mo>=</mo> <mn>2</mn></math>.

При i\=4<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi> <mo>=</mo> <mn>4</mn></math> оптмиальное S<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math> — это {2,3}<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>{</mo><mrow><mn>2</mn><mo>,</mo><mn>3</mn></mrow><mo>}</mo></mrow></math>; dist(4,{2,3})\=|4−2|+|4−3|\=3<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi><mi>i</mi><mi>s</mi><mi>t</mi><mrow><mo>(</mo><mrow><mn>4</mn><mo>,</mo><mrow><mo>{</mo><mrow><mn>2</mn><mo>,</mo><mn>3</mn></mrow><mo>}</mo></mrow></mrow><mo>)</mo></mrow> <mo>=</mo> <mo>|</mo><mn>4</mn> <mo>−</mo> <mn>2</mn><mo>|</mo> <mo>+</mo> <mo>|</mo><mn>4</mn> <mo>−</mo> <mn>3</mn><mo>|</mo> <mo>=</mo> <mn>3</mn></math>.

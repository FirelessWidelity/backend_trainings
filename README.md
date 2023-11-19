# C. Расстояние

|                         |                     |                    |                                |                                  |
|-------------------------|---------------------|--------------------|--------------------------------|----------------------------------|
| Язык                    | Ограничение времени | Ограничение памяти | Ввод                           | Вывод                            |
| Все языки               | 2 секунды           | 512Mb              | стандартный ввод или input.txt | стандартный вывод или output.txt |
| Python 3.7.3            | 4 секунды           | 512Mb              |                                |                                  |
| Python 3.7 (PyPy 7.3.3) | 4 секунды           | 512Mb              |                                |                                  |
| Python 2.7              | 4 секунды           | 512Mb              |                                |                                  |
| PHP 7.3.5               | 4 секунды           | 512Mb              |                                |                                  |

## 

Рассмотрим целочисленный массив <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-1" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-2"
class="mjx-mrow"><span id="MJXc-Node-3"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">a</span></span></span></span></span>

длины <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-4" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-5"
class="mjx-mrow"><span id="MJXc-Node-6"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">n</span></span></span></span></span>

. Назовём <span style="font-style: italic;">расстоянием </span>от
индекса <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-7" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-8"
class="mjx-mrow"><span id="MJXc-Node-9"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span></span></span>

до множества индексов <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-10" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-11"
class="mjx-mrow"><span id="MJXc-Node-12"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span></span></span>

величину <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-13" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-14"
class="mjx-mrow"><span id="MJXc-Node-15"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-16"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-17"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">s</span></span><span id="MJXc-Node-18"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">t</span></span><span id="MJXc-Node-19"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-20"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-21"
class="mjx-mrow"><span id="MJXc-Node-22"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-23"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-24"
class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span><span id="MJXc-Node-25"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span><span id="MJXc-Node-26"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-27"
class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-28"
class="mjx-mrow"><span id="MJXc-Node-29"
class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R"
style="padding-top: 0.543em; padding-bottom: 0.543em;">∑</span></span></span></span><span class="mjx-sub"
style="font-size: 70.7%; vertical-align: -0.439em; padding-right: 0.071em;"><span id="MJXc-Node-30"
class="mjx-mrow" style=""><span id="MJXc-Node-31"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.483em;">j</span></span><span id="MJXc-Node-32"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.243em; padding-bottom: 0.363em;">∈</span></span><span id="MJXc-Node-33"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span></span></span><span id="MJXc-Node-34"
class="mjx-mo MJXc-space1"
style="vertical-align: -0.198em;"><span class="mjx-delim-v"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em; margin-bottom: -0.653em;">∣</span><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em; margin-top: -0.653em;">∣</span></span></span><span id="MJXc-Node-35"
class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-36"
class="mjx-mrow"><span id="MJXc-Node-37"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">a</span></span></span></span><span class="mjx-sub"
style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-38"
class="mjx-mrow" style=""><span id="MJXc-Node-39"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span></span></span><span id="MJXc-Node-40"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-41"
class="mjx-msub MJXc-space2"><span class="mjx-base"><span id="MJXc-Node-42"
class="mjx-mrow"><span id="MJXc-Node-43"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">a</span></span></span></span><span class="mjx-sub"
style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-44"
class="mjx-mrow" style=""><span id="MJXc-Node-45"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.483em;">j</span></span></span></span></span><span id="MJXc-Node-46"
class="mjx-mo"
style="vertical-align: -0.198em;"><span class="mjx-delim-v"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em; margin-bottom: -0.653em;">∣</span><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em; margin-top: -0.653em;">∣</span></span></span></span></span></span>

.

Зафиксируем целое число <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-47" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-48"
class="mjx-mrow"><span id="MJXc-Node-49"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em;">k</span></span></span></span></span>

. Рассмотрим функцию <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-50" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-51"
class="mjx-mrow"><span id="MJXc-Node-52"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.483em; padding-right: 0.06em;">f</span></span><span id="MJXc-Node-53"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-54"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-55"
class="mjx-mrow"><span id="MJXc-Node-56"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span><span id="MJXc-Node-57"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span><span id="MJXc-Node-58"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-59"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">min</span></span><span id="MJXc-Node-60"
class="mjx-mi MJXc-space1"
style="margin-left: 0.3em;"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-61"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-62"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">s</span></span><span id="MJXc-Node-63"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">t</span></span><span id="MJXc-Node-64"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-65"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-66"
class="mjx-mrow"><span id="MJXc-Node-67"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-68"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-69"
class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span><span id="MJXc-Node-70"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span></span></span></span>

, где минимум берётся по множествам <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-71" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-72"
class="mjx-mrow"><span id="MJXc-Node-73"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span></span></span>

размера <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-74" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-75"
class="mjx-mrow"><span id="MJXc-Node-76"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em;">k</span></span></span></span></span>

, <span style="font-weight: bold;">не</span>
<span style="font-weight: bold;">содержащим индекс
</span><span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-77" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-78"
class="mjx-mrow"><span id="MJXc-Node-79"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span></span></span>

.

Определите значение <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-80" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-81"
class="mjx-mrow"><span id="MJXc-Node-82"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.483em; padding-right: 0.06em;">f</span></span><span id="MJXc-Node-83"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-84"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-85"
class="mjx-mrow"><span id="MJXc-Node-86"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span><span id="MJXc-Node-87"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span></span></span></span>

для всех <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-88" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-89"
class="mjx-mrow"><span id="MJXc-Node-90"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span></span></span>

от <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-13-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-91" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-92"
class="mjx-mrow"><span id="MJXc-Node-93"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span></span></span></span>

до <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-14-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-94" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-95"
class="mjx-mrow"><span id="MJXc-Node-96"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">n</span></span></span></span></span>

.

## Формат ввода

В первой строке заданы два целых числа <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-15-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-97" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-98"
class="mjx-mrow"><span id="MJXc-Node-99"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">n</span></span></span></span></span>

и <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-16-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-100" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-101"
class="mjx-mrow"><span id="MJXc-Node-102"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em;">k</span></span></span></span></span>

(<span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-17-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-103" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-104"
class="mjx-mrow"><span id="MJXc-Node-105"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-106"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.483em;">≤</span></span><span id="MJXc-Node-107"
class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">n</span></span><span id="MJXc-Node-108"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.483em;">≤</span></span><span id="MJXc-Node-109"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span><span id="MJXc-Node-110"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">0</span></span><span id="MJXc-Node-111"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">0</span></span><span id="MJXc-Node-112"
class="mjx-mspace"
style="width: 0.3em; height: 0px;"></span><span id="MJXc-Node-113"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">0</span></span><span id="MJXc-Node-114"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">0</span></span><span id="MJXc-Node-115"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">0</span></span></span></span></span>

, <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-18-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-116" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-117"
class="mjx-mrow"><span id="MJXc-Node-118"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-119"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.483em;">≤</span></span><span id="MJXc-Node-120"
class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em;">k</span></span><span id="MJXc-Node-121"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.243em; padding-bottom: 0.363em;">\<</span></span><span id="MJXc-Node-122"
class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">n</span></span></span></span></span>

), описанные в условии.

Во второй строке содержится <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-19-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-123" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-124"
class="mjx-mrow"><span id="MJXc-Node-125"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">n</span></span></span></span></span>

целых чисел <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-20-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-126" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-127"
class="mjx-mrow"><span id="MJXc-Node-128"
class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-129"
class="mjx-mrow"><span id="MJXc-Node-130"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">a</span></span></span></span><span class="mjx-sub"
style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-131"
class="mjx-mrow" style=""><span id="MJXc-Node-132"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span></span></span></span></span></span>

(<span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-21-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-133" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-134"
class="mjx-mrow"><span id="MJXc-Node-135"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-136"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.483em;">≤</span></span><span id="MJXc-Node-137"
class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-138"
class="mjx-mrow"><span id="MJXc-Node-139"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">a</span></span></span></span><span class="mjx-sub"
style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-140"
class="mjx-mrow" style=""><span id="MJXc-Node-141"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span></span></span><span id="MJXc-Node-142"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.483em;">≤</span></span><span id="MJXc-Node-143"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-144"
class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-145"
class="mjx-mrow"><span id="MJXc-Node-146"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">0</span></span></span></span><span class="mjx-sup"
style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-147"
class="mjx-mrow" style=""><span id="MJXc-Node-148"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">9</span></span></span></span></span></span></span></span>

) — элементы массива <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-22-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-149" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-150"
class="mjx-mrow"><span id="MJXc-Node-151"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">a</span></span></span></span></span>

.

## Формат вывода

Выведите <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-23-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-152" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-153"
class="mjx-mrow"><span id="MJXc-Node-154"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">n</span></span></span></span></span>

целых чисел: значения <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-24-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-155" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-156"
class="mjx-mrow"><span id="MJXc-Node-157"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.483em; padding-right: 0.06em;">f</span></span><span id="MJXc-Node-158"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-159"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-160"
class="mjx-mrow"><span id="MJXc-Node-161"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span></span><span id="MJXc-Node-162"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span></span></span></span>

для <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-25-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-163" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-164"
class="mjx-mrow"><span id="MJXc-Node-165"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-166"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-167"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-168"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-169"
class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-170"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-171"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-172"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-173"
class="mjx-mo MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.363em;">…</span></span><span id="MJXc-Node-174"
class="mjx-mo MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-175"
class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-176"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-177"
class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">n</span></span></span></span></span>

.

### Пример 1

<table class="sample-tests">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<thead>
<tr class="header">
<th>Ввод
<div class="problem__copy-sample">
<span class="button__text"> <img
src="C.%20%D0%A0%D0%B0%D1%81%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D0%B5%20%E2%80%94%20%D0%A2%D1%80%D0%B5%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%BE%D1%87%D0%BD%D1%8B%D0%B9%20%D0%BA%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82%20%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D0%BA%D0%B0%20%D0%B1%D1%8D%D0%BA%D0%B5%D0%BD%D0%B4%D0%B0%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9A%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82_files/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif"
class="image button__icon button__icon_role_copy"
alt="Скопировать ввод" /></span>
</div></th>
<th>Вывод
<div class="problem__copy-sample">
<span class="button__text"> <img
src="C.%20%D0%A0%D0%B0%D1%81%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D0%B5%20%E2%80%94%20%D0%A2%D1%80%D0%B5%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%BE%D1%87%D0%BD%D1%8B%D0%B9%20%D0%BA%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82%20%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D0%BA%D0%B0%20%D0%B1%D1%8D%D0%BA%D0%B5%D0%BD%D0%B4%D0%B0%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9A%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82_files/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif"
class="image button__icon button__icon_role_copy"
alt="Скопировать вывод" /></span>
</div></th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td><pre><code>4 2
1 2 3 4</code></pre></td>
<td><pre><code>3 2 2 3</code></pre></td>
</tr>
</tbody>
</table>

### Пример 2

<table class="sample-tests">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<thead>
<tr class="header">
<th>Ввод
<div class="problem__copy-sample">
<span class="button__text"> <img
src="C.%20%D0%A0%D0%B0%D1%81%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D0%B5%20%E2%80%94%20%D0%A2%D1%80%D0%B5%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%BE%D1%87%D0%BD%D1%8B%D0%B9%20%D0%BA%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82%20%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D0%BA%D0%B0%20%D0%B1%D1%8D%D0%BA%D0%B5%D0%BD%D0%B4%D0%B0%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9A%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82_files/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif"
class="image button__icon button__icon_role_copy"
alt="Скопировать ввод" /></span>
</div></th>
<th>Вывод
<div class="problem__copy-sample">
<span class="button__text"> <img
src="C.%20%D0%A0%D0%B0%D1%81%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D0%B5%20%E2%80%94%20%D0%A2%D1%80%D0%B5%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%BE%D1%87%D0%BD%D1%8B%D0%B9%20%D0%BA%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82%20%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D0%BA%D0%B0%20%D0%B1%D1%8D%D0%BA%D0%B5%D0%BD%D0%B4%D0%B0%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9A%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82_files/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif"
class="image button__icon button__icon_role_copy"
alt="Скопировать вывод" /></span>
</div></th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td><pre><code>5 3
3 2 5 1 2</code></pre></td>
<td><pre><code>4 2 8 4 2</code></pre></td>
</tr>
</tbody>
</table>

### Пример 3

<table class="sample-tests">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<thead>
<tr class="header">
<th>Ввод
<div class="problem__copy-sample">
<span class="button__text"> <img
src="C.%20%D0%A0%D0%B0%D1%81%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D0%B5%20%E2%80%94%20%D0%A2%D1%80%D0%B5%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%BE%D1%87%D0%BD%D1%8B%D0%B9%20%D0%BA%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82%20%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D0%BA%D0%B0%20%D0%B1%D1%8D%D0%BA%D0%B5%D0%BD%D0%B4%D0%B0%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9A%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82_files/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif"
class="image button__icon button__icon_role_copy"
alt="Скопировать ввод" /></span>
</div></th>
<th>Вывод
<div class="problem__copy-sample">
<span class="button__text"> <img
src="C.%20%D0%A0%D0%B0%D1%81%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D0%B5%20%E2%80%94%20%D0%A2%D1%80%D0%B5%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%BE%D1%87%D0%BD%D1%8B%D0%B9%20%D0%BA%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82%20%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D0%BA%D0%B0%20%D0%B1%D1%8D%D0%BA%D0%B5%D0%BD%D0%B4%D0%B0%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9A%D0%BE%D0%BD%D1%82%D0%B5%D1%81%D1%82_files/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif"
class="image button__icon button__icon_role_copy"
alt="Скопировать вывод" /></span>
</div></th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td><pre><code>6 2
3 2 1 101 102 103</code></pre></td>
<td><pre><code>3 2 3 3 2 3</code></pre></td>
</tr>
</tbody>
</table>

## Примечания

Рассмотрим первый пример.

При <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-26-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-178" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-179"
class="mjx-mrow"><span id="MJXc-Node-180"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-181"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-182"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span></span></span></span>

оптмиальное <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-27-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-183" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-184"
class="mjx-mrow"><span id="MJXc-Node-185"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span></span></span>

 — это <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-28-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-186" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-187"
class="mjx-mrow"><span id="MJXc-Node-188"
class="mjx-mrow"><span id="MJXc-Node-189"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">{</span></span><span id="MJXc-Node-190"
class="mjx-mrow"><span id="MJXc-Node-191"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-192"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-193"
class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span><span id="MJXc-Node-194"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">}</span></span></span></span></span></span>

; <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-29-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-195" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-196"
class="mjx-mrow"><span id="MJXc-Node-197"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-198"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-199"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">s</span></span><span id="MJXc-Node-200"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">t</span></span><span id="MJXc-Node-201"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-202"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-203"
class="mjx-mrow"><span id="MJXc-Node-204"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-205"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-206"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-207"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">{</span></span><span id="MJXc-Node-208"
class="mjx-mrow"><span id="MJXc-Node-209"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-210"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-211"
class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span><span id="MJXc-Node-212"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">}</span></span></span></span><span id="MJXc-Node-213"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span><span id="MJXc-Node-214"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-215"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-216"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-217"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-218"
class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-219"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-220"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">+</span></span><span id="MJXc-Node-221"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-222"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-223"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-224"
class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span><span id="MJXc-Node-225"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-226"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-227"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span></span></span>

.

При <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-30-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-228" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-229"
class="mjx-mrow"><span id="MJXc-Node-230"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-231"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-232"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span></span></span></span>

оптмиальное <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-31-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-233" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-234"
class="mjx-mrow"><span id="MJXc-Node-235"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span></span></span>

 — это <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-32-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-236" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-237"
class="mjx-mrow"><span id="MJXc-Node-238"
class="mjx-mrow"><span id="MJXc-Node-239"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">{</span></span><span id="MJXc-Node-240"
class="mjx-mrow"><span id="MJXc-Node-241"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-242"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-243"
class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span><span id="MJXc-Node-244"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">}</span></span></span></span></span></span>

; <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-33-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-245" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-246"
class="mjx-mrow"><span id="MJXc-Node-247"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-248"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-249"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">s</span></span><span id="MJXc-Node-250"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">t</span></span><span id="MJXc-Node-251"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-252"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-253"
class="mjx-mrow"><span id="MJXc-Node-254"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-255"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-256"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-257"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">{</span></span><span id="MJXc-Node-258"
class="mjx-mrow"><span id="MJXc-Node-259"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-260"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-261"
class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span><span id="MJXc-Node-262"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">}</span></span></span></span><span id="MJXc-Node-263"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span><span id="MJXc-Node-264"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-265"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-266"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-267"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-268"
class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">1</span></span><span id="MJXc-Node-269"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-270"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">+</span></span><span id="MJXc-Node-271"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-272"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-273"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-274"
class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span><span id="MJXc-Node-275"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-276"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-277"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span></span></span></span>

.

При <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-34-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-278" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-279"
class="mjx-mrow"><span id="MJXc-Node-280"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-281"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-282"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span></span></span>

оптмиальное <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-35-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-283" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-284"
class="mjx-mrow"><span id="MJXc-Node-285"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span></span></span>

 — это <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-36-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-286" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-287"
class="mjx-mrow"><span id="MJXc-Node-288"
class="mjx-mrow"><span id="MJXc-Node-289"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">{</span></span><span id="MJXc-Node-290"
class="mjx-mrow"><span id="MJXc-Node-291"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-292"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-293"
class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">4</span></span></span><span id="MJXc-Node-294"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">}</span></span></span></span></span></span>

; <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-37-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-295" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-296"
class="mjx-mrow"><span id="MJXc-Node-297"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-298"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-299"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">s</span></span><span id="MJXc-Node-300"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">t</span></span><span id="MJXc-Node-301"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-302"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-303"
class="mjx-mrow"><span id="MJXc-Node-304"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span><span id="MJXc-Node-305"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-306"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-307"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">{</span></span><span id="MJXc-Node-308"
class="mjx-mrow"><span id="MJXc-Node-309"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-310"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-311"
class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">4</span></span></span><span id="MJXc-Node-312"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">}</span></span></span></span><span id="MJXc-Node-313"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span><span id="MJXc-Node-314"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-315"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-316"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span><span id="MJXc-Node-317"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-318"
class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-319"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-320"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">+</span></span><span id="MJXc-Node-321"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-322"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span><span id="MJXc-Node-323"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-324"
class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">4</span></span><span id="MJXc-Node-325"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-326"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-327"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span></span></span></span>

.

При <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-38-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-328" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-329"
class="mjx-mrow"><span id="MJXc-Node-330"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-331"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-332"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">4</span></span></span></span></span>

оптмиальное <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-39-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-333" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-334"
class="mjx-mrow"><span id="MJXc-Node-335"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.032em;">S</span></span></span></span></span>

 — это <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-40-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-336" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-337"
class="mjx-mrow"><span id="MJXc-Node-338"
class="mjx-mrow"><span id="MJXc-Node-339"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">{</span></span><span id="MJXc-Node-340"
class="mjx-mrow"><span id="MJXc-Node-341"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-342"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-343"
class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span><span id="MJXc-Node-344"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">}</span></span></span></span></span></span>

; <span class="MathJax_Preview"
style="color: inherit; display: none;"></span><span id="MathJax-Element-41-Frame"
class="mjx-chtml MathJax_CHTML" tabindex="0"
style="font-size: 119%;"><span id="MJXc-Node-345" class="mjx-math"
style="text-indent: 0em;"><span id="MJXc-Node-346"
class="mjx-mrow"><span id="MJXc-Node-347"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.483em; padding-bottom: 0.303em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-348"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">i</span></span><span id="MJXc-Node-349"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.243em; padding-bottom: 0.303em;">s</span></span><span id="MJXc-Node-350"
class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I"
style="padding-top: 0.423em; padding-bottom: 0.303em;">t</span></span><span id="MJXc-Node-351"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-352"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">(</span></span><span id="MJXc-Node-353"
class="mjx-mrow"><span id="MJXc-Node-354"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">4</span></span><span id="MJXc-Node-355"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-356"
class="mjx-mrow MJXc-space1"><span id="MJXc-Node-357"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">{</span></span><span id="MJXc-Node-358"
class="mjx-mrow"><span id="MJXc-Node-359"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-360"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="margin-top: -0.177em; padding-bottom: 0.543em;">,</span></span><span id="MJXc-Node-361"
class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span><span id="MJXc-Node-362"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">}</span></span></span></span><span id="MJXc-Node-363"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">)</span></span></span><span id="MJXc-Node-364"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-365"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-366"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">4</span></span><span id="MJXc-Node-367"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-368"
class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">2</span></span><span id="MJXc-Node-369"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-370"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">+</span></span><span id="MJXc-Node-371"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-372"
class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">4</span></span><span id="MJXc-Node-373"
class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.303em; padding-bottom: 0.423em;">−</span></span><span id="MJXc-Node-374"
class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span><span id="MJXc-Node-375"
class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.483em; padding-bottom: 0.603em;">\|</span></span><span id="MJXc-Node-376"
class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.063em; padding-bottom: 0.303em;">=</span></span><span id="MJXc-Node-377"
class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R"
style="padding-top: 0.363em; padding-bottom: 0.363em;">3</span></span></span></span></span>

.

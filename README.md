# Условие задачи

Создать программу вычисления указанной величины. Результат проверить при заданных исходных значениях.

**Формула:**
$$\gamma = 5 \operatorname{arctg}(x) - \frac{1}{4} \operatorname{arccos}(x) \cdot \frac{x + 3\vert{}x - y\vert{} + x^2}{\vert{}x - y\vert{}z + x^2}$$

**Исходные данные:**
* $x = 0.1722$
* $y = 6.33$
* $z = 3.25 \times 10^{-4}

**Контрольный результат:**
* $\gamma \approx -205.305571$

# 1. Алгоритм и блок-схема

### Алгоритм

1. **Начало**
2. **Задать исходные данные:**
   * `x = 0.1722`
   * `y = 6.33`
   * `z = 3.25 * pow(10, -4)`
3. **Вычислить значение выражения в одну строку:**
   * `gamma = 5.0 * atan(x) - 0.25 * acos(x) * (x + 3.0 * fabs(x - y) + x * x) / (fabs(x - y) * z + x * x)`
4. **Вывести исходные параметры и результат расчета в консоль.**
5. **Конец**

### Блок-схема

<img width="132" height="687" alt="image" src="https://github.com/user-attachments/assets/8c37499d-4f93-4b26-9ede-495f6dde2c5a" />

[Ссылка на изображение блок-схемы](https://clck.ru/3WKPGi)

# 2. Реализация программы

```c
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x = 0.1722;
    double y = 6.33;
    double z = 3.25 * pow(10, -4);
    double gamma = 5.0 * atan(x) - 0.25 * acos(x) * (x + 3.0 * fabs(x - y) + x * x) / (fabs(x - y) * z + x * x);
    printf("gamma = %.6f", gamma);
    return 0;
}
```
# 3. Результат работы программы

gamma = -205.305571
  
# 4. Информация

Енгалычев Руслан бОТИ-261

# holbertonschool-printf
Recreation of the standard C library `printf` function.

##  Description

`_printf` is a custom implementation of the standard `printf` function.

## **Supported Conversion Specifiers**

| Specifier   | Description                     |
| ----------- | ------------------------------- |
| `%c`        | Prints a single character       |
| `%s`        | Prints a string                 |
| `%d` / `%i` | Prints a signed decimal integer |
| `%%`        | Prints a literal `%`            |

---

## Prototype

```c
int _printf(const char *format, ...);
```

---

## Project Structure

```
├── _printf.c           → The function
├── print_char.c        →  %c
├── print_string.c      →  %s
├── print_int.c         →  %d/%i
├── _putchar.c          → Writes a character with write()
├── main.h              → Function prototypes
└── man_3_printf        → Man page
```

---

## Example Usage

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s!\n", "World");
    _printf("Char: %c, Number: %d%%\n", 'A', 42);
    return 0;
}
```

**Output:**

```
Hello World!
Char: A, Number: 42%
```
<img width="642" height="732" alt="d final" src="https://github.com/user-attachments/assets/9eb2aa23-0558-40bf-92f7-6f15d8f78f46" />

---

## Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
---

## Example tests:

```
_printf("String: %s\n", "Hello");
_printf("Integer: %d\n", -1234);

```


* By  **Abdel Mourid, Nikola** – Holberton School

---

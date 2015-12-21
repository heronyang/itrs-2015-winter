# Functions in C

## Goal

Learn the idea of functions in C.

## Why Function?

Go read one of the .c files under this folder: [linux](https://github.com/torvalds/linux)

- Modular Programming (not for your computer, but your brain)
- Code Reuse

## What is a Function?

### Intro

In Math,

```
f(x) = y
```

You have:

- a function f,
- input x,
- output y

and that's function

### General Idea

You can name your function to any meaningful name, and:

- none to several input
- none to one output

#### Examples 1

```c
void main();
```

- none input
- none output

#### Examples 2

```c
void set_color(int index);
```

- 1 input
- none output

#### Examples 3

```c
int add(int num1, int num2);
```

- 2 inputs
- 1 output

## How to Use

```c
#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {

    int a = 1, b = 2, c;

    c = add(a, b);
    printf("c = %d\n", c);

    return 0;

}
```

## More - Recursion

You can call the function in the function.

```c
#include <stdio.h>

/*
 * Fab Series
 * 1 1 3 5 8 13 ...
 */

int fab(int n) {
    if(n <= 2) return 1;
    return fab(n-1) + fab(n-2);
}

int main() {

    int i;

    for( i = 1; i < 10; i ++ ) {
        printf("fab(%d) = %d\n", i, fab(i));
    }

    return 0;
}
```

## Task

Check out the code of 04_task_robot/, finish the missing parts in the code.

## Reference

- [Modular Programming](https://en.wikipedia.org/wiki/Modular_programming)
- [Google Map Santo](https://santatracker.google.com/?hl=en#codelab)

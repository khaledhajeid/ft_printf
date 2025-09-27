# ft_printf 🎯

[![Language](https://img.shields.io/badge/Language-C-blue)](https://github.com/khaledhajeid)
[![Platform](https://img.shields.io/badge/Platform-Linux%20%7C%20macOS-lightgrey)](https://github.com/khaledhajeid)
[![42 Project](https://img.shields.io/badge/42%20Project-Completed-brightgreen)](https://github.com/khaledhajeid)

---

## Overview
`ft_printf` is a **custom implementation of the C standard `printf` function**.  
It allows formatted output to the console and was a great project to **practice variadic functions, format parsing, and memory handling** in C.

---

## Features
- ✅ Supports multiple **format specifiers**: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, `%`  
- ✅ Handles **edge cases** like NULL strings and zero values.  
- ✅ Optimized **memory and output management**.  
- ✅ Compatible with **Linux/macOS** systems.  

---

## Technologies

- Language: C
- Platform: Linux / macOS

## Usage

- Include ft_printf.h in your project.
- Compile your program along with ft_printf.c and its utility files.
- Call ft_printf just like the standard printf.

```c
#include "ft_printf.h"

int main(void)
{
    int num = 42;
    char *str = "Hello, 42!";
    
    ft_printf("Number: %d\n", num);
    ft_printf("String: %s\n", str);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", str);

    return 0;
}
```
## File Structure
```c
ft_printf/
├── ft_printf.c
├── ft_printf.h
├── ft_printf_utils.c
├── Makefile
└── README.md
```
## Project Highlights

- Strengthened knowledge of variadic functions in C.
- Practiced format parsing and output formatting.
- Learned to handle edge cases and memory safety.
- Completed as part of the 42 school curriculum.

# Libft
 
*This project has been created as part of the 42 curriculum by ltomas-d.*
 
---
 
## Description
 
**Libft** - My own C library
  
  This is the first project of the 42 curriculum. The goal is to recreate a set of standard C library functions from scratch, building a personal library that can be reused throughout the entire 42 cursus.
 
This project is divided into three parts:
 
- **Part 1** — Reimplementation of standard C library functions (string manipulation, memory management, character checks, etc.)
- **Part 2** — Additional utility functions not found in the standard library (substring extraction, string splitting, integer conversion, etc.)
- **Part 3** — Implementation of linked list manipulation functions using a `t_list` struct
By completing this project, the goal was to deeply understand how fundamental C functions work under the hood, and to build a solid foundation for future projects.
 
---
 
## Functions Implemented
 
### Part 1 — Libc Functions
 
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is ASCII |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area safely (handles overlaps) |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Concatenates a string with size limit |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Finds a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Finds a byte in memory |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Finds a substring within a string |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates and zeroes memory |
| `ft_strdup` | Duplicates a string |
 
### Part 2 — Additional Functions
 
| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from the start and end of a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string (new string) |
| `ft_striteri` | Applies a function to each character of a string (in place) |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |
 
### Part 3 — Linked List Functions
 
| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstsize` | Returns the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes all nodes of a list |
| `ft_lstiter` | Applies a function to each node of a list |
| `ft_lstmap` | Applies a function to each node, returning a new list |
 
---
 
## Instructions
 
### Compilation
 
To compile the library, run:
 
```bash
make
```
 
This will generate the `libft.a` static library file.
 
To compile with the bonus functions (linked list):
 
```bash
make bonus
```
 
### Cleaning
 
To remove object files:
 
```bash
make clean
```
 
To remove object files and the library:
 
```bash
make fclean
```
 
To recompile everything from scratch:
 
```bash
make re
```
 
### Using the Library
 
To use `libft` in your own project, include the header and link the library:
 
```c
#include "libft.h"
```
 
Compile with:
 
```bash
cc your_file.c -L. -lft -o your_program
```
 
---
 
## Resources
 
The following resources were used during the development of this project:
 
- **Unix Manual Pages (`man`)** — Used to understand the behaviour and specifications of each standard C function (e.g., `man memcpy`, `man strlcat`).
- **42 Subject PDF** — The official project requirements and function specifications.
### Use of AI
 
AI was used throughout this project as a **learning tool**, acting as an interactive mentor rather than a solution provider. Specifically:
 
- AI was used to understand concepts such as **file descriptors**, **linked lists**, **syscalls**, and **memory management**.
- For each function, AI guided the thought process through questions, helping build the logic independently without revealing solutions directly.
- AI helped identify bugs and errors by asking targeted questions, encouraging independent debugging.
- AI did **not** write any code directly — all implementations were written by the me based on my own reasoning and understanding.
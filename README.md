*This project has been created as part of the 42 curriculum by selkasba.*

# Libft

## Description

Libft is a reusable C library built as the first library project of the 42 curriculum. Its goal is to understand fundamental C operations by implementing common standard-library functions and additional utilities for strings, memory, output, and singly linked lists.

The build produces `libft.a`, a static archive that other C programs can link against. Public function declarations and the linked-list type belong in `libft.h`. All library functions use the `ft_` prefix.

This README and Makefile follow the supplied subject, **version 19.3**. All three parts, including linked lists, are mandatory in this version. The Makefile expects the 43 source files listed below, named `ft_<name>.c`, at the repository root.

## Library details

### Part 1: Libc functions (23)

These functions reproduce the behavior of their corresponding C library functions, subject to the requirements in the project PDF.

| Category | Functions | Purpose |
| --- | --- | --- |
| Character classification | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Test character properties; return 1 when true and 0 when false. |
| Case conversion | `ft_toupper`, `ft_tolower` | Convert letter case when applicable. |
| String length and copying | `ft_strlen`, `ft_strlcpy`, `ft_strlcat` | Measure strings and perform size-bounded copying or concatenation. |
| String searching and comparison | `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Find characters or substrings and compare strings. |
| Memory operations | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Initialize, copy, search, or compare byte sequences; `ft_memmove` supports overlapping regions. |
| Number conversion | `ft_atoi` | Convert the initial numeric portion of a string to an integer. |
| Allocation | `ft_calloc`, `ft_strdup` | Allocate zero-initialized storage or duplicate a string. |

For this subject, `ft_calloc` must return a unique pointer that can be passed to `free` when either argument is zero, unless allocation fails.

### Part 2: Additional functions (11)

| Function | Purpose |
| --- | --- |
| `ft_substr` | Allocate a substring from a starting index, limited to a maximum length. |
| `ft_strjoin` | Allocate the concatenation of two strings. |
| `ft_strtrim` | Allocate a copy with characters from a specified set removed from both ends. |
| `ft_split` | Split a string on a delimiter into an allocated, NULL-terminated array of allocated strings. |
| `ft_itoa` | Allocate the string representation of an integer, including negative values. |
| `ft_strmapi` | Allocate a string by applying a callback to each character and its index. |
| `ft_striteri` | Apply a callback to each character by address, allowing in-place modification. |
| `ft_putchar_fd` | Write a character to a file descriptor. |
| `ft_putstr_fd` | Write a string to a file descriptor. |
| `ft_putendl_fd` | Write a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Write an integer to a file descriptor. |

### Part 3: Singly linked lists (9)

The public list structure is:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

Each node stores a generic content pointer and a pointer to the next node. The last node's `next` pointer is `NULL`.

| Function | Purpose |
| --- | --- |
| `ft_lstnew` | Allocate a node holding the supplied content pointer. |
| `ft_lstadd_front` | Insert a node at the beginning of a list. |
| `ft_lstsize` | Count nodes; the return type in version 19.3 is `unsigned int`. |
| `ft_lstlast` | Return the final node. |
| `ft_lstadd_back` | Append a node to a list. |
| `ft_lstdelone` | Destroy one node using a content-deletion callback; leave subsequent nodes untouched. |
| `ft_lstclear` | Destroy a list using a content-deletion callback and set the head pointer to `NULL`. |
| `ft_lstiter` | Apply a callback to each node's content. |
| `ft_lstmap` | Create a new list by transforming each node's content; use the deletion callback for cleanup if allocation fails. |

### Memory ownership and implementation rules

- Check allocation-returning functions for `NULL` before using their results.
- Free strings and memory returned by allocation functions when no longer needed.
- For `ft_split`, free every string first, then free the pointer array.
- `ft_lstnew` stores the supplied pointer; it does not duplicate its content. Choose a deletion callback that matches how the content was allocated. Do not pass `free` for string literals or stack storage.
- Library implementations may call only the external functions authorized for each function in the subject (`malloc`, `free`, and/or `write`, where specified).
- Global variables are forbidden. File-local helper functions must be `static`. Source files must follow the 42 Norm.

## Instructions

### Requirements and layout

Use a Unix-like environment with `cc`, `make`, and `ar` available, such as the campus environment or Linux/WSL. Put `Makefile`, `README.md`, `libft.h`, and every required `ft_*.c` file at the repository root. The Makefile requires the function implementations and header; these two documentation/build files alone cannot produce a working library.

### Compilation

``make``

This compiles all 43 functions with `cc -Wall -Wextra -Werror`, then creates `libft.a` using `ar rcs`. There is no separate installation step. Unchanged object files are reused, and running `make` again without changes does not rebuild the archive. A change to `libft.h` recompiles the objects.

| Command | Action |
| --- | --- |
| `make` or `make all` | Build `libft.a`. |
| `make libft.a` | Build the archive directly. |
| `make clean` | Remove object files while keeping the archive. |
| `make fclean` | Remove object files and the archive. |
| `make re` | Remove build outputs and rebuild the library. |

Linked-list files use names such as `ft_lstnew.c` and are included by `make`; this subject does not require a separate bonus build.


## Resources

- **Libft subject, version 19.3**: the official project PDF and evaluation materials available through the 42 Intra project page. 
- **Local manual pages**: use `man 3 strlen`, `man 3 memcpy`, `man 3 memmove`, `man 3 calloc`, `man 3 strdup`, `man 2 write`, and `man 3 free` to study contracts and edge cases.
- [Linux man-pages](https://www.kernel.org/doc/man-pages/): system-call and C-library documentation.
- [GNU Make manual](https://www.gnu.org/software/make/manual/): targets, prerequisites, pattern rules, and automatic variables.
- **The C Programming Language**, Brian W. Kernighan and Dennis M. Ritchie: pointers, arrays, memory management, and structures.
- **The 42 Norm**

### AI usage

AI was used to read the supplied Libft subject,help with this README, including the function overview, and usage example for the compilation process and how it works.

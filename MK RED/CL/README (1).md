*This project has been created as part of the 42 curriculum by <login1>[, <login2>[, <login3>]].*

# Libft

## Description

**Libft** is the first project of the 42 curriculum. The goal is to build your own C
library, `libft.a`, containing general-purpose functions that will be reused in
later projects. By re-implementing standard `libc` functions and writing
additional utilities, the project builds a solid understanding of memory
management, string manipulation, pointers, and linked lists.

The library is built with `cc -Wall -Wextra -Werror`, archived with `ar`,
contains no global variables, and follows the 42 Norm.

### Library overview

The library is split into three parts.

**Part 1 – Libc functions** (re-implemented with the `ft_` prefix, same behavior
as the originals):

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String functions | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi` |
| Memory functions | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Allocation (uses `malloc`) | `ft_calloc`, `ft_strdup` |

**Part 2 – Additional functions** (not in libc, or in a different form):

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring of a string. |
| `ft_strjoin` | Allocates and returns the concatenation of two strings. |
| `ft_strtrim` | Returns a copy of a string with a set of characters trimmed from both ends. |
| `ft_split` | Splits a string by a delimiter into a NULL-terminated array of strings. |
| `ft_itoa` | Converts an integer to an allocated string (handles negatives). |
| `ft_strmapi` | Applies a function to each character (with index) and returns a new string. |
| `ft_striteri` | Applies a function to each character (with index) in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

**Part 3 – Linked lists** (using `t_list { void *content; struct s_list *next; }`):

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees one node's content (with `del`) and the node itself. |
| `ft_lstclear` | Frees a node and all its successors, then sets the list pointer to NULL. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Builds a new list by applying a function to each node's content. |

## Instructions

### Compilation

```bash
make        # builds libft.a at the root of the repository
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

The Makefile compiles with `cc -Wall -Wextra -Werror` and creates the archive
with `ar rcs`. It does not relink if nothing has changed.

### Usage

Include the header in your code and link against the library:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, libft!", 1);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o demo
./demo
```

## Resources

- `man` pages: `man 3 strlen`, `man 3 memmove`, `man 3 calloc`, `man 1 ar`, etc.
- [The GNU C Library reference manual](https://www.gnu.org/software/libc/manual/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [42 Norm](https://github.com/42School/norminette)
- Peer discussions with other 42 students.

### Use of AI

<!-- Fill this in honestly. The subject requires you to state for which tasks
     and which parts of the project AI was used. Example:
     "AI was used to generate the Makefile and README template.
      All library functions were written and tested by the authors." -->

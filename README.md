Chapter IV <br>

| **Item**             | **Details**                                                                 |
|----------------------|-----------------------------------------------------------------------------|
| **Program Name**      | libft.a                                                                     |
| **Turn in Files**     | Makefile, libft.h, ft_*.c                                                  |
| **Makefile Rules**    | `NAME`, `all`, `clean`, `fclean`, `re`                                      |
| **External Functions**| Detailed below                                                              |
| **Libft Authorized**  | n/a                                                                         |
| **Description**       | Create your own library: a collection of functions that will serve as a useful tool throughout your cursus. |

##### IV.2 Part 1 - Libc functions
To begin, you must reimplement a set of functions from the libc. Your version will have
the same prototypes and behaviors as the originals, adhering strictly to their definitions
in the man page. The only difference will be their names, as they must start with the
’ft_’ prefix. For example, strlen becomes ft_strlen.
Some of the function prototypes you need to reimplement use the
’restrict’ qualifier. This keyword is part of the C99 standard.
Therefore, it is forbidden to include it in your own prototypes or to
compile your code with the -std=c99 flag.
The following functions must be rewritten without relying on external functions:

```
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
To implement the two following functions, you will use malloc():
• calloc
• strdup
```
Depending on your current operating system, the ’calloc’ function’s
behavior may differ from its man page description. Follow this
rule instead: If nmemb or size is 0, then calloc() returns a unique
pointer value that can be successfully passed to free(). 

---

Some functions that you must reimplement, such as strlcpy, strlcat,
and bzero, are not included by default in the GNU C Library (glibc).
To test them against the system standard, you may need to include
<bsd/string.h> and compile with the -lbsd flag.
This behaviour is specific to glibc systems. If you are curious,
take the opportunity to explore the differences between glibc and BSD

---


### Chapter I
##### Introduction
```
C programming can be quite tedious without access to the highly useful standard functions. This project aims to help you understand how these functions work by implementing them yourself and learning to use them effectively. You will create your own library,
which will be valuable for your future C school assignments.
Take the time to expand your libft throughout the year. However, when working on a
new project, always check that the functions used in your library comply with the project
guidelines.
```

#### Chapter II
```
Common Instructions
• Your project must be written in C.
• Your project must be written in accordance with the Norm. If you have bonus
files/functions, they are included in the norm check, and you will receive a 0 if
there is a norm error.
• Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc.) except for undefined behavior. If this occurs, your project will be
considered non-functional and will receive a 0 during the evaluation.
• All heap-allocated memory must be properly freed when necessary. Memory leaks
will not be tolerated.
• If the subject requires it, you must submit a Makefile that compiles your source
files to the required output with the flags -Wall, -Wextra, and -Werror, using cc.
Additionally, your Makefile must not perform unnecessary relinking.
• Your Makefile must contain at least the rules $(NAME), all, clean, fclean and
re.
• To submit bonuses for your project, you must include a bonus rule in your Makefile,
which will add all the various headers, libraries, or functions that are not allowed in
the main part of the project. Bonuses must be placed in _bonus.{c/h} files, unless
the subject specifies otherwise. The evaluation of mandatory and bonus parts is
conducted separately.
• If your project allows you to use your libft, you must copy its sources and its
associated Makefile into a libft folder. Your project’s Makefile must compile
the library by using its Makefile, then compile the project.
• We encourage you to create test programs for your project, even though this work
does not need to be submitted and will not be graded. It will give you an
opportunity to easily test your work and your peers’ work. You will find these tests
especially useful during your defence. Indeed, during defence, you are free to use
your tests and/or the tests of the peer you are evaluating.
• Submit your work to the assigned Git repository. Only the work in the Git repository will be graded. If Deepthought is assigned to grade your work, it will occur
3
Libft Your very first own library
after your peer-evaluations. If an error happens in any section of your work during
Deepthought’s grading, the evaluation will stop
```
### Chapter IV <br>

| **Item**             | **Details**                                                                 |
|----------------------|-----------------------------------------------------------------------------|
| **Program Name**      | libft.a                                                                     |
| **Turn in Files**     | Makefile, libft.h, ft_*.c                                                  |
| **Makefile Rules**    | `NAME`, `all`, `clean`, `fclean`, `re`                                      |
| **External Functions**| Detailed below                                                              |
| **Libft Authorized**  | n/a                                                                         |
| **Description**       | Create your own library: a collection of functions that will serve as a useful tool throughout your cursus. |

### IV.2 Part 1 - Libc functions
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
and bzero, are not included by default in the GNU C Library (glibc).<br>
To test them against the system standard, you may need to include
<bsd/string.h> and compile with the -lbsd flag.<br>

### IV.3 Part 2 - Additional functions
In this second part, you must develop a set of functions that are either not included in
the libc, or exist in a different form.<br>
Some of the functions from Part 1 may be useful for implementing the
functions below.<br>
This behaviour is specific to glibc systems.<br> If you are curious,
take the opportunity to explore the differences between glibc and BSD

| Function Name | Prototype                                                        | Parameters                                                           | Return Value                              | External Functions | Description                                                                                        |
| ------------- | ---------------------------------------------------------------- | -------------------------------------------------------------------- | ----------------------------------------- | ------------------ | -------------------------------------------------------------------------------------------------- |
| ft_substr     | `char *ft_substr(char const *s, unsigned int start, size_t len)` | `s`: original string<br>`start`: starting index<br>`len`: max length | substring or `NULL` if allocation fails   | malloc             | Allocates memory and returns a substring starting at `start` with max length `len`.                |
| ft_strjoin    | `char *ft_strjoin(char const *s1, char const *s2)`               | `s1`: prefix string<br>`s2`: suffix string                           | new string or `NULL`                      | malloc             | Allocates memory and returns a new string by concatenating `s1` and `s2`.                          |
| ft_strtrim    | `char *ft_strtrim(char const *s1, char const *set)`              | `s1`: string to trim<br>`set`: characters to remove                  | trimmed string or `NULL`                  | malloc             | Allocates memory and returns a copy of `s1` with characters from `set` removed from start and end. |
| ft_split      | `char **ft_split(char const *s, char c)`                         | `s`: string to split<br>`c`: delimiter                               | array of strings ending with `NULL`       | malloc, free       | Allocates memory and splits `s` by `c`, returning an array of strings.                             |
| ft_itoa       | `char *ft_itoa(int n)`                                           | `n`: integer to convert                                              | string representing the integer or `NULL` | malloc             | Allocates memory and returns a string representing the integer, handling negatives.                |
| ft_strmapi    | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | `s`: string<br>`f`: function applied to each char                    | new string or `NULL`                      | malloc             | Applies `f` to each character of `s` (index + char) and stores results in a new string.            |
| ft_striteri   | `void ft_striteri(char *s, void (*f)(unsigned int, char *))`     | `s`: string<br>`f`: function applied to each char                    | None                                      | None               | Applies `f` to each character of `s`, passing the index and char by address for modification.      |
| ft_putchar_fd | `void ft_putchar_fd(char c, int fd)`                             | `c`: character<br>`fd`: file descriptor                              | None                                      | write              | Outputs character `c` to the specified file descriptor.                                            |
| ft_putstr_fd  | `void ft_putstr_fd(char *s, int fd)`                             | `s`: string<br>`fd`: file descriptor                                 | None                                      | write              | Outputs the string `s` to the specified file descriptor.                                           |
| ft_putendl_fd | `void ft_putendl_fd(char *s, int fd)`                            | `s`: string<br>`fd`: file descriptor                                 | None                                      | write              | Outputs the string `s` followed by a newline to the specified file descriptor.                     |
| ft_putnbr_fd  | `void ft_putnbr_fd(int n, int fd)`                               | `n`: integer<br>`fd`: file descriptor                                | None                                      | write              | Outputs the integer `n` to the specified file descriptor.                                          |


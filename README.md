## LIBFT

***Library of Functions***

---
^|^
### Goal:
```
Build a static C library that reimplements standard functions
(like strchr, strcmp, strlcat)

and adds custom utilities (like split, strmap)
using only <stdlib.h> and <unistd.h>, without <stdio.h> or other standard headers.
```
```

_________________               _________________
 ~-.              \  |\___/|  /              .-~
     ~-.           \ / o o \ /           .-~
        >           \\  W  //           <
       /             /~---~\             \
      /_            |       |            _\
         ~-.        |       |        .-~
            ;        \     /        ;
           /___      /\   /\      ___\
                ~-. /  \_/  \ .-~
                   V         V

```

---

#### Compilation & Usage

```c
// file >: main.c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
printf("%zu\n", ft_strlen("YO YO WORLD HXH"));
return (0);
}
```

```
make                 # (make or make all) builds libft.a
cc main.c libft.a -o program   # compile your program
./program
```
---

```
make clean           # remove .o file
```

```
make fclean          # remove .o file and libft.a
```

```
make re              # do fclean and all
```

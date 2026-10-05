# Piscine Reloaded - 42

This repository contains the complete solutions for all 28 exercises of the 42 **Piscine Reloaded**. It serves as a focused review of fundamental C programming and Unix environment concepts covered during the Piscine: basic shell commands, data types, pointer arithmetic, memory management, system calls, and Makefile configuration.

All C files strictly adhere to the 42 coding standard (Norminette) and compile cleanly with `-Wall -Wextra -Werror` using `cc`.

---

## Repository Structure

```text
.
├── ex00/   # exo.tar (recreating file permissions, timestamps, and hard/symbolic links)
├── ex01/   # z (standard output print)
├── ex02/   # clean (file cleanup pipeline with find)
├── ex03/   # find_sh.sh (locating and stripping shell script names)
├── ex04/   # MAC.sh (extracting host MAC addresses)
├── ex05/   # "\?$*'MaRViN'*$?\" (handling shell metacharacters in filenames)
├── ex06/   # ft_print_alphabet.c (iterative alphabet printing)
├── ex07/   # ft_print_numbers.c (iterative digit printing)
├── ex08/   # ft_is_negative.c (sign evaluation)
├── ex09/   # ft_ft.c (basic pointer dereferencing)
├── ex10/   # ft_swap.c (value swapping via pointers)
├── ex11/   # ft_div_mod.c (division and modulo assignments via pointers)
├── ex12/   # ft_iterative_factorial.c (loop-based factorial computation)
├── ex13/   # ft_recursive_factorial.c (recursion-based factorial computation)
├── ex14/   # ft_sqrt.c (integer square root calculation)
├── ex15/   # ft_putstr.c (string output to stdout)
├── ex16/   # ft_strlen.c (custom string length implementation)
├── ex17/   # ft_strcmp.c (lexicographical string comparison)
├── ex18/   # ft_print_params.c (program argument handling via argv)
├── ex19/   # ft_sort_params.c (sorting command-line arguments in ASCII order)
├── ex20/   # ft_strdup.c (string duplication using dynamic allocation)
├── ex21/   # ft_range.c (heap-allocated integer range generation)
├── ex22/   # ft_abs.h (absolute value macro definition)
├── ex23/   # ft_point.h (point coordinate typedef struct declaration)
├── ex24/   # Makefile (automated compilation rules for libft.a)
├── ex25/   # ft_foreach.c (applying function pointers across integer arrays)
├── ex26/   # ft_count_if.c (conditional counting using function pointers)
└── ex27/   # ft_display_file (low-level file reading using open/read/write/close syscalls)

```

---

## Exercise Summary

| Exercise | Directory | Submitted File(s) | Key Concepts |
| --- | --- | --- | --- |
| **00** | `ex00/`<br> | `exo.tar`<br> | File permissions (`chmod`), hard links (`ln`), symlinks (`ln -s`), modification times (`touch -t`), tarball archives.
| **01** | `ex01/`<br> | `z`<br> | Standard output, POSIX newline compliance.
| **02** | `ex02/`<br> | `clean`<br> | Recursive lookup via `find`, filename pattern filtering, printing and deleting matching targets in a single command.
| **03** | `ex03/`<br> | `find_sh.sh`<br> | Recursive search for `.sh` files, command execution with `-exec`, trimming extensions using `basename`.
| **04** | `ex04/`<br> | `MAC.sh`<br> | Network interface inspection via `ifconfig`, line filtering (`grep`), field extraction (`awk`).
| **05** | `ex05/`<br> | `"\?$*'MaRViN'*$?\"`<br> | Escaping complex shell reserved characters (`\`, `'`, `"`, `$`), exact byte-length file creation.
| **06** | `ex06/`<br> | `ft_print_alphabet.c`<br> | ASCII table values, character iteration loops, invoking `ft_putchar`.
| **07** | `ex07/`<br> | `ft_print_numbers.c`<br> | Sequential numeric character traversal.
| **08** | `ex08/`<br> | `ft_is_negative.c`<br> | Conditional branching (`if/else`), integer comparison with zero.
| **09** | `ex09/`<br> | `ft_ft.c`<br> | Memory addresses, pointer variables, dereferencing (`*nbr = 42`).
| **10** | `ex10/`<br> | `ft_swap.c`<br> | Pass-by-reference logic, temporary memory swap buffers.
| **11** | `ex11/`<br> | `ft_div_mod.c`<br> | Integer arithmetic operations (`/`, `%`), storing results via target pointer addresses.
| **12** | `ex12/`<br> | `ft_iterative_factorial.c`<br> | Loop iteration, handling edge cases ($0! = 1$, negative numbers return 0).
| **13** | `ex13/`<br> | `ft_recursive_factorial.c`<br> | Recursive call frames, termination base cases.
| **14** | `ex14/`<br> | `ft_sqrt.c`<br> | Exact integer square root finding, handling non-perfect squares.
| **15** | `ex15/`<br> | `ft_putstr.c`<br> | Null-terminated string traversal (`\0`), character output.
| **16** | `ex16/`<br> | `ft_strlen.c`<br> | Replicating `strlen`, pointer/index displacement tracking.
| **17** | `ex17/`<br> | `ft_strcmp.c`<br> | Replicating `strcmp`, evaluating differences using unsigned characters.
| **18** | `ex18/`<br> | `ft_print_params.c`<br> | Handling command-line parameters (`argc`, `argv`), skipping `argv[0]`.
| **19** | `ex19/`<br> | `ft_sort_params.c`<br> | Sorting array of string pointers based on ASCII value comparisons.
| **20** | `ex20/`<br> | `ft_strdup.c`<br> | Heap allocation (`malloc`), string sizing, copying data into new memory blocks.
| **21** | `ex21/`<br> | `ft_range.c`<br> | Dynamic memory allocation for integer arrays, range boundary edge checks (`min >= max`).
| **22** | `ex22/`<br> | `ft_abs.h`<br> | Preprocessor macros (`#define`), ternary operators, macro parenthesis isolation.
| **23** | `ex23/`<br> | `ft_point.h`<br> | Defining structured types (`typedef struct`), coordinate abstraction.
| **24** | `ex24/`<br> | `Makefile`<br> | Static library generation (`libft.a`), rules: `all`, `clean`, `fclean`, `re`, directory referencing (`srcs/`, `includes/`).
| **25** | `ex25/`<br> | `ft_foreach.c`<br> | Function pointers (`void (*f)(int)`), applying arbitrary functions across array elements.
| **26** | `ex26/`<br> | `ft_count_if.c`<br> | Evaluating predicate functions across null-terminated string pointer arrays.
| **27** | `ex27/`<br> | `Makefile`, `ft_display_file.c`, etc.<br>| Unix file descriptors, low-level I/O (`open`, `read`, `write`, `close`), fixed buffer reads without `malloc`, writing to `stderr` (`fd 2`).|

---

## Compilation and Testing

To compile and test an individual exercise using a local test runner:

```bash
cc -Wall -Wextra -Werror path/to/exercise.c main.c -o test_runner
./test_runner

```

For exercises providing complete programs and Makefiles (`ex24`, `ex27`):

```bash
cd ex27
make
./ft_display_file file_to_read.txt
make fclean

```

*This project has been created as part of the 42 curriculum by oabu-jal*

# Libft

## Description

#### Overview

Libft is a library with a collection of basic functions to handle memory and strings. There are also basic linked-list functions to create and work with linked lists.

#### Goal

A library containing the most common functions to make writing code easier for us in the future.

### Library Overview

| **Part**   | **Theme**             | **Count** | **Functions**                                                                                                                                                                                                                                                                                 |
| ---------- | --------------------- | --------: | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Part 1** | Libc functions        |        23 | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_strlen` `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_strlcpy` `ft_strlcat` `ft_toupper` `ft_tolower` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr` `ft_atoi` `ft_calloc` `ft_strdup` |
| **Part 2** | Additional functions  |        11 | `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa` `ft_strmapi` `ft_striteri` `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`                                                                                                                                           |
| **Part 3** | Linked list functions |         9 | `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`                                                                                                                                                                |

### Linked List Structure

| **Member** | **Type**   | **Description**                      |
| ---------- | ---------- | ------------------------------------ |
| `content`  | `void *`   | Stores the content of the node.      |
| `next`     | `t_list *` | Points to the next node in the list. |


## Instructions

Clone the repository:

```bash
git clone <repository-url>
```

Navigate to the project root:

```bash
cd libft
```

Compile the library:

```bash
make all
```

After compilation, you will find the `libft.a` archive file in the project root.

To use the library in your own project, copy the following files into your project's directory:

```text
libft.a
libft.h
```

Your Libft library is now ready to use.

## Resources

I relied mainly on the `man` pages and the project documentation to understand the required functions, their expected behavior, and their edge cases.

For AI assistance, I used it to understand some new concepts, such as writing a `Makefile` and creating a `README.md`. I also used AI to explain some difficult or unclear parts of my code and to help me better understand certain concepts when I got stuck.


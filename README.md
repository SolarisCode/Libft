# Libft
This is my own implementation of some of the 
most used and basic funcations in C

Including recreating more than 22 functions from libc standard library and a couple from other libraries in C,
44 functions in total to be used in my future project to get a better understanding of how they fundamentally work.

## The first 22 function:

• isalpha
• isdigit
• isalnum
• isascii
• isprint
• toupper
• tolower
• strchr
• strrchr
• strncmp
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• memchr
• memcmp
• strnstr
• atoi
• calloc
• strdup

## The rest of the functions:

|Function name|ft_substr|
|:---------------:|:----------|
|Prototype|char *ft_substr(char const *s, unsigned int start, size_t len);|
|Parameters|s: The string from which to create the substring.<br />start: The start index of the substring in the string ’s’.<br />len: The maximum length of the substring.|
|Return value|The substring.<br />NULL if the allocation fails.|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a substring\from the string ’s’.<br />The substring begins at index ’start’ and is of maximum size ’len’.|

|Function name|ft_strjoin|
|:-----------:|:---------|
|Prototype|char *ft_strjoin(char const *s1, char const *s2);|
|Parameters|s1: The prefix string.<br />s2: The suffix string.|
|Return value|The new string.<br />NULL if the allocation fails.|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a new string,<br />which is the result of the concatenation of ’s1’ and ’s2’.|

|Function name|ft_strtrim|
|:-----------:|:---------|
|Prototype|char *ft_strtrim(char const *s1, char const *set);|
|Parameters|s1: The string to be trimmed.<br />set: The reference set of characters to trim.|
|Return value|The trimmed string.<br />NULL if the allocation fails.|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a copy of<br />’s1’ with the characters specified in ’set’ removed<br />from the beginning and the end of the string.|

|Function name|ft_split|
|:-----------:|:-------|
|Prototype|char **ft_split(char const *s, char c);|
|Parameters|s: The string to be split.<br />c: The delimiter character.|
|Return value|The array of new strings resulting from the split.<br />NULL if the allocation fails.|
|External functs|malloc, free|
|Description|Allocates (with malloc(3)) and returns an array<br />of strings obtained by splitting ’s’ using the<br />character ’c’ as a delimiter. The array must end<br />with a NULL pointer.|

|Function name|ft_itoa|
|:-----------:|:------|
|Prototypea|char *ft_itoa(int n);|
|Parameters|n: the integer to convert.|
|Return value|The string representing the integer.<br />NULL if the allocation fails.|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a string<br />representing the integer received as an argument.<br />Negative numbers must be handled.|

|Function name|ft_strmapi|
|:-----------:|:---------|
|Prototype|char *ft_strmapi(char const *s, char (*f)(unsigned int, char));|
|Parameters|s: The string on which to iterate.<br />f: The function to apply to each character.|
|Return value|The string created from the successive applications of ’f’.<br />Returns NULL if the allocation fails.|
|External functs|malloc|
|Description|Applies the function ’f’ to each character of the<br />string ’s’, and passing its index as first argument<br />to create a new string (with malloc(3)) resulting<br />from successive applications of ’f’.|

|Function name|ft_striteri|
|:-----------:|:----------|
|Prototype|void ft_striteri(char *s, void (*f)(unsigned int,char*));|
|Parameters|s: The string on which to iterate.<br />f: The function to apply to each character.|
|Return value|None|
|External functs|None|
|Description|Applies the function ’f’ on each character of<br />the string passed as argument, passing its index<br />as first argument. Each character is passed by<br />address to ’f’ to be modified if necessary.|

|Function name|ft_putchar_fd|
|:-----------:|:------------|
|Prototype|void ft_putchar_fd(char c, int fd);|
|Parameters|c: The character to output.<br />fd: The file descriptor on which to write.|
|Return value|None|
|External functs|write|
|Description|Outputs the character ’c’ to the given file descriptor.|

|Function name|ft_putstr_fd|
|:-----------:|:-----------|
|Prototype|void ft_putstr_fd(char *s, int fd);|
|Parameters|s: The string to output.<br />fd: The file descriptor on which to write.|
|Return value|None|
|External functss|write|
|Description|Outputs the string ’s’ to the given file descriptor.|

|Function name|ft_putendl_fd|
|:-----------:|:------------|
|Prototype|void ft_putendl_fd(char *s, int fd);|
|Parameters|s: The string to output.<br />fd: The file descriptor on which to write.|
|Return value|None|
|External functs|write|
|Description|Outputs the string ’s’ to the given file descriptor<br />followed by a newline.|

|Function name|ft_putnbr_fd|
|:-----------:|:-----------|
|Prototype|void ft_putnbr_fd(int n, int fd);|
|Parameters|n: The integer to output.<br />fd: The file descriptor on which to write.|
|Return value|None|
|External functs|write|
|Description|Outputs the integer ’n’ to the given file descriptor.|

## The functions that get complied when you use the bonus rule in the Makefile

|Function name|ft_lstnew|
|:-----------:|:--------|
|Prototype|t_list *ft_lstnew(void *content);|
|Parameters|content: The content to create the node with.|
|Return value|The new node|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a new node.<br />The member variable ’content’ is initialized with<br />the value of the parameter ’content’. The variable<br />’next’ is initialized to NULL.|

|Function name|ft_lstadd_front|
|:-----------:|:--------------|
|Prototype|void ft_lstadd_front(t_list **lst, t_list *new);|
|Parameters|lst: The address of a pointer to the first link of a list.<br />new: The address of a pointer to the node to be added to the list.|
|Return value|None|
|External functs|None|
|Description|Adds the node ’new’ at the beginning of the list.|

|Function name|ft_lstsize|
|:-----------:|:---------|
|Prototype|int ft_lstsize(t_list *lst);|
|Parameters|lst: The beginning of the list.|
|Return value|The length of the list|
|External functs|None|
|Description|Counts the number of nodes in a list.|

|Function name|ft_lstlast|
|:-----------:|:---------|
|Prototype|t_list *ft_lstlast(t_list *lst);|
|Parameters|lst: The beginning of the list.|
|Return value|Last node of the list|
|External functs|None|
|Description|Returns the last node of the list.|

|Function name|ft_lstadd_back|
|:-----------:|:-------------|
|Prototype|void ft_lstadd_back(t_list **lst, t_list *new);|
|Parameters|lst: The address of a pointer to the first link of a list.<br />new: The address of a pointer to the node to be<br />added to the list.|
|Return value|None|
|External functs|None|
|Description|Adds the node ’new’ at the end of the list.|

|Function name|ft_lstdelone|
|:-----------:|:-----------|
|Prototype|void ft_lstdelone(t_list *lst, void (*del)(void*));|
|Parameters|lst: The node to free.<br />del: The address of the function used to delete<br />the content.|
|Return value|None|
|External functs|free|
|Description|Takes as a parameter a node and frees the memory of<br />the node’s content using the function ’del’ given<br />as a parameter and free the node. The memory of<br />’next’ must not be freed.|

|Function name|ft_lstclear|
|:-----------:|:----------|
|Prototype|void ft_lstclear(t_list **lst, void (*del)(void*));|
|Parameters|lst: The address of a pointer to a node.<br />del: The address of the function used to delete<br />the content of the node.|
|Return value|None|
|External functs|free|
|Description|Deletes and frees the given node and every<br />successor of that node, using the function ’del’<br />and free(3).<br />Finally, the pointer to the list must be set to<br />NULL.|

|Function name|ft_lstiter|
|:-----------:|:---------|
|Prototype|void ft_lstiter(t_list *lst, void (*f)(void *));|
|Parameters|lst: The address of a pointer to a node.<br />f: The address of the function used to iterate on<br />the list.|
|Return value|None|
|External functs|None|
|Description|Iterates the list ’lst’ and applies the function<br />’f’ on the content of each node.|

|Function name|ft_lstmap|
|:-----------:|:--------|
|Prototype|t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));|
|Parameters|lst: The address of a pointer to a node.<br />f: The address of the function used to iterate on<br />the list.<br />del: The address of the function used to delete<br />the content of a node if needed.|
|Return value|The new list.<br />NULL if the allocation fails.|
|External functs|malloc, free|
|Description|Iterates the list ’lst’ and applies the function<br />’f’ on the content of each node. Creates a new<br />list resulting of the successive applications of<br />the function ’f’. The ’del’ function is used to<br />delete the content of a node if needed.|

## How to install:

clone the repository in the desired directory.
```shell
git clone https://github.com/SolarisCode/Libft.git
```
Then use `make` inside the pervious directory either with `all` or `bonus` rule if
you want to use the bonus functions.
```shell
make all
```
>or
```shell
make bonus
```
The pervious command will result in the static library file `libft.a` 
and you can include it with the header file `libft.h` while you complie
your own programs like below:
```shell
gcc main.c -L"the directory that has the library" -I"the directory that has the include file" -lft
```
Feel free to contact me if you have a better way to implement any of the above functions :)

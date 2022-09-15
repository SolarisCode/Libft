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



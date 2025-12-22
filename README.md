*This project has been created as part of the 42 curriculum by sbeldjao*

---

# Libft
### Your very first own library

---

## Description
This project is about coding a C library.
It will contain a lot of general purpose functions your programs will rely upon.

## Instructions
Add `#include "libft.h"` at beginnig of your code to use the included functions.  

`make all` : create libft.a  
`make clean` : delete .o files.  
`make fclean` : do clean + delete libft.a  
`make re` : do fclean, then all.  
`make test` : compile without flags library files + main.c and create an executable file *prog* to test the code.  

## Resources
C Programming Language - 2nd Edition (Brian W.Kernighan / Dennis M.Ritchie).  
https://www.learn-c.org  
https://perso.univ-lyon1.fr/jean-claude.iehl/Public/educ/Makefile.html  
https://www.markdownguide.org  
IA : none  

## Functions descriptions

`int		ft_isalpha(int c)`    
**checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).  In some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.**  
*The values returned are 1 if the character c falls into the tested class, and 0 if not.*

`int		ft_isdigit(int c)`  
**checks for a digit (0 through 9).**  
*The values returned are 1 if the character c falls into the tested class, and 0 if not.*

`int		ft_isalnum(int c)`  
**checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).**  
*The values returned are 1 if the character c falls into the tested class, and 0 if not.*

`int		ft_isascii(int c)`  
**checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.**  
*The values returned are 1 if the character c falls into the tested class, and 0 if not.*

`int		ft_isprint(int c)`  
**checks for any printable character including space.**  
*The values returned are 1 if the character c falls into the tested class, and 0 if not.*

`int		ft_toupper(int c)`  
**These functions convert lowercase letters to uppercase.**  
**If  c  is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the current locale. Otherwise, it returns c.**  
**If c is neither an unsigned char value nor EOF, the behavior of these functions is undefined.**  
*The value returned is that of the converted letter, or c if the conversion was not possible.*

`int		ft_tolower(int c)`  
**These functions convert uppercase letters to lowercase.**  
**If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation exists in the current locale. Otherwise, it returns c.**  
**If c is neither an unsigned char value nor EOF, the behavior of these functions is undefined.**  
*The value returned is that of the converted letter, or c if the conversion was not possible.*

`size_t		ft_strlen(const char *s)`  
**The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').**  
*The strlen() function returns the number of bytes in the string pointed to by s.*

`char		*ft_strchr(const char *s, int c)`  
**The strchr() function returns a pointer to the first occurrence of the character c in the string s. Here "character" means "byte"; these functions do not work with wide or multibyte characters.**  
*The strchr() function return a pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.*

`char		*ft_strrchr(const char *s, int c)`  
**The strrchr() function returns a pointer to the last occurrence of the character c in the string s.**  
**Here "character" means "byte"; these functions do not work with wide or multibyte characters.**  
*The strchr() and strrchr() functions return a pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.*

`char		*ft_strnstr(const char *big, const char *little, size_t len)`  
**The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a ‘\0’ character are not searched. Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.**  
*If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.*

`int		ft_strncmp(const char *s1, const char *s2, size_t n)`  
**The strcmp() function compares the two strings s1 and s2. The locale is not taken into account (for a locale-aware comparison, see strcoll). The comparison is done using unsigned characters.**  
**strcmp() returns an integer indicating the result of the comparison, as follows:**  
**•  0, if the s1 and s2 are equal;**  
**•  a negative value if s1 is less than s2;**  
**•  a positive value if s1 is greater than s2.**  
**The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and s2.**  
*The strcmp() and strncmp() functions return an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.*

`void		*ft_memset(void *s, int c, size_t n)`  
**The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.**  
*The memset() function returns a pointer to the memory area s.*

`void		ft_bzero(void *s, size_t n)`  
**The  bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.**  
*Return value : None.*

`void		*ft_memchr(const void *s, int c, size_t n)`  
**The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.**  
*The memchr() function return a pointer to the matching byte or NULL if the character does not occur in the given memory area.*

`int		ft_memcmp(const void *s1, const void *s2, size_t n)`  
**The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.**  
*The memcmp() function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.*
*For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ in s1 and s2.*
*If n is zero, the return value is zero.*

`void		*ft_memcpy(void *dest, const void *src, size_t n)`  
**The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap. Use memmove(3) if the memory areas do overlap.**  
*The memcpy() function returns a pointer to dest.*

`void		*ft_memmove(void *dest, const void *src, size_t n)`  
**The memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.**  
*The memmove() function returns a pointer to dest.*

`size_t		ft_strlcpy(char *dst, char *src, size_t size)`  
**The strlcpy() and strlcat() functions copy and concatenate strings respectively. They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length)  and  guarantee  to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there is at least one byte free in dst). Note that a byte for the NUL should be included in size. Also note that strlcpy() and  strlcat() only operate  on  true "C” strings. This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated. The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.**  
*The strlcpy() and strlcat() functions return the total length of the string they tried to create.*
*For strlcpy() that means the length of src.*
*For strlcat() that means the initial length of dst plus the length of src. While this may seem somewhat confusing, it was done to make truncation detection simple.*

`size_t		ft_strlcat(char *dst, char *src, size_t size)`  
**The strlcpy() and strlcat() functions copy and concatenate strings respectively. They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length)  and  guarantee  to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there is at least one byte free in dst). Note that a byte for the NUL should be included in size. Also note that strlcpy() and  strlcat() only operate  on  true "C” strings. This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated. The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.**  
*The strlcpy() and strlcat() functions return the total length of the string they tried to create.*
*For strlcpy() that means the length of src.*
*For strlcat() that means the initial length of dst plus the length of src. While this may seem somewhat confusing, it was done to make truncation detection simple.*

`int		ft_atoi(const char *nptr)`  
**The atoi() function converts the initial portion of the string pointed to by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10);**  
**checks for white-space characters. In the "C" and "POSIX" locales, these are: space, form-feed ('\f'), newline ('\n'), carriage return ('\r'), horizontal tab ('\t'), and vertical tab ('\v').**  
*The converted value or 0 on error.*

`void		*ft_calloc(size_t nmemb, size_t size)`  
**The  calloc()  function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.**  
**The memory is set to zero. If nmemb or size is 0, then calloc() returns a unique pointer value that can later be successfully passed to free().**  
**If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error.  By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated : malloc(nmemb * size);**  
*The malloc(), calloc(), realloc(), and reallocarray() functions return a pointer to the allocated memory, which is suitably aligned for any type that fits into the requested size or less.  On error, these functions return NULL and set errno.  Attempting to allocate more than  PTRDIFF_MAX  bytes  is considered an error, as an object that large could cause later pointer subtraction to overflow.*

`char		*ft_strdup(const char *s)`  
**The strdup() function returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc, and can be freed with free.**  
*On success, the strdup() function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available, with errno set to indicate the error.*

`char		*ft_substr(char const *s, unsigned int start, size_t len)`  
**Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.**  
*The substring. NULL if the allocation fails.*

`char	*ft_strjoin(char const *s1, char const *s2)`  
**Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.**  
*The new string. NULL if the allocation fails*

`char	*ft_strtrim(char const *s1, char const *set)`  
**Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.**  
*The trimmed string. NULL if the allocation fails.*

`char **ft_split(char const *s, char c)`  
**Allocates (with malloc) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.**  
*The array of new strings resulting from the split. NULL if the allocation fails.*

`char	*ft_itoa(int n)`  
**Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled.**  
*The string representing the integer. NULL if the allocation fails.*

`char *ft_strmapi(char const *s, char (*f)(unsigned, int, char))`  
**Applies the function ’f’ to each character of the string ’s’, passing its index as the first argument and the character itself as the second. A new string is created (using malloc) to collect the results from the successive applications of ’f’.**  
*The string created from the successive applications of ’f’. Returns NULL if the allocation fails.*

`void ft_striteri(char *s, void (*f)(unsigned int, char*))`  
**Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.**  
*None*

`void	ft_putchar_fd(char c, int fd)`  
**Outputs the character ’c’ to the given file descriptor.**  
*None*

`void	ft_putstr_fd(char *s, int fd)`  
**Outputs the string ’s’ to the given file descriptor.**  
*None*

`void	ft_putendl_fd(char *s, int fd)`  
**Outputs the string ’s’ to the given file descriptor followed by a newline.**  
*None*

`void	ft_putnbr_fd(int n, int fd)
**Outputs the integer ’n’ to the given file descriptor.**  
*None*

`t_list	*ft_lstnew(void *content)`  
**Allocates memory (using malloc) and returns a new node. The ’content’ member variable is initialized with the given parameter ’content’. The variable ’next’ is initialized to NULL.**  
*A pointer to the new node*

`void	ft_lstadd_front(t_list **lst, t_list *new)`  
**Adds the node ’new’ at the beginning of the list.**  
*None*

`int	ft_lstsize(t_list *lst)`  
**Counts the number of nodes in the list.**  
*The length of the list*

`t_list	*ft_lstlast(t_list *lst)`  
**Returns the last node of the list.**  
*Last node of the list*

`void	ft_lstadd_back(t_list **lst, t_list *new)`  
**Adds the node ’new’ at the end of the list.**  
*None*

`void	ft_lstdelone(t_list *lst, void (*del)(void *))`  
**Takes a node as parameter and frees its content using the function ’del’. Frees the node itself but does NOT free the next node.**  
*None*

`void	ft_lstclear(t_list **lst, void (*del)(void *))`  
**Deletes and frees the given node and all its successors, using the function  ’del’ and free. Finally, set the pointer to the list to NULL.**  
*None*

`void	ft_lstiter(t_list *lst, void (*f)(void *))`  
**Iterates through the list ’lst’ and applies the function ’f’ to the content 
of each node.**  
*None*

`t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`  
**Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.**  
*The new list. NULL if the allocation fails.*

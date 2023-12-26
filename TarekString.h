#ifndef TAREKSTRING_H
#define TAREKSTRING_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *
 * @param
 *  str − This is the pointer to the block of memory where the search is performed.

c − This is the value to be passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.

* n − This is the number of bytes to be analyzed.
* @return This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.
*/
void *Tarekmemchr(const void *str, int c, int n);
/**
 * @param
 * str1 − This is the pointer to a block of memory.

str2 − This is the pointer to a block of memory.

n − This is the number of bytes to be compared.
 * @return 
 * if Return value < 0 then it indicates str1 is less than str2.

if Return value > 0 then it indicates str2 is less than str1.

if Return value = 0 then it indicates str1 is equal to str2.
*/
int Tarekmemcmp(const void *str1, const void *str2, size_t n);
/**
 * @param
 * dest − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

  src − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.

n − This is the number of bytes to be copied.
 * @return 
 * This function returns a pointer to destination, which is str1.
*/
void *Tarekmemcpy(void *dest, const void * src, size_t n);


/**
 * @param
 * str1 − This is a pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

str2 − This is a pointer to the source of data to be copied, type-casted to a pointer of type void*.

n − This is the number of bytes to be copied.
 * @return 
 * This function returns a pointer to the destination, which is str1.
 * 
*/
void *Tarekmemmove(void *str1, const void *str2, size_t n);

/**
 * @param
 * str − This is a pointer to the block of memory to fill.

c − This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.

n − This is the number of bytes to be set to the value.
 @return
 This function returns a pointer to the memory area str.
*/
void *Tarekmemset(void *str, int c, size_t n);

/**
 * @param
 * dest − This is pointer to the destination array, which should contain a C string, and should be large enough to contain the concatenated resulting string.
 * 
 * src − This is the string to be appended. This should not overlap the destination.
 * @return 
 * This function returns a pointer to the resulting string dest.
*/
char *Tarekstrcat(char *dest, const char *src);

/**
 * @param 
 * dest − This is pointer to the destination array, which should contain a C string, and should be large enough to contain the concatenated resulting string which includes the additional null-character.

src − This is the string to be appended.

n − This is the maximum number of characters to be appended.
 * @return 
 * This function returns a pointer to the resulting string dest.
*/
char *Tarekstrncat(char *dest, const char *src, size_t n);

/**
 * @param
 * str − This is the C string to be scanned.

c − This is the character to be searched in str.
 @return
 This returns a pointer to the first occurrence of the character c in the string str, or NULL if the character is not found.
 * 
*/
char *Tarekstrchr(const char *str, int c);

/**
 * @param
 * str1 − This is the first string to be compared.

str2 − This is the second string to be compared.
 * @return 
 * if Return value < 0 then it indicates str1 is less than str2.

if Return value > 0 then it indicates str2 is less than str1.

if Return value = 0 then it indicates str1 is equal to str2.
 * 
*/

int Tarekstrcmp(const char *str1, const char *str2);


/**
 * @param
 * str1 − This is the first string to be compared.

str2 − This is the second string to be compared.

n − The maximum number of characters to be compared.
  @return 
  if Return value < 0 then it indicates str1 is less than str2.

if Return value > 0 then it indicates str2 is less than str1.

if Return value = 0 then it indicates str1 is equal to str2.
 * 
*/
int Tarekstrncmp(const char *str1, const char *str2, size_t n);

/**
 * @param
 * str1 − This is the first string to be compared.

str2 − This is the second string to be compared.
 * @return
 * if Return value < 0 then it indicates str1 is less than str2.
if Return value > 0 then it indicates str2 is less than str1.
if Return value = 0 then it indicates str1 is equal to str2.
*/
int Tarekstrcoll(const char *str1, const char *str2);

/**
 * @param
 * dest − This is the pointer to the destination array where the content is to be copied.

src − This is the string to be copied.
 * @return 
 * This returns a pointer to the destination string dest.
*/
char *Tarekstrcpy(char *dest, const char *src);

/**
 * @param
 * dest − This is the pointer to the destination array where the content is to be copied.

src − This is the string to be copied.

n − The number of characters to be copied from source.
 * @return 
 * This function returns the pointer to the copied string.
*/
char *Tarekstrncpy(char *dest, const char *src, size_t n);

/**
 * @param
 * str1 − This is the main C string to be scanned.

str2 − This is the string containing a list of characters to match in str1.
 * @return
 * This function returns the number of characters in the initial segment of string str1 which are not in the string str2.
*/
size_t Tarekstrcspn(const char *str1, const char *str2);

/**
 * @param
 * errnum − This is the error number, usually errno.
 * @return
 * This function returns a pointer to the error string describing error errnum.
 * 
*/
char *Tarekstrerror(int errnum);


/**
 * @param
 * str − This is the string whose length is to be found.
 * @return
 * This function returns the length of string.
*/
size_t Tarekstrlen(const char *str);

/**
 * @param
 * str1 − This is the C string to be scanned.

str2 − This is the C string containing the characters to match.
 * @return
 * This function returns a pointer to the character in str1 that matches one of the characters in str2, or NULL if no such character is found.
*/
char *Tarekstrpbrk(const char *str1, const char *str2);

/**
 * @param
 * str − This is the C string.

c − This is the character to be located. It is passed as its int promotion, but it is internally converted back to char.
 * @return
 * This function returns a pointer to the last occurrence of character in str. If the value is not found, the function returns a null pointer.
*/
char *Tarekstrrchr(const char *str, int c);

/**
 * @param
 * str1 − This is the main C string to be scanned.

str2 − This is the string containing the list of characters to match in str1.
 * @return
 * This function returns the number of characters in the initial segment of str1 which consist only of characters from str2.
*/
size_t Tarekstrspn(const char *str1, const char *str2);

/**
 * @param
 * haystack − This is the main C string to be scanned.

needle − This is the small string to be searched with-in haystack string.
 * @return
 * This function returns a pointer to the first occurrence in haystack of any of the entire sequence of characters specified in needle, or a null pointer if the sequence is not present in haystack.
 * 
*/
char *Tarekstrstr(const char *haystack, const char *needle);

/**
 * @param
 * str − The contents of this string are modified and broken into smaller strings (tokens).

delim − This is the C string containing the delimiters. These may vary from one call to another.
 * @return
 *  This function returns a pointer to the first token found in the string. A null pointer is returned if there are no tokens left to retrieve.
*/
char *Tarekstrtok(char *str, const char *delim);

/**
 * @param
 * dest − This is the pointer to the destination array where the content is to be copied. It can be a null pointer if the argument for n is zero.

src − This is the C string to be transformed into current locale.

n − The maximum number of characters to be copied to str1.
 * @return
 * This function returns the length of the transformed string, not including the terminating null-character.
*/
size_t Tarekstrxfrm(char *dest, const char *src, size_t n);

#endif /*TAREKSTRING_H*/

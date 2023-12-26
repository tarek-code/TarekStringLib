#include "TarekString.h"

/**
 * str − This is the pointer to the block of memory where the search is performed.

c − This is the value to be passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.

n − This is the number of bytes to be analyzed.
*/
void *Tarekmemchr(const void *str, int c, int n){
char *ptr=(char *)str;
    if(NULL!=str){
    for(int i=0;i<n;i++){
        
        
        if(ptr[i]==c){
            
                ptr=&ptr[i];
        break;
        }
    }
    }
    else{
        return NULL;
    }
    return (void *)ptr;
}

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
int Tarekmemcmp(const void *str1, const void *str2, size_t n){
    char* ptr1=(char *)str1;
    char *ptr2=(char *)str2;
  
    signed char value=0;
    if(NULL!=str1 && NULL!= str2){
for(int i=0;i<n;i++){
if(ptr1[i]>ptr2[i]){
value=1;
break;
}
else if (ptr1[i]<ptr2[i])
{
    value=-1;
    break;
}
else{
    value=0;
    break;
}

}
    }
    else{
        return 99;
    }
return (int)value;
}

/**
 * @param
 * dest − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

  src − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.

n − This is the number of bytes to be copied.
 * @return 
 * This function returns a pointer to destination, which is str1.
*/
void *Tarekmemcpy(void *dest, const void * src, size_t n){
if(NULL!=dest && NULL!= src){
    for(int i=0;i<n;i++){
        ((char*)dest)[i]= ((char*)src)[i];
    }
}
else{
    return NULL;
}
    return (void*)src;
}

/**
 * @param
 * str1 − This is a pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

str2 − This is a pointer to the source of data to be copied, type-casted to a pointer of type void*.

n − This is the number of bytes to be copied.
 * @return 
 * This function returns a pointer to the destination, which is str1.
 * 
*/
void *Tarekmemmove(void *str1, const void *str2, size_t n){
if(NULL!=str1 && NULL!= str2){
for(int i=0;i<n;i++){
((char*)str1)[i]=((char*)str2)[i];
}
}
else{
    return NULL;
}
return (void*)str1;

}



/**
 * @param
 * str − This is a pointer to the block of memory to fill.

c − This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.

n − This is the number of bytes to be set to the value.
 @return
 This function returns a pointer to the memory area str.
*/
void *Tarekmemset(void *str, int c, size_t n){
if(NULL!=str){
    for(int i=0;i<n;i++){
((char*)str)[i]=(char)c;
}
}
else
{
    return NULL;
}
return (void*)str;
}

/**
 * @param
 * dest − This is pointer to the destination array, which should contain a C string, and should be large enough to contain the concatenated resulting string.
 * 
 * src − This is the string to be appended. This should not overlap the destination.
 * @return 
 * This function returns a pointer to the resulting string dest.
*/
char *Tarekstrcat(char *dest, const char *src){
    char* Src=(char*)src;
    char *Dest=(char*)dest;
    int des_len=strlen(Dest);
int counrt=0;

    if(NULL!=dest && NULL!=src){

           while(Src[counrt]!='\0')
           {
            Dest[des_len+counrt]=Src[counrt];
            counrt++;
         } 
    }
    else{
        return NULL;
    }       
     Dest[des_len+counrt]='\0';
     return (void*)Dest;
}


/**
 * @param 
 * dest − This is pointer to the destination array, which should contain a C string, and should be large enough to contain the concatenated resulting string which includes the additional null-character.

src − This is the string to be appended.

n − This is the maximum number of characters to be appended.
 * @return 
 * This function returns a pointer to the resulting string dest.
*/
char *Tarekstrncat(char *dest, const char *src, size_t n){
    char* Dest=(char*)dest;
    char* Src=(char*)src;
    int Dest_Len=strlen(Dest);
    int counrt=0;
 if(NULL!=dest && NULL!=src){
    
    while(counrt!=n)
           {
            Dest[Dest_Len+counrt]=Src[counrt];
            counrt++;
         }
 }   
 else{
    return NULL;
 }
 Dest[Dest_Len+counrt]='\0';
 return (void*)Dest;
}


/**
 * @param
 * str − This is the C string to be scanned.

c − This is the character to be searched in str.
 @return
 This returns a pointer to the first occurrence of the character c in the string str, or NULL if the character is not found.
 * 
*/
char *Tarekstrchr(const char *str, int c){
    char *ptr=NULL;
    if(NULL!=str){
        for(int i=0;i<c;i++){
        
        
        if(str[i]==c){
            
                ptr=&str[i];
        break;
        }
    }
    }
     else{
    return NULL;
 }
 return ptr;
}


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

int Tarekstrcmp(const char *str1, const char *str2){
  int n1=strlen(str1);
    int n2=strlen(str2);
    int n=0;
    if(n1>=n2){
        n=n1;
    }
    else{
        n=n2;
    }
    signed char value=0;
    if(NULL!=str1 && NULL!= str2){
for(int i=0;i<n;i++){
if(str1[i]>str2[i]){
value=1;
break;
}
else if (str1[i]<str2[i])
{
    value=-1;
    break;
}
else{
    value=0;
    break;
}

}
    }
    else{
        return 99;
    }
return (int)value;
}


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
int Tarekstrncmp(const char *str1, const char *str2, size_t n){
    signed char value=0;
    if(NULL!=str1 && NULL!= str2){
for(int i=0;i<n;i++){
if(str1[i]>str2[i]){
value=1;
break;
}
else if (str1[i]<str2[i])
{
    value=-1;
    break;
}
else{
    value=0;
    break;
}

}
    }
    else{
        return 99;
    }
return (int)value;
}


/**
 * @param
 * str1 − This is the first string to be compared.

str2 − This is the second string to be compared.
 * @return
 * if Return value < 0 then it indicates str1 is less than str2.
if Return value > 0 then it indicates str2 is less than str1.
if Return value = 0 then it indicates str1 is equal to str2.
*/
int Tarekstrcoll(const char *str1, const char *str2){
int n1=strlen(str1);
    int n2=strlen(str2);
    int n=0;
    if(n1>=n2){
        n=n1;
    }
    else{
        n=n2;
    }
    signed char value=0;
    if(NULL!=str1 && NULL!= str2){
for(int i=0;i<n;i++){
if(str1[i]>str2[i]){
value=1;
break;
}
else if (str1[i]<str2[i])
{
    value=-1;
    break;
}
else{
    value=0;
    break;
}

}
    }
    else{
        return 99;
    }
return (int)value;

}


/**
 * @param
 * dest − This is the pointer to the destination array where the content is to be copied.

src − This is the string to be copied.
 * @return 
 * This returns a pointer to the destination string dest.
*/
char *Tarekstrcpy(char *dest, const char *src){
int counter=0;
    if(NULL!=dest && NULL!= src){
    while(src[counter]!='\0'){
        dest[counter]= src[counter];
        counter++;
    }
}
else{
    return NULL;
}
dest[counter]='\0';
    return (void*)dest;
}



/**
 * @param
 * dest − This is the pointer to the destination array where the content is to be copied.

src − This is the string to be copied.

n − The number of characters to be copied from source.
 * @return 
 * This function returns the pointer to the copied string.
*/
char *Tarekstrncpy(char *dest, const char *src, size_t n){
    if(NULL!=dest && NULL!= src){
    for(int i=0;i<n;i++){
        ((char*)dest)[i]= ((char*)src)[i];
    }
}
else{
    return NULL;
}
    return (void*)src;
}


/**
 * @param
 * str1 − This is the main C string to be scanned.

str2 − This is the string containing a list of characters to match in str1.
 * @return
 * This function returns the number of characters in the initial segment of string str1 which are not in the string str2.
*/
size_t Tarekstrcspn(const char *str1, const char *str2){
 
int str1_len=strlen(str1);
int str2_len=strlen(str2);

    if(NULL!=str1 && NULL!=str2){

    
        for(int i=0;i<str2_len;i++){
            for(int k=0;k<str1_len;k++){
                if(str1[k]==str2[i]){
             return k;
                }
            }
        }
    
    
    }
    else{
        return 99;
    }

    return -1; //has error
}


/**
 * @param
 * errnum − This is the error number, usually errno.
 * @return
 * This function returns a pointer to the error string describing error errnum.
 * 
*/
char *Tarekstrerror(int errnum){
    switch (errnum) {
        case 0:
            return "No error";
        case 1:
            return "Operation not permitted";
        case 2:
            return "No such file or directory";
        // Add more cases as needed

        default:
            return "Unknown error";
    }
}



/**
 * @param
 * str − This is the string whose length is to be found.
 * @return
 * This function returns the length of string.
*/
size_t Tarekstrlen(const char *str){
 const char *temp = str;

    while (*temp != '\0') {
        temp++;
    }

    return (size_t)(temp - str);
}


/**
 * @param
 * str1 − This is the C string to be scanned.

str2 − This is the C string containing the characters to match.
 * @return
 * This function returns a pointer to the character in str1 that matches one of the characters in str2, or NULL if no such character is found.
*/
char *Tarekstrpbrk(const char *str1, const char *str2){

    int str1_len=strlen(str1);
int str2_len=strlen(str2);

    if(NULL!=str1 && NULL!=str2){

    
        for(int i=0;i<str2_len;i++){
            for(int k=0;k<str1_len;k++){
                if(str1[k]==str2[i]){
             return &str1[k];
                }
            }
        }
    
    
    }
    else{
        return NULL;
    }

    return NULL; //has error
}



/**
 * @param
 * str − This is the C string.

c − This is the character to be located. It is passed as its int promotion, but it is internally converted back to char.
 * @return
 * This function returns a pointer to the last occurrence of character in str. If the value is not found, the function returns a null pointer.
*/
char *Tarekstrrchr(const char *str, int c){
    int str_len=strlen(str);
    char *value=NULL;
    if(NULL!=str){
    while(str_len>=0){
        if(str[str_len]==c){
            value=&str[str_len];
            break;
        }
        str_len--;
    }
    }
    else{
        return NULL;
    }
    return value;
}


/**
 * @param
 * str1 − This is the main C string to be scanned.

str2 − This is the string containing the list of characters to match in str1.
 * @return
 * This function returns the number of characters in the initial segment of str1 which consist only of characters from str2.
*/
size_t Tarekstrspn(const char *str1, const char *str2){

    int counter=0;
   int str1_len=strlen(str1);
int str2_len=strlen(str2);

    if(NULL!=str1 && NULL!=str2){

    
        for(int i=0;i<str2_len;i++){
            for(int k=0;k<str1_len;k++){
                if(str1[k]==str2[i]){
             counter++;
                }
            }
        }
    
    
    }
    else{
        return 0;
    }

    return counter; //has error
}

/**
 * @param
 * haystack − This is the main C string to be scanned.

needle − This is the small string to be searched with-in haystack string.
 * @return
 * This function returns a pointer to the first occurrence in haystack of any of the entire sequence of characters specified in needle, or a null pointer if the sequence is not present in haystack.
 * 
*/
char *Tarekstrstr(const char *haystack, const char *needle){
     
   int str1_len=strlen(haystack);
int str2_len=strlen(needle);
int counrt=0;
char *result = malloc(str2_len + 1);
    if(NULL!=haystack && NULL!=needle){

    
        for(int i=0;i<str2_len;i++){
            for(int k=0;k<str1_len;k++){
                if(haystack[k]==needle[i]){
                result[counrt]=haystack[k];
                counrt++;
                break;
                }
            }
        }
    result[counrt]='\0';
    
    }
    else{
        return 0;
    }

    return result; //has error
}


/**
 * @param
 * str − The contents of this string are modified and broken into smaller strings (tokens).

delim − This is the C string containing the delimiters. These may vary from one call to another.
 * @return
 *  This function returns a pointer to the first token found in the string. A null pointer is returned if there are no tokens left to retrieve.
*/
char *Tarekstrtok(char *str, const char *delim){
     static char *lastToken = NULL;

    // If a new string is provided, update lastToken
    if (str != NULL) {
        lastToken = str;
    } else {
        // If no new string, continue from where we left off
        if (lastToken == NULL) {
            return NULL; // No more tokens left
        }
        str = lastToken;
    }

    // Skip leading delimiters
    str += Tarekstrspn(str, delim);

    // If the current position is at the end, return NULL
    if (*str == '\0') {
        lastToken = NULL;
        return NULL;
    }

    // Find the end of the token
    char *end = str + Tarekstrcspn(str, delim);

    // If not at the end, null-terminate the token and update lastToken
    if (*end != '\0') {
        *end = '\0';
        lastToken = end + 1;
    } else {
        lastToken = NULL;
    }

    return str;
}


/**
 * @param
 * dest − This is the pointer to the destination array where the content is to be copied. It can be a null pointer if the argument for n is zero.

src − This is the C string to be transformed into current locale.

n − The maximum number of characters to be copied to str1.
 * @return
 * This function returns the length of the transformed string, not including the terminating null-character.
*/
size_t Tarekstrxfrm(char *dest, const char *src, size_t n){
    if(NULL!=dest && NULL!= src){
    for(int i=0;i<n;i++){
        if(src[i]!='\0'){
            dest[i]= src[i];
        }
        else{
            break;
        }
        
    }
}
else{
    return 0;
}
    return Tarekstrlen(dest);
}
#include "TarekString.h"
#include <string.h>
#include <errno.h>
int main(int argc, char const *argv[])
{
    char dest[20];
   char src[20];
   int len;

   strcpy(src, "Tutorials Point");
   len = Tarekstrxfrm(dest, src, 20);

   printf("Length of string |%s| is: |%d|", dest, len);
   
   return(0);
}

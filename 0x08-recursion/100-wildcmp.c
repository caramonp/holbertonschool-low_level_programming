#include "holberton.h"
#include <string.h>

int wildcmp(char *s1, char *s2)
{
  if(*s2==42 && *s1==42 && '\0' == 42){
      return (1);
     }
  if(*s1!=*s2){
      return 0;
  }
    else{
        return 1;
}
return (wildcmp(s1+1,s2+1));
}
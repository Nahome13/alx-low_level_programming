#include <stdlib.h>                                                                                          
#include <time.h>                                                                                            
#include <stdio.h>                                                                                           
                                                                                                              
/**
 * main - entry point
 *
 * describtion: print  a number along with digit last digit is 0 ,greater than 5 ,less than 6.
 *
 *  return: always 0
 */
int main(void)                                                                                               
{                                                                                                            
int n;                  
srand(time(0));                                                                                              
n = rand() - RAND_MAX / 2;
if (n % 10 > 5);
printf("last digit of %d is %d %s\n", n, n % 10;
else if((n % 10) ==0) ? "and is zero "
: (((n % 10) > 5) ? "and is greater than five"
: "and is less than 6 and not 0"));
return (0);
}

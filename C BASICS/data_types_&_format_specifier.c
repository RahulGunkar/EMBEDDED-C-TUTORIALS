/* This file contains various format specifiers in C and also contains ways to type cast


	Data Type             Memory (bytes)          Range                      Format Specifier
	short int                   2          -32,768 to 32,767                       %hd
	unsigned short int          2           0 to 65,535                            %hu
	unsigned int                4           0 to 4,294,967,295                     %u
	int                         4          -2,147,483,648 to 2,147,483,647         %d
	long int                    4          -2,147,483,648 to 2,147,483,647         %ld
	unsigned long int           4           0 to 4,294,967,295                     %lu
	long long int               8          -(2^63) to (2^63)-1                     %lld
	unsigned long long int      8           0 to 18,446,744,073,709,551,615        %llu
	signed char                 1          -128 to 127                             %c 
	unsigned char               1           0 to 255                               %c
	float                       4                                                  %f
	double                      8                                                  %lf
	long double                 12                                                 %Lf
	char						1												   %c
*/

#include <stdio.h>	//header file which contains scanf and printf functions




int main(){

    printf("\nA Char is %zu bytes", sizeof( char ));
    printf("\nAn int is %zu bytes", sizeof( int ));
    printf("\nA short is %zu bytes", sizeof( short ));
    printf("\nA long is %zu bytes", sizeof( long ));
    printf("\nA long long is %zu bytes\n", sizeof( long long ));
    printf("\nAn unsigned Char is %zu bytes", sizeof( unsigned char ));
    printf("\nAn unsigned int is %zu bytes", sizeof( unsigned int));
    printf("\nAn unsigned short is %zu bytes", sizeof( unsigned short ));
    printf("\nAn unsigned long is %zu bytes", sizeof( unsigned long ));
    printf("\nAn unsigned long long is %zu bytes\n",sizeof( unsigned long long ));
    printf("\nfloat is %zu bytes", sizeof( float ));
    printf("\nA double is %zu bytes\n", sizeof( double ));
    printf("\nA long double is %zu bytes\n\n", sizeof( long double ));

   return 0;
}



/*IMPORTANT NOTE


sizeof returns size_t you need to use %zu for the format string instead\
of %d. The type of unsigned integer of size_t can vary (depending on \
platform) and may not be long unsigned int everywhere, which is covered\
in the draft C99 standard section 6.5.3.4 The sizeof operator paragraph 4:
The value of the result is implementation-defined, and its type (an unsigned\
integer type) is size_t, defined in (and other headers).
Also note that using the wrong format specifier for printf is undefined behavior,\
which is covered in section 7.19.6.1 The fprintf function, which also covers printf \
with respect to format specifiers says:
If a conversion specification is invalid, the behavior is undefined.248)\
If any argument is not the correct type for the corresponding conversion specification, \
the behavior is undefined.

*/

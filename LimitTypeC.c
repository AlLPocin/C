// Программа выводит диопозоны 
// типоа даннных в СИ
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("Char:   Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(char), CHAR_MIN, CHAR_MAX                    );
	printf("UChar:  Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(unsigned char), 0, UCHAR_MAX                 );
	printf("SChar:  Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX           );
	printf("Int:    Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(int), INT_MIN, INT_MAX                       );
	printf("UInt:   Byte: (%d) :: Min - (%d)   :::: Max - (%u)\n", sizeof(unsigned int), 0, UINT_MAX                   );
	printf("SInt:   Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(signed int), INT_MIN, INT_MAX                );
	printf("ShInt:  Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(short int), SHRT_MIN, SHRT_MAX               );
	printf("UShInt: Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(unsigned short int), 0, USHRT_MAX            );
	printf("SShInt: Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(signed short int), SHRT_MIN, SHRT_MAX        );
	printf("LInt:   Byte: (%d) :: Min - (%d)   :::: Max - (%d)\n", sizeof(long int), LONG_MIN, LONG_MAX                );
	printf("LLInt:  Byte: (%d) :: Min - (%lld) :::: Max - (%lld)\n", sizeof(long long int), LLONG_MIN, LLONG_MAX       );
	printf("SLInt:  Byte: (%d) :: Min - (%ld)  :::: Max - (%ld)\n", sizeof(signed long int), LONG_MIN, LONG_MAX        );
	printf("ULInt:  Byte: (%d) :: Min - (%d)   :::: Max - (%llu)\n", sizeof(unsigned long long int), 0, ULONG_LONG_MAX );
	printf("Float:  Byte: (%d)\n", sizeof(float)                                                                       );
	printf("Double: Byte: (%d)\n", sizeof(double)                                                                      );
	printf("Long double: Byte: (%d)\n", sizeof(long double)                                                            );
	getch();
	return 0;
}
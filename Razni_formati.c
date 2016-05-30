#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv) 
{
	float a;
    printf("Vvedite a:") ;
    scanf("%f", &a) ;
    printf("%.1f\n", a) ;
    printf("%.3f\n", a) ;
    printf("%.7f\n", a) ;
    printf("%e\n", a) ;

	system("pause") ;
	return 0 ;
}

#include <stdio.h>  

#include <stdlib.h> 

struct phone 

{

   char brand[16],type[10];

   int year,price;

}; 

int main(void)

{

    int num;

	printf("-------------------------------------------------\n");

	printf("                 phone手機結構體                 \n");

	printf("-------------------------------------------------\n"); 

    struct phone p[5]={  

	"APPLE", "8", 2017, 21500, 

    "Samsung", "S8", 2017, 24900, 

    "HTC", "Desire 10 Pro", 2016, 12900, 

    "OPPO", "R15", 2018, 9000, 

    "ASUS", "Zenfone 5", 2018, 12000

	};

    

    for (num=0; num<5; num++) 

    {

        printf("%s %s %4d %5d\n", p[num].brand, p[num].type, p[num].year, p[num].price);

    }

    system("pause"); 

    return 0;

}

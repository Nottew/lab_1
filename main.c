#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <assert.h>
#include <string.h>
#include <unistd.h>

//початкове значення аргументу ( X1 ),
// кінцеве значення аргументу ( X2 ),
// кількість точок в таблиці ( N ).

int main()
{
    double X1, X2, delta;
    unsigned int i, N;
    do{
        printf("Choose option (1 or 2): ");
        scanf("%u", &i);
    }while( i != 1 && i != 2);
    if (i == 1) {
        do{
            printf("Enter initial value: ");
            scanf("%*c");
        }while(1 != scanf("%lf", &X1));
        printf("Enter final value: ");
        scanf("%lf", &X2);
        printf("Amount of points: ");
        scanf("%u", &N);
        printf("X1=%lf, X2=%lf, N=%u\n",X1,X2,N);
        for(int g=0; g<34; g++) {printf("*");}
        printf("\n*      N   *     X    *   F(x)   *\n");
        for(int g=0; g<34; g++) {printf("*");}
        int t=1;
//        printf("\nX2: %d, X1: %d, N: %d\n",X2,X1,N);
        delta = (X2-X1)/(N-1);
//        printf("delta: %d",delta);
        do{
            printf("\n+----------+----------+----------+\n");
            printf("|          %u|        %0.1f|        %0.1f|\n",t,X1,X1*2);
            X1 = X1 + delta;
            t++;
        }while(t<=N);
    }
    else if (i == 2) {
        printf("Enter initial value: ");
        scanf("%lf", &X1);
        printf("Enter final value: ");
        scanf("%lf", &X2);
//        do{
//            printf("Enter function step: ");
//            scanf("%lf", &delta);
//        }while(delta < 1 || delta > 1000);
printf("Enter function step: ");
            scanf("%lf", &delta);
        printf("X1=%0.1lf, X2=%0.1lf, delta=%0.1lf\n",X1,X2,delta);
        for(int g=0; g<59; g++) {printf("*");}
        printf("\n*    N    *          X          *           F(x)          *\n");
        for(int g=0; g<59; g++) {printf("*");}
        int u=1;
        do{
            do{
                printf("\n+---------+---------------------+-------------------------+\n");
                printf("|    %d    |          %0.2lf        |                   %1.2lf|\n",u,X1,X1*2);
                X1 = X1 + delta;
                u++;
            }while( X1 <= X2);
        }while(getch());

    }
    else{
        printf("error");
    }
    return 0;
}

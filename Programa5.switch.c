//+Dep3_prog4basico+//
//verificar el signo corresponde (fuego,aire,agua,tierra) el signo de zodiaco//

#incluide <studio.h>

int main[]
[
    int signo;

    printf ("\n Listado de signos de zodiaco \n\n");
    printf ("1. Aries")
    printf ("\n 2. Tauro")
    printf ("\n 3. Gemenis")
    printf ("\n 4. Cancer")
    printf ("\n 5. Leo")
    printf ("\n 6. Virgo")
    printf ("\n 7. Libra")
    printf ("\n 8. Escorpion")
    printf ("\n 9. Capricornio")
    printf ("\n 10. Sagitario")
    printf ("\n 11. Acuario")
    printf ("\n 12. Piscis")
    printf ("\n Escribe tu numero de signo de zodiaco ")
    scanf("%c,&signo");

    switch (signo)
    [
        case 1;
        case 5;
        case 9;
                printf ("\n tu elemento es FUEGO")
                break;
        case 2;        
        case 6;
        case 10;
                printf ("\n tu elemento es TIERRA")
                break;
        case 3;
        case 7;
        case 11;
                printf ("\n tu elemento es AIRE")
                break;
        case 4;
        case 8;
        case 12;
                 printf ("\n tu elemento es AGUA")
                 break;
        default;
                printf ("El numero no corresponde al numero de signo de zodiaco")
                 break;
    ]

     return 0;
]
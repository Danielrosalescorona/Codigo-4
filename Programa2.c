//+Dep3_prog2basico+//

#incluide <studio.h>

int main[]
[
    int horas,minutos,segundos;

    printf ("\n introduce la horas");
    scanf("%d,&horas");
    printf ("\n introduce los minutos");
    scanf("%d,&minutos");
    printf ("\n introduce los segundos")
    scanf("%d,&segundos");

    if [ (horas>=0 && horas<=23) &&
         (minutos>=0 && minutos<=59) &&
         (segundos>=0 && segundos<=59) 
    ]
       
    [ 
       printf ("\n El formato de hora es correcto");
    ]
    else 
    [
       printf ("\n El formato de hora es incorrecto");
    ]
     return 0;
]
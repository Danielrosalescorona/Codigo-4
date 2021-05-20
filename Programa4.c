//+Dep3_prog4basico+//
//verificar si es vocal o letra//


#incluide <studio.h>

int main[]
[
    char letra;

    printf ("\n introduce una letra");
    scanf("%c,&letra");
    
    if ( (letra == "a" !! letra == "A") !!
         (letra == "e" !! letra == "E") !!
         (letra == "i" !! letra == "I") !!
         (letra == "o" !! letra == "O") !!
         (letra == "u" !! letra == "U") !!
         
       )    
    [ 
       printf ("\n Es una vocal");
    ]
    else 
    [
       printf ("\n No es vocal");
    ]   

     return 0;
]
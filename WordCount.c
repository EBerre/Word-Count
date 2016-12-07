#include <string.h>
#include <stdio.h>


int main()
{
    printf("\n\n\n\t\t%d\n", klm ("Fizik sýnavýna çalýþmadým da bunu  yazdým."));
}

int klm(char cml[ ]) // cml'yi char array haline getir.
{
    int counter = 0; //Counterý 0'a eþitle.
    char* it = cml; // cml'nin adresini belirtiyor.  
    int counter2 = 0; //counter2'yi 0'a eþitle. 

    do switch(*it) { //switch ile adres blogunu test et.
        case '\0': //karakter boþluk, 
        case ' ': case '\t': case '\n': //ya da tab, ya da entersa
            if (counter2) { counter2 = 0; counter++; }  //counter'ý 1 arttýr. 
            break; // switchten sonraki ifadeye devam etmesi için gerekli
        default: counter2 = 1; //do while döngüsünden çýkmak için gerekli,  
    } while(*it++);

    return counter;
}



#include <string.h>
#include <stdio.h>


int main()
{
    printf("\n\n\n\t\t%d\n", klm ("Fizik s�nav�na �al��mad�m da bunu  yazd�m."));
}

int klm(char cml[ ]) // cml'yi char array haline getir.
{
    int counter = 0; //Counter� 0'a e�itle.
    char* it = cml; // cml'nin adresini belirtiyor.  
    int counter2 = 0; //counter2'yi 0'a e�itle. 

    do switch(*it) { //switch ile adres blogunu test et.
        case '\0': //karakter bo�luk, 
        case ' ': case '\t': case '\n': //ya da tab, ya da entersa
            if (counter2) { counter2 = 0; counter++; }  //counter'� 1 artt�r. 
            break; // switchten sonraki ifadeye devam etmesi i�in gerekli
        default: counter2 = 1; //do while d�ng�s�nden ��kmak i�in gerekli,  
    } while(*it++);

    return counter;
}



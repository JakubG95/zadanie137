#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_LINIOWEGO 1
#define OPCJA_KWADRATOWEGO   2
#define OPCJA_WYJSCIE   0

void PierwiastekLiniowy();
void PierwiastekKwadratowy();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_LINIOWEGO,  " - Pierwiastek Liniowy");
        printf("%d %s\n", OPCJA_KWADRATOWEGO,    " - Pierwiastek Kwadratowy");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        scanf("%d", &wybrana_opcja);

        switch(wybrana_opcja) {
            case OPCJA_LINIOWEGO:   PierwiastekLiniowy();          break;
            case OPCJA_KWADRATOWEGO:     PierwiastekKwadratowy();            break;
            case OPCJA_WYJSCIE:     wyjscie_z_programu = TRUE;  break;
            default:                printf("Niepoprawny kod polecenia.\n");
        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

 void PierwiastekLiniowy ()
{
    float a,b,x;
printf("%s \n","Podaj a ");
if(scanf("%f",&a)==0)
{

    printf("podaj liczbe\n");
        exit(EXIT_FAILURE);
}
printf("%s \n","Podaj b ");
if(scanf("%f",&b)==0)
{

    printf("podaj liczbe\n");
        exit(EXIT_FAILURE);
}

if ((a == 0) && (b == 0))
{
printf("%s","Rownanie tozsamosciowe\n");
}
else
if (a == 0)
{
printf("%s","Rownanie sprzeczne\n");
}
else
{
x=-b/a;
printf("%s\n" "%.2f"  "%s", "wynik rownania  - ", x,  "\n\n" );
}



}

void PierwiastekKwadratowy() {
    /* TODO - osoba3 */

    /* TODO - właściwe obliczanie pola zrealizować poprzez dedykowaną funkcję */
    printf("\npierwiastek kwadratowy - TODO\n\n");
}

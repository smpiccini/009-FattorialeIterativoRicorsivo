#include <stdio.h>
#include <stdlib.h>

int fattorialeIterativo(int n);
int fattorialeRicorsivo(int n);

int main(int argc, char** argv) {
    int n;
    int rIterativo, rRicorsivo;
    
    printf("Inserisci un numero naturale non negativo: ");
    scanf("%d", &n);
    
    rIterativo = fattorialeIterativo(n);
    rRicorsivo = fattorialeRicorsivo(n);
    
    printf("%d! = %d (formulazione iterativa)\n", n, rIterativo);
    printf("%d! = %d (formulazione iterativa)\n", n, rRicorsivo);
    return (EXIT_SUCCESS);
}

int fattorialeIterativo(int n) {
    int risultato=1;
    while (n>0) {
        risultato=risultato*n;
        n--;
    }
    return risultato;
}
int fattorialeRicorsivo(int n) {
    int risultato;
    if (n==0) {
        return 1;
    }
    else {
        risultato=n*fattorialeRicorsivo(n-1);
        return risultato;
    }
}
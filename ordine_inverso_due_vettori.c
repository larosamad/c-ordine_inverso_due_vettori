/* Scrivere un programma che acquisisce dall'utente al massimo 50 numeri interi positivi interrompendo l'acquisizione se viene inserito 0
li inserisce in un vet_1 
produce un vet_2 che li contiene in ordine inverso
lo stampa a schermo

per esempio, se la sequenza di ingresso fosse
3 5 4 5 7 5 8 6 9 0

il programma stampa vet_2
0 9 6 8 5 7 5 4 5 3
versione senza sottofunzioni
*/

#include <stdio.h>
#define N 50

int i=0, z, y, x, temp;


int main (void){
    int vettore[N];
    int altroVettore[N];

    do {
            printf("Inserisci numero ");
            scanf("%d", &temp);
            vettore[i]=temp;
            i++;
    } while ((i<N) && (temp!=0));

    y = i-1;
    for(z=0; z<i; z++){
            altroVettore[y]=vettore[z];
            y--;
    }

    printf("Il nuovo vettore: ");
    for(x=0; x<i; x++){
        printf("%d ", altroVettore[x]);
    }
    
    return 0;
}
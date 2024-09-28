#include <iostream>

int main() {
    int numProdotti;
    float przUnitario;
    float impTotale;
    float sconto=0;
    printf("inserisci il numero dei prodotti : ");
    scanf("%d %f", &numProdotti, &przUnitario);
    impTotale= numProdotti * przUnitario;
    if(impTotale>50) {
        sconto=(impTotale-50)*0.2;
        impTotale-= sconto;
        sconto+=10;
    }else if(impTotale>10) {
        sconto=(impTotale-10)*0.1;
        impTotale-=sconto;
    }
    printf("%.2f %.2f %.2f", numProdotti*przUnitario, impTotale, sconto);
}

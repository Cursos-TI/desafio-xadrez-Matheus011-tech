#include <stdio.h>

void moverBispo (int casas) {
    if (casas > 0)  {
        printf("Bispo foi para Diagonal Direita\n");
        moverBispo( casas -1);
    }
}

void moverTorre (int casas) {
    if (casas > 0)  {
        printf("Torre foi para Cima\n");
        moverTorre( casas -1);
    }
}

void moverRainha (int casas) {
    if (casas > 0)  {
        printf("Rainha foi para a esquerda\n");
        moverRainha( casas -1);
    }
}

void moverCavalo (int casas) {
    if (casas > 0)  {
        printf("Cavalo foi para cima\n");
        moverCavalo( casas -1);
       
    }
}

int main() {
  
    moverBispo(5);

    moverTorre(5);

    moverRainha(5);

    moverCavalo(4);
    printf("e depois para a direita\n");


    return 0;
}

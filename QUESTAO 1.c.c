#include <stdio.h>

int media(int numero[10]){
    
    int i, soma = 0;
    float mediah;
    
    for(i=0;i<10;i++){
        soma += numero[i];
    }
        mediah = soma/10.0;
        
        return mediah;
}

int Maiormenor(int numero[10]){
    
    int i, maior = numero[0], menor = numero[0];
    
    for (i=0; i<10; i++){
        if(numero[i] > maior){
            maior = numero[i];
            
        }
        if(numero[i] < menor){
            menor = numero[i];
        
        }
    }
    printf("O maior número é %d, já o menor é %d \n", maior, menor);
    
}
int Pares(int numero[10]){
    
    int i, cont=0;
    
    for(i=0; i<10;i++){
        if(numero[i] % 2 == 0){
        cont++;
        }
    }
    printf("Números pares: %d \n", cont);
    return cont;
}    

int main(){
    int i, num[10];
    float mediah;
    
    printf("Por gentileza, informe 10 números: \n");
    
    for(i=0;i<10;i++){
        printf("Número %d: ", i+1);  
        scanf("%d", &num[i]);
        }
        mediah = media(num);
        printf("A média é: %.2f \n", mediah);
        Maiormenor(num);
        Pares(num);
        
        return 0;
}
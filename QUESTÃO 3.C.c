#include<stdio.h>

int soma_numero(int numero){
    
    int soma = 0;
    
    if(numero<0){
        numero = -numero;
    }
    
    while(numero>0){
        soma += numero % 10;
        numero /= 10; 
    }
    
    return soma;
}
int main(){
    
    int num;
    
    printf("Por gentileza, informe um número inteiro: \n");
    scanf("%d", &num);
    
    printf("A soma dos números %d é: %d \n", num, soma_numero(num));
    
    return 0;
}
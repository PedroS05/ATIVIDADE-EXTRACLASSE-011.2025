#include<stdio.h>

float somar(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

int main(){
    float n1, n2, resultado;
    int opcao;
    
    printf("Por gentileza, informe dois números: \n");
    scanf("%f%f", &n1, &n2);
    
    printf("\n Escolha o que deseja fazer:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            resultado = somar(n1, n2);
            printf("Resultado: %.2f\n", resultado);
            break;
        
        case 2:
            resultado = subtrair(n1, n2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = multiplicar(n1, n2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            if (n2 == 0) {
                printf("Erro: divisão por zero não é permitida!\n");
            } 
            else{
                resultado = dividir(n1, n2);
                printf("Resultado: %.2f\n", resultado);
            }
            break;

        default:
            printf("Erro: operação inválida!\n");
    }

    return 0;
}

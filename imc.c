include <stdio.h>

void main(){
    float peso;
    float altura;
    float imc;
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sua Altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    printf("Seu imc é: %.2f", imc);
}

/*Calculadora científica no terminal

operações básicas + potência + raiz + fatorial*/

#include <stdio.h>

float soma(float x, float y){
    return x+y;
}

float multiplicacao(float x, float y){
    return x*y;
}

float divisao(float x, float y){
    
    return x/y;
}

float subtracao(float x, float y){
    return x-y;
}

int potencia(int numero, int potencia){
    int resultado = 1;
    for(int i = 1; i<=potencia; i++){
        resultado = resultado*numero;
    }
    return resultado;
}

int fatorial(int numero){
    if(numero==0) return 1;
    else return numero*(fatorial(numero-1)); 
}

int raizQuadrada(int numero){
 int raiz = -1;
 for(int i = 0; i<=numero; i++){
     raiz = i*i;
     if(raiz == numero) return i;
 }
 return raiz;
}

int raizCubica(int numero){
 int raiz = -1;
 for(int i = 0; i<=numero; i++){
     raiz = i*i*i;
     if(raiz == numero) return i;
 }
 return raiz;
}

void clear_screen() {
    // Sequência ANSI para mover o cursor para a posição 1,1 (topo esquerdo) e limpar a tela
    printf("\e[1;1H\e[2J");
    // Para garantir que a saída seja imediata
    fflush(stdout);
}

void calculos(){
    int opcao, continuar;
    float num1, num2;
    int numero1,numero2;
    do {
    printf("\n-0 = Sair\n");
    printf("-1 = Somar\n");
    printf("-2 = Subtrair\n");
    printf("-3 = Multiplicar\n");
    printf("-4 = Dividir\n");
    printf("-5 = Potencia\n");
    printf("-6 = Raiz Quadrada\n");
    printf("-7 = Raiz Cúbica\n");
    printf("-8 = Fatorial\n");
    printf("\nQual deseja escolher: ");
    scanf("%d", &opcao);
    clear_screen();
        
        
        
        switch(opcao){
        
        default:
        break;
        
        
        case 1:
        printf("Voce escolheu SOMAR, digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        printf("O resultado e = %.2f\n", soma(num1,num2));
         
        break;
        
        case 2:
        printf("Voce escolheu SUBTRAIR, digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        printf("O resultado e = %.2f\n", subtracao(num1,num2));
         
        break;
        
        case 3:
        printf("Voce escolheu MULTIPLICAR, digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        printf("O resultado e = %.2f\n", multiplicacao(num1,num2));
         
        break;
        
        case 4:
        printf("Voce escolheu DIVIDIR, digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        if(num2 == 0) printf("Não é possível dividir nenhum número por zero.\n");
        else printf("O resultado e = %.2f\n", divisao(num1,num2));
        
        break;
        
        case 5:
        printf("Voce escolheu POTENCIA, digite primeiro o numero e depois sua potencia: ");
        scanf("%d %d", &numero1, &numero2);
        printf("O resultado e = %d\n", potencia(numero1,numero2));
         
        break;
        
        case 6:
        printf("Voce escolheu RAIZ QUADRADA, digite o numero que quer achar a raiz: ");
        scanf("%d", &numero1);
        if(raizQuadrada(numero1) == -1) printf("Este número não tem raiz quadrada exata.");
        else printf("O resultado e = %d\n", raizQuadrada(numero1));
         
        break;
        
        case 7:
        printf("Voce escolheu RAIZ CÚBICA, digite o numero que quer achar a raiz: ");
        scanf("%d", &numero1);
        if(raizCubica(numero1) == -1) printf("Este número não tem raiz cúbica exata.");
        else printf("O resultado e = %d\n", raizCubica(numero1));
         
        break;
        
        
        case 8:
        printf("Voce escolheu FATORIAL, digite um numero: ");
        scanf("%d", &numero1);
        if(numero1 <0){
            printf("Não existe fatorial de número negativo.\n");
        }
        else printf("O resultado e = %d\n", fatorial(numero1));
         
    }  
    }
    while (opcao >=1 && opcao <9);
}


int main()
{
    calculos();
    return 0;
}

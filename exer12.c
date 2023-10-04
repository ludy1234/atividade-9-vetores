/*#include <stdio.h>

int main() {
  //faça um progama que para ler 5 valores e, em seguida mostrar todos os valores lidos, juntamente com o maior, o menor e a media dos valores.

  int tamanho = 5;
  int valores[tamanho];
  int maior, menor;
  float media = 0.0;

  printf("Digite 5 valores inteiros: \n");

   for(int i = 0; i < tamanho; i++){
    printf("Valor %d: ", i + 1);
    scanf("%lf",&valores[i]);

     if(i == 0){
       maior = valores[i];
       menor = valores[i];
     }else{
       if(valores[i] > maior){
         maior = valores[i];
       }
       if(valores[i] < menor){
         menor = valores[i];
     }

       media += valores[i];

        media /= valores[i];

       printf("Valores lidos: \n");
        for(int i = 0; i < tamanho; i++){
    printf("%d: ", valores[i]);
        }
       printf("\n");

       printf("Maior valor: %d\n", maior);
       printf("Menor valor: %d\n", menor);
       printf("Media dos valores: %.2f\n", media);

}*/
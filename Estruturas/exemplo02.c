#include <stdio.h>
int main(){
  float custo;
  float precoIngresso;
  float qtdeIngressosAVender;
  //entradas
  printf("Digite o custo do espetaculo:");
  scanf("%f",&custo);
  printf("Digite o preço do ingresso");
  scanf("%f",&precoIngresso);

  //processamentos
  qtdeIngressosAVender = custo/precoIngresso;

  //saídas
  printf("Voce precisa vender %f ingressos para passar a ter lucro.",
        qtdeIngressosAVender);
  return 0;
}

#include <stdio.h>
int main(){
  float custo;
  float precoIngresso;
  float qtdeIngressosAVender;
  //entradas
  printf("Digite o custo do espetaculo:");
  scanf("%f",&custo);
  printf("Digite o pre�o do ingresso");
  scanf("%f",&precoIngresso);

  //processamentos
  qtdeIngressosAVender = custo/precoIngresso;

  //sa�das
  printf("Voce precisa vender %f ingressos para passar a ter lucro.",
        qtdeIngressosAVender);
  return 0;
}

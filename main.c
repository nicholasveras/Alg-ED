// 1) Dadas as duas notas de um aluno, informe a sua média final. //

#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    printf("Qual a primeira nota?\n");
    scanf("%f", &nota1);
    printf("Qual a segunda nota?\n");
    scanf("%f", &nota2);
    media=(nota1+nota2)/2;
    printf("A média é %.2f", media);
    
    return 0;
}

// 2) Dado a distância e o total de litros de combustível gasto por um automóvel para percorrê-la, informe o consumo médio. //

#include <iostream>

int main(int argc, char** argv) {

float tot_comb, tot_dist, consumo;

printf("Informe a distancia percorrida:\n");

scanf("%f",&tot_dist); 

printf("Infome o combustivel gasto:\n");

scanf("%f",&tot_comb); 

consumo=tot_dist / tot_comb;

printf("O consumo medio e de:%f\n",consumo);   

    return 0;
}

// 3)  Dado um caractere, informe o seu código ASCII em decimal e hexadecimal. //
#include <stdio.h>
#include <stdlib.h>

int main ()
{
   char ch;

   printf("Digite o caractere: ");
   scanf("%c", &ch);

   printf("Formato decimal: %i \nFormato hexadecimal: 0X%x", ch, ch);

   return(0);
}


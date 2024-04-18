#include <cs50.h>
#include <stdio.h>

void calculator(int n);

int main(void)
{    
    printf("Bem-vindo!");
    int n = get_int("Qual operacao voce quer? 1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao, 0 - Cancelar: \n");
    calculator(n);

}
    void calculator(int n)
{
    if (n == 0)
    {
      printf("Operacao cancelada.\n");
      return;
    }
    float x = get_float("Digite o valor de X:\n");
    float y = get_float("Digite o valor de y:\n");
    float z;
    if ( n == 1)
    {
        z = x + y;
    }
    else if (n == 2)
    {
        z = x - y;
    }
    else if ( n == 3)
    {
        z = x * y;
    }
    else if (n == 4)
    {
        z = x / y;
    }
    printf("O resultado da operacao e:\n%.2f", z);
 }

 
  

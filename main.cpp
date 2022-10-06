#include <iostream>


using namespace std;

int main()
{
    //Inicia a int num e pede o dado ao usuario.
    int num;
    printf("Digite um numero:");
    scanf("%d", &num);
    //Confere se num = 0, se sim imprime erro e tenta novamente.
    while(num == 0){
        printf("Erro! Valor n�o pode ser 0\n");
        printf("Digite um numero:");
        scanf("%d", &num);
    }
    //Inicia a int total, que � o total da soma dos divisores.
    int total = 0;
    //Faz o loop para todos os numeros anteriores a num.
    for(int i = 1; i < num; i++){
        //Se o resto de num dividido por i for 0, ent�o i � um divisor de num.
        if(num % i == 0){
            total = total + i;
        }
        }
        //Se total = num, ent�o num � perfeito
        if(total == num){
            printf("%i e perfeito\n", num);
            return true;
        }
        //Se total != num, ent�o num nao e perfeito
        else{
            printf("%i nao e perfeito\n", num);
            return false;
    }

}

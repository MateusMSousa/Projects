#include <iostream>

using namespace std;

int main()
{
    //Loop inicia int i como 0 e incrementa at� chegar a 100.
    for(int i = 0; i <= 100; i++){
                //Confere se i � divisivel por 2,3,5 ou 7.
                if((i / 2 != 1 && i % 2 == 0) || (i / 3 != 1 && i % 3 ==0) || (i /5 != 1 && i % 5 == 0) || (i /7 != 1 && i % 7 == 0)){
                        printf("%i nao e primo\n", i);
                    }
                //Se i = 1, i n�o � primo, pois 1 � divisivel apenas por si proprio.
                else if (i == 1){
                    printf("%i nao e primo\n", i);
                }
                // Se n�o entrar em nenhum das condi��es, ent�o i � primo.
                else{
                    printf("%i e primo\n", i);
                }
        }
}

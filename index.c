#include <stdio.h>
#include <locale.h>

int par (int n){
return n % 2 == 0;

}

int main(){
	setlocale(LC_ALL,"portuguese");
    
    int first_num, last_num;
    int nPares, nImpares = 0;
    
    printf("-----Identificador de números pares e ímpares em um intervalo-----\n\n");
    
    printf("Digite o número inicial:\n");
    scanf("%d", &first_num);
    
    printf("\nDigite o número final:\n");
    scanf("%d", &last_num);

    int i;
    
    for(i = first_num; i <= last_num; i++){
        if(par(i)){
            printf("\nO número %d é par.\n", i);
            nPares++;
        }else{
            printf("\nO número %d é Ã­mpar\n", i); 
            nImpares++;
        }
    }
    
    printf("\nO num. de pares totais encontrados foram %d.\n", nPares);
    
    return 0;
}
#include <stdio.h>
int ft_iterative_factorial(int nb){
    if(nb<0){
        return 0;
    }else if(nb==0){
        return 1;
    }
    int i=2;
    int result=1;
    while(i<=nb){
        result*=i;
        i++;
    }
    return result;
}
int main(){
    printf("%d",ft_iterative_factoriel(5));
}
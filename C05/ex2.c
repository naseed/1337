#include <stdio.h>
int ft_iterative_power(int nb,int power){\
    if(power==0){
        return 1;
    }
    if(power<0){
        return 0;
    }
    int result=nb;
    int i=1;
    while(i<power){
        result*=nb;
        i++;
    }
    return result;
}
int main(){
    printf("%d",ft_iterative_power(3,3));
}
#include <stdio.h>
int ft_recursive_power(int nb,int power){
    if(power==0){
        return 1;
    }
    if(power<0){
        return 0;
    }
    return nb*ft_recursive_power(nb,power-1);
}
int main(){
    printf("%d",ft_recursive_power(3,0));
}
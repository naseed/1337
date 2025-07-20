#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_is_negative(int n){
    char x='N';
    if(n<0){
        ft_putchar(x);
    }else{
        x+=2;
        ft_putchar(x);
    }
}
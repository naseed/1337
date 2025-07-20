#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int n){
    if(n<0){
        ft_putchar('-');
        n=-n;
        ft_putnbr(n);
    }else if(n>9){
        ft_putnbr(n/10);
        ft_putnbr(n%10);
    }else{
        ft_putchar(n+'0');
    }
}
 int main(){
    ft_putnbr(84532);
 }
 
#include <unistd.h>
#include <stdio.h>
void ft_putnbr(int nb){
    char digit; 
    if(nb<0){
        write(1,"-",1);
        nb=-nb;
    }
    if(nb>9){
        ft_putnbr(nb/10);
    }
    digit=(nb%10)+ '0';
    write(1,&digit,1);

}
int main(){
    ft_putnbr(4298);
}
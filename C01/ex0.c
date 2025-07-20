#include <unistd.h>
void ft_ft(int *nbr){
    *nbr=42;
}
int main(){
    int *x;
    ft_ft(x);
}
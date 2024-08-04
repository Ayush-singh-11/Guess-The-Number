#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int num,guess,n_o_guess=1;
srand(time(0));
num=rand()%50 + 20;
// printf("the random num is %d\n",num); 
do{
printf("guess the num b|w 1 to 100 \n");
scanf("%d",&guess);
if(guess>num){
printf("plz guess lower num\n");
}
else if(guess<num){
printf("plz guess higher num\n");
}
else{
printf("You attent %d times to guess the num\n",n_o_guess);

}
n_o_guess++;
}while(guess!=num);
return 0;
}
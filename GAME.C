#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(void){
int rand_num;
int user_guess,tries=0;
srand(time(NULL));
rand_num=(rand()%100)+1;
printf("Enter a guess for the number between 1 and 100\n:");
do
{
scanf("%d",&user_guess);
if(user_guess>rand_num){
printf("The number you entered is greater");
tries++;
}
else if(user_guess<rand_num){
printf("The number you entered is smaller");
tries++;
}
else
{
printf("Correct Guess, you won in %d tries",tries);
}
}
while(user_guess!=rand_num);
return 0;
}

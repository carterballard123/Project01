#include<stdio.h>

int main(){

int i;
int ans1, ans2, ans3, ans4, ans5;
int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
int p01, p02, p03, p04, p05, p06, p07, p08, p09, p010;
int total1, total2, total3;

printf("    Welcome to The Game!\n\n");

printf("> Press 1 to start The Game\n");
printf("> Press 0 to quit The Game\n");

scanf("%d", &i);

//checks what input the user inserted
if(i == 1){
    printf("The Game has started!\n\n");
}
else if(i == 0){
    printf("The Game has ended... for now\n\n");
}
else{
    printf("Input a valid number >:[");
}

//Q1
printf("Q1) Which one is the first search engine on the Internet?\n\n");
printf("1) Google\n");
printf("2) Archie\n");
printf("3) Wais\n");
printf("4) Altavista\n");

printf("Enter your answer: ");
scanf("%d", ans1);

if(ans1 == 2){
    printf("That is the CORRECT ANSWER!\n");
    p1 = 5;
    printf("You have scored %d points!\n", p1);
}

return 0;
}



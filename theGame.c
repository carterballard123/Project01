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
printf("Q1) What is the first search engine on the Internet?\n\n");
printf("1) Google\n");
printf("2) Archie\n");
printf("3) Wais\n");
printf("4) Altavista\n");

printf("Enter your answer: ");
scanf("%d", ans1);

// Right + wrong answer - points rewarded for Q1
if(ans1 == 2){
    printf("That is the CORRECT ANSWER!\n");
    p1 = 5;
    printf("You have scored %d points!\n", p1);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p01 = 0;
    printf("You have scored %d points!\n", p01);
}

//Q2
printf("Q2) Which web browser was first invented in 1990?\n\n");
printf("1) Internet Explorer\n");
printf("2) Mosaic\n");
printf("3) Mozilla\n");
printf("4) Nexus\n");

printf("Enter your answer: ");
scanf("%d", ans2);

//Right + wrong answer - points rewarded for Q2
if(ans2 == 4){
    printf("That is the CORRECT ANSWER!\n");
    p2 = 5;
    printf("You have scored %d points!\n", p2);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p02 = 0;
    printf("You have scored %d points!\n", p02);
}

//Q3
printf("Q3) What was the first computer virus known as?\n\n");
printf("1) Rabbit\n");
printf("2) Creeper Virus\n");
printf("3) Elk Cloner\n");
printf("4) SCA Virus\n");

printf("Enter your answer: ");
scanf("%d", ans3);

//Right + wrong answer - points rewarded for Q3
if(ans3 == 2){
    printf("That is the CORRECT ANSWER!\n");
    p3 = 5;
    printf("You have scored %d points!\n", p3);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p03 = 0;
    printf("You have scored %d points!\n", p03);
}
//Q4
printf("Q4) What is the Firewall in a computer used for?\n\n");
printf("1) Security\n");
printf("2) Data Transmission\n");
printf("3) Monitoring\n");
printf("4) Authentication\n");

printf("Enter your answer: ");
scanf("%d", ans4);

//Right + wrong answer - points rewarded for Q4
if(ans4 == 1){
    printf("That is the CORRECT ANSWER!\n");
    p4 = 5;
    printf("You have scored %d points!\n", p4);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p04 = 0;
    printf("You have scored %d points!\n", p04);
}

//Q5
printf("Q5) Which of the following is NOT a database management software?\n\n");
printf("1) Mysql\n");
printf("2) Oracle\n");
printf("3) Sybase\n");
printf("4) Cobal\n");

printf("Enter your answer: ");
scanf("%d", ans5);

//Right + wrong answer - points rewarded for Q4
if(ans5 == 4){
    printf("That is the CORRECT ANSWER!\n");
    p5 = 5;
    printf("You have scored %d points!\n", p4);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p05 = 0;
    printf("You have scored %d points!\n", p04);
}


return 0;
}





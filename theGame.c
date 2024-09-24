#include<stdio.h>

int main(){

int i;
int ans1, ans2, ans3, ans4, ans5;
int p1, p2, p3, p4, p5 = 0;
int total1, total2, total3;
int finalScore;

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
scanf("%d", &ans1);

// Right + wrong answer - points rewarded for Q1
if(ans1 == 2){
    printf("That is the CORRECT ANSWER!\n");
    p1 = 5;
    printf("You have scored %d points!\n", p1);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p1 = 0;
    printf("You have scored %d points!\n", p1);
}

//scoreboard updates
finalScore = p1;
printf("Your total points are: %d\n", finalScore);

//Q2
printf("Q2) Which web browser was first invented in 1990?\n\n");
printf("1) Internet Explorer\n");
printf("2) Mosaic\n");
printf("3) Mozilla\n");
printf("4) Nexus\n");

printf("Enter your answer: ");
scanf("%d", &ans2);

//Right + wrong answer - points rewarded for Q2
if(ans2 == 4){
    printf("That is the CORRECT ANSWER!\n");
    p2 = 5;
    printf("You have scored %d points!\n", p2);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p2 = 0;
    printf("You have scored %d points!\n", p2);
}

//scoreboard updates
finalScore += p2;
printf("Your total points are: %d\n", finalScore);

//Q3
printf("Q3) What was the first computer virus known as?\n\n");
printf("1) Rabbit\n");
printf("2) Creeper Virus\n");
printf("3) Elk Cloner\n");
printf("4) SCA Virus\n");

printf("Enter your answer: ");
scanf("%d", &ans3);

//Right + wrong answer - points rewarded for Q3
if(ans3 == 2){
    printf("That is the CORRECT ANSWER!\n");
    p3 = 5;
    printf("You have scored %d points!\n", p3);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p3 = 0;
    printf("You have scored %d points!\n", p3);
}

//scoreboard updates
finalScore += p3;
printf("Your total points are: %d\n", finalScore);

//Q4
printf("Q4) What is the Firewall in a computer used for?\n\n");
printf("1) Security\n");
printf("2) Data Transmission\n");
printf("3) Monitoring\n");
printf("4) Authentication\n");

printf("Enter your answer: ");
scanf("%d", &ans4);

//Right + wrong answer - points rewarded for Q4
if(ans4 == 1){
    printf("That is the CORRECT ANSWER!\n");
    p4 = 5;
    printf("You have scored %d points!\n", p4);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p4 = 0;
    printf("You have scored %d points!\n", p4);
}

//scoreboard updates
finalScore += p4;
printf("Your total points are: %d\n", finalScore);

//Q5
printf("Q5) Which of the following is NOT a database management software?\n\n");
printf("1) Mysql\n");
printf("2) Oracle\n");
printf("3) Sybase\n");
printf("4) Cobal\n");

printf("Enter your answer: ");
scanf("%d", &ans5);

//Right + wrong answer - points rewarded for Q4
if(ans5 == 4){
    printf("That is the CORRECT ANSWER!\n");
    p5 = 5;
    printf("You have scored %d points!\n", p5);
}
else{
    printf("That is the WRONG ANSWER!\n");
    p5 = 0;
    printf("You have scored %d points!\n", p5);
}

//end of game message

finalScore = p1 + p2 + p3 + p4 + p5;

printf("How did you do? This was your score: %d / 25\n", finalScore);
printf("Now lets see what questions you got right and wrong!\n");

// Q1
if(p1 == 5){
printf("You got Question 1 CORRECT! The answer is Archie!\n");
}
else{
    printf("You got Question 1 WRONG! The answer is Archie!\n");
}

// Q2
if(p2 == 5){
printf("You got Question 2 CORRECT! The answer is Nexus!\n");
}
else{
    printf("You got Question 2 WRONG! The answer is Nexus!\n");
}

// Q3
if(p3 == 5){
printf("You got Question 3 CORRECT! The answer is Creeper Virus!\n");
}
else{
    printf("You got Question 3 WRONG! The answer is Creeper Virus!\n");
}

// Q4
if(p4 == 5){
printf("You got Question 4 CORRECT! The answer is Security!\n");
}
else{
    printf("You got Question 4 WRONG! The answer is Security!\n");
}

// Q5
if(p5 == 5){
printf("You got Question 5 CORRECT! The answer is Cobal!\n");
}
else{
    printf("You got Question 5 WRONG! The answer is Cobal!\n");
}

printf("Thanks For Playing!");
return 0;
}





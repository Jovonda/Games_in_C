#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "katakana.h"
#include "katakana.c"

int right = 0, score = 0, wrong = 0;
int row, cols;
char again;
char kata[10], roma[10];
char check[10];

//This is the welcome dialouge of the game
void welcome()
{
    printf("カタカナテストへようこそ！！！(WELCOME TO THE KATAKANA QUIZ!!!)\n");
    printf("Here you can test and practice your knowledge of Katakana!!!\n");
    printf("It is finally here!!\n");
    printf("The developer finally did it after... checks notes... three years later:)\n");
    printf("Without a futher ado, hehe..., Ado\n");

}

//This is the answer get for either part of the game
char get_answer()
{
    char answer;
    scanf(" %c", &answer);
    return answer;
}

void get_kata_and_roma(char *k, char *r)
{
   //Seed the random number generator
   //Making things random
   //Making random row and column indices
   srand(time(NULL));
   row = rand() % ROWS;
   cols = rand() % COLS;
   strncpy(r, romaji[row][cols], LENGTH);
   strncpy(k, katakana[row][cols], LENGTH);
}

void romaji_to_katakana()
{
    printf("Alright, let's start!\n");
    while(again != 'N')
    {
        get_kata_and_roma(kata, roma);
        printf("How would you write '%s' in Japanese?\n", roma);
        scanf("%s", check);
        if(strcmp(kata,check) == 0)
        {
            printf("Correct!!\n");
            right++;
            score+=5;
        }
        else
        {
            printf("Sorry, that was wrong\n");
            wrong++;
        }
        printf("Want to go again? Type (Y) for yes or (N) for no\n");
        again = get_answer();
        if(again == 'Y')
        {
          get_kata_and_roma(kata, roma);
        }
        else if(again == 'N')
        {
          printf("Your final score is %d\n", score);
          printf("You got %d right and %d wrong\n", right, wrong);
          printf("See you next time!\n");
        }
     }
}

void katakana_to_romaji()
{
     printf("さあ、はじめましょう！(Well, Let's begin!)\n");
     while(again != 'N')
     {
          get_kata_and_roma(kata, roma);
          printf("'%s'はローマ字で何ですか？(What is '%s' in romaji)\n", kata,kata);
          scanf("%s", check);
         if(strcmp(roma,check) == 0)
         {
             printf("正しい！！(Correct!!)\n");
             right++;
             score+=5;
         }
         else
         {
             printf("残念！不正解です。(Too bad! That's incorrect.)\n");
             wrong++;
         }
         printf("もう一度ゲームをしますか？(Would you like to play the game again?)\n");
         printf("続けるなら「Y]、終わるなら「N]を入力してください。(Enter (Y) to continue or (N) to finish.)\n");
         again = get_answer();
         if(again == 'Y')
         {
            get_kata_and_roma(kata, roma);
         }
         else if(again == 'N')
         {
            printf("最終スコアは %d点です。(Your final score is %d points)\n", score,score);
            printf("正解は %d問、不正解は%d問でした。(You got %d questions correct and %d incorrect)\n", right, wrong,right,wrong);
            printf("じゃあまたね！(See you later!)\n");
         }
    }
}

void joke()
{
    char joke[100];
    printf("何をしたいですか。(What would you like to do?)\n");
    scanf("%s", joke);
    printf("%s と言いましたね。(You said '%s' didn't you?)\n", joke, joke);
    printf("ごめんなさい、それはできません。(Sorry, I can't do that.)\n");
    printf("じゃあまたね！(See you later!)\n");
}

void translated_cant()
{
   printf("ごめんなさい、それはできません。(Sorry, I can't do that.)\n");
   printf("じゃあまたね！(See you later!)\n");
}

void cant()
{
    printf("Sorry, I can't do that.\n");
    printf("See you later!\n");
}

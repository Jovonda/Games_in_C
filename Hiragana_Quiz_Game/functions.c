#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "hiragana.h"
#include "hiragana.c"

int right = 0, score = 0, wrong = 0;
int row, cols;
char again;
char hira[10], roma[10];
char check[10];

//This is the welcome dialouge of the game
void welcome()
{
    printf("ひらがな の テスト へ ようこそ！！！(WELCOME TO THE HIRAGANA QUIZ!!!)\n");
    printf("Here you can test and practice your knowledge of Hiragana!!!\n");
    printf("Katakana will be added later on.\n");
    printf("Like when the developer gets off her lazy butt and adds it in :)\n");
    printf("But for now...\n");

}


//This is the answer get for either part of the game
char get_answer()
{
    char answer;
    scanf(" %c", &answer);
    return answer;
}

void get_hira_and_roma(char *h, char *r)
{
   //Seed the random number generator
   //Making things random
   //Making random row and column indices
   srand(time(NULL));
   row = rand() % ROWS;
   cols = rand() % COLS;
   strncpy(r, romaji[row][cols], LENGTH);
   strncpy(h, hiragana[row][cols], LENGTH);
}

void romaji_to_hiragana()
{
    printf("Alright, let's start!\n");
    while(again != 'N')
    {
        get_hira_and_roma(hira, roma);
        printf("How would you write '%s' in Japanese?\n", roma);
        scanf("%s", check);
        if(strcmp(hira,check) == 0)
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
          get_hira_and_roma(hira, roma);
        }
        else if(again == 'N')
        {
          printf("Your final score is %d\n", score);
          printf("You got %d right and %d wrong\n", right, wrong);
          printf("See you next time!\n");
        }
     }
}

void hiragana_to_romaji()
{
     printf("さあ、はじめましょう！(Well, Let's begin!)\n");
     while(again != 'N')
     {
          get_hira_and_roma(hira, roma);
          printf("えいごで これは ’%s’ といいますか。(How would you say %s in English)\n", hira,hira);
          scanf("%s", check);
         if(strcmp(roma,check) == 0)
         {
             printf("ただしい！！(Correct!!)\n");
             right++;
             score+=5;
         }
         else
         {
             printf("すみません、それは ちがいました。(Sorry, that was wrong.)\n");
             wrong++;
         }
         printf("もう いちど いきたい ですか？(Want to go again?)\n");
         printf("はいなら「Y]と、いいえなら「N]と タイプしてください。(Please type (Y) for yes or (N) for no.)\n");
         again = get_answer();
         if(again == 'Y')
         {
            get_hira_and_roma(hira, roma);
         }
         else if(again == 'N')
         {
            printf("あなたの さいしゅうすこあは %dてん です。(Your final score is %d points)\n", score,score);
            printf("あなたは %dもんせいかいで、%dもん ごと がありました。(You got %d right and %d wrong)\n", right, wrong,right,wrong);
            printf("じゃあまたね！(See you later!)\n");
         }
    }
}

void joke()
{
    char joke[100];
    printf("何をしたいですか。(What would you like to do?)\n");
    scanf("%s", joke);
    printf("%s といいます。(You said %s.)\n", joke, joke);
    printf("さんねん ですが、する こと が できません。(Sorry, I can't do that.)\n");
    printf("じゃあまたね！(See you later!)\n");
}

void translated_cant()
{
    printf("さんねん です が、する こと が できません。(Sorry, I can't do that.)\n");
    printf("じゃあまたね！(See you later!)\n");
}

void cant()
{
    printf("Sorry, I can't do that.\n");
    printf("See you later!\n");
}

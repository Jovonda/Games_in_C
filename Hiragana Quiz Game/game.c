/*
This is just a basic hiragana game,
It runs in WSL for ubuntu wonderfully!!!
*/
#include <stdio.h>
#include "functions.c"
int main(int argc, char const *argv[])
{
    char answer;
    /*
        Introduction for the game
    */
    welcome();
    printf("Would you like to write hiragana for the given romaji? Type: (Y) for yes or (N) for no\n");
    answer = get_answer();
    if(answer == 'Y')
    {
        /*
            Questions will be in english and answer has to be given in hiragana
        */
        romaji_to_hiragana();
    }
    else if(answer == 'N')
    {
        printf("Would you like to write romaji for the given hiragana? Type: (Y) for yes or (N) for no\n");
        answer = get_answer();

        if(answer == 'Y')
        {
            /*
                Questions will be in Japanese and english and answer has to be given in english/romaji
            */
            hiragana_to_romaji();

        }
        else if(answer == 'N')
        {
            /*
                Player cannot make up their mind
            */
            joke();
        }
        else
        {
            /*
                Because 'Y' or 'N' was not entered the program quits with Japanese and English text
            */
            translated_cant();
        }
    }
    else
    {
        /*
            Because 'Y' or 'N' was not entered, the program quits with English text
        */
        cant();
    }

    return 0;
}



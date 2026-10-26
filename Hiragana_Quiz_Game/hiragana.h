#ifndef HIRAGANA_H
#define HIRAGANA_H

//This is the rows and columns for both romaji and hiragana
#define ROWS 1
#define COLS 46
#define LENGTH 10


// array declarations
extern char romaji[ROWS][COLS][LENGTH];
extern char hiragana[ROWS][COLS][LENGTH];

//Functions　declarations

//These functions are explained more in the functions.c
void welcome();
char get_answer();
void get_hira_and_roma(char *h, char *r);
void romaji_to_hiragana();
void hiragana_to_romaji();
void joke();
void translated_cant();
void cant();

#endif
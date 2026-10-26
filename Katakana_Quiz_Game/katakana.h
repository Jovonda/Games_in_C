#ifndef KATAKANA_H
#define KATAKANA_H

//This is the roles and colums for both romaji and katakana
#define ROWS 1
#define COLS 46
#define LENGTH 10

// array declarations
extern char romaji[ROWS][COLS][LENGTH];
extern char katakana[ROWS][COLS][LENGTH];

//Functions declarations

//These functosn are explained more in the functions.c
void welcome();
char get_answer();
void get_kata_and_roma(char *k, char *r);
void romaji_to_katakana();
void katakana_to_romaji();
void joke();
void translated_cant();
void cant();

#endif
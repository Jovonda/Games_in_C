#include <stdlib.h>
#include <string.h>
#include "hiragana.h"

/*
    Temporary array for romaji, might change to something else later
    The 10 is for the length of the string, which I could change
*/
    char romaji[ROWS][COLS][LENGTH] = 
    {
        {
        "a", "i", "u", "e", "o",
        "ka","ki", "ku", "ke", "ko",
        "sa","shi","su", "se", "so",
        "ta", "chi", "tsu","te", "to",
        "na", "ni", "nu", "ne","no",
        "ha", "hi", "fu", "he", "ho", 
        "ma", "mi", "mu", "me", "mo",
        "ra", "ri", "ru", "re", "ro",
        "ya", "yu", "yo",
        "wa", "wo", "n"
        }
    };
    
/*
    Temporary array for hiragana, might change to something else later
    The 10 is for the length of the string, which I could change
*/
    char hiragana[ROWS][COLS][LENGTH]=
    {
        {
            "あ", "い", "う","え", "お",
            "か", "き", "く", "け", "こ",
            "さ","し","す", "せ", "そ",
            "た", "ち", "つ","て", "と",
            "な", "に", "ぬ", "ね","の",
            "は", "ひ", "ふ", "へ", "ほ", 
            "ま", "み", "む", "め", "も",
            "ら", "り", "る", "れ", "ろ",
            "や", "ゆ", "よ",
            "わ", "を", "ん"
        }
    };


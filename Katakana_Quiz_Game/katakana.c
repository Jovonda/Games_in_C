#include <stdlib.h>
#include <string.h>
#include "katakana.h"

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
    char katakana[ROWS][COLS][LENGTH]=
    {
        {
            "ア", "イ", "ウ","エ", "オ",
            "カ", "キ", "ク", "ケ", "コ",
            "サ","シ","ス", "セ", "ソ",
            "タ", "チ", "ツ","テ", "ト",
            "ナ", "二", "ヌ", "ネ","ノ",
            "ハ", "ヒ", "フ", "へ", "ホ", 
            "マ", "ミ", "ム", "メ", "モ",
            "ラ", "リ", "ル", "レ", "ロ",
            "ヤ", "ユ", "ヨ",
            "ワ", "ヲ", "ン"
        }
    };

   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* input_str(int* len) {//Копирует символы в строку, динамически увеличивая её размер
    *len = 0;
    int size = 1;
    char* str = (char*)malloc(sizeof(char));
    char ch = getchar();
    while (ch != '\n') {
        str[(*len)++] = ch;
        size++;
        str = (char*)realloc(str, size * sizeof(char));
        ch = getchar();
    }
    str[*len] = '\0';
    return str;
}

char* search_output_str(char* str, char user_char, int len) {
    int i = 0, n = 0, j = 0;
    char* final_str = (char*)malloc(sizeof(char));
    //Проверка на пустую строку или неверный символ
    if ((str[0] == '\0') || ((user_char == '\n') || (user_char == '.') || (user_char == ','))) {
        final_str[0] = '\0';
        printf("error, wrong string or symbol\n");
        return final_str;
    }
    /*посимвольно копирует из str в search_str, когда доходит до ' ' '.' ',' '\n' 
    сравнивает значение 1 символа search_str с user_char, 
    если верно: посимвольно копирует в final_str
    */
    char* search_str =(char* )malloc(100);
    while (i <= len) {
        if (str[i] != ' ') {
            if (str[i] == '\0' || str[i] == '.' || str[i] == ',') goto mark;
            search_str[n] = str[i];
            n++;
        }
        else {
        mark:
            if (search_str[0] == user_char) {
                search_str[n] = ' ';
                final_str = (char*)realloc(final_str, (j + 1 + n + 1) * sizeof(char));
                for (int k = 0; k <= n; k++, j++) {
                    final_str[j] = search_str[k];
                }
            }
            memset(search_str, 0, 100);
            n = 0;
        }
        i++;
    }
    free(search_str);
    final_str[--j] = '\0';
    return final_str;
}
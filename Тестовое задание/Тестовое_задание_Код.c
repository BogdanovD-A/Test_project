/*17 задание 
Ввести строку и букву, вывести только слова, начинающиеся с заданной
буквы.
Программа учитывает регистр, также распознает . и ,
*/
#include "Функции.h"

int main() {
    int len;
    printf("Enter string:\n");
    char* str = input_str(&len), user_char;
    printf("Enter a search symbol: ");
    scanf_s("%c", &user_char, 1);
    printf(search_output_str(str, user_char, len));
    free(str);
    return 0;
}
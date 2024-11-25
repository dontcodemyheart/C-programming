#include <stdio.h>

int main(void) {
    int secretNumber = 100; // Загаданное число
    int userGuess = 0;

    // printf("secretNumber = %d\n", secretNumber);
    do {
        printf("Пожалуйста, введите целое число, не превышающее 32000: ");
        scanf("%d", &userGuess);
        if (userGuess < secretNumber) {
            printf("Слишком мало\n");
        } else if (userGuess > secretNumber) {
            printf("Слишком много\n");
        } else {
            printf("Вы угадали!\n");
        }
    } while (userGuess != secretNumber);

    return 0;
}

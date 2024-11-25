#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display_array(const unsigned char* array_char, const int length) 
// Функция для отображения строки символов на экране
{
    for(int i = 0; i < length; i++) {
        printf("%c", array_char[i]);
    }
    printf("%c\n", array_char[length]); // Печатает символ новой строки
}

int main(void)
{
    int rows = 100, cols = 100; // Количество ячеек лабиринта по вертикали и горизонтали
    // Определяем размеры лабиринта для текстового отображения, учитывая, что каждая ячейка и её границы занимают отдельный символ
    int height = 2 * cols + 1;
    int width = 2 * rows + 1;
    unsigned char labyrinth_row[width]; // Массив для строки лабиринта

    srand(time(NULL)); // Инициализация генератора случайных чисел
    // Генерация и вывод лабиринта на экран
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height) {
                labyrinth_row[j] = '#'; // Верхняя и нижняя граница
            }
            else if (j == 0 || j == width) {
                labyrinth_row[j] = '#'; // Левая и правая граница
            }
            else if (j > 0 && j < width - 1) {
                labyrinth_row[j] = rand() % 10 == 0 ? '#' : ' '; // Случайное заполнение стенами и проходами
            }
        }
        display_array(labyrinth_row, width); // Вывод строки лабиринта
    }
    return 0;
}



#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    ///*7. Создать массив из 20 случайных чисел в диапазоне от -30 до 10. Написать программу, определяющую сумму элементов массива, находящихся в массиве до первого положительного элемента.*/

    //srand(time(0));
    //const int SIZE = 20;
    //int array[SIZE] = {};
    //int max = 10, min = -30;
    //int range = max - min + 1;
    //int sum = 0;
    //for (int i = 0; i < SIZE; i++) {
    //    array[i] = rand() % range + min;
    //}

    //for (int i = 0; i < SIZE; i++) {
    //    cout << array[i] << " ";
    //}
    //cout << "\n";

    //for (int i = 0; i < SIZE; i++) {
    //    if (array[i] < 0) {
    //        sum += array[i];
    //    }
    //}

    //cout << "Sum of all the negative elements is: " << sum;

    ///*6. Создать массив из 20 случайных чисел в диапазоне от -10 до 30. Написать программу, определяющую сумму элементов массива, находящихся в массиве после первого отрицательного элемента.*/

    //srand(time(0));
    //const int SIZE = 20;
    //int array[SIZE] = {};
    //int max = 30, min = -10;
    //int range = max - min + 1;
    //int sum = 0;
    //bool negative = false;

    //for (int i = 0; i < SIZE; i++) {
    //    array[i] = rand() % range + min;
    //}

    //for (int i = 0; i < SIZE; i++) {
    //    cout << array[i] << " ";
    //}
    //cout << "\n";

    //for (int i = 0; i < SIZE; i++) {
    //    if (array[i] < 0 && !negative) {
    //        negative = true;
    //        continue;
    //    }

    //    if (negative) {
    //        sum += array[i];
    //    }
    //}

    //cout << "Sum of all elements after the first negative number is: " << sum;


    ///* 13. Написать программу, копирующую один массив в другой следующим образом: сначала копируются последовательно все элементы, большие 0, затем последовательно все элементы, равные 0, а затем последовательно все элементы, меньшие 0. */
    //srand(time(0));
    //const int SIZE1 = 15;
    //int array1[SIZE1] = {};
    //int max = 150, min = -150;
    //int range = max - min + 1;

    //for (int i = 0; i < SIZE1; i++) {
    //    array1[i] = rand() % range + min;
    //}

    //for (int i = 0; i < SIZE1; i++) {
    //    cout << array1[i] << " ";
    //}
    //cout << "\n";

    //const int SIZE2 = 15;
    //int array2[SIZE2] = {};
    //int index = 0;

    //for (int i = 0; i < SIZE1; i++) {
    //    if (array1[i] > 0 && index < SIZE2) {
    //        array2[index] = array1[i];
    //        index++;
    //    }
    //}

    //for (int i = 0; i < SIZE1; i++) {
    //    if (array1[i] == 0 && index < SIZE2) {
    //        array2[index] = array1[i];
    //        index++;
    //    }
    //}

    //for (int i = 0; i < SIZE1; i++) {
    //    if (array1[i] < 0 && index < SIZE2) {
    //        array2[index] = array1[i];
    //        index++;
    //    }
    //}

    //for (int index = 0; index < SIZE2; index++) {
    //    cout << array2[index] << " ";
    //}

    ///* 12.  Создать два массива А и В по 5 элементов. Создать третий массив. С на 10 элементов, в который копируются элементы из первого и второго массива поочередно (например, C[0]=A[0], c[1]-B[0], C[2]=A[1], C[3]-B[1] и тд). */



    //srand(time(0));
    //const int SIZE1 = 5;
    //int array1[SIZE1] = {};
    //int max = 250, min = 50;
    //int range = max - min + 1;

    //for (int i = 0; i < SIZE1; i++) {
    //    array1[i] = rand() % range + min;
    //}

    //for (int i = 0; i < SIZE1; i++) {
    //    cout << array1[i] << " ";
    //}
    //cout << "\n";

    //const int SIZE2 = 5;
    //int array2[SIZE2] = {};

    //for (int j = 0; j < SIZE2; j++) {
    //    array2[j] = rand() % range + min;
    //}

    //for (int j = 0; j < SIZE2; j++) {
    //    cout << array2[j] << " ";
    //}
    //cout << "\n";

    //const int SIZE3 = 10;
    //int array3[SIZE3] = {};
    //int index = 0;

    //for (int i = 0; i < SIZE1; i++) {
    //    if (index < SIZE3) {
    //        array3[index] = array1[i];
    //        index++;

    //    }
    //    if (index < SIZE3) {
    //        array3[index] = array2[i];
    //        index++;
    //    }


    //}


    //for (int index = 0; index < SIZE3; index++) {
    //    cout << array3[index] << " ";
    //}

    ///* 11. Создать массив из 10 целых случайных чисел. Изменить порядок следования элементов массива на противоположный (1-й элемент меняется с 10-м, 2-й элемент с 9-м и тд). */
    //srand(time(0));
    //rand();
    //const int SIZE = 10;
    //int array[SIZE] = {};
    //for (int i = 0; i < SIZE; i++) {
    //    array[i] = rand() % 151; // 0-150
    //}

    //for (int i = 0; i < SIZE; i++) {
    //    cout << array[i] << " ";
    //}

    //cout << "\n";

    //for (int i = SIZE - 1; i >= 0; i--) {
    //    cout << array[i] << " ";
    //}

    //cout << "\n";



    ///* 8. Создать массив из 20 случайных чисел. Определить минимальный и максимальный элемент массива (вывести значение и порядковый номер). */
    //srand(time(0));
    //rand();
    //const int SIZE = 20;
    //int array[SIZE] = {};

    //for (int i = 0; i < SIZE; i++) {
    //    array[i] = rand() % 351; // 0-350
    //}
    //for (int i = 0; i < SIZE; i++) {
    //    cout << array[i] << " ";
    //}

    //cout << "\n";

    //int max = array[0], min = array[0];
    //int max_index, min_index;

    //for (int i = 0; i < SIZE; i++) {
    //    if (array[i] > max) {
    //        max = array[i];
    //        max_index = i;
    //    }

    //    if (array[i] < min) {
    //        min = array[i];
    //        min_index = i;
    //    }

    //}

    //cout << "The maximum number " << max << " at index " << max_index << "\n";
    //cout << "The minimum number " << min << " at index " << min_index;

}



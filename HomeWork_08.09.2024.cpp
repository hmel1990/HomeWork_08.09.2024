
#include <iostream>
using namespace std;
#include <iomanip>


int main()
{
    setlocale(0, "");
    /*
    //1.	Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.
    int const M = 5;
    int const N = 5;
    int arr[M][N];
    int min = 0;
    int max = 0;
    int count_arr = 0;
    int sum_arr = 0;
    srand(time(0));
    rand();
    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < N; c++)
        {
            arr[r][c] = rand() % 20;
            cout << arr[r][c] << "\t";
            if (arr[r][c]>max)
            {
                max = arr[r][c];
            }
            if (arr[r][c] < min)
            {
                min = arr[r][c];
            }
            count_arr++;
            sum_arr += arr[r][c];

        }
        cout << "\n\n";
    }
    cout << "минимальный элемент = " << min << "\n";
    cout << "максимальный элемент = " << max << "\n";
    cout << "сумма элементов = " << sum_arr << "\n";
    cout << "среднее арифметическое элементов = " << sum_arr / count_arr;
    */

    /*
     //2.	Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.
    int const M = 5;
    int const N = 5;
    int arr[M][N];
    int sum_arr_main = 0;
    int sum_arr_second = 0;
    srand(time(0));
    rand();
    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < N; c++)
        {
            arr[r][c] = rand() % 20;
            cout << arr[r][c] << "\t";
            if (r == c)
            {
                sum_arr_main += arr[r][c];
            }
            if (r+c == N-1)
            {
                sum_arr_second += arr[r][c];

            }
        }
        cout << "\n\n";
    }

    cout << "сумма элементов по главной диагонали = " << sum_arr_main << "\n";
    cout << "сумма элементов по главной диагонали = " << sum_arr_second << "\n";
    */

    /*
    //3.	Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от - 10 до 10. Определить количество положительных, отрицательных и нулевых элементов.
    int const M = 5;
    int const N = 5;
    int arr[M][N];
    int arr_minus = 0;
    int arr_plus = 0;
    int arr_zero = 0;
    srand(time(0));
    rand();
    int min_rand = -10;
    int max_rand = 10;
    int k = max_rand - min_rand + 1;
    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < N; c++)
        {
            arr[r][c] = rand() % k+ min_rand;
            cout << arr[r][c] << "\t";
            if (arr[r][c]<0)
            {
                arr_minus++;
            }
            else if (arr[r][c] > 0)
            {
                arr_plus++;
            }
            else if (arr[r][c] == 0)
            {
                arr_zero++;
            }

        }
        cout << "\n\n";
    }

    cout << "количество положительных элементов = " << arr_plus << "\n";
    cout << "количество отрицательных элементов = " << arr_minus << "\n";
    cout << "количество нулевых элементов = " << arr_zero << "\n";
    */

    /*
    //4.	Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму по каждой строке и по каждому столбцу массива.
    int const M = 3;
    int const N = 3;
    int arr[M][N];
    int sum_columns = 0;


    srand(time(0));
    rand();
    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < N; c++)
        {
            arr[r][c] = rand() % 20;
            cout << arr[r][c] << "\t";
        }
        cout << "\n\n";
    }

    for (int r = 0; r < M; r++)
    {
        int sum_rows = 0;
        for (int c = 0; c < N; c++)
        {
            sum_rows += arr[r][c];
        }
            cout << "суммa по строке " << r << " = " << sum_rows << "\n";
    }

    cout << "\n\n";

    for (int c = 0; c < N; c++)
    {
        int sum_columns = 0;
        for (int r = 0; r < M; r++)
        {
            sum_columns += arr[r][c];
        }
        cout << "суммa по колонке " << c << " = " << sum_columns << "\n";
    }
    */

    /*
    //5.	Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки, а вторая – номер столбца.
    int const M = 5;
    int const N = 5;
    int arr[M][N];
    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < N; c++)
        {
            arr[r][c] = r*10+c;
            cout << setw(2) << setfill('0') << arr[r][c] << "\t";

        }
        cout << "\n\n";
    }
    */
/*
    //6.	В двумерном массиве размерности M x N поменять местами чётные строки с нечётными.

    int const M = 5;
    int const N = 5;
    int arr[M][N];
    int arr_copy[M][N];
    srand(time(0));
    rand();
    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < N; c++)
        {
            arr[r][c] = rand() % 20;
            cout << arr[r][c] << "\t";
        }
        cout << "\n\n";
    }

    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < N; c++)
        {
            if (r % 2 == 0 && r < M-1) //четная строка
            {
                arr_copy[r][c] = arr[r][c];
                arr[r][c] = arr[r + 1][c];

            }

            if (r % 2 != 0) //нечетная строка
            {
                arr[r][c] = arr_copy[r - 1][c];
            }
        }
    }

    cout << "\n\n";

    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < N; c++)
        {
            cout << arr[r][c] << "\t";
        }
        cout << "\n\n";

    }
*/
/*
//9.	Заполнить массив M x N следующим образом :

int const M = 5;
int const N = 6;
int arr[M][N];
int k = 1;

for (int r = 0; r < M; r++)
{
    for (int c = 0; c < N; c++)
    {
        arr[r][c] = k;
        k++;
        cout << arr[r][c] << "\t";        
    }
    cout << "\n\n";
}

int const M = 5;
int const N = 6;
int arr[M][N];
int k = 1;

for (int r = 0; r < M; r++)
{
    for (int c = 0; c < N; c++)
    {
        arr[r][c] = k;
        k++;
        cout << arr[r][c] << "\t";        
    }
    cout << "\n\n";
}

*/

int const M = 5;
int const N = 6;
int arr[M][N];

int k = 1;

for (int r = 0; r < M; r++)
{
    if (r % 2 == 0)
    {
        for (int c = 0; c < N; c++)
        {
            arr[r][c] = k;
            k++;
        }
    }

    else if (r % 2 != 0)
    {
        for (int c = (N-1); c >= 0; c--)
        {
            arr[r][c] = k;
            k++;
        }
    }

}
for (int r = 0; r < M; r++)
{
    for (int c = 0; c < N; c++)
    {
        cout << arr[r][c] << "\t";
    }
    cout << "\n\n";
}

}
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int M, N, K;

    cout << "Введите количество строк M: ";
    cin >> M;
    cout << "Введите количество столбцов N: ";
    cin >> N;

    int** matrix = new int* [M];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[N];
    }

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Элемент [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Введите номер столбца K (от 1 до " << N << "): ";
    cin >> K;
    if (K > N || K < 0) {
        cout << "Ошибка! 1 <= K <= N";
        return 0;
    }

    cout << "Элементы " << K << "-го столбца:" << endl;
    for (int i = 0; i < M; i++) {
        cout << matrix[i][K - 1] << endl;
    }
    delete[] matrix;
}

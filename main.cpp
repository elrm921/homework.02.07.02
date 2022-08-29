#include <iostream>
#include <list>

using namespace std;

int main() {
    cout << "Введите входные данные:\n";

    int size = 0;
    cin >> size;

    list<int> numbers;
    for (int n = 0; n < size; ++n) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    numbers.sort(std::greater<int>());
    numbers.unique();

    cout << "Выходные данные:\n";
    for (auto n : numbers) {
        cout << n << "\n";
    }

    return 0;
}
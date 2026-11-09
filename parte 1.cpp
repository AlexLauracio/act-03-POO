#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 20> g = {37, 21, 45, 29, 33,
                        91, 55, 73, 61, 99, 53, 87, 67, 79, 85,
                        13, 5, 17, 9, 3};

    cout << "a) Todos los elementos:\n";
    for (int x : g) cout << x << " ";

    cout << "\n\nb) Mayores de 20 y menores de 50:\n";
    for_each(g.begin(), g.end(), [](int x) {
        if (x > 20 && x < 50) cout << x << " ";
    });

    sort(g.begin(), g.end());
    cout << "\n\nc) Grupo ordenado:\n";
    for (int x : g) cout << x << " ";

    cout << "\n\nd) Indices impares menores de 10:\n";
    for (auto it = g.begin() + 1; it < g.begin() + 10; it += 2)
        cout << "indice " << it - g.begin() << " -> " << *it << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    array<string, 12> p = {"Perú", "Argentina", "Bolivia", "Brasil", "Chile",
                           "Colombia", "Ecuador", "Paraguay", "Uruguay", "Venezuela"};

    p.at(10) = "Guyana";
    p[11] = "Surinam";

    cout << "b) Paises que inician con C o P:\n";
    for (const string& pais : p)
        if (pais[0] == 'C' || pais[0] == 'P') cout << pais << "  ";

    cout << "\n\nc) Primer elemento: " << p.front()
         << "\n   Ultimo elemento: " << p.back() << "\n";

    sort(p.begin(), p.end());
    cout << "\nd) Paises ordenados:\n";
    for (const string& pais : p) cout << pais << "  ";
    cout << "\n";

    return 0;
}

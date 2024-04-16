#include <bits/stdc++.h>

using namespace std;

string Secreto(string frase);

int main() {
    string frase;

    cout << "Ingrese un secreto: " << endl;
    getline(cin, frase);
    cout << Secreto(frase) << endl;

    return 0;
}

string Secreto(string frase) {
    string secreto;
    string f;
    bool invertir = false;

    int i = 0;
    while (i < frase.size()) {
        if (frase[i] == '(') {
            invertir = true;
        }
        if (frase[i] == ')') {
            invertir = false;
            int j = f.size() - 1;
            while (j >= 0) {
                secreto += f[j];
                j--;
            }
            f = "";
        }
        if (frase[i] != '(' && frase[i] != ')') {
            if (invertir) {
                f += frase[i];
            } else {
                secreto += frase[i];
            }
        }
        i++;
    }

    return secreto;
}
#include <iostream>

using namespace std;

enum Cuaca {
    Cerah,
    Berawan,
    Hujan,
    Badai
};

string getNamaCuaca(Cuaca cuaca) {
    switch (cuaca) {
        case Cerah:
            return "Cerah";
        case Berawan:
            return "Berawan";
        case Hujan:
            return "Hujan";
        case Badai:
            return "Badai";
        default:
            return "Tidak diketahui";
    }
}

int main() {
    Cuaca cuacaHariIni = Berawan;

    cout << "Cuaca hari ini: " << getNamaCuaca(cuacaHariIni) << endl;

    return 0;
}

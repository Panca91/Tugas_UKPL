#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Fungsi yang akan diuji
bool isValidPassword(string password) {
    int state = 0; // Nilai awal state adalah 0

    // Loop melalui setiap karakter dalam password
    for (int i = 0; i < password.length(); i++) {
        char c = password[i];
        
        // Mengubah state berdasarkan karakter saat ini dan state sebelumnya
        if (state == 0 && isdigit(c)) {
            state = 1;
        } else if (state == 0 && isalpha(c)) {
            state = 2;
        } else if (state == 1 && isalpha(c)) {
            state = 3;
        } else if (state == 1 && !isalnum(c)) {
            return false;
        } else if (state == 2 && isdigit(c)) {
            state = 3;
        } else if (state == 2 && !isalnum(c)) {
            return false;
        } else if (state == 3 && !isalnum(c)) {
            return false;
        }
    }

    // Password valid jika state akhir adalah 3
    return state == 3;
}

// Fungsi untuk melakukan pengujian
void stateTransitionTest(string input, bool expectedResult) {
    bool actualResult = isValidPassword(input);

    // Mencetak hasil pengujian
    cout << "Input: " << input << endl;
    cout << "Hasil yang diharapkan: " << (expectedResult ? "Valid" : "Tidak valid") << endl;
    cout << "Hasil aktual: " << (actualResult ? "Valid" : "Tidak valid") << endl;

    if (actualResult == expectedResult) {
        cout << "Pengujian berhasil" << endl;
    } else {
        cout << "Pengujian gagal" << endl;
    }

    cout << endl;
}

int main() {
    // Pengujian dengan input yang valid
    stateTransitionTest("abc123", true);
    stateTransitionTest("a1b2c3", true);
    stateTransitionTest("ABC123", true);

    // Pengujian dengan input yang tidak valid
    stateTransitionTest("", false);
    stateTransitionTest("abc", false);
    stateTransitionTest("123", false);
    stateTransitionTest("abc123!", false);
	
    return 0;
}


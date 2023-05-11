#include <iostream>
using namespace std;

// Fungsi untuk menjumlahkan dua bilangan
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk melakukan pengujian
void test() {
    // Equivalence class 1: a dan b positif
    int a = 5, b = 6;
    int expected = 11;
    int result = tambah(a, b);
    if (result != expected) {
        cout << "Pengujian gagal, a = " << a << ", b = " << b << ", hasil = " << result << ", seharusnya = " << expected << endl;
    } else {
        cout << "Pengujian berhasil, a = " << a << ", b = " << b << ", hasil = " << result << endl;
    }

    // Equivalence class 2: a dan b negatif
    a = -5, b = -6;
    expected = -11;
    result = tambah(a, b);
    if (result != expected) {
        cout << "Pengujian gagal, a = " << a << ", b = " << b << ", hasil = " << result << ", seharusnya = " << expected << endl;
    } else {
        cout << "Pengujian berhasil, a = " << a << ", b = " << b << ", hasil = " << result << endl;
    }

    // Equivalence class 3: a positif, b negatif
    a = 5, b = -6;
    expected = -1;
    result = tambah(a, b);
    if (result != expected) {
        cout << "Pengujian gagal, a = " << a << ", b = " << b << ", hasil = " << result << ", seharusnya = " << expected << endl;
    } else {
        cout << "Pengujian berhasil, a = " << a << ", b = " << b << ", hasil = " << result << endl;
    }

    // Equivalence class 4: a negatif, b positif
    a = -5, b = 6;
    expected = 1;
    result = tambah(a, b);
    if (result != expected) {
        cout << "Pengujian gagal, a = " << a << ", b = " << b << ", hasil = " << result << ", seharusnya = " << expected << endl;
    } else {
        cout << "Pengujian berhasil, a = " << a << ", b = " << b << ", hasil = " << result << endl;
    }

    // Equivalence class 5: a sama dengan 0, b sama dengan 0
    a = 0, b = 0;
    expected = 0;
    result = tambah(a, b);
    if (result != expected) {
        cout << "Pengujian gagal, a = " << a << ", b = " << b << ", hasil = " << result << ", seharusnya = " << expected;
	} else {
    cout << "Pengujian berhasil, a = " << a << ", b = " << b << ", hasil = " << result << endl;
	}

	// Equivalence class 6: a sama dengan 0, b positif
	a = 0, b = 6;
	expected = 6;
	result = tambah(a, b);
	if (result != expected) {
	    cout << "Pengujian gagal, a = " << a << ", b = " << b << ", hasil = " << result << ", seharusnya = " << expected << endl;
	} else {
	    cout << "Pengujian berhasil, a = " << a << ", b = " << b << ", hasil = " << result << endl;
	}
	
	// Equivalence class 7: a positif, b sama dengan 0
	a = 5, b = 0;
	expected = 5;
	result = tambah(a, b);
	if (result != expected) {
	    cout << "Pengujian gagal, a = " << a << ", b = " << b << ", hasil = " << result << ", seharusnya = " << expected << endl;
	} else {
	    cout << "Pengujian berhasil, a = " << a << ", b = " << b << ", hasil = " << result << endl;
	}
	
	// Equivalence class 8: a negatif, b sama dengan 0
	a = -5, b = 0;
	expected = -5;
	result = tambah(a, b);
	if (result != expected) {
	    cout << "Pengujian gagal, a = " << a << ", b = " << b << ", hasil = " << result << ", seharusnya = " << expected << endl;
	} else {
	    cout << "Pengujian berhasil, a = " << a << ", b = " << b << ", hasil = " << result << endl;
	}
}

int main() {
	test();
	return 0;
}	

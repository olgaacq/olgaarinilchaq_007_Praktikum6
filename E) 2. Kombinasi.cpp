#include <iostream>

using namespace std;

void printAllKLengthRec(char set[], string prefix, int n, int j) {
  if (j == 0) {
    cout << (prefix) << endl;
    return;
  }
  for (int i = 0; i < n; i++) {
    string newPrefix;
    newPrefix = prefix + set[i];
    printAllKLengthRec(set, newPrefix, n, j - 1);
  }
}
void printAllKLength(char set[], int j, int n) {
  printAllKLengthRec(set, "", n, j);
}

int main() {
  char ch[] = {'a', 'b','c','d','e','f','g','h', 'i','j','k','l','m','n','o', 'p','q','r','s','t','u','v','w','x','y','z'};

  int N;
  cout << "\n Jumlah Karakter : " << ' ';
  while (cin >> N) {
    if (N != -1) {
      printAllKLength(ch, N, N);
    } else if (N > 26) {
      cout << "Karakter yang anda masukkan salah!";
      break;
    } else {
      break;
    }
  }

  return 0;
}

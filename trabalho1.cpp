/*#include <iostream>
#include <stdlib.h>

using namespace std;

#define TAM 100
string words[TAM];

void init();

int main(int argc, char const *argv[]) {
  int n = atoi(argv[2]);
  string topWords[n];
  int i = 0;

  init();

  while(cin) {
      cin >> words[i];
      i++;
  }

  cout << "\nLeitura realizada\n" << endl;
  cout << words[0] << "\n" << endl;
  cout << words[10] << "\n" << endl;
  cout << words[6] << "\n" << endl;

  return 0;
}

void init() {
  for (int i = 0; i < TAM; i++) {
    words[i] = "";
  }
}
*/
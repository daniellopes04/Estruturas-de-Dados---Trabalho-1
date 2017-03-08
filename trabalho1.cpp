#include <iostream>
#include <fstream>

using namespace std;

#define TAM 50
string info_blocks[TAM];
string blocks[TAM];

void init();
void overflow();

int main(int argc, char const *argv[]) {
  //int n = atoi(argv[2]);
  ifstream file;
  string line;
  int n, ntotal, i = 0;
  
  file.open("entrada.txt");
  init();

  if(file.is_open()) {
    getline(file, line);
    n = stoi(line);

    while(i < n) {
      getline(file, info_blocks[i]);
      i++;
    }

    while(!file.eof()) {
      getline(file, blocks[i]);
      i++;
    }

    ntotal = i-1;
  }

  cout << "\nBlocos de info\n" << endl;
  for (i = 0; i < n; i++)
  {
    cout << info_blocks[i] << endl;
  }

  cout << "\nBlocos restantes\n" << endl;
  for (i = n; i <= ntotal; i++)
  {
    cout << blocks[i] << endl;
  }

  cout << endl;
  file.close();
}

void init() {
  for (int i = 0; i < TAM; i++) {
    info_blocks[i] = "";
    blocks[i] = "";
  }
}

void overflow() {

}

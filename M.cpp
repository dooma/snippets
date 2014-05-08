/*
 *
 * 5 4
 * 1 2 3 4
 * 1 2 3 4
 * 1 2 3 4
 * 1 2 3 4
 * 1 2 3 4
 *
 * This is input that I used for testing
 */
#include<iostream>
#include<fstream>
using namespace std;

int A[100][100], n, m;

bool read(){
  ifstream fin("test.in");
  fin >> n >> m;
  if(n < m) return false;

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      fin >> A[i][j];
    }
  }

  return true;
}

void show(){
  cout << "\nNumbers from | | of M\n";

  for(int i = 0; i < n; i++){
    cout << A[i][0] << " " << A[i][m-1] << " ";
  }

  cout << "\nNumbers from middle of M:\n";

  for(int i = 0; i < m/2; i++){
    cout << A[i][i] << " " << A[i][m-i-1] << " ";
  }

  if(m % 2){
    cout << A[m/2][m/2];
  }

  cout << "\n";
}
int main(){

  if(!read()){
    cout << "Erorr: the number of lines should be greater than number of columns";
    return 0;
  }

  show();

  return 0;
}

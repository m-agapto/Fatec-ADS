# include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
  
void desempate(char ordenados[12][30],int pontos_ordenados[12],int qtdgols[12]){
  char clasificação[12][30];
  int pontos_clasificados[12];

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      char tmpname[30];
      int tmppontos;
      int tmpgols;
      if (pontos_ordenados[i] == pontos_ordenados[j]) {
        if (qtdgols[i] < qtdgols[j]) {
          strcpy(tmpname,ordenados[i]);
          strcpy(ordenados[i],ordenados[j]);
          strcpy(ordenados[j],tmpname);
          tmppontos = pontos_ordenados[i];
          pontos_ordenados[i] = pontos_ordenados[j];
          pontos_ordenados[j] = tmppontos;
          tmpgols = qtdgols[i];
          qtdgols[i] = qtdgols[j];
          qtdgols[j] = tmpgols;
        }
      }
    }
    
  }
  for (int i = 0; i < 12; i++) {
   cout << "O " << i + 1 << "º colocado é o time: " << ordenados[i] << " com " << pontos_ordenados[i] << " pontos e " << qtdgols[i] << " gols.\n";
  }
}

void ordena(char times[12][30],int pontos[12],int qtdgols[12]){
  char ordenado[12][30];
  int pontos_ordenados[12];
  int maior = pontos[0];

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      char tmpname[30];
      int tmppontos;
      int tmpgols;
      if (pontos[i] < pontos[j]) {
        strcpy(tmpname,times[i]);
        strcpy(times[i],times[j]);
        strcpy(times[j],tmpname);
        tmppontos = pontos[i];
        pontos[i] = pontos[j];
        pontos[j] = tmppontos;
        tmpgols = qtdgols[i];
        qtdgols[i] = qtdgols[j];
        qtdgols[j] = tmpgols;
      }
    }
  }

  for (int i = 0; i < 12; i++) {
    strcpy(ordenado[i],times[i]);
  }

  for (int i = 0; i < 12; i++) {
    pontos_ordenados[i] = pontos[i];
  }
  
  desempate(ordenado,pontos_ordenados,qtdgols);
}

int main(){
  char times[12][30];
  int pontos[12],qtdgols[12];

  for (int i = 0; i < 12; i++) {
    cout << "Digite o nome do " << i + 1 << "time: \n";
    cin >> times[i];
  }

  for (int i = 0; i < 12; i++) {

  cout << "Digite os pontos do " << i + 1 << "time: \n";
  cin >> pontos[i];

  cout << "Digite a quantidade de gols do " << i + 1 << "time: \n";
  cin >> qtdgols[i];
  }

  ordena(times,pontos,qtdgols);

  return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

void cript(char concat[]) {
    for (int i = 0; i < strlen(concat); i++) {
        if (concat[i] == 'i' || concat[i] == 'a') {
            concat[i] = 'b';
        } else {
            concat[i] = '3';
        }
    }
    cout << "Frase criptografada: " << concat << endl;
}

void concat(char frase[]){
    size_t len = strlen(frase);
    if (len > 0 && frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }

    char palavraExtra[100] = "chuvanao";
    strcat(frase, palavraExtra);
    cout << "frase concatenada: " << frase << endl;
    
    cript(frase);
}

void Cvog(char frase[]) {
    char vog[5] = {'a', 'e', 'i', 'o', 'u'};
    int contV = 0, contC = 0, contP = 0;
    
    if (strlen(frase) > 0) {
        contP = 1;
    }

    for(int i = 0; i < strlen(frase); i++) {
        for(int j = 0; j < 5; j++) {
            if(frase[i] == vog[j]) {
                contV++;
            }
        }
        if(frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != ' ' && frase[i] != '\n') {
            contC++;
        }
        if(frase[i] == ' ') {
            contP++;
        }
    }
    
    cout << "Quantidade de vogais: " << contV << endl;
    cout << "Quantidade de consoantes: " << contC << endl;
    cout << "Quantidade de palavras: " << contP << endl;
}

int main(){
    char frase[200];
    cout << "Digite uma frase: ";
    fgets(frase, 200, stdin);

    Cvog(frase);
    concat(frase);

    return 0;
}
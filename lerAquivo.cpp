#include <iostream>
#include <fstream>
using namespace std;



int main() {
    ifstream fin("arq1.txt");
    char vetor[200];
    char temp;
    int i = 0;

    while(! fin.eof()){
        fin.get(temp);
        if(temp != ' '){
            vetor[i] = temp;
            i++;
        }
    }
    for(int j=0; j < i; j++){
        cout << vetor[j];
    }

    return 0;
}

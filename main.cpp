#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int A,mat[26],imax;
    string aux;
    cin >> A >> aux;
    memset(mat,0,sizeof(mat));
    for(int iA=0; iA<aux.size();iA++){
        if(aux[iA]=='?'){
            mat[1]++;
        }else{
            mat[aux[iA]-'A']++;
        }
    }
    imax=A/4;
    if(A%4 != 0){
        cout << "===" << endl;
    }else if (mat[0]>imax || mat['C'-'A']>imax || mat['G'-'A']>imax || mat['T'-'A']>imax){
        cout << "===" << endl;
    }else{
        for(int iA=0; iA<aux.size();iA++){
            if(aux[iA]=='?'){
                if(mat[0]<imax){
                    aux[iA]='A';
                    mat[0]++;
                }else if(mat['C'-'A']<imax){
                    aux[iA]='C';
                    mat['C'-'A']++;
                }else if(mat['G'-'A']<imax){
                    aux[iA]='G';
                    mat['G'-'A']++;
                }else{
                    aux[iA]='T';
                    mat['T'-'A']++;
                }
            }
        }
        cout << aux << endl;
    }
    return 0;
}

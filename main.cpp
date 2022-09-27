#include <iostream>

using namespace std;

void assignation (int valeur);
int verifVictoire(int victory);

int case1 = 0, case2 = 0, case3 = 0, case4 = 0, case5 = 0, case6 = 0, case7 = 0, case8 = 0, case9 = 0;

int main() {

    int victoire = 0;

    while (!verifVictoire(victoire)){

        cout<< "J1, Choisisez un chiffre entre 1 et 9 : "<<endl;
        assignation ( 1);
        verifVictoire(victoire);

        if(verifVictoire(victoire)){
            break;
        }

        cout<< "J2, Choisisez un chiffre entre 1 et 9 : "<<endl;
        assignation ( 2);
        verifVictoire(victoire);

    }

    if (verifVictoire(victoire) == 1){
        cout<< "Bravo J1, vous avez gagne ! "<<endl;
    }else{
        cout<< "Bravo J2, vous avez gagne ! "<<endl;
    }

    return 0;
}



void assignation ( int valeur){
    int numero_case;
    cin >> numero_case;

    switch (numero_case) {
        case 1: if(case1 == 0){ case1 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;}break;
        case 2: if(case2 == 0){ case2 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
        case 3: if(case3 == 0){ case3 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
        case 4: if(case4 == 0){ case4 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
        case 5: if(case5 == 0){ case5 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
        case 6: if(case6 == 0){ case6 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;}break;
        case 7: if(case7 == 0){ case7 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
        case 8: if(case8 == 0){ case8 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
        case 9: if(case9 == 0){ case9 = valeur;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
        default : break;
    }

}



int verifVictoire(int victory){

    int lignes1 = case1 * case2 * case3;
    int lignes2 = case4 * case5 * case6 ;
    int lignes3 = case7 * case8 * case9;

    int colonnes1 = case1 * case4 * case7;
    int colonnes2 = case2 * case5 * case8 ;
    int colonnes3 = case3 * case6 * case9;

    int diagonale1 = case1 * case5 * case9 ;
    int diagonale2 = case3 * case5 * case7 ;

    if (lignes1 == 1||lignes2 == 1||lignes3 == 1||colonnes1 == 1||colonnes2 == 1||colonnes3 == 1||diagonale1 == 1||diagonale2 == 1){
        victory = 1;
    }else if (lignes1 == 8||lignes2 == 8||lignes3 == 8||colonnes1 == 8||colonnes2 == 8||colonnes3 == 8||diagonale1 == 8||diagonale2 == 8 ){
        victory = 2;
    }

    return victory ;

}

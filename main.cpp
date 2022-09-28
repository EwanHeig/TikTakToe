#include <iostream>

using namespace std;

void assignation (int valeur);
int verifVictoire(int victory);
void affichage (int c1,int c2,int c3,int c4,int c5,int c6,int c7,int c8,int c9);
char conversion(int c);
void jeuxHumain();
void jeuxRobot();

int case1 = 0, case2 = 0, case3 = 0, case4 = 0, case5 = 0, case6 = 0, case7 = 0, case8 = 0, case9 = 0;

int main() {
    int choix = 0;
    bool jeux = 1;

    cout << "Bonjour,souhaitez vous jouer contre un humain (1) ou un robot (0) ? : " << endl;
    cin >> choix;


    while(jeux){
        jeux = 0;
        if(choix == 1){
            jeuxHumain();
        }
        else if(choix == 0){
            jeuxRobot();
        }
        else{
            cout << "Veuillez taper 1 pour jouer contre un humain ou 0 contre un robot svp : ";
            cin >> choix;
            jeux = 1;
        }
    }


    return EXIT_SUCCESS;
}


void assignation ( int valeur,bool mode){
    int numero_case;
    int erreur = 1;
    int nombreAleatoire = 0;
    const int MAX = 9;
    const int MIN = 0;



    if (mode == 1){
        cin >> numero_case;
        while(erreur){
            switch (numero_case) {
                case 1: if(case1 == 0){ case1 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                case 2: if(case2 == 0){ case2 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                case 3: if(case3 == 0){ case3 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                case 4: if(case4 == 0){ case4 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                case 5: if(case5 == 0){ case5 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                case 6: if(case6 == 0){ case6 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                case 7: if(case7 == 0){ case7 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                case 8: if(case8 == 0){ case8 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                case 9: if(case9 == 0){ case9 = valeur;erreur = 0;} else{cout<<"case indisponible, rechoisissez : "<<endl; cin>> numero_case;} break;
                default : break;
            }

        }
    }


    else if (mode == 0){
        srand(time(NULL));
        nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;

        while(erreur){
            switch (nombreAleatoire) {
                case 1: if(case1 == 0){ case1 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                case 2: if(case2 == 0){ case2 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                case 3: if(case3 == 0){ case3 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                case 4: if(case4 == 0){ case4 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                case 5: if(case5 == 0){ case5 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                case 6: if(case6 == 0){ case6 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                case 7: if(case7 == 0){ case7 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                case 8: if(case8 == 0){ case8 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                case 9: if(case9 == 0){ case9 = valeur;erreur = 0;} else{ nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;} break;
                default : break;
            }

        }
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


void affichage (int c1,int c2,int c3,int c4,int c5,int c6,int c7,int c8,int c9){
    char ca1 = conversion(c1);
    char ca2 = conversion(c2);
    char ca3 = conversion(c3);
    char ca4 = conversion(c4);
    char ca5 = conversion(c5);
    char ca6 = conversion(c6);
    char ca7 = conversion(c7);
    char ca8 = conversion(c8);
    char ca9 = conversion(c9);

    //system("CLS");

    cout << ca1 << " | " << ca2 << " | " << ca3 << endl
         <<"---------"<<endl
         << ca4 << " | " << ca5 << " | " << ca6 << endl
         <<"---------"<<endl
         << ca7 << " | " << ca8 << " | " << ca9 << endl << endl << endl ;

}


char conversion(int c){
    if (c == 1) {return 'X';}
    else if (c == 2) {return 'O';}
    else {return ' ';}
}


void jeuxHumain(){

    int victoire = 0;

    while (!verifVictoire(victoire)){

        cout<< "J1, Choisisez un chiffre entre 1 et 9 : "<<endl;
        assignation ( 1,1);
        verifVictoire(victoire);

        affichage(case1,case2,case3,case4,case5,case6,case7,case8,case9);

        if(verifVictoire(victoire)){
            break;
        }

        cout<< "J2, Choisisez un chiffre entre 1 et 9 : "<<endl;
        assignation ( 2,1);
        verifVictoire(victoire);

        affichage(case1,case2,case3,case4,case5,case6,case7,case8,case9);

    }

    if (verifVictoire(victoire) == 1){
        cout<< "Bravo J1, vous avez gagne ! "<<endl;
    }else{
        cout<< "Bravo J2, vous avez gagne ! "<<endl;
    }

}

void jeuxRobot(){

    int victoire = 0;

    while (!verifVictoire(victoire)){

        cout<< "Choisisez un chiffre entre 1 et 9 : "<<endl;
        assignation ( 1,1);
        verifVictoire(victoire);

        affichage(case1,case2,case3,case4,case5,case6,case7,case8,case9);

        if(verifVictoire(victoire)){
            break;
        }



        assignation ( 2,0);
        verifVictoire(victoire);

        affichage(case1,case2,case3,case4,case5,case6,case7,case8,case9);

    }

    if (verifVictoire(victoire) == 1){
        cout<< "Bravo , vous avez gagne ! "<<endl;
    }else{
        cout<< "Dommage, le bot a gagne ! "<<endl;
    }

}
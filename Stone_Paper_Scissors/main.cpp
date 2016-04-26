#include <QCoreApplication>
#include <iostream>
#include <string>
#include <ctime>

enum figure {Rock, Scissors, Paper};

using namespace std;

int randomIze(){
    srand(time(0));
    int surprize = rand() % 3;
    return surprize;
}

void logic(int surprize, string choise, string rock, string scissors, string paper){
    switch (surprize){
    case Rock:
        //for(int i = 0; i < choise.size();i++){
            if(choise == rock){
                cout << "You win!" << endl;
            }else cout << "Looser!" << endl;
       // }
        break;
    case Scissors:
        //for(int i = 0; i < choise.size();i++){
            if(choise == scissors){
                cout << "You win!" << endl;
            }else cout << "Looser!" << endl;
        //}
        break;
    case Paper:
        //for(int i = 0; i < choise.size();i++){
            if(choise == paper){
                cout << "You win!" << endl;
            }else cout << "Looser!" << endl;
       // }
        break;
    default:
        break;
    }
}

void initial(int surprize){
    string rock = "Rock";
    string scissors = "Scissors";
    string paper = "Paper";
//    cout << surprize << endl; щоб наперед знати відповідь
    cout << "Enter Rock, Scissors or Paper: ";
    string choise; cin >> choise;
    logic(surprize, choise, rock, scissors, paper);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    initial(randomIze());
    return a.exec();
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void  drawIntro(){
    cout << R"(
     _____                     _       _            
    |  _  |___ ___ ___ ___ ___| |_ ___| |_ ___ ___  
    |     | .'|  _|  _| . |  _| '_|_ -|  _| .'|  _| 
    |__|__|__,|___|_| |___|___|_,_|___|_| |__,|_|   
    )"<<"\n\n";
}

int fightMonster(){
    int playerHP =10;
    int monsterHP = 8;

    cout<<"Um monstro aparece! Prepare-se para lutar.\n";

    while (playerHP > 0 && monsterHP > 0)
    {
        int attack =rand() % 5 + 1;
        int monsterAttack = rand() % 4 +1;

        monsterHP -=attack;
        playerHP -= monsterAttack;

        cout << "Voce acertou "<<attack<<" de dano ao monstro.\n";
        cout << "O monstro te causou "<<monsterAttack<< " de dano. \n";
    }

    if(playerHP > 0){
        cout << "Voce Venceu!\n";
        return 1;
    }else{
        cout << "Voce foi derrotado...\n";
        return 0;
    }    

}

int main(){
    srand(time(0));
    drawIntro();

    string choice;

    cout << "Voce esta em uma caverna escura. Ir para esquerda ou direita? (esquerda/direita): ";
    cin>>choice;

    if(choice =="esquerda"){
        cout << "Voce encontrou uma espada magica.\n";
        if(fightMonster()){
            cout << "Com a espada magica, Voce derrotou o mostro e saiu da caverna!\n";
        }
        
    }else{
        cout <<"Voce caiu numa armadilha.\n";
        cout << "FIM do jogo! volte sempre.\n";
    }
        
        return 0;
}
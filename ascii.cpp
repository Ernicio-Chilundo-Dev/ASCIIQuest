#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void  DrawIntro(){
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

    cout<<"Um monstro aparece! Prepaare-se appr,para lutar\n";

    while (playerHP > 0 && monsterHP > 0)
    {
        int attack =rand() % 5 + 1;
        int monsterAttack = rand() % 4 +1;

        
    }
    

}

int main(){

    return 0;
}
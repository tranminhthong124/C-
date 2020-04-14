#include <iostream>
#include <string.h>
#include <string>
#include <windows.h>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string name;
    char character;
    char weapon;
    char key;
    char ans;
    int monster = 10000;
    int health;
    int w;
    int l;
    cout << " Welcome to the Corona Land! Please choose your character the Warrior or Duke (W/D)?:";
    cin >> character;
    character = tolower(character);
    cout << " Could you enter your name please?:";
    cin >> name;
    cout << "Which weapon would you choose, Katana or Pistol (K/P):";
    cin >> weapon;
    weapon = tolower(weapon);
    
  
    if(character=='w')
    {
        cout << "Warrior " << name << " is heading to the wood and kill the monster..."<<endl;
        Sleep (2000);
        cout << "Watch out!!! The Monster is hiding the dark," << name << "!!!"<<endl;
        cout << "Take out your weapon now!!!"<<endl;
        cout << "Press 'e' then ENTER to attack the monster"<<endl;
        health = 250;
    }
    else if (character == 'd' )
    {
        cout << "The Duke " << name << " is heading to the wood to save the princess...";
        Sleep (2000);
        cout << "Watch out!!! The Minion just saw you," << name << "!!!"<<endl;
        cout << "Take out your weapon now!!!"<<endl;
        cout << "Press 'e' then ENTER to attack the minion"<<endl;
        health = 150;
    }
    while (health > 0)
    {
        cin >> key;
        key = tolower(key);
        if (monster > 0)
        {
            if (key == 'e')
            {
                if (character == 'w')
                {
                    if (weapon == 'k')
                    {
                        w = rand()%6999;
                    }
                    else if (weapon == 'p')
                    {
                        w =rand()%6699;
                    }
                    l = rand() % 89;
                }
                else 
                {
                    if (weapon == 'k')
                    {
                        w = rand() % 4999;
                    }
                    else if (weapon == 'p')
                    {
                        w = rand()%4499;
                    }
                    l = rand() % 75;
                }
                monster = monster - w;
                health = health - l;
                cout << "The opponent health is:" << monster << endl;
                cout << "Your health is:" << health << endl;
                cout << "Keep fighting!!!" << endl;
            }
            else
            {
                cout << "You are being attacked!" << endl;
                cout << "Your health is:" << health << endl;
                cout << "Press the 'e' to attack!" << endl;
            }
        }
        else if (monster <= 0)
        {
            cout << "Congratulation. You have successfully defeat the enemy!"<<endl;
            cout << "Your health is:" << health << endl;
            cout << "Oh! The Princess is here. Do you want to save her? (S/N)";
            cin >> ans;
            ans = tolower(ans);
            if (ans == 's')
            {
                cout<< "If you want to save the princess, then answer correctly these questions!" << endl;
                Sleep (1000);
                cout<< "What is the square root of 100? \n A) 1,00 \n B) 10 \n C) 10^10 \n D) Ten ten ";
                cout << "\n Answer: "; 
                cin >> ans;
                ans = tolower(ans); 
                if (ans == 'b')
                {
                    cout << "\n Good Job!";
                }
                else
                {
                    cout << "\n You lost! Game over";
                    system("pause>nul");
                    return 0;
                }
                Sleep (1500);
                cout<< "\n There were 5 bananas on the trees. The monkeys climbed on and get all 5, then he shared 3 of them with another monkey. How many bananas left did the donkey have ? \n A) 2 \n B) 3 \n C) None \n D) 5 ";
                cout << "\n Answer: "; 
                cin >> ans;
                ans = tolower(ans); 
                if (ans == 'c')
                {
                    cout << "\n Exactly! Who the hell was the donkey? ";
                }
                else
                {
                    cout << "\n You lost! You are the donkey...Game over";
                    system("pause>nul");
                    return 0;
                }
                Sleep (1500);
                cout<< "\n What is the square root of a donkey? \n A) Donkeykey \n B) DonDonkey \n C) DONKEY!!!!! \n D) Donkey^1/2 ";
                cout << "\n Answer: "; 
                cin >> ans;
                ans = tolower(ans); 
                if (ans == 'd')
                {
                    cout << "\n UHM HMMM";
                }
                else
                {
                    cout << "\n Frustrating! Game over!!!!!!!!!!!!!";
                    system("pause>nul");
                    return 0;
                }
                Sleep (1500);
                cout<< "\n The donkey was invited to the party, but why not the monkey ? \n A) Because I feel bad for the donkey \n B) Idontknow \n C) This game sucks! Screw the Princess. I'm out. \n D) Can this project be 100 out of 100, Mrs Sandra White? ";
                cout << "\n Answer: "; 
                cin >> ans; 
                ans = tolower(ans);
                if (ans == 'a')
                {
                    cout << "\n You are right. We should have not bullied the donkey.";
                }
                else if (ans== 'b')
                {
                    cout << "\n IQ = sqrt(100 x 5^(-2))";
                } 
                else if (ans == 'c')
                {
                    cout << " \n Died already";
                    system("pause>nul");
                    return 0;
                }
                else
                {
                    cout<< "\n Dear my lovely students, \n NO!";
                }
                Sleep (1500);
                cout<< "\n Princess: Thank you my hero! Please take me home. T.T"<<endl;
                cout << "\n Thank you for playing the game.";
                cout << "               THE END" << endl;
                system("pause>nul");
                return 1;
                
            }
            else
            {
                Sleep (1500);
                cout << "Princess: Well, I will tell the King to hunt you down somehow."<<endl;
                cout << "Thank you for playing the game." << endl;
                cout << "                   GAME OVER" << endl;
                system("pause>nul");
                return 1;
            }
        }
        else if (health <=0)
        {
        cout << "You died! Game over."<<endl;
        cout << "Thank you for playing the game.";
        system("pause>nul");
        return 0;
        }
    }
    
}
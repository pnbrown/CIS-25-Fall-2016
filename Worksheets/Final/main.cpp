#include <iostream>
#include <fstream>
#include <iomanip>
#include "Player Class.h"
#include "Monster Class.h"
using namespace std;

int main() {
    int choice;
    
    
        {
        //Menu for selecting Monster or Character Creation
        cout << setfill('*') << setw(40) << "*" << endl;
        cout << setfill(' ') << setw(39) << left << "* Menu:" << right << "*\n";
        cout << setfill(' ') << setw(39) << left << "* Enter # to run program or Quit" << right << "*\n";
        cout << setfill(' ') << setw(39) << left << "* 1) Character Creator" << right << "*\n";
        cout << setfill(' ') << setw(39) << left << "* 2) Monster Creator" << right << "*\n";
        cout << setfill('*') << setw(40) << "*" << endl;
        
        cin >> choice;
        
        switch(choice)
            {
            case 1:
                {
                    //Create Player object
                    Player Player1;
                    //Fill in attributes
                    Player1.makeNewPlayer();

                    /*ofstream ofs ("Player1.txt", std::ofstream::out);

                    ofs << "Your player's name is " << Player1.name << endl;
                    ofs << "They are a/an " << Player1.race << endl;
                    ofs << "They identify as " << Player1.gender << endl;
                    ofs << "Their alignment is " << Player1.alignment << endl;
                    ofs << "They have a health of " << Player1.hitPoints << " points." << endl;
                    ofs << "They have a strength of " << Player1.strength << endl;
                    ofs << "They have intelligence of " << Player1.intelligence << endl;
                    ofs << "They have wisdom of " << Player1.wisdom << endl;
                    ofs << "They have dexterity of " << Player1.dexterity << endl;
                    ofs << "Their constitution is " << Player1.constitution << endl;
                    ofs << "Their charisma is " << Player1.strength << endl;;

                    ofs.close();

                    Player1.Print(ostream);*/
                    
                    //Serialization of attributes to a text file to come in a future version
                    
                    break;
                }

                
            case 2:
                {
                    //Create Monster Object
                    Monster Monster1;
                    //Fill in attributes
                    Monster1.makeNewMonster();
                    
                    //Serialization of attributes to a text file to come in a future version
                    break;
                }

        
        }
    }
}

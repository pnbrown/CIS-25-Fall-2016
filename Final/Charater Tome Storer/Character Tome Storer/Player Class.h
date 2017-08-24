

#ifndef __Charater_Tome_Storer__Player_Class__
#define __Charater_Tome_Storer__Player_Class__

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

//Create a class for the player
class Player {
    public:
        //Create containers for each attribute
        string name;
        string race;
        string gender;
        string alignment;
        int hitPoints;
        int strength;
        int intelligence;
        int wisdom;
        int dexterity;
        int constitution;
        int charisma;
    
    //Setter functions for each attribute
    void setName(string newName){
        name = newName;
    }
    void setRace(string newRace){
        race = newRace;
    }
    void setGender(string newGender){
        gender = newGender;
    }
    void setAlignment(string newAlignment){
        alignment = newAlignment;
    }
    void setHitPoints(int newHitPoints){
        hitPoints = newHitPoints;
    }
    void setStrength(int newStrength){
        strength = newStrength;
    }
    void setIntelligence(int newIntelligence){
        intelligence = newIntelligence;
    }
    
    void setWisdom(int newWisdom){
        wisdom = newWisdom;
    }
    void setDexterity(int newDexterity){
        dexterity = newDexterity;
    }
    void setConstitution(int newConsititution){
        constitution = newConsititution;
    }
    void setCharisma(int newCharisma){
        charisma = newCharisma;
    }
    
    
    //Make new player function to fill in attributes from main function
    void makeNewPlayer(void)
    {
        string newPlayerName;
        string newPlayerRace;
        string newPlayerGender;
        string newPlayerAlignment;
        int newPlayerHitPoints;
        int newPlayerStrength;
        int newPlayerIntelligence;
        int newPlayerWisdom;
        int newPlayerDexterity;
        int newPlayerConstitution;
        int newPlayerCharisma;
        
        
        // Fill in each container with attributes
        Player Player1;
        
        cout << "What is your player's name?" << endl;
        cin >> newPlayerName;
        
        Player1.setName(newPlayerName);
        
        cout << "What is your player's race?" << endl;
        cin >> newPlayerRace;
        
        Player1.setRace(newPlayerRace);
        
        cout << "What is your player's gender?" << endl;
        cin >> newPlayerGender;
        
        Player1.setGender(newPlayerGender);
        
        cout << "What is your player's alignment?" << endl;
        cin >> newPlayerAlignment;
        
        Player1.setAlignment(newPlayerAlignment);
        
        cout << "How many Hit Points does " << Player1.name << " have?" << endl;
        cin >> newPlayerHitPoints;
        
        Player1.setHitPoints(newPlayerHitPoints);
        
        cout << "How much strength does " << Player1.name << " have?" << endl;
        cin >> newPlayerStrength;
        
        Player1.setStrength(newPlayerStrength);
        
        cout << "How much intelligence does " << Player1.name << " have?" << endl;
        cin >> newPlayerIntelligence;
        
        Player1.setIntelligence(newPlayerIntelligence);
        
        cout << "How much wisdom does " << Player1.name << " have?" << endl;
        cin >> newPlayerWisdom;
        
        Player1.setWisdom(newPlayerWisdom);
        
        cout << "How much Dexterity does " << Player1.name << " have?" << endl;
        cin >> newPlayerDexterity;
        
        Player1.setDexterity(newPlayerDexterity);
        
        cout << "How much Constitution does " << Player1.name << " have?" << endl;
        cin >> newPlayerConstitution;
        
        Player1.setConstitution(newPlayerConstitution);
        
        cout << "How much Charisma does " << Player1.name << " have?" << endl;
        cin >> newPlayerCharisma;
        
        Player1.setCharisma(newPlayerCharisma);
        Player1.stats();
    }
    
    //Getters for the full attribute list
    void stats (void){
        cout << "Your player's name is " << name << endl;
        cout << "They are a/an " << race << endl;
        cout << "They identify as " << gender << endl;
        cout << "Their alignment is " << alignment << endl;
        cout << "They have a health of " << hitPoints << " points." << endl;
        cout << "They have a strength of " << strength << endl;
        cout << "They have intelligence of " << intelligence << endl;
        cout << "They have wisdom of " << wisdom << endl;
        cout << "They have dexterity of " << dexterity << endl;
        cout << "Their constitution is " << constitution << endl;
        cout << "Their charisma is " << strength << endl;
        
    }

    /*void Print(ostream& fout){
    //ofstream of("myfile.txt", std::ios_base::app);

        fout << "Your player's name is " << name << endl;
        fout << "They are a/an " << race << endl;
        fout << "They identify as " << gender << endl;
        fout << "Their alignment is " << alignment << endl;
        fout << "They have a health of " << hitPoints << " points." << endl;
        fout << "They have a strength of " << strength << endl;
        fout << "They have intelligence of " << intelligence << endl;
        fout << "They have wisdom of " << wisdom << endl;
        fout << "They have dexterity of " << dexterity << endl;
        fout << "Their constitution is " << constitution << endl;
        fout << "Their charisma is " << strength << endl;
    }*/
    
};

#endif /* defined(__Charater_Tome_Storer__Player_Class__) */

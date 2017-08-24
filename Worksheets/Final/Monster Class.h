

#ifndef Charater_Tome_Storer_Monster_Class_h
#define Charater_Tome_Storer_Monster_Class_h

#include <stdio.h>
#include <string>
using namespace std;

//Create Class for Monster
class Monster {
    public:
        //Create containers for each attribute
        string name;
        string type;
        string size;
        string alignment;
        int hitPoints;
        int strength;
        int intelligence;
        int wisdom;
        int dexterity;
        int constitution;
        int charisma;
    
    //Setters for each attribute
    void setName(string newName){
        name = newName;
    }
    void setType(string newType){
        type = newType;
    }
    void setSize(string newSize){
        size = newSize;
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
// Make new monster function
    void makeNewMonster(void){
        string newMonsterName;
        string newMonsterType;
        string newMonsterSize;
        string newMonsterAlignment;
        int newMonsterHitPoints;
        int newMonsterStrength;
        int newMonsterIntelligence;
        int newMonsterWisdom;
        int newMonsterDexterity;
        int newMonsterConstitution;
        int newMonsterCharisma;
        
        //Prompts for user to fill in attributes in main function
        cout << "What is your Monster's name?" << endl;
        cin >> newMonsterName;
        
        Monster Monster1;
        
        Monster1.setName(newMonsterName);
        
        cout << "What is " << Monster1.name << "'s type?" << endl;
        cin >> newMonsterType;
        
        Monster1.setType(newMonsterType);
        
        cout << "What is " << Monster1.name <<"'s size?" << endl;
        cin >> newMonsterSize;
        
        Monster1.setSize(newMonsterSize);
        
        cout << "What is " << Monster1.name <<"'s alignment?" << endl;
        cin >> newMonsterAlignment;
        
        Monster1.setAlignment(newMonsterAlignment);
        
        cout << "How many Hit Points does " << Monster1.name << " have?" << endl;
        cin >> newMonsterHitPoints;
        
        Monster1.setHitPoints(newMonsterHitPoints);
        
        cout << "How much strength does " << Monster1.name << " have?" << endl;
        cin >> newMonsterStrength;
        
        Monster1.setStrength(newMonsterStrength);
        
        cout << "How much intelligence does " << Monster1.name << " have?" << endl;
        cin >> newMonsterIntelligence;
        
        Monster1.setIntelligence(newMonsterIntelligence);
        
        cout << "How much wisdom does " << Monster1.name << " have?" << endl;
        cin >> newMonsterWisdom;
        
        Monster1.setWisdom(newMonsterWisdom);
        
        cout << "How much Dexterity does " << Monster1.name << " have?" << endl;
        cin >> newMonsterDexterity;
        
        Monster1.setDexterity(newMonsterDexterity);
        
        cout << "How much Constitution does " << Monster1.name << " have?" << endl;
        cin >> newMonsterConstitution;
        
        Monster1.setConstitution(newMonsterConstitution);
        
        cout << "How much Charisma does " << Monster1.name << " have?" << endl;
        cin >> newMonsterCharisma;
        
        Monster1.setCharisma(newMonsterCharisma);
        
        Monster1.stats();
        
    }
//Get all Stats Function
    void stats (void){
        cout << "Your monster's name is " << name << endl;
        cout << "They are a/an " << type << endl;
        cout << "They are " << size << endl;
        cout << "Their alignment is " << alignment << endl;
        cout << "They have a health of " << hitPoints << " points." << endl;
        cout << "They have a strength of " << strength << endl;
        cout << "They have intelligence of " << intelligence << endl;
        cout << "They have wisdom of " << wisdom << endl;
        cout << "They have dexterity of " << dexterity << endl;
        cout << "Their constitution is " << constitution << endl;
        cout << "Their charisma is " << strength << endl;
        
    }
    
};

#endif

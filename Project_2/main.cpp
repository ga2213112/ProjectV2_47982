/* 
 * File: Project_1:_A_Night_Of_Trials
 * Author: Guillermo Acuna 
 * Purpose: To make a text based role playing game
 * Created on October 12, 2013, 4:48 PM
 */

//Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants: none


//Global Variables

//Function Prototypes
void game();
void records();
void main_ttl();
float fihtstr(float []&,float []&);//Main fighting structure
float atkstr(float []&,float []&);//Attack structure
float defstr(float []&,float []&);//Defense structure

//Execution begins Here
int main(int argc, char** argv) 
{
   //Declare Variables, initialize random number for fighting structures
    srand(static_cast<unsigned int>(time(0)));
    unsigned short choice1;//user choice for game menu
    
   //Output Main title
       main_ttl();
       
    do
    {
    //Output main menu
    cout<<" \n";
    cout<<"           MENU           \n";
    cout<<"        1)Play the Game    \n";
    cout<<"        2)Winner Records    \n";
    cout<<"        3)Exit the Game      \n";
    cout<<"Please enter your choice: ";
    cin>>choice1;
    
    switch(choice1)
    {
        case 1:
        {
            game();
            break;
        }
        
        case 2:
        {
            records();
            break;
        }
        
        case 3:
        {
            break;
        }
        
        default:
        {
            cout<<"Wrong choice!!\n";
            break;
        }
    }

    }while(choice1!=3||choice1!=3);
    return 0;
}

void main_ttl()
{
    cout<<" \n";
    cout<<"********************************************************************\n";
    cout<<" \n";
    cout<<"      #             #      #    ###    ###     #    #    #####       \n";
    cout<<"     # #            # #    #     #    #   #    #    #      #         \n";
    cout<<"    #   #           #  #   #     #    # #      ######      #         \n";
    cout<<"   # ### #          #   #  #     #    #   #    #    #      #         \n";
    cout<<"  #       #         #    # #    ###    ###     #    #      #         \n";
    cout<<" \n";
    cout<<"    ###    ##        #####    ###    ###      #     #     ###        \n";
    cout<<"   #   #  #  #         #     #   #    #      # #    #    #   #       \n";
    cout<<"   # # # ###           #     # ##     #     #   #   #    #           \n";
    cout<<"    ###   #            #     #   #    #    # ### #  #     ###        \n";
    cout<<"          #            #     #    #  ###  #       # ###  #   #       \n";
    cout<<"                                                          ###        \n";
    cout<<" \n";
    cout<<"********************************************************************\n";
    cout<<"Created by Guillermo Acuna\n";
}

//************************************************************************************
//This is the main game programming
void game()
{
  //Declare variables for main game
   float statPl[3]={0,0,0},//Player stats
         statEn[3]={0,0,0};//Enemy stats
   char choiceC,//user's choice of character type
        choiceG;//in game choices for paths
           
   //User chooses character type
   cout<<"What fighting style suits you most, adventurer?\n";
   cout<<"If you are a brawling, brave, and powerful Attacker, press A. "
       <<"Attackers don't have much blocking, or parrying sense."
       <<"They make up for this with extremely effective and powerful strikes.\n";
   cout<<"If you prefer patient, controlled, and effective Defender tactics, press D. "
       <<"Defenders block and parry beyond all, and strike back with conservative attacks.\n";
   cout<<"For those who are of Balanced mind and body, press B. "
       <<"Balanced fighters battle with no preference, adapting whenever possible.\n";
   
   do//looping to unsure character choice
   {
     cout<<"Choose A for Attacker, D for Defender, and B for Balanced: ";
     cin>>choiceC;
   
     switch(choiceC)//This sets starting stats for chosen character type
     {
         case 'a'://for attackers
         case 'A':
         {
             statPl[1]+=(15.0+15.0*1.2e-1f);
             statPl[2]+=6.0;
             statPl[0]+=9.0;
             
             break;
         }
         
         case 'd'://for defenders
         case 'D':
         {
             statPl[1]+=6.0;
             statPl[2]+=(12.0+12.0*1.2e-1f);
             statPl[0]+=12.0;
            
             break;
         }
         
         case 'b':
         case 'B':
         {
             statPl[1]+=11.0;
             statPl[2]+=11.0;
             statPl[0]+=11.0;
             
             break;
         }
         
         default:
         {
             cout<<"Incorrect choice, adventurer!! Which class of fighter are you!?\n";
             
             break;
         }
     }
     
   }while(statPl[1]==0&&statPl[2]==0);
   
   //Opening scene
   cout<<" \n";
   cout<<"Awaken!!\n";
   cout<<" \n";
   cout<<"The high pitched sound of birds chirping, and a fresh breeze greet you "
       <<"as you slowly grow conscious. Clearly, you are not in your bed, or "
       <<"home for that matter. You sit up and look around. You see that you are in a"
       <<" small clearing, surrounded by dense forest except for a cave entrance to your "
       <<"right. Interestingly, the trees of the forest are so close together, that"
       <<" it doesn't fully make sense how one can enter the clearing except through the cave. "
       <<"As you look toward the cave, you notice two things. First, that the entrance was pitch "
       <<"black and it seemed that none of the daylight coming into the clearing would even bend the "
       <<" bulging darkness of the cave. Secondly, there was a glimmering, right in front of the entrance.\n";
   cout<<" \n";
   cout<<"Having no other action, you approach the cave, and the glimmering object. "
       <<"You see the shining is coming from a short sword on the ground. A relatively "
       <<"unremarkable sword, yet you have a strong urge to grab it. As you feel yourself "
       <<"reach out and grab the handle, the sounds suddenly stop. The clearing goes as "
       <<"silent as death. You look over your shoulder, as see that the trees seem to "
       <<"closing in on you, even as your mind says that it is nonsense. You grip the sword "
       <<"tighter. You feel not fear, but urgency. You turn, and cannot resist the powerful "
       <<"impulse to run into the cave. The darkness, you saw, receded as you entered, "
       <<"as if you were your own light source. Continuing your,not so controlled run, "
       <<"you come up to a gigantic fork. Each of the two paths look like bigger caves then the"
       <<" one you are already in. You notice a plaque stuck in the dirt between the two "
       <<"entrances. You look closer, and see that it reads: 'Choice. Mans greatest love, "
       <<"yet greatest downfall...'. The obviousness dawns on you...\n";
   
   //player's first path choice
   do
   {
     cout<<"    L for left, or R for right. Choose!!: ";
     cin>>choiceG;
     
     switch(choiceG)
     {
         //Attack based enemy,reward: long sword
         case 'L':
         {   
             cout<<"You follow a strange feeling in your gut, and take the left path. "
                 <<"You walk along a widening path, listening to stillness. You slowly start hearing "
                 <<"a metallic, dragging sound. The path opens up, and you find yourself in a flat round cavern."
                 <<"Your eyes, however, are glued to the dead looking warrior in front of you holding a long-sword."
                 <<"You lift up your short sword before you, knowing exactly what is coming...\n";
             //Enemy stat set
             statEn[1]+=12.0;
             statEn[2]+=8.0;
             statEn[0]+=9.0;
             
             statPl[0]=fihtstr(statPl,statEn);
             
             //reward for battle
             if (hlthP>0)
             {
                 cout<<"The creature falls, and you stand. Surprised, but alive. You defeated the "
                     <<"monster with nothing but a short sword....but not for long. "
                     <<"You walk over to the corpse, and grab the glimmering long sword. "
                     <<"This weapon is much better then yours. You sheathe it, and continue forward.\n";
                 hlthP+=5;//after battle healing
                 
                 atkP+=(atkP*5e-2f);//Long sword augmentation
             }
             if (hlthP<=0)
             {
                 cout<<"Your body slumps, as pain overwhelms your senses from your wounds."
                     <<" You fall, and see the enemy raise its weapon to deliver the final blow...\n";
                 
                 return;
             }
             
             break;
         }
         
         //Defense based enemy,reward: shield
         case 'R':
         {
             cout<<"Your instincts push you to walk the right path, and you hurry without looking back."
                 <<" The path narrows slightly as you walk, until you reach what looks like a round, "
                 <<"wooden plaque. Then, suddenly it moves towards you, and you see that its a shield "
                 <<"with a rotting warrior behind it. You swallow your revulsion, and lift up your sword...\n";
             
             atkE+=8.0;
             defE+=11.0;
             hlthE+=11.0;
             
             hlthP=fihtstr(atkP,defP,hlthP,atkE,defE,hlthE);
             
             //reward for 1st battle
             if (hlthP>0)
             {
                 cout<<"You feel a sense of relief as your enemy slumps forward, and falls. "
                     <<"You survived a battle with nothing but a short sword. You smile, as you "
                     <<"realize that the shield still works. You walk to the fallen enemy, grab "
                     <<"your new shield, and continue your path.\n";
                 hlthP+=5;//after battle healing
                 
                 defP+=(defP*5e-2f);//Shield augmentation
             }
             if (hlthP<=0)
             {
                 cout<<"Your body slumps, as pain overwhelms your senses from your wounds."
                     <<" You fall, and see the enemy raise its weapon to deliver the final blow...\n";
                 
                 return;
             }
             
             break;
         }
         
         default:
         {
             cout<<"Adventurer!! This is no time for games!!\n";
             break;
         }
     }
   }while(choiceG!='R'&&choiceG!='L'); 
   
   //Act 2
   cout<<"After your first encounter with that dead creature, your desire to leave this "
       <<"strange realm is renewed. You continue along your chosen path, and notice a light in the distance. "
       <<"Happiness fills you as you run towards it. Is this the end of this dark cave? The light gives way, and"
       <<" you find yourself in a rocky clearing facing a bridge. The wind blows, and the light is from a huge, "
       <<"pale moon. It seemed to glow and pulse in the night sky. You also notice no stars in the sky. "
       <<"As you approach the bridge, you feel a strong force pushes you back. You stand, shocked too see "
       <<"the very shadows of the cave extending around to your front. They lift up and melt, revealing "
       <<"another monstrous figure. This dead warrior was noble looking. Dressed in fine, if tattered "
       <<"clothing. You see it draw a sword, and a dagger. Its arms are covered in thick metallic gloves, with a blade "
       <<" attached to the right arm. Already sensing the coming calamity, you draw your weapon and face it....\n";
   
   //second enemy stat set
   atkE=12.0;
   defE=12.0;
   hlthE=12.0;

   hlthP=fihtstr(atkP,defP,hlthP,atkE,defE,hlthE);
   
   //reward for 2nd battle
   if (hlthP>0)
   {
     cout<<"The dead, bladed man falls back and drops as you push forward with swings of your weapon. " 
         <<"Feeling a savage rush within, you strike a mighty final blow and the enemy is no more. The "
         <<"shadows recede into the cave once more, leaving you standing in the night facing the bridge. "
         <<"You look at the corpse, and it's armament, wondering what prize to claim...\n";
     
     hlthP+=5.0;//health boost
     
     do
     {
        cout<<"Choose A for the arm bladed bucklers, or D for the dagger: ";
        cin>>choiceG;
     
        switch(choiceG)
        {
            case 'A'://arm blade and buckler boost
            {
               atkP+=(atkP*5e-2f);
               defP+=(defP*1e-1f);
               break;
            }
            
            case 'D'://Dagger boost
            {
               atkP+=(atkP*1e-1f);
               defP+=(defP*5e-2f);
               break;
            }
            default:{
                cout<<"Adventurer!! This is no time for games!!\n";
                break;
            }
        }
     
     }while(choiceG!='A'&&choiceG!='D');
   }
   if (hlthP<=0)
   {
        cout<<"Your body slumps, as pain overwhelms your senses from your wounds."
            <<" You fall, and see the enemy raise its weapon to deliver the final blow...\n";
                 
      return;
   }
   
   //Act Three
   cout<<"Having defeated the enemy and claimed a boon, you continue forward. "
       <<"Something in your mind starts changing, as you look over the edge of the cliff. "
       <<"You start feeling strangely comfortable with this adventure. You make your way across "
       <<"the bridge, not even flinching at how much it creaked. Time starts feeling weird around you, and"
       <<" you notice the moon is pulsing into a huge image in the sky, the rapidly into a pinpoint of light. "
       <<"Under your feet, the bridge rises up, then drops making you fall hard and hold on. Then, suddenly "
       <<"it flings upward, and you fly off. Up into the air, you feel a strange panicky feeling as you fall."
       <<"You notice the moon is expanding once again. It gets huger until its all you see except for a black shape."
       <<"You land on the strange, pale surface. You feel no jolt, or pain from landing. You rise up, looking in "
       <<"front of you. You see what the black shape is. A massive man standing in front of you. You see a huge"
       <<" war hammer at his side. A great, horned helmet covers his face. He is shirtless, and on his chest"
       <<" in fiery, red letter carved in his flesh was the word: MINOTAUR.\n";
   cout<<"You feel the rush building in you again, and this time no fear shines in your eyes. The Minotaur "
       <<"lets off a mighty growl from his helmet, and charges at you, hammer raised. You grip your weapons,"
       <<"take a breath, and charge in letting loose your own growl...\n";
   
   //Third enemy stat set
   atkE=14.0;
   defE=14.0;
   hlthE=16.0;
   
   hlthP=fihtstr(atkP,defP,hlthP,atkE,defE,hlthE);
   
   //reward for fight three
   if (hlthP>0)
   {
     cout<<"You howl to the skies, and make a final charge in. The wounded, and dying Minotaur launches "
         <<"a desperation blow. You dodge under, and strike hard upward. The Minotaur falls. "
         <<" His head rolls away before you, and you realize you've never felt more alive. Has it been one night;"
         <<" the cave isn't far away, but you feel different since then. You walk to the Minotaurs falling body, "
         <<"already knowing what prize you wanna reach for...\n";
     hlthP+=5.0;//health boost
     
     do
     {
        cout<<"Choose G for the Great Hammer, or H for the Horned Helmet: ";
        cin>>choiceG;
     
        switch(choiceG)
        {
            case 'G'://Great Hammer boost
            {
               atkP+=(atkP*15e-2f);
               break;
            }
            
            case 'H'://Horned Helmet boost
            {
               defP+=(defP*15e-2f);
               break;
            }
            default:{
                cout<<"Adventurer!! This is no time for games!!\n";
                break;
            }
        }
     
     }while(choiceG!='G'&&choiceG!='H');
   }
   if (hlthP<=0)
   {
        cout<<"Your body slumps, as pain overwhelms your senses from your wounds."
            <<" You fall, and see the enemy raise its weapon to deliver the final blow...\n";
                 
      return;
   }
   
   //Act 4
   cout<<"You stand up, your boon in hand. You feel like a different person. You look around at the "
       <<"pale surface, and at the starless sky were you see the earth. You notice its smiling through a "
       <<"giant fissure on the surface. Truly, this land is insane, you think. You start walking "
       <<"knowing it matters not where you go. You travel, after a while the pale flatness gives way to mountains. "
       <<"Still, you walk, waiting. You see a pinpoint of light in the distant hills, and make your way towards it. "
       <<"You walk for what seems like long hours, and cannot shake the feeling that some goal drives you now. "
       <<"Suddenly, you notice the light is right in front of your face. An old mans face is staring at you. You "
       <<"draw your weapon, but the man says 'Save that for what's about to come. I'm here to make "
       <<"sure you have a fighting chance.' At the old man's feet, you see two chests. The old man looks at you. "
       <<"He raises and eyebrow, and says 'Well? Left or right?'. You look at the chests. They both have emblems with words."
       <<" The one on the left reads 'For the Fighter', and the right reads 'For the Protecter'\n";
   
   do{
   cout<<" Press L for left and R for right, adventurer: ";
   cin>>choiceG;
   
   switch(choiceG)//Final reward choice
   {
       case 'L'://attack boost, spike leather armor
       {
           cout<<"You step confidently up to the left chest. The fighter makes sense to you. It opens before you and lightweight,"
               <<" leather armor with numerous spikes float out and assembles itself on your body. "
               <<"You feel its energy flow through you, and you smile.\n";
           
           atkP+=(atkP*15e-2f);
           defP+=(defP*5e-2f);
           break;
       }
       
       case 'R'://defense boost, steel chainmail with plating
       {
           cout<<"The chest on the right calls to you. The Protecter chest opens and shining steel chainmail"
               <<" flies up. Plating circulates it as it assembles to your body. It fills you with its energy, "
               <<"and you smile.\n";
           
           atkP+=(atkP*5e-2f);
           defP+=(defP*15e-2f);
           break;
       }
   }
  }while(choiceG!='L'&&choiceG!='R');
  
  //Final Act
  cout<<"The old man smiles also, after you choose. He says to to you 'Good luck...', and vanishes. "
      <<"You look up because you hear a burning sound from the sky. You see a meteor falling towards your area"
      <<", and you know there is no time to run. It lands in front of you and explodes with deafening sound, and"
      <<" blinding light. The shock wave hits you, but doesn't push you. Dust and hot air hit your face,  but"
      <<" doesn't burn or blind you. In the cloudy chaos, you see a massive figure. The explosion clears, and you "
      <<"hold tight your weapons. The figure steps out. A gigantic bear like man looks at you. "
      <<"He is armored, and carrying the scythe of death. His eyes burn with white light, and his hair is a fiery red."
      <<"In the deepest pit of yourself, you know he aims to kill you. You ready your weapon. The giant howls "
      <<"with such fury that you almost falter. He looks right at you and in a deep voice, he commands 'Take Arms!!'."
      <<" You grow angry, and all fear ceases. You ready your weapon once again, and charge in...\n";
  
  //boss stat set
  atkE=17.55;
  defE=15.781;
  hlthE=18;
  
  hlthP=fihtstr(atkP,defP,hlthP,atkE,defE,hlthE);
  
  if (hlthP>0)
  {
      cout<<"You make a final, victorious jump up, and plunge your weapon into the heart "
          <<"of the great warrior. He howls, and bursts into smoke. You're caught completely by surprise, and"
          <<" get enveloped in the smoke. The world swirls, and you see yourself floating. You look down, and see the "
          <<"the dead pale surface start changing. It bursts with life as trees shoot up and grass grows rampant"
          <<" in what seems like seconds. You fly farther, faster. The pale world, and the planet become nothing in the distance."
          <<" In what seems like ages, you approach a dark, yet bright light. Your senses make no sense, and finally,"
          <<" you fall. You fall forever., and...\n";
      
      cout<<"Awaken!!\n";
      cout<<"You hear birds chirping, and feel a breeze...\n";
      
      //Winners enter name into record book
      string userNme;//user name
      ofstream outNme;
      
      cout<<"Congrats!!! You beat the game, please enter name for records. ";
      cin>>userNme;
      
      outNme.open("Winners.txt");
      outNme<<userNme;
      outNme.close();
      return;
            
  }
  if (hlthP<=0)
  {
      cout<<"Your body slumps, as pain overwhelms your senses from your wounds."
          <<" You fall, and see the enemy raise its weapon to deliver the final blow...\n";
                 
      return;
  }
  
}
//end of game programming
//***********************************************************************************

void records()//creates a record of winners
{
    //Declare Variables
    ifstream inNme;//used for outputting records to screen
    string userNme;
    
    cout<<"!!!!WINNERS!!!!\n";
    inNme.open("Winners.txt");//open records file
    while(inNme>>userNme)
    {
        cout<<userNme<<endl;
    }
    inNme.close();
}

//****************************************************************************
//After this point,functions are all battle functions of game
float fihtstr(float &sP[],float &sE[])//Main fight structure
{
    char choiceB;//user choice to attack or defend
    do
    {
      //prompt user to attack or defend
        cout<<"Do you want to attack fully, or go into a defensive stance?\n";
        cout<<"Press A to attack, and D to defend: ";
        cin>>choiceB;
       
        switch(choiceB)
        {
            case 'a':
            case 'A':
            {
                cout<<"Your grip your weapon tight, and ready yourself. You lunge"
                    <<" forward and strike ruthlessly. The enemy growls, and charges in.\n";
                
                sP[0]=atkstr(sP,sE);
                //hE=hlthET1;
                break;
            }
            
            case 'd':
            case 'D':
            {
                cout<<"You draw a deep breath, and prepare your guard. You let the enemy lunge"
                    <<" in, and defend yourself.\n";
                
                sP[0]=defstr(sP,sE);
                //hE=hlthET2;
                break;
            }
            
            default:{
                cout<<"What kind of choice is that, adventurer!?!?\n";
                break;
            }
        }
        
    }while(sP[0]>0&&sE[0]>0);
    
    return sP[0];
}

float atkstr(float &sP[],float &sE[])
{
    float dmgDne;//damage dealt, used for calculations
    
    dmgDne=sP[1]-sE[2];
    
    if (dmgDne<0)
    {
        sP[0]+=dmgDne;
        cout<<"The enemy counters, and hits you hard.\n";
    }
    if (dmgDne>0)
    {
        sE[0]-=dmgDne;
        cout<<"Your blow lands, damaging the enemy!\n";
        sP[0]+=5;
    }
    if (dmgDne==0)
    {
        cout<<"You and the enemy cross blades, neither defeating the other!!\n";
    }
    
    dmgDne=sE[1]-sP[2];
    
    if (dmgDne<0)
    {
       sE[0]+=dmgDne;
       cout<<"The enemy attempts to hurt you. You defend, parry, and counter strike.\n";
    }
    if (dmgDne>0)
    {
        sP[0]-=dmgDne;
        cout<<"The enemy strikes back, landing a clean blow also.\n";
    }
    if (dmgDne==0)
    {
        cout<<"The enemy throws a blow, which you meet and block.\n";
    }
 
    //hlthET1=hE;
    
    return sP[0];
}

float defstr(float &sP[],float &sE[])
{
    float dmgDne;//damage dealt, used for calculations
    
    dP+=5;//strengthens defense
    
    dmgDne=aE-dP;
    
    if (dmgDne<0)
    {
       hE+=dmgDne;
       cout<<"The enemy attacked, but your superior defense gave you a counterattack!\n";
    }
    if (dmgDne>0)
    {
        hP-=dmgDne;
        cout<<"The enemy strikes, hitting you back with painful ease.\n";
    }
    if (dmgDne==0)
    {
        cout<<"You parry the enemies attack, and strike back. The enemy reacts fast enough to "
            <<"block you.\n";
    }
    
    //hlthET2=hE;
 
    return sP[0];
}


#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
    string location="village";
    string input;
    Graph map;
    Bag bag;
    cout<<"Welcome to the Dangerous World of Yharme"<<endl;
    cout<<"****************************************"<<endl;
    cout<<"After walking for a few days, you finally arrive in the small town of Lasew"<<endl;
    cout<<"A messenger runs into you and quickly gets back on his feet"<<endl;
    cout<<"\"sorry 'bout that friend. You don't look familiar. You must be new in town."<<endl;
    cout<<"Here take this!\""<<endl;
    cout<<"You've received a map from the messenger"<<endl;
    cout<<"\"I'd be careful wondering around here. They say a dragon leaves on the mountain!"<<endl;
    cout<<"The merchant says he has a sword to kill it, but he won't kill it himself"<<endl;
    cout<<"and hes asking way to much for it! You could talk to him if you want!"<<endl;
    cout<<"See you later!\""<<endl;
    cout<<"Looking around you see the merchant, some little shacks, and three roads leading away."<<endl;
    while(input!="q"){
        while(location=="village"){
            cout<<"**************************"<<endl;
            cout<<"You're at the village"<<endl;
            cout<<"What would you like to do?"<<endl;
            input="";
            while(input==""){
                getline(cin, input);
            }
            if(input=="look"){
                cout<<"Looking around you see the merchant, some little shacks, and three roads leading away."<<endl;
            }
            if(input=="look at map"){
                map.displayEdges(location);
            }
            if(input=="look in bag"){
                bag.displayBag();
            }
            if(input=="talk" || input=="talk to merchant"){
                cout<<"\"Hello traveler, I have a few items for sale if you're interested:"<<endl;
                cout<<"Potion       - 20g"<<endl;
                cout<<"Metal Shield - 150g"<<endl;
                cout<<"Magic Sword  - 1,000,000g\""<<endl;
                while(input!="leave"){
                    getline(cin,input);
                    if(input=="buy potion"){
                        cout<<"\"You don't look like you have any gold\""<<endl;
                    }
                    if(input=="buy metal shield"){
                        cout<<"\"You don't look like you have any gold\""<<endl;
                    }
                    if(input=="buy magic sword"){
                        cout<<"\"You don't look like you have 1,000,000 gold! HAHAHA"<<endl;
                        cout<<"But I am willing to trade for it."<<endl;
                        cout<<"I'm looking for a golden helmet. Bring me that and the sword is yours!\""<<endl;
                    }
                    if(input=="q"){
                        break;
                    }
                }
            }
            if(input=="trade"){
                bag.trade("golden helmet","magic sword");
            }
            if(input=="go north"){
                location="blacksmith";
            }
            if(input=="go south"){
                location="witch";
            }
            if(input=="go east"){
                location="resturant";
            }
            if(input=="q"){
                break;
            }
        }
        while(location=="blacksmith"){
            cout<<"***************************************"<<endl;
            cout<<"You're at the blacksmiths house"<<endl;
            cout<<"What would you like to do?"<<endl;
            input="go north";
            while(input=="go north"){
                getline(cin, input);
            }
            if(input=="look in bag"){
                bag.displayBag();
            }
            if(input=="look"){
                cout<<"You see a large, bearded man sitting on a stump outside a large cabin"<<endl;
            }
            if(input=="talk"){
                cout<<"\"Hello young traveler! I'm the only blacksmith for days around!"<<endl;
                cout<<"I'm also the BEST! Or so my mom tells me..."<<endl;
                cout<<"But alas with all my skill I can't seem to recreate an elvish bow"<<endl;
                cout<<"Elves haven't been here for decades and their bows were the finest"<<endl;
                cout<<"If you can find me one, I'll give you my most powerful BattleAxe!"<<endl;
                cout<<"AGUAHGUAHGUAH!!\""<<endl;
            }
            if(input=="look at map"){
                map.displayEdges(location);
            }
            if(input=="trade"){
                bag.trade("elvish bow","battleaxe");
            }
            if(input=="go south"){
                location="village";
            }
            if(input=="go east"){
                location="woods";
            }
            if(input=="q"){
                break;
            }
        }
        while(location=="resturant"){
            cout<<"**************************"<<endl;
            cout<<"You're at a small eatery"<<endl;
            cout<<"What would you like to do?"<<endl;
            input="";
            while(input==""){
                getline(cin,input);
            }
            if(input=="look in bag"){
                bag.displayBag();
            }
            if(input=="look"){
                cout<<"You see a man searching the grass"<<endl;
            }
            if(input=="talk"){
                cout<<"\"Hello traveler, I'm the chef here,"<<endl;
                cout<<"unfortunetly we're closed right now."<<endl;
                cout<<"I just want to find one more rock for my collection"<<endl;
                cout<<"If you could find me one, I'd give you a spare laddle!\""<<endl;
            }
            if(input=="look at map"){
                map.displayEdges(location);
            }
            if(input=="trade"){
                bag.trade("shiny rock","laddle");
            }
            if(input=="go west"){
                location="village";
            }
            if(input=="go north"){
                location="woods";
            }
            if(input=="go east"){
                location="mountain";
            }
            if(input=="go south"){
                location="bridge";
            }
            if(input=="q"){
                break;
            }
        }
        while(location=="witch"){
            cout<<"**************************"<<endl;
            cout<<"You're at a witch's hut"<<endl;
            cout<<"What would you like to do?"<<endl;
            input="";
            while(input==""){
                getline(cin,input);
            }
            if(input=="look in bag"){
                bag.displayBag();
            }
            if (input=="look"){
                cout<<"You see a witch sitting by an empty cauldron"<<endl;
            }
            if (input=="talk"){
                cout<<"\"Hello young traveler, would you like some mushroom soup?"<<endl;
                cout<<"Don't worry, it will only cost you one... laddle!"<<endl;
                cout<<"You see I've recently lost mine and can't make any more soup."<<endl;
                cout<<"Bring me a laddle and you can have as much soup as you can eat!"<<endl;
                cout<<"I promise it won't turn you into a frog! Hehehehe ho.\""<<endl;
            }
            if(input=="look at map"){
                map.displayEdges(location);
            }
            if(input=="trade"){
                bag.trade("laddle","mushroom soup");
            }
            if(input=="go north"){
                location="village";
            }
            if(input=="go east"){
                location="bridge";
            }
            if(input=="q"){
                break;
            }
        }
        while(location=="woods"){
            cout<<"**************************"<<endl;
            cout<<"You're in the Dark Woods"<<endl;
            cout<<"What would you like to do?"<<endl;
            input="";
            while(input==""){
                getline(cin,input);
            }
            if(input=="look in bag"){
                bag.displayBag();
            }
            if(input=="look"){
                cout<<"You see something shiny near a large tree"<<endl;
            }
            if(input=="pick up"){
                bag.add("shiny rock");
                cout<<"You picked up a shiny rock. Maybe its worth something"<<endl;
            }
            if(input=="look at map"){
                map.displayEdges(location);
            }
            if(input=="go west"){
                location="blacksmith";
            }
            if(input=="go south"){
                location="resturant";
            }
            if(input=="go southeast"){
                location="mountain";
            }
            if(input=="q"){
                break;
            }
        }
        while(location=="bridge"){
            cout<<"*******************"<<endl;
            cout<<"You're at the bridge over a large cravas"<<endl;
            cout<<"What would you like to do?"<<endl;
            input="";
            while(input==""){
                getline(cin, input);
            }
            if(input=="look in bag"){
                bag.displayBag();
            }
            if(input=="look"){
                cout<<"You see a shady man standing on the middle of the bridge"<<endl;
            }
            if(input=="talk"){
                cout<<"\"You looking to buy something? I've got a few things."<<endl;
                cout<<"Mace          - 145g"<<endl;
                cout<<"Large stick   - 500g"<<endl;
                cout<<"Golden Helmet - 1,000,000g\""<<endl;
                input=="";
                while(input==""){
                    getline(cin,input);
                }
                if(input=="buy golden helmet"){
                    cout<<"\"I see you have an interest in my helmet"<<endl;
                    cout<<"Look how authentic and pure that gold is"<<endl;
                    cout<<"Take my word for it, its real gold! Don't doubt me!"<<endl;
                    cout<<"Too bad you have no money!"<<endl;
                    cout<<"I'll make you a deal; bring me a axe to defend myself,"<<endl;
                    cout<<"and the helmet is your's!\""<<endl;
                }
            }
            if(input=="look at map"){
                map.displayEdges(location);
            }
            if(input=="trade"){
                bag.trade("battleaxe","golden helmet");
            }
            if(input=="go north"){
                location="resturant";
            }
            if(input=="go west"){
                location="witch";
            }
            if(input=="q"){
                break;
            }
        }
        while(location=="mountain"){
            cout<<"********************"<<endl;
            cout<<"You're at the foot of a large mountain, home of the dragon!"<<endl;
            cout<<"What would you like to do?"<<endl;
            input="";
            while(input==""){
                getline(cin,input);
            }
            if(input=="look in bag"){
                bag.displayBag();
            }
            if(input=="look"){
                cout<<"You see a little man scavenging around"<<endl;
            }
            if(input=="talk"){
                cout<<"\"Hello! I've been searching all day for treasure and trinkets!"<<endl;
                cout<<"But I've forgotten to bring food and I'm so hungry!"<<endl;
                cout<<"I did find this fancy looking bow! You can have it for some food!\""<<endl;
            }
            if(input=="look at map"){
                map.displayEdges(location);
            }
            if(input=="trade"){
                bag.trade("mushroom soup","elvish bow");
            }
            if(input=="go north"){
                location="dragonLair";
            }
            if(input=="go west"){
                location="resturant";
            }
            if(input=="go northwest"){
                location="woods";
            }
            if(input=="q"){
                break;
            }
        }
        while(location=="dragonLair"){
            cout<<"***********************"<<endl;
            cout<<"You've finally arrived at the Dragon's Lair!"<<endl;
            cout<<"What would you like to do?"<<endl;
            input="";
            while(input==""){
                getline(cin,input);
            }
            if(input=="look in bag"){
                bag.displayBag();
            }
            if(input=="look"){
                cout<<"You see the mighty dragon slumbering at the far end of the lair"<<endl;
            }
            if(input=="fight"){
                if(bag.search("magic sword")){
                    cout<<"You raise the magic sword high above your head!"<<endl;
                    cout<<"With a mighty swing, you aim the blade for the beast's neck!"<<endl;
                    cout<<"BUT! The sword was heavier than you thought and you fall of balance!"<<endl;
                    cout<<"Tripping you slam the sword into the side of the cave!"<<endl;
                    cout<<"The Dragon wakes in a fright and bashes its head on the ceiling!"<<endl;
                    cout<<"He's knocked out cold with a serious concussion!"<<endl;
                    cout<<"He won't be bothering anyone every again!"<<endl;
                    cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
                    cout<<"CONGRATULATIONS! YOU WON!"<<endl;
                    cout<<"YOU ARE A MIGHTY FINE WARRIOR!"<<endl;
                    cout<<"Goodbye until next time!"<<endl;
                    return 0;
                }
                else{
                    cout<<"You attempted to fight the dragon!"<<endl;
                    cout<<"However without the magic sword you stood no chance"<<endl;
                    cout<<"The dragon awoke, took one look at you and swallowed you whole!"<<endl;
                    cout<<"You have DIED!"<<endl;
                    cout<<"******GAME OVER******"<<endl;
                    input="q";
                    break;
                }
            }
            if(input=="look at map"){
                map.displayEdges(location);
            }
            if(input=="leave" || input=="go south"){
                location="mountain";
            }
            if(input=="q"){
                break;
            }
        }
    }
    cout<<"Goodbye!"<<endl;
    return 0;
}

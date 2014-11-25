#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
system("color f1");
srand(time(0));

               int card,player,i;
               string chose;
               
               vector <int> deck(52);
               vector <int> vplayer;
               
               for (card=0; card<52; ++card)
               {
                       deck[card]=card+1;
               }
                   
               random_shuffle(deck.begin(),deck.end());

			cout<<" ~ DRAW PHASE #1 ~"<<endl;

       for (player=0; player<4; ++player)
       {
				   int lastcard=deck.size()-1;
                   cout<<"------------------------ player "<<player+1<<" ------------------------"<<endl;
                   for (card=lastcard; card>(lastcard-5); --card)
                   { 
                        if (deck[card]<=13)
                        {
								if (deck[card]==1){
									cout<<"A";
								}else if (deck[card]==11){
									cout<<"J";
								}else if (deck[card]==12){
                                    cout<<"Q";
								}else if (deck[card]==13){
                                    cout<<"K";
								}else{
									cout<<deck[card];
								}
								cout<<" <3-"<<endl;
                            	vplayer.push_back(deck[card]);
                            	deck.pop_back();
                        }else if (deck[card]<=26)
                        {
                                if (deck[card]==14){
									cout<<"A";
								}else if (deck[card]==24){
									cout<<"J";
								}else if (deck[card]==25){
                                    cout<<"Q";
								}else if (deck[card]==26){
                                    cout<<"K";
								}else{
									cout<<deck[card]-13;
								}
								cout<<" <3"<<endl;
                            	vplayer.push_back(deck[card]);
                               	deck.pop_back();
                        }else if (deck[card]<=39)
                        {
                                if (deck[card]==27){
									cout<<"A";
								}else if (deck[card]==37){
									cout<<"J";
								}else if (deck[card]==38){
                                    cout<<"Q";
								}else if (deck[card]==39){
                                    cout<<"K";
								}else{
									cout<<deck[card]-26;
								}
								cout<<" c3-"<<endl;
                            	vplayer.push_back(deck[card]);
                               	deck.pop_back();
                        }else
                        {
                            	if (deck[card]==40){
									cout<<"A";
								}else if (deck[card]==50){
									cout<<"J";
								}else if (deck[card]==51){
                                    cout<<"Q";
								}else if (deck[card]==52){
                                    cout<<"K";
								}else{
									cout<<deck[card]-39;
								}
								cout<<" <>"<<endl;
                            	vplayer.push_back(deck[card]);
                               	deck.pop_back();
                        }
                   }
               }
               
			system("pause");
			cout<<endl<<endl<<" ~ CHANGING CARD PHASE ~"<<endl;
			
      for (player=0; player<4; ++player)
      {
				cout<<"------------------------ player "<<player+1<<" ------------------------"<<endl;
				for (card=0; card<5; ++card)
				{
                    while (true)
                    {
                	         cout<<" an 8es na alla3eis to xarti "<<card+1<<" pata + (alliws - ) : ";
					         cin>>chose;
					         if ((chose=="+") || (chose=="-"))
					         {
                                              break;
                             }else{
                                              cout<<" ERROR . . . 3ANADWSE ( + / - )"<<endl;
                             }
                    }
                               
                	if (chose=="+")
                	{
						vplayer[card+(player*5)]=deck[deck.size()-1];
						deck.pop_back();
                	}
				}
				cout<<endl;
			}
			
			system("pause");
			cout<<endl<<endl<<" ~ DRAW PHASE #2 ~"<<endl;
			
			for (player=0; player<4; ++player)
            {
				cout<<"------------------------ player "<<player+1<<" ------------------------"<<endl;
				for (card=0; card<5; ++card)
				{
			        	if (vplayer[card+(player*5)]<=13)
                        {
								if (vplayer[card+(player*5)]==1){
									cout<<"A";
								}else if (vplayer[card+(player*5)]==11){
									cout<<"J";
								}else if (vplayer[card+(player*5)]==12){
                                    cout<<"Q";
								}else if (vplayer[card+(player*5)]==13){
                                    cout<<"K";
								}else{
									cout<<vplayer[card+(player*5)];
								}
								cout<<" <3-"<<endl;
                        }else if (vplayer[card+(player*5)]<=26)
                        {
                                if (vplayer[card+(player*5)]==14){
									cout<<"A";
								}else if (vplayer[card+(player*5)]==24){
									cout<<"J";
								}else if (vplayer[card+(player*5)]==25){
                                    cout<<"Q";
								}else if (vplayer[card+(player*5)]==26){
                                    cout<<"K";
								}else{
									cout<<vplayer[card+(player*5)]-13;
								}
								cout<<" <3"<<endl;
                        }else if (vplayer[card+(player*5)]<=39)
                        {
                                if (vplayer[card+(player*5)]==27){
									cout<<"A";
								}else if (vplayer[card+(player*5)]==37){
									cout<<"J";
								}else if (vplayer[card+(player*5)]==38){
                                    cout<<"Q";
								}else if (vplayer[card+(player*5)]==39){
                                    cout<<"K";
								}else{
									cout<<vplayer[card+(player*5)]-26;
								}
								cout<<" c3-"<<endl;
                        }else
                        {
                            	if (vplayer[card+(player*5)]==40){
									cout<<"A";
								}else if (vplayer[card+(player*5)]==50){
									cout<<"J";
								}else if (vplayer[card+(player*5)]==51){
                                    cout<<"Q";
								}else if (vplayer[card+(player*5)]==52){
                                    cout<<"K";
								}else{
									cout<<vplayer[card+(player*5)]-39;
								}
								cout<<" <>"<<endl;
                        }
				}
			}

system("pause");
}

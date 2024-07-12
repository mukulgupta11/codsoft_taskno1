#include<iostream>
 #include<cstdlib>
 #include<ctime>
 using namespace std;

 int main()
 { 
   
    cout<<"\n\t\t\t<------WELCOME TO NUMBER GUESSING GAME------>"<<endl;
    cout<<"\n\t\t\tyou have to guess a number between 1 and 100. you'll have limited choices based on the level you choose. good luck!"<<endl;

     while(true)
    {
        cout<<"\n\t\tEnter the difficulty level: \n";
        cout<<" 1 for easy level!\t";
        cout<<" 2 for medium level!\t";
        cout<<" 3 for difficult level!\t";
        cout<<" 0 for finish the game!\t"<<endl; 

        int difficultylevel ;
        cout<<"enter the difficultylevel :  ";
        cin>>difficultylevel;

       srand(time(0));
       int secretnumber  = 1+(rand()%100) ;  
       int playerchoice; 

        if(difficultylevel == 1){
          cout<<"\nyou have 10 choices for finding the number between 1 and 100.";
          int choicesleft = 10;
          for(int i = 0; i<=10; i++)
          {
            cout<<"\nenter the number: ";
            cin>>playerchoice;
            if(playerchoice == secretnumber)
            {
              cout<<"congratulations you won the game "<<playerchoice<<"->  is the secret number"<<endl;

              cout<<"thanks for playing this game....."<<endl;
              cout<<"playing the game again\n\n"<<endl;
              break;

            }
            else{
              cout<<"no your choice is not the right number\n"<<endl;
            }
              if(playerchoice>secretnumber)
              {
                cout<< "secret number is smaller than you have choosen"<<endl;
              }
              else{
                cout<< "secret number is greater than you have choosen"<<endl;
              }
              choicesleft--;
              cout<< choicesleft<< " choices are left."<<endl;
              if(choicesleft == 0)
              {
                cout<<"\t\tGAME OVER\n"<<endl;
                cout<<"\t\tYOU ARE LOOSE THE GAME\n"<<endl;
                cout<<"\t\tTRY AGAIN\n"<<endl;
              }
            }
          }
        
        else if(difficultylevel == 2){
           cout<<"\nyou have 7 choices for finding the number between 1 and 100.";
          int choicesleft = 7;
          for(int i = 0; i<=7; i++)
          {
            cout<<"\nenter the number: ";
            cin>>playerchoice;
            if(playerchoice == secretnumber)
            {
              cout<<"congratulations you won the game "<<playerchoice<<"->  is the secret number"<<endl;

              cout<<"thanks for playing this game....."<<endl;
              cout<<"playing the game again\n\n"<<endl;
              break;

            }
            else{
              cout<<"no your choice is not the right number\n"<<endl;
            }
              if(playerchoice>secretnumber)
              {
                cout<< "secret number is smaller than you have choosen"<<endl;
              }
              else{
                cout<< "secret number is greater than you have choosen"<<endl;
              }
              choicesleft--;
              cout<< choicesleft<< " choices are left."<<endl;
              if(choicesleft == 0)
              {
                cout<<"\t\tGAME OVER\n"<<endl;
                cout<<"\t\tYOU LOOSE THE GAME\n"<<endl;
                cout<<"\t\tTRY AGAIN\n"<<endl;
              }
            }
        }
        else if(difficultylevel == 3){
           cout<<"\nyou have 5 choices for finding the number between 1 and 100.";
          int choicesleft = 5;
          for(int i = 0; i<=5; i++)
          {
            cout<<"\nenter the number: ";
            cin>>playerchoice;
            if(playerchoice == secretnumber)
            {
              cout<<"congratulations you won the game "<<playerchoice<<"->  is the secret number"<<endl;

              cout<<"thanks for playing this game....."<<endl;
              cout<<"playing the game again\n\n"<<endl;
              break;

            }
            else{
              cout<<"no your choice is not the right number\n"<<endl;
            }
              if(playerchoice>secretnumber)
              {
                cout<< "secret number is smaller than you have choosen"<<endl;
              }
              else{
                cout<< "secret number is greater than you have choosen"<<endl;
              }
              choicesleft--;
              cout<< choicesleft<< " choices are left."<<endl;
              if(choicesleft == 0)
              {
                cout<<"\t\tGAME OVER\n"<<endl;
                cout<<"\t\tYOU LOOSE THE GAME\n"<<endl;
                cout<<"\t\tTRY AGAIN\n"<<endl;
              }
            }
        }
        else if(difficultylevel == 0){
          exit(0);
        }
        else{
           cout<<"\t\tPLEASE ENTER THE VALID CHOICE\n"<<endl;
        }
    }
    return 0;

 }
/********************************************************
* 
*      program name:       FinalSpring2014
*      Author:             Grant Fisher
*      date due:           May 11 
*      remarks:            class team
*                          inherits from class Stadium
*                          Keeps track of a teams' name, record and stadium
*                           
********************************************************/


/**********************************
*     library includes
**********************************/
#include <iostream>            // needed for Cin and Cout
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <cstdlib>


/*****************************
*     pre-processor
*****************************/
#define PI 3.14159

using namespace std;

/****************************************
*         Class definitions
****************************************/

/**********************************
*  this class is given to you
*  your "Team" class will inherit
*  from this "Stadium" class
**********************************/
class Stadium
{
   private:
      string stadiumName;
      string stadiumAddress;
      string stadiumCity;
      string stadiumState;
      string stadiumZip;
	  int*   seating;
   public:
      // constructors    
      Stadium()
      {
         stadiumName = "Ralph Wilson Stadium";
      }
      Stadium(string s)
      {
         stadiumName = s;        
      }
      // destructor
      ~Stadium()
      {
      }
      
      // getters
      string getStadiumName()              {return stadiumName;}
      string getStadiumAddress()           {return stadiumAddress;}
      string getStadiumCity()              {return stadiumCity;}
      string getStadiumState()             {return stadiumState;}
      string getStadiumZip()               {return stadiumZip;}
	  int    getSeating()                  {return *seating;}
};
      

class Team : public Stadium
{
   private:
      string teamName;
	  int*   gamesWon;
	  int*   gamesLost;
   public:
      // constructors    
      Team();
      Team(string s);
      Team(string s, int w, int l, string st);
      
      // copy constructor
      Team(Team &obj);

      // destructor
      ~Team();
      
      // setters
      void setTeamName(string x)            {teamName = x;}
      void setGamesWon(int x)               {*gamesWon = x;}
      void setGamesLost(int x)              {*gamesLost = x;}  
 
      //getters
      string getTeamName()                  {return teamName;}
      int getGamesWon()                     {return *gamesWon;}
      int getGamesLost()                    {return *gamesLost;}

      /***********************
      * overload operators
      ***********************/
      // overload =
      Team operator = (Team &right);
      // overload +
      Team operator + (int addWon);
      // overload -
      Team operator - (int addLost);  
      
      void display();    
          
};
/****************************************
*         member functions
****************************************/
      /******************
      *   constructors
      ******************/
      Team :: Team()
      {
          gamesWon = new int(0);
          gamesLost = new int(0); 
          setTeamName("");
      }

      Team :: Team(string s)
      {
          gamesWon = new int(0);
          gamesLost = new int(0);
          setTeamName(s);
      }

      Team :: Team(string s, int w, int l, string st) : Stadium(st)
      {
          setTeamName(s);
          gamesWon = new int(w);
          gamesLost = new int(l);
      }  
      

      
      /***********************
      *   copy constructor
      ***********************/
      Team :: Team(Team &obj)
      {
          gamesWon = new int;
          setGamesWon(obj.getGamesWon());
          gamesLost = new int;
          setGamesLost(obj.getGamesLost());
      }     
      
      /***********************
      * overload operators
      ***********************/
      // overload =
      Team Team :: operator= (Team &right)
      {
          setTeamName(right.getTeamName());
          setGamesWon(right.getGamesWon());
          setGamesLost(right.getGamesLost());
          return *this;
      }
      
      // overload +
      Team Team :: operator+ (int addWon)
      {
          Team temp = *this;
          setGamesWon(getGamesWon() + addWon);
          return temp; 
      }

      
      // overload -
      Team Team :: operator- (int addLost)
      {     
          Team temp = *this;
          setGamesLost(getGamesLost() + addLost);
          return temp; 
      }
      
      // Displays the current object's data
      void Team :: display()
      {
           cout << "\n";
           cout << "Team name    " << getTeamName()  << "\n";
           cout << "games won    " << getGamesWon()  << "\n";      
           cout << "games lost   " << getGamesLost() << "\n"; 
           cout << "Stadium      " << getStadiumName() << "\n";
           cout << "\n";
      }     

      /***********************
      * Destructor
      ***********************/
      Team :: ~Team()
      {
          delete gamesWon;
          delete gamesLost;
      }
      
      
/****************************************
*          function prototypes
****************************************/
void testProg01();
void testProg02();
void testProg03();
void testProg04();
void testProg04A();
void testProg04B();
void testProg04BA(Team tx);

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *     local variables
    ******************************/
  
    //testProg01();        
    //testProg02(); 
    //testProg03(); 
    testProg04(); 
            
    system("pause");                // makes the dos screen stay
    return 0;
}  // end main

void testProg01()
{
    cout << "*************************\n";
    cout << "*   test constructors   *\n";
    cout << "*************************\n";
    Team t1;
    Team t2("Cleveland Browns");
    Team t3("Buffalo Bills", 8, 1, "Ralph Wilson Stadium");
      
    t1.display();
    t2.display();
    t3.display();
    cout << "\n\n";
}   
void testProg02()
{
    cout << "****************************\n";
    cout << "*  test setters & getters  *\n";
    cout << "****************************\n";     
    Team t1;
    t1.display();
    cout << "\n\n";
    // setters
    t1.setTeamName("Buffalo Bills");
    t1.setGamesWon(15);
    t1.setGamesLost(0); 
    t1.display();
    
    cout << "\n\n"; 
      //getters
    cout << "team name (getter)  " << t1.getTeamName() << endl;
    cout << "games won (getter)  " << t1.getGamesWon() << endl;
    cout << "games lost(getter)  " << t1.getGamesLost() << endl;
    cout << "\n\n";
}   
void testProg03()
{
    cout << "****************************\n";
    cout << "*  test operator + and -    *\n";
    cout << "****************************\n"; 
    
    Team t2;
    Team t1("Buffalo Bills", 8, 3, "Ralph Wilson Stadium");
    t1.display();
    
    cout << "\n  add 4 to won\n";
    t1 + 4;
    t1.display();
    
    cout << "\n  subtract 2 from lost\n";
    t1 -2;
    t1.display();   
    
    cout << "\n  copy t1 to t1  \n";
    t2 = t1;
    t2.display();
}   
void testProg04()
{
    cout << "****************************\n";
    cout << "*  test copy constructor   *\n";
    cout << "****************************\n\n\n"; 

    testProg04A();
    testProg04B();
}   
void testProg04A()
{
    cout << "******************************\n";
    cout << "* test assign when creating  *\n";
    cout << "******************************\n"; 

    Team t1("Buffalo Bills", 8, 1, "Ralph Wilson Stadium");
    t1.display();
   
    Team t2 = t1;
    t2.display();
}       
void testProg04B()
{
    cout << "*******************************\n";
    cout << "* test passing to a function  *\n";
    cout << "*******************************\n"; 

    Team t1("Buffalo Bills", 8, 1, "Ralph Wilson Stadium");
    t1.display();
    testProg04BA(t1);   
    t1.display();
}   
void testProg04BA(Team tx)
{
    cout << "*******************************\n";
    cout << "* test passing to a function  *\n";
    cout << "*******************************\n"; 
    tx.setTeamName("Cleveland Browns");
    tx.display();
}   









 


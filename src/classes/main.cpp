/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"


using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    Point p(10,4);              //test point.cpp
    p.drawPoint();
    Point p2(10,5);
    p2.drawPoint();
    
    
    int tab[10][10] = {{0}};//tableau
    int i=0;
     
    for (i=0 ; i<100 ;i++)
    {
        tab[i/10][i%10]=2;
    }
    
    
    
    //POMME
    
    
    
    
    
    
    
    
//    do                        //mouvement
//    while
//    
//    case z;
//        p.moveUp;
//        break
//    case q;
//        p.moveLeft;
//        break
//    case s;
//        p.moveDown;
//        break
//    case d;
//        p.moveright;
//        break
    
    
    
    
  
  
    //#QUIT
    //colide
    //
    
    
    
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
	
    return 0;
}

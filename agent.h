//
//  agent.h
//  LO41-Projet
//
//  Created by Ludovic Lardies on 30/05/13.
//  Copyright (c) 2013 -. All rights reserved.
//

#ifndef LO41_Projet_agent_h
#define LO41_Projet_agent_h
#include <stdio.h>

struct Agent
{

    /*------GROUPE-----*/
    //0 => technique
    //1 => commercial
    int groupe;
    /*----------------*/
    
    //pid du processus
    int numero;
    
    /*-----Langue----*/
    //0 => francais
    //1 => anglais
    //2=> français + anglais
    int langue;
    /*---------------*/
    
    
};

//fonction pour thread
void lireAgent(struct Agent *ag);


#endif
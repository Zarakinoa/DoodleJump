#ifndef OPTION_H
#define OPTION_H

#include "State.h"
#include "App.h"

class Option : State {

    private :

    public : 
    Option();
    virtual void run(App *app);
};


#endif
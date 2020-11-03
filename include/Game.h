#ifndef GAME_H
#define GAME_H

#include "State.h"
#include "App.h"

class Game : public State {

    private :


    public :
        Game();
        void run(App *app);
        void back(App *app);

};


#endif
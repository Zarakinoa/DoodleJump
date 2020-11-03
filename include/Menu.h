#ifndef MENU_H
#define MENU_H
#include <raylib.h>
#include <vector>

#include "State.h"
#include "App.h"

class Menu : public State {

    private :
    std::vector <Texture2D> m_element;

    public :
        Menu();
        void display_background();
        virtual void run(App *app);
};

#endif
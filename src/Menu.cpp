#include "../include/Menu.h"

Menu::Menu() : State(600, 1000, (char *)"Menu")
{
   // Texture2D background = LoadTexture("image/bck@2x.png");
   // this->m_element.push_back(background);
}

void Menu::display_background()
{
   // DrawTexture(m_element.back(), 0, 0, WHITE);
}

void Menu::run(App *app)
{

    //display_background();
}
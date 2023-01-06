/*******************************************************************************
* sfml1.cpp
* ---------
* Very first time compiling & linking SFML libraries.
* Successfully draws text to the top-left corner of the window.
* 
* COMPILATION with GCC on Linux. SFML libs in standard include path.
* cmd: g++ src.cpp -o a.out -lsfml-graphics -lsfml-window -lsfml-system
* https://brianc2788.github.io/
*******************************************************************************/
#include <stdio.h>
#include <SFML/Graphics.hpp>

int main(int argc, char* argv[]) {
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML1");
    sf::Font font;

    if (!font.loadFromFile("FreeMono.ttf")) {
        printf("Failed to load true-type font.\n");
        return EXIT_FAILURE;
    }
    
    sf::Text text("SFML Test 1", font, 34);

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
        }

        window.clear();
        window.draw(text);
        window.display();
    }

    return EXIT_SUCCESS;
}
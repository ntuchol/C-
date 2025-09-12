#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "C++ Bubble");

    sf::CircleShape bubble(50.f); 
    bubble.setFillColor(sf::Color(100, 100, 250, 150)); 
    bubble.setOutlineThickness(2.f);
    bubble.setOutlineColor(sf::Color::White);
    bubble.setPosition(350.f, 250.f); 

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black); 
        
        window.draw(bubble);

        window.display();
    }

    return 0;
}

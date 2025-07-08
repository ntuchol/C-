#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "C++ Bubble");

    // Create a circle shape (the bubble)
    sf::CircleShape bubble(50.f); // Radius of 50 pixels
    bubble.setFillColor(sf::Color(100, 100, 250, 150)); // Light blue with transparency
    bubble.setOutlineThickness(2.f);
    bubble.setOutlineColor(sf::Color::White);
    bubble.setPosition(350.f, 250.f); // Position the bubble in the center

    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear(sf::Color::Black); // Black background

        // Draw the bubble
        window.draw(bubble);

        // Display what's been drawn
        window.display();
    }

    return 0;
}
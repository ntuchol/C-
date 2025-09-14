class Screen {
    public:
        virtual void handleInput() = 0; 
        virtual void update() = 0;   
        virtual void render() = 0;    
        virtual ~Screen() {}          
    };

class MainMenuScreen : public Screen {
    public:
        void handleInput() override { /* Handle main menu input */ }
        void update() override { /* Update main menu state */ }
        void render() override { /* Render main menu elements */ }
    };

    class GameScreen : public Screen {
    public:
        void handleInput() override { /* Handle game input */ }
        void update() override { /* Update game logic */ }
        void render() override { /* Render game elements */ }
    };

class ScreenManager {
    private:
        std::unique_ptr<Screen> currentScreen;

    public:
        void setScreen(std::unique_ptr<Screen> newScreen) {
            currentScreen = std::move(newScreen);
        }

        void run() {
            while (/* application loop condition */) {
                if (currentScreen) {
                    currentScreen->handleInput();
                    currentScreen->update();
                    currentScreen->render();
                }
            }
        }
    };

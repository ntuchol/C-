    enum class State { Idle, Running, Paused };
    enum class Event { Start, Stop, Pause, Resume };

    State currentState = State::Idle;

    void handleEvent(Event event) {
        switch (currentState) {
            case State::Idle:
                if (event == Event::Start) {
                    currentState = State::Running;
                }
                break;
            case State::Running:
                if (event == Event::Stop) {
                    currentState = State::Idle;
                } else if (event == Event::Pause) {
                    currentState = State::Paused;
                }
                break;
            case State::Paused:
                if (event == Event::Resume) {
                    currentState = State::Running;
                } else if (event == Event::Stop) {
                    currentState = State::Idle;
                }
                break;
        }
    }

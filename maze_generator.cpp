#include <vector>
#include <iostream>
#include <random>
#include <algorithm>

class MazeGenerator {
public:
    MazeGenerator(int width, int height) : width_(width), height_(height) {
        maze_.resize(height_, std::vector<char>(width_, '#')); // Initialize with walls
    }

    void generate() {
        // Seed random number generator
        std::random_device rd;
        std::mt19937 gen(rd());

        // Start at a random cell
        int start_x = gen() % width_;
        int start_y = gen() % height_;

        carve_path(start_x, start_y, gen);
    }

    void print_maze() const {
        for (const auto& row : maze_) {
            for (char cell : row) {
                std::cout << cell << " ";
            }
            std::cout << std::endl;
        }
    }

private:
    int width_;
    int height_;
    std::vector<std::vector<char>> maze_;

    void carve_path(int x, int y, std::mt19937& gen) {
        maze_[y][x] = ' '; // Carve a path

        std::vector<int> directions = {0, 1, 2, 3}; // 0: N, 1: E, 2: S, 3: W
        std::shuffle(directions.begin(), directions.end(), gen);

        for (int dir : directions) {
            int next_x = x;
            int next_y = y;
            int wall_x = x;
            int wall_y = y;

            switch (dir) {
                case 0: next_y -= 2; wall_y -= 1; break; // North
                case 1: next_x += 2; wall_x += 1; break; // East
                case 2: next_y += 2; wall_y += 1; break; // South
                case 3: next_x -= 2; wall_x -= 1; break; // West
            }

            if (is_valid(next_x, next_y) && maze_[next_y][next_x] == '#') {
                maze_[wall_y][wall_x] = ' '; // Carve wall
                carve_path(next_x, next_y, gen);
            }
        }
    }

    bool is_valid(int x, int y) const {
        return x >= 0 && x < width_ && y >= 0 && y < height_;
    }
};

int main() {
    MazeGenerator generator(21, 11); // Odd dimensions for walls
    generator.generate();
    generator.print_maze();
    return 0;
}
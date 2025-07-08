#include <vector>

// Enum for piece colors
enum class Color { White, Black };

// Struct to represent a position on the board
struct Position {
    int row;
    int col;

    // Equality operator for Position
    bool operator==(const Position& other) const {
        return row == other.row && col == other.col;
    }
};

// Abstract base class for all chess pieces
class Piece {
protected:
    Color color;
    Position currentPosition;

public:
    Piece(Color c, Position p) : color(c), currentPosition(p) {}
    virtual ~Piece() = default; // Virtual destructor for proper cleanup

    Color getColor() const { return color; }
    Position getPosition() const { return currentPosition; }
    void setPosition(Position newPos) { currentPosition = newPos; }

    // Pure virtual function for calculating legal moves (to be implemented by derived classes)
    virtual std::vector<Position> getLegalMoves(const class Board& board) const = 0;

    // Pure virtual function for getting the piece's character representation
    virtual char getSymbol() const = 0;
};

// Derived classes for specific chess pieces
class Pawn : public Piece {
public:
    Pawn(Color c, Position p) : Piece(c, p) {}
    std::vector<Position> getLegalMoves(const class Board& board) const override; // Implementation depends on board state
    char getSymbol() const override { return (color == Color::White) ? 'P' : 'p'; }
};

class Rook : public Piece {
public:
    Rook(Color c, Position p) : Piece(c, p) {}
    std::vector<Position> getLegalMoves(const class Board& board) const override;
    char getSymbol() const override { return (color == Color::White) ? 'R' : 'r'; }
};

class Knight : public Piece {
public:
    Knight(Color c, Position p) : Piece(c, p) {}
    std::vector<Position> getLegalMoves(const class Board& board) const override;
    char getSymbol() const override { return (color == Color::White) ? 'N' : 'n'; }
};

class Bishop : public Piece {
public:
    Bishop(Color c, Position p) : Piece(c, p) {}
    std::vector<Position> getLegalMoves(const class Board& board) const override;
    char getSymbol() const override { return (color == Color::White) ? 'B' : 'b'; }
};

class Queen : public Piece {
public:
    Queen(Color c, Position p) : Piece(c, p) {}
    std::vector<Position> getLegalMoves(const class Board& board) const override;
    char getSymbol() const override { return (color == Color::White) ? 'Q' : 'q'; }
};

class King : public Piece {
public:
    King(Color c, Position p) : Piece(c, p) {}
    std::vector<Position> getLegalMoves(const class Board& board) const override;
    char getSymbol() const override { return (color == Color::White) ? 'K' : 'k'; }
};

// Example of a Board class (simplified for demonstration)
class Board {
public:
    // Placeholder for board state and methods to check squares
    // For example:
    // bool isValidPosition(Position p) const;
    // Piece* getPieceAt(Position p) const;
};

// Implementations of getLegalMoves for each piece would go here,
// considering the rules of chess and interacting with the Board class.
// For example, for Pawn:
std::vector<Position> Pawn::getLegalMoves(const Board& board) const {
    std::vector<Position> moves;
    // Add pawn specific move logic (forward, capture, en passant, promotion)
    return moves;
}
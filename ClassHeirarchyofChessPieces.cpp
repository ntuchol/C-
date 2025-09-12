#include <vector>

enum class Color { White, Black };

struct Position {
    int row;
    int col;

    bool operator==(const Position& other) const {
        return row == other.row && col == other.col;
    }
};

class Piece {
protected:
    Color color;
    Position currentPosition;

public:
    Piece(Color c, Position p) : color(c), currentPosition(p) {}
    virtual ~Piece() = default; 

    Color getColor() const { return color; }
    Position getPosition() const { return currentPosition; }
    void setPosition(Position newPos) { currentPosition = newPos; }

    virtual std::vector<Position> getLegalMoves(const class Board& board) const = 0;

    virtual char getSymbol() const = 0;
};

class Pawn : public Piece {
public:
    Pawn(Color c, Position p) : Piece(c, p) {}
    std::vector<Position> getLegalMoves(const class Board& board) const override; 
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

class Board {
public:
    bool isValidPosition(Position p) const;
    Piece* getPieceAt(Position p) const;
};


std::vector<Position> Pawn::getLegalMoves(const Board& board) const {
    std::vector<Position> moves;
    return moves;
}

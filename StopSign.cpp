#include <graphics.h>
#include <conio.h> // For getch()

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); // Adjust path as needed

    // Draw Octagon (example coordinates, adjust for desired size and position)
    setcolor(RED);
    int octagon_points[] = {
        100, 50,  // Top-left
        150, 50,  // Top-right
        180, 80,  // Right-top
        180, 130, // Right-bottom
        150, 160, // Bottom-right
        100, 160, // Bottom-left
        70, 130,  // Left-bottom
        70, 80,   // Left-top
        100, 50    // Close the polygon
    };
    drawpoly(8, octagon_points); // If drawpoly is available
    // Alternatively, use line() for each segment:
    // line(100, 50, 150, 50);
    // line(150, 50, 180, 80);
    // ...

    setfillstyle(SOLID_FILL, RED);
    floodfill(125, 100, RED); // Fill the octagon with red

    // Draw "STOP" text
    setcolor(WHITE);
    settextstyle(GOTHIC_FONT, HORIZ_DIR, 4); // Adjust font and size
    outtextxy(100, 90, "STOP"); // Adjust position

    getch(); // Wait for a key press
    closegraph();
    return 0;
}
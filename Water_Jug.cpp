// Assuming jug1_capacity, jug2_capacity, and target are integers
// current_jug1 and current_jug2 represent the current water levels

// Fill jug 1
if (current_jug1 < jug1_capacity) {
    // Add {jug1_capacity, current_jug2} to queue if not visited
}

// Empty jug 2
if (current_jug2 > 0) {
    // Add {current_jug1, 0} to queue if not visited
}

// Pour from jug 1 to jug 2
int pour_amount = std::min(current_jug1, jug2_capacity - current_jug2);
// Add {current_jug1 - pour_amount, current_jug2 + pour_amount} to queue if not visited
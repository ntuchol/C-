#include <mlpack/methods/neighbor_search/neighbor_search.hpp>
#include <mlpack/core.hpp> // For mlpack::data::Load and mlpack::data::Save
#include <iostream>

int main() {
    // Load your dataset (e.g., from a CSV)
    arma::mat dataset;
    mlpack::data::Load("data.csv", dataset);

    // Create a Nearest Neighbor Search object
    // NearestNeighborSort for sorting neighbors by distance, ManhattanDistance as metric
    mlpack::neighbor::NeighborSearch<mlpack::neighbor::NearestNeighborSort, mlpack::metric::ManhattanDistance> nn(dataset);

    // Define query points (e.g., a single point to find its nearest neighbor)
    arma::mat query_point = "1.0 2.0 3.0"; // Example query point

    // Matrices to hold results
    arma::Mat<size_t> neighbors; // Indices of nearest neighbors
    arma::mat distances;         // Distances to nearest neighbors

    // Find the nearest neighbor (k=1)
    nn.Search(query_point, 1, neighbors, distances);

    std::cout << "Nearest neighbor index: " << neighbors[0] << std::endl;
    std::cout << "Distance to nearest neighbor: " << distances[0] << std::endl;

    return 0;
}
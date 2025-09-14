#include <mlpack/methods/neighbor_search/neighbor_search.hpp>
#include <mlpack/core.hpp> 
#include <iostream>

int main() {
    arma::mat dataset;
    mlpack::data::Load("data.csv", dataset);

    // NearestNeighborSort for sorting neighbors by distance, ManhattanDistance as metric
    mlpack::neighbor::NeighborSearch<mlpack::neighbor::NearestNeighborSort, mlpack::metric::ManhattanDistance> nn(dataset);

    arma::mat query_point = "1.0 2.0 3.0"; 
    arma::Mat<size_t> neighbors; 
    arma::mat distances;         
    nn.Search(query_point, 1, neighbors, distances);

    std::cout << "Nearest neighbor index: " << neighbors[0] << std::endl;
    std::cout << "Distance to nearest neighbor: " << distances[0] << std::endl;

    return 0;
}

// For a tridiagonal matrix of size N x N
std::vector<double> main_diagonal(N);
std::vector<double> super_diagonal(N - 1); // Elements a[i][i+1]
std::vector<double> sub_diagonal(N - 1);   // Elements a[i+1][i]
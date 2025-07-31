double sum = 0.0;
    for (double val : data) { // Assuming 'data' is a container like std::vector<double>
        sum += val;
    }
    double mean = sum / data.size();
    
    double variance_sum = 0.0;
    for (double val : data) {
        variance_sum += pow(val - mean, 2);
    }
    // For population standard deviation:
    double variance = variance_sum / data.size(); 
    // For sample standard deviation:
    double variance = variance_sum / (data.size() - 1); 
    double standard_deviation = sqrt(variance);



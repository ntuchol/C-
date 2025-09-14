double sum = 0.0;
    for (double val : data) {
        sum += val;
    }
    double mean = sum / data.size();
    
    double variance_sum = 0.0;
    for (double val : data) {
        variance_sum += pow(val - mean, 2);
    }
    double variance = variance_sum / data.size(); 
    double variance = variance_sum / (data.size() - 1); 
    double standard_deviation = sqrt(variance);



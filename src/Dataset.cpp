#include "Dataset.h"
#include <random>
#include <matplot/matplot.h>
#include <string>

std::vector<std::vector<double>> Dataset::getData() {
    return data;
}

std::vector<int> Dataset::getLabels() {
    return labels;
}

Dataset::Dataset(int n, int l) {
    numLabels = l;
    srand(time(0));
    for(int i = 0; i < n; i++) {
        double x = rand()/static_cast<double>(RAND_MAX);
        double y = rand()/static_cast<double>(RAND_MAX);
        data.push_back(std::vector<double>());
        data[i].push_back(x);
        data[i].push_back(y);
        labels.push_back(rand()%l);
    }
}

void Dataset::printData() {
    for(int i =0; i < data.size(); i++) {
        std::cout << "x: " << data[i][0] << " y: " << data[i][1] << " label: " << labels[i] << '\n';
    }
}

void Dataset::plotData() {
    std::vector<double> x, y;
    for(const auto& point : data) {
        x.push_back(point[0]);
        y.push_back(point[1]);
    }

    std::vector<std::string> colors = {"red", "blue", "green"};

    matplot::scatter(x,y,5,labels);
    matplot::show();

 }


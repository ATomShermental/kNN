
#ifndef DATASET_H
#define DATASET_H

#include <iostream>
#include <vector>

class Dataset {
private:
    std::vector<std::vector<double>> data;
    std::vector<int> labels;
    int numLabels;
public:

    Dataset(int n, int l);

    std::vector<std::vector<double>> getData();

    std::vector<int> getLabels();

    void printData();

    void plotData();
};
#endif //DATASET_H

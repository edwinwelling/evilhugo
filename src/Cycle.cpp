#include <vector>
#include <set>
#include <iterator>
#include <algorithm>



std::vector<std::vector<int>>& cycles(const std::vector<int>& permutation, std::set<int>& left, std::vector<std::vector<int>>& a_cycles ) {
    if ( left.empty() ) {
        return a_cycles;
    } 
    int min = *left.begin();

    std::vector<int> cycle;

    left.erase(min);
    cycle.push_back(min);

    while ( permutation.at(cycle.back()) != min ) {
        int next = cycle.back();
        left.erase(next);
        cycle.push_back(permutation.at(next));
    }

    a_cycles.push_back(cycle);

    return cycles(permutation, left, a_cycles);
}

std::vector<std::vector<int>> cycles(const std::vector<int>& permutation ) {
    std::vector<std::vector<int>> acycles;

    std::set<int> left(std::begin(permutation), std::end(permutation));

    if( left.size() != permutation.size() ) {
        return acycles;
    }

    if( *std::min_element(std::begin(left),std::begin(left)) != 0 || *std::max_element(std::begin(left),std::end(left)) != permutation.size() - 1 ) {
        return acycles;
    }

    acycles = cycles(permutation, left, acycles);

    return acycles;
}



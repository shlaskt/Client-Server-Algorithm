//
// Created by tomer on 1/7/19.
//

#ifndef CLIENTSERVER_SEARCHER_H
#define CLIENTSERVER_SEARCHER_H

#include "Searchable.h"
#include "vector"
template<class T>
class Searcher {
    // search method
    virtual std::vector<T> search(Searchable<T> *searchable);

    //  get how many nodes were evaluated by the algorithm
    virtual int getNumOfNodesEvaluated() = 0; // pure virtual
};

#endif //CLIENTSERVER_SEARCHER_H

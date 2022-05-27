// Copyright 2022 Eric Jones

#include "./factoryA.h"
#include <memory>
#include "./product1A.h"
#include "./product2A.h"
#include "./product3A.h"

factoryA::factoryA() {
}

factoryA::~factoryA() {
}

std::shared_ptr<product1> factoryA::newProduct1() {
    return std::shared_ptr<product1>(new product1A);
}

std::shared_ptr<product2> factoryA::newProduct2() {
    return std::shared_ptr<product2>(new product2A);
}

std::shared_ptr<product3> factoryA::newProduct3() {
    return std::shared_ptr<product3>(new product3A);
}

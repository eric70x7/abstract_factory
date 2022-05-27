// Copyright 2022 Eric Jones

#include "./factoryB.h"
#include <memory>
#include "./product1B.h"
#include "./product2B.h"
#include "./product3B.h"

factoryB::factoryB() {
}

factoryB::~factoryB() {
}

std::shared_ptr<product1> factoryB::newProduct1() {
    return std::shared_ptr<product1>(new product1B);
}

std::shared_ptr<product2> factoryB::newProduct2() {
    return std::shared_ptr<product2>(new product2B);
}

std::shared_ptr<product3> factoryB::newProduct3() {
    return std::shared_ptr<product3>(new product3B);
}

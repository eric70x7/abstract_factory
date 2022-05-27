// Copyright 2022 Eric Jones

#ifndef FACTORY_H_
#define FACTORY_H_

#include <memory>
#include <string>
#include "./product1.h"
#include "./product2.h"
#include "./product3.h"

#pragma once

class factory {
 public:
    factory();
    ~factory();

    virtual std::shared_ptr<product1> newProduct1() = 0;
    virtual std::shared_ptr<product2> newProduct2() = 0;
    virtual std::shared_ptr<product3> newProduct3() = 0;

 private:
};

#endif  // FACTORY_H_

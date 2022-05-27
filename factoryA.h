// Copyright 2022 Eric Jones

#ifndef FACTORYA_H_
#define FACTORYA_H_

#include <iostream>
#include <memory>
#include <string>
#include "./factory.h"
#include "./product1.h"
#include "./product2.h"
#include "./product3.h"

#pragma once

class factoryA : public factory {
 public:
    factoryA();
    ~factoryA();

    std::shared_ptr<product1> newProduct1() override;
    std::shared_ptr<product2> newProduct2() override;
    std::shared_ptr<product3> newProduct3() override;

 private:
};

#endif  // FACTORYA_H_

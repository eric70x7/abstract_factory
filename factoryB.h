// Copyright 2022 Eric Jones

#ifndef FACTORYB_H_
#define FACTORYB_H_

#include <iostream>
#include <memory>
#include <string>
#include "./factory.h"
#include "./product1.h"
#include "./product2.h"
#include "./product3.h"

#pragma once

class factoryB : public factory {
 public:
    factoryB();
    ~factoryB();

    std::shared_ptr<product1> newProduct1() override;
    std::shared_ptr<product2> newProduct2() override;
    std::shared_ptr<product3> newProduct3() override;

 private:
};

#endif  // FACTORYB_H_

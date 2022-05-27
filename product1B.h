// Copyright 2022 Eric Jones

#ifndef PRODUCT1B_H_
#define PRODUCT1B_H_

#include <string>
#include "./product1.h"

#pragma once

class product1B : public product1 {
 public:
    product1B();
    ~product1B();

    std::string show() override { return "1B"; }
};

#endif  // PRODUCT1B_H_

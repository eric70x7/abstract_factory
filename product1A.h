// Copyright 2022 Eric Jones

#ifndef PRODUCT1A_H_
#define PRODUCT1A_H_

#include <string>
#include "./product1.h"

#pragma once

class product1A : public product1 {
 public:
    product1A();
    ~product1A();

    std::string show() override { return "1A"; }
};

#endif  // PRODUCT1A_H_

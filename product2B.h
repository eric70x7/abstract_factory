// Copyright 2022 Eric Jones

#ifndef PRODUCT2B_H_
#define PRODUCT2B_H_

#include <string>
#include "./product2.h"

#pragma once

class product2B : public product2 {
 public:
    product2B();
    ~product2B();

    std::string show() override { return "2B"; }
};

#endif  // PRODUCT2B_H_

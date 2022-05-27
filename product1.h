// Copyright 2022 Eric Jones

#ifndef PRODUCT1_H_
#define PRODUCT1_H_

#include <string>

#pragma once

class product1 {
 public:
    product1();
    ~product1();

    virtual std::string show() = 0;
};

#endif  // PRODUCT1_H_

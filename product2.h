// Copyright 2022 Eric Jones

#ifndef PRODUCT2_H_
#define PRODUCT2_H_

#include <string>

#pragma once

class product2 {
 public:
    product2();
    ~product2();

    virtual std::string show() = 0;
};

#endif  // PRODUCT2_H_

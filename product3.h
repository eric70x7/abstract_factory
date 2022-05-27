// Copyright 2022 Eric Jones

#ifndef PRODUCT3_H_
#define PRODUCT3_H_

#include <string>

#pragma once

class product3 {
 public:
    product3();
    ~product3();

    virtual std::string show() = 0;
};

#endif  // PRODUCT3_H_

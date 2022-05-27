// Copyright 2022 Eric Jones

#ifndef PRODUCT3B_H_
#define PRODUCT3B_H_

#include <string>
#include "./product3.h"

#pragma once

class product3B : public product3 {
 public:
    product3B();
    ~product3B();

    std::string show() override { return "3B"; }
};

#endif  // PRODUCT3B_H_

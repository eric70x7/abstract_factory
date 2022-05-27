// Copyright 2022 Eric Jones

#ifndef PRODUCT2A_H_
#define PRODUCT2A_H_

#include <string>
#include "./product2.h"

#pragma once

class product2A : public product2 {
 public:
    product2A();
    ~product2A();

    std::string show() override { return "2A"; }
};

#endif  // PRODUCT2A_H_

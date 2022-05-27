// Copyright 2022 Eric Jones

#ifndef PRODUCT3A_H_
#define PRODUCT3A_H_

#include <string>
#include "./product3.h"

#pragma once

class product3A : public product3 {
 public:
    product3A();
    ~product3A();

    std::string show() override { return "3A"; }
};

#endif  // PRODUCT3A_H_

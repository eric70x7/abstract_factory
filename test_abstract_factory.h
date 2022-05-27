// Copyright 2022 Eric Jones

#ifndef TEST_ABSTRACT_FACTORY_H_
#define TEST_ABSTRACT_FACTORY_H_

#include <memory>
#include <string>
#include "./factory.h"
#include "./product1.h"
#include "./product2.h"
#include "./product3.h"

#pragma once

class abstract_factory_client {
 public:
    explicit abstract_factory_client(std::shared_ptr<factory>);
    ~abstract_factory_client();

    std::string showProduct1();
    std::string showProduct2();
    std::string showProduct3();

    std::shared_ptr<product1> makeProduct1();
    std::shared_ptr<product2> makeProduct2();
    std::shared_ptr<product3> makeProduct3();

 private:
    std::shared_ptr<factory> myFactory;
};

#endif  // TEST_ABSTRACT_FACTORY_H_

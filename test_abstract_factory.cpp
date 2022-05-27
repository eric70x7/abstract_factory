// Copyright 2022 Eric Jones

#include "./test_abstract_factory.h"
#include <gtest/gtest.h>
#include <iostream>
#include <memory>
#include "./factoryA.h"
#include "./factoryB.h"

abstract_factory_client::abstract_factory_client(std::shared_ptr<factory> f) :
    myFactory(f) {
}

std::string abstract_factory_client::showProduct1() {
    return myFactory->newProduct1()->show();
}

std::string abstract_factory_client::showProduct2() {
    return myFactory->newProduct2()->show();
}

std::string abstract_factory_client::showProduct3() {
    return myFactory->newProduct3()->show();
}

abstract_factory_client::~abstract_factory_client() {
}

TEST(AbstractFactorySuite, FactoryA) {
    std::shared_ptr<factory> factory(new factoryA);
    abstract_factory_client client(factory);

    EXPECT_EQ(client.showProduct1(), "1A");
    EXPECT_EQ(client.showProduct2(), "2A");
    EXPECT_EQ(client.showProduct3(), "3A");
}

TEST(AbstractFactorySuite, FactoryB) {
    std::shared_ptr<factory> factory(new factoryB);
    abstract_factory_client client(factory);

    EXPECT_EQ(client.showProduct1(), "1B");
    EXPECT_EQ(client.showProduct2(), "2B");
    EXPECT_EQ(client.showProduct3(), "3B");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

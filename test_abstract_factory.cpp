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

std::shared_ptr<product1> abstract_factory_client::makeProduct1() {
    return myFactory->newProduct1();
}

std::shared_ptr<product2> abstract_factory_client::makeProduct2() {
    return myFactory->newProduct2();
}

std::shared_ptr<product3> abstract_factory_client::makeProduct3() {
    return myFactory->newProduct3();
}

abstract_factory_client::~abstract_factory_client() {
}

TEST(AbstractFactorySuite, ShowProductsA) {
    std::shared_ptr<factory> factory(new factoryA);
    abstract_factory_client client(factory);

    EXPECT_EQ(client.showProduct1(), "1A");
    EXPECT_EQ(client.showProduct2(), "2A");
    EXPECT_EQ(client.showProduct3(), "3A");
}

TEST(AbstractFactorySuite, MakeProductsA) {
    std::shared_ptr<factory> factory(new factoryA);
    abstract_factory_client client(factory);

    std::shared_ptr<product1> p1 = client.makeProduct1();
    EXPECT_EQ(p1->show(), "1A");
    std::shared_ptr<product2> p2 = client.makeProduct2();
    EXPECT_EQ(p2->show(), "2A");
    std::shared_ptr<product3> p3 = client.makeProduct3();
    EXPECT_EQ(p3->show(), "3A");
}

TEST(AbstractFactorySuite, ShowProductsB) {
    std::shared_ptr<factory> factory(new factoryB);
    abstract_factory_client client(factory);

    EXPECT_EQ(client.showProduct1(), "1B");
    EXPECT_EQ(client.showProduct2(), "2B");
    EXPECT_EQ(client.showProduct3(), "3B");
}

TEST(AbstractFactorySuite, MakeProductsB) {
    std::shared_ptr<factory> factory(new factoryB);
    abstract_factory_client client(factory);

    std::shared_ptr<product1> p1 = client.makeProduct1();
    EXPECT_EQ(p1->show(), "1B");
    std::shared_ptr<product2> p2 = client.makeProduct2();
    EXPECT_EQ(p2->show(), "2B");
    std::shared_ptr<product3> p3 = client.makeProduct3();
    EXPECT_EQ(p3->show(), "3B");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

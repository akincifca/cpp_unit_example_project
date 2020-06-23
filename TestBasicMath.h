//
// Created by F Can AKINCI on 23.06.2020.
// akincifca@gmail.com, Ankara, Turkey
//

#ifndef UNTITLED_TESTBASICMATH_H
#define UNTITLED_TESTBASICMATH_H

#include "BasicMath.h"
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class TestBasicMath : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestBasicMath);
    CPPUNIT_TEST(testAdd);
    CPPUNIT_TEST(testMultiply);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() override {
        mTestObj = new BasicMath();
    }
    void tearDown() override {
        delete mTestObj;
    }

protected:
    void testAdd() {
        CPPUNIT_ASSERT(5 == mTestObj->Add(2, 3));
    }
    void testMultiply() {
        CPPUNIT_ASSERT(6 == mTestObj->Multiply(2, 3));
    }

private:
    BasicMath *mTestObj;
};

#endif //UNTITLED_TESTBASICMATH_H

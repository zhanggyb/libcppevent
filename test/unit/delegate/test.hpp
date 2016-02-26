// Unit test code for Event::connect

#pragma once

#include <gtest/gtest.h>

#include <cppevent/event.hpp>

class Test: public testing::Test
{
 public:
  Test ();
  virtual ~Test();

 protected:
  virtual void SetUp() {  }
  virtual void TearDown() {  }
};

class TestClassBase
{
 public:

  TestClassBase ()
  {
  }

  virtual ~TestClassBase ()
  {
  }

  virtual void Method0 ()
  {
    std::cout << "Method0 in base class" << std::endl;
  }

  virtual void Method1 (int p0)
  {
    std::cout << "Method1 in base class, param0: " << p0 << std::endl;
  }

  virtual void ConstMethod1 (int p0) const
  {
    std::cout << "ConstMethod1 in base class, param0: " << p0 << std::endl;
  }

  virtual void Method2 (int p0, int p1) const
  {
    std::cout << "const Method2 in base class, param0: " << p0 << " param1: "
              << p1 << std::endl;
  }

};

class TestClassDerived: public TestClassBase
{
 public:

  TestClassDerived ()
      : TestClassBase()
  {
  }

  virtual ~TestClassDerived ()
  {

  }

  virtual void Method0 () override
  {
    std::cout << "Method0 in sub class" << std::endl;
  }

  virtual void Method1 (int p0) override
  {
    std::cout << "Method1 in sub class, param0: " << p0 << std::endl;
  }

};
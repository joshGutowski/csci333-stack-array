#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(StackTest, PushOver) {
  Stack* s = new Stack(2);
  s->push(1);
  s->push(2);
  s->push(3);
  s->push(4);
  s->push(5);
  s->push(6);
  s->push(7);
  s->push(8);
  EXPECT_EQ(8, s->size());
  delete s;
}

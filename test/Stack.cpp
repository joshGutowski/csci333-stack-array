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
  EXPECT_EQ(2, s->size());
}

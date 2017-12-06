#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE test_factorial

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_factorial)

BOOST_AUTO_TEST_CASE(test_factorial_of_5)
{
	BOOST_CHECK(factorial(5) == 120);
}

BOOST_AUTO_TEST_CASE(test_factorial_of_9)
{
	BOOST_CHECK(factorial(9) == 362880);
}

BOOST_AUTO_TEST_CASE(test_factorial_of_14)
{
	BOOST_CHECK(factorial(14) == 87178291200);
}

BOOST_AUTO_TEST_SUITE_END()

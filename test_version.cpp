#define BOOST_TEST_MODULE lesson1_test_module

#include "version.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(lesson1_test_suite)

BOOST_AUTO_TEST_CASE(lesson1_test_build)
{
    BOOST_CHECK(GetVersion() > 0);
}

BOOST_AUTO_TEST_SUITE_END()
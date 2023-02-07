#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

using namespace Eigen;

BOOST_AUTO_TEST_SUITE(MatrixIOTests)

BOOST_AUTO_TEST_CASE(openData)
{
  MatrixXd expected_matrix(3, 3);
  expected_matrix << 0.680375, 0.59688, -0.329554,
      -0.211234, 0.823295, 0.536459,
      0.566198, -0.604897, -0.444451;

  MatrixXd actual_matrix = matrixIO::openData("data/m3.csv", 3);

  BOOST_TEST(actual_matrix(0, 0) == expected_matrix(0, 0));
  BOOST_TEST(actual_matrix(1, 0) == expected_matrix(1, 0));
  BOOST_TEST(actual_matrix(2, 0) == expected_matrix(2, 0));
  BOOST_TEST(actual_matrix(0, 1) == expected_matrix(0, 1));
  BOOST_TEST(actual_matrix(1, 1) == expected_matrix(1, 1));
  BOOST_TEST(actual_matrix(2, 1) == expected_matrix(2, 1));
  BOOST_TEST(actual_matrix(0, 2) == expected_matrix(0, 2));
  BOOST_TEST(actual_matrix(1, 2) == expected_matrix(1, 2));
  BOOST_TEST(actual_matrix(2, 2) == expected_matrix(2, 2));
}

BOOST_AUTO_TEST_SUITE_END()
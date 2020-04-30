#include <gtest/gtest.h>
#include "munkres-cpp/munkres.h"
#include "munkres-cpp/utils.h"
#include "matrix_test.h"



template<typename TypeParam>
void minimize_along_direction_5x5_OverRowsOnly_Success ()
{
    // Arrange.
    TypeParam e (5, 5);
    e(0, 0)=1.0;  e(0, 1)=0.0;  e(0, 2)=3.0;  e(0, 3)=2.0;  e(0, 4)=4.0;
    e(1, 0)=5.0;  e(1, 1)=0.0;  e(1, 2)=1.0;  e(1, 3)=2.0;  e(1, 4)=6.0;
    e(2, 0)=0.0;  e(2, 1)=4.0;  e(2, 2)=3.0;  e(2, 3)=2.0;  e(2, 4)=3.0;
    e(3, 0)=0.0;  e(3, 1)=2.0;  e(3, 2)=1.0;  e(3, 3)=0.0;  e(3, 4)=3.0;
    e(4, 0)=0.0;  e(4, 1)=1.0;  e(4, 2)=1.0;  e(4, 3)=0.0;  e(4, 4)=2.0;

    TypeParam t (5, 5);
    t(0, 0)=1.0;  t(0, 1)=0.0;  t(0, 2)=3.0;  t(0, 3)=2.0;  t(0, 4)=4.0;
    t(1, 0)=5.0;  t(1, 1)=0.0;  t(1, 2)=1.0;  t(1, 3)=2.0;  t(1, 4)=6.0;
    t(2, 0)=0.0;  t(2, 1)=4.0;  t(2, 2)=3.0;  t(2, 3)=2.0;  t(2, 4)=3.0;
    t(3, 0)=1.0;  t(3, 1)=3.0;  t(3, 2)=2.0;  t(3, 3)=1.0;  t(3, 4)=4.0;
    t(4, 0)=2.0;  t(4, 1)=3.0;  t(4, 2)=3.0;  t(4, 3)=2.0;  t(4, 4)=4.0;

    // Act.
    munkres_cpp::minimize_along_direction (t, false);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, minimize_along_direction_5x5_OverRowsOnly_Success)
{
    minimize_along_direction_5x5_OverRowsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, minimize_along_direction_5x5_OverRowsOnly_Success)
{
    minimize_along_direction_5x5_OverRowsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, minimize_along_direction_5x5_OverRowsOnly_Success)
{
    minimize_along_direction_5x5_OverRowsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, minimize_along_direction_5x5_OverRowsOnly_Success)
{
    minimize_along_direction_5x5_OverRowsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, minimize_along_direction_5x5_OverRowsOnly_Success)
{
    minimize_along_direction_5x5_OverRowsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, minimize_along_direction_5x5_OverRowsOnly_Success)
{
    minimize_along_direction_5x5_OverRowsOnly_Success<TypeParam> ();
}



template<typename TypeParam>
void minimize_along_direction_5x5_OverColumnsOnly_Success ()
{
    // Arrange.
    TypeParam e (5, 5);
    e(0, 0)=2.0;  e(0, 1)=2.0;  e(0, 2)=4.0;  e(0, 3)=2.0;  e(0, 4)=2.0;
    e(1, 0)=4.0;  e(1, 1)=0.0;  e(1, 2)=0.0;  e(1, 3)=0.0;  e(1, 4)=2.0;
    e(2, 0)=0.0;  e(2, 1)=5.0;  e(2, 2)=3.0;  e(2, 3)=1.0;  e(2, 4)=0.0;
    e(3, 0)=2.0;  e(3, 1)=5.0;  e(3, 2)=3.0;  e(3, 3)=1.0;  e(3, 4)=2.0;
    e(4, 0)=3.0;  e(4, 1)=5.0;  e(4, 2)=4.0;  e(4, 3)=2.0;  e(4, 4)=2.0;

    TypeParam t (5, 5);
    t(0, 0)=2.0;  t(0, 1)=2.0;  t(0, 2)=4.0;  t(0, 3)=2.0;  t(0, 4)=4.0;
    t(1, 0)=4.0;  t(1, 1)=0.0;  t(1, 2)=0.0;  t(1, 3)=0.0;  t(1, 4)=4.0;
    t(2, 0)=0.0;  t(2, 1)=5.0;  t(2, 2)=3.0;  t(2, 3)=1.0;  t(2, 4)=2.0;
    t(3, 0)=2.0;  t(3, 1)=5.0;  t(3, 2)=3.0;  t(3, 3)=1.0;  t(3, 4)=4.0;
    t(4, 0)=3.0;  t(4, 1)=5.0;  t(4, 2)=4.0;  t(4, 3)=2.0;  t(4, 4)=4.0;

    // Act.
    munkres_cpp::minimize_along_direction (t, true);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, minimize_along_direction_5x5_OverColumnsOnly_Success)
{
    minimize_along_direction_5x5_OverColumnsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, minimize_along_direction_5x5_OverColumnsOnly_Success)
{
    minimize_along_direction_5x5_OverColumnsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, minimize_along_direction_5x5_OverColumnsOnly_Success)
{
    minimize_along_direction_5x5_OverColumnsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, minimize_along_direction_5x5_OverColumnsOnly_Success)
{
    minimize_along_direction_5x5_OverColumnsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, minimize_along_direction_5x5_OverColumnsOnly_Success)
{
    minimize_along_direction_5x5_OverColumnsOnly_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, minimize_along_direction_5x5_OverColumnsOnly_Success)
{
    minimize_along_direction_5x5_OverColumnsOnly_Success<TypeParam> ();
}



template<typename TypeParam>
void minimize_along_direction_5x5_OverRowsAndColumns_Success ()
{
    // Arrange.
    TypeParam e (5, 5);
    e(0, 0)=1.0;  e(0, 1)=0.0;  e(0, 2)=2.0;  e(0, 3)=2.0;  e(0, 4)=2.0;
    e(1, 0)=5.0;  e(1, 1)=0.0;  e(1, 2)=0.0;  e(1, 3)=2.0;  e(1, 4)=4.0;
    e(2, 0)=0.0;  e(2, 1)=4.0;  e(2, 2)=2.0;  e(2, 3)=2.0;  e(2, 4)=1.0;
    e(3, 0)=0.0;  e(3, 1)=2.0;  e(3, 2)=0.0;  e(3, 3)=0.0;  e(3, 4)=1.0;
    e(4, 0)=0.0;  e(4, 1)=1.0;  e(4, 2)=0.0;  e(4, 3)=0.0;  e(4, 4)=0.0;

    TypeParam t (5, 5);
    t(0, 0)=3.0;  t(0, 1)=2.0;  t(0, 2)=5.0;  t(0, 3)=4.0;  t(0, 4)=6.0;
    t(1, 0)=5.0;  t(1, 1)=0.0;  t(1, 2)=1.0;  t(1, 3)=2.0;  t(1, 4)=6.0;
    t(2, 0)=1.0;  t(2, 1)=5.0;  t(2, 2)=4.0;  t(2, 3)=3.0;  t(2, 4)=4.0;
    t(3, 0)=3.0;  t(3, 1)=5.0;  t(3, 2)=4.0;  t(3, 3)=3.0;  t(3, 4)=6.0;
    t(4, 0)=4.0;  t(4, 1)=5.0;  t(4, 2)=5.0;  t(4, 3)=4.0;  t(4, 4)=6.0;

    // Act.
    munkres_cpp::minimize_along_direction (t, false);
    munkres_cpp::minimize_along_direction (t, true);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, minimize_along_direction_5x5_OverRowsAndColumns_Success)
{
    minimize_along_direction_5x5_OverRowsAndColumns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, minimize_along_direction_5x5_OverRowsAndColumns_Success)
{
    minimize_along_direction_5x5_OverRowsAndColumns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, minimize_along_direction_5x5_OverRowsAndColumns_Success)
{
    minimize_along_direction_5x5_OverRowsAndColumns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, minimize_along_direction_5x5_OverRowsAndColumns_Success)
{
    minimize_along_direction_5x5_OverRowsAndColumns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, minimize_along_direction_5x5_OverRowsAndColumns_Success)
{
    minimize_along_direction_5x5_OverRowsAndColumns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, minimize_along_direction_5x5_OverRowsAndColumns_Success)
{
    minimize_along_direction_5x5_OverRowsAndColumns_Success<TypeParam> ();
}



template<typename TypeParam, size_t N>
void solve_IsSingleSolution_Success ()
{
    // Arrange.
    TypeParam matrix = generate_random_matrix<TypeParam> (N, N);

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (matrix);

    // Assert.
    isSingleSolution (matrix);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_IsSingleSolution_Success)
{
    solve_IsSingleSolution_Success<TypeParam,   5> ();
    solve_IsSingleSolution_Success<TypeParam,  10> ();
    solve_IsSingleSolution_Success<TypeParam,  50> ();
    solve_IsSingleSolution_Success<TypeParam, 100> ();
    solve_IsSingleSolution_Success<TypeParam, 200> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, solve_IsSingleSolution_Success)
{
    solve_IsSingleSolution_Success<TypeParam,   5> ();
    solve_IsSingleSolution_Success<TypeParam,  10> ();
    solve_IsSingleSolution_Success<TypeParam,  50> ();
    solve_IsSingleSolution_Success<TypeParam, 100> ();
    solve_IsSingleSolution_Success<TypeParam, 200> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_IsSingleSolution_Success)
{
    solve_IsSingleSolution_Success<TypeParam,   5> ();
    solve_IsSingleSolution_Success<TypeParam,  10> ();
    solve_IsSingleSolution_Success<TypeParam,  50> ();
    solve_IsSingleSolution_Success<TypeParam, 100> ();
    solve_IsSingleSolution_Success<TypeParam, 200> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_IsSingleSolution_Success)
{
    solve_IsSingleSolution_Success<TypeParam,   5> ();
    solve_IsSingleSolution_Success<TypeParam,  10> ();
    solve_IsSingleSolution_Success<TypeParam,  50> ();
    solve_IsSingleSolution_Success<TypeParam, 100> ();
    solve_IsSingleSolution_Success<TypeParam, 200> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, solve_IsSingleSolution_Success)
{
    solve_IsSingleSolution_Success<TypeParam,   5> ();
    solve_IsSingleSolution_Success<TypeParam,  10> ();
    solve_IsSingleSolution_Success<TypeParam,  50> ();
    solve_IsSingleSolution_Success<TypeParam, 100> ();
    solve_IsSingleSolution_Success<TypeParam, 200> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_IsSingleSolution_Success)
{
    solve_IsSingleSolution_Success<TypeParam,   5> ();
    solve_IsSingleSolution_Success<TypeParam,  10> ();
    solve_IsSingleSolution_Success<TypeParam,  50> ();
    solve_IsSingleSolution_Success<TypeParam, 100> ();
    solve_IsSingleSolution_Success<TypeParam, 200> ();
}



template<typename TypeParam, size_t N>
void solve_IsValidOutput_Success ()
{
    // Arrange.
    TypeParam matrix = generate_random_matrix<TypeParam> (N, N);

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (matrix);

    // Assert.
    isValidOutput (matrix);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_IsValidOutput_Success)
{
    solve_IsValidOutput_Success<TypeParam,  10> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, solve_IsValidOutput_Success)
{
    solve_IsValidOutput_Success<TypeParam,  10> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_IsValidOutput_Success)
{
    solve_IsValidOutput_Success<TypeParam,  10> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_IsValidOutput_Success)
{
    solve_IsValidOutput_Success<TypeParam,  10> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, solve_IsValidOutput_Success)
{
    solve_IsValidOutput_Success<TypeParam,  10> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_IsValidOutput_Success)
{
    solve_IsValidOutput_Success<TypeParam,  10> ();
}



template<typename TypeParam>
void solve_1x1_ObviousSolution_Success ()
{
    // Arrange.
    TypeParam e (1, 1);
    e(0, 0)=0.0;

    TypeParam t (1, 1);
    t(0, 0)=0.0;

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_1x1_ObviousSolution_Success)
{
    solve_1x1_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, solve_1x1_ObviousSolution_Success)
{
    solve_1x1_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_1x1_ObviousSolution_Success)
{
    solve_1x1_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_1x1_ObviousSolution_Success)
{
    solve_1x1_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, solve_1x1_ObviousSolution_Success)
{
    solve_1x1_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_1x1_ObviousSolution_Success)
{
    solve_1x1_ObviousSolution_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_2x2_ObviousSolution_Success ()
{
    // Arrange.
    TypeParam e (2, 2);
    e(0, 0)=1.0;  e(0, 1)=0.0;
    e(1, 0)=0.0;  e(1, 1)=1.0;

    TypeParam t (2, 2);
    t(0, 0)=1.0;  t(0, 1)=0.0;
    t(1, 0)=0.0;  t(1, 1)=1.0;

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_2x2_ObviousSolution_Success)
{
    solve_2x2_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, solve_2x2_ObviousSolution_Success)
{
    solve_2x2_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_2x2_ObviousSolution_Success)
{
    solve_2x2_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_2x2_ObviousSolution_Success)
{
    solve_2x2_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, solve_2x2_ObviousSolution_Success)
{
    solve_2x2_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_2x2_ObviousSolution_Success)
{
    solve_2x2_ObviousSolution_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_3x3_ObviousSolution_Success ()
{
    // Arrange.
    TypeParam e (3, 3);
    e(0, 0)=1.0;  e(0, 1)=0.0;  e(0, 2)=1.0;
    e(1, 0)=0.0;  e(1, 1)=1.0;  e(1, 2)=1.0;
    e(2, 0)=1.0;  e(2, 1)=1.0;  e(2, 2)=0.0;

    TypeParam t (3, 3);
    t(0, 0)=1.0;  t(0, 1)=0.0;  t(0, 2)=1.0;
    t(1, 0)=0.0;  t(1, 1)=1.0;  t(1, 2)=1.0;
    t(2, 0)=1.0;  t(2, 1)=1.0;  t(2, 2)=0.0;

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_3x3_ObviousSolution_Success)
{
    solve_3x3_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, solve_3x3_ObviousSolution_Success)
{
    solve_3x3_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_3x3_ObviousSolution_Success)
{
    solve_3x3_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_3x3_ObviousSolution_Success)
{
    solve_3x3_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, solve_3x3_ObviousSolution_Success)
{
    solve_3x3_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixQt, solve_3x3_ObviousSolution_Success)
{
    solve_3x3_ObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_3x3_ObviousSolution_Success)
{
    solve_3x3_ObviousSolution_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_3x2_NonObviousSolution_Success ()
{
    // Arrange.
    TypeParam e (3, 2);
    e(0, 0)=1.0;  e(0, 1)=0.0;
    e(1, 0)=0.0;  e(1, 1)=1.0;
    e(2, 0)=1.0;  e(2, 1)=1.0;

    TypeParam t (3, 2);
    t(0, 0)=1.0;  t(0, 1)=2.0;
    t(1, 0)=0.0;  t(1, 1)=9.0;
    t(2, 0)=9.0;  t(2, 1)=9.0;

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_3x2_NonObviousSolution_Success)
{
    solve_3x2_NonObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_3x2_NonObviousSolution_Success)
{
    solve_3x2_NonObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_3x2_NonObviousSolution_Success)
{
    solve_3x2_NonObviousSolution_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_3x2_NonObviousSolution_Success)
{
    solve_3x2_NonObviousSolution_Success<TypeParam> ();
}



// This is simplified version of test case #008.
template<typename TypeParam>
void solve_3x2_NonObviousSolutionCase002_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    TypeParam e (3, 2);
    e(0, 0)=1.0;  e(0, 1)=1.0;
    e(1, 0)=0.0;  e(1, 1)=1.0;
    e(2, 0)=1.0;  e(2, 1)=0.0;

    TypeParam t (3, 2);
    t(0, 0)=static_cast<value_type>(1.0e+17);
                  t(0, 1)=3.0;
    t(1, 0)=2.0;  t(1, 1)=static_cast<value_type>(1.0e+17);
    t(2, 0)=4.0;  t(2, 1)=1.0;

    // Act.
    munkres_cpp::Munkres<value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_3x2_NonObviousSolutionCase002_Success)
{
    solve_3x2_NonObviousSolutionCase002_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_3x2_NonObviousSolutionCase002_Success)
{
    solve_3x2_NonObviousSolutionCase002_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_3x2_NonObviousSolutionCase002_Success)
{
    solve_3x2_NonObviousSolutionCase002_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_3x2_NonObviousSolutionCase002_Success)
{
    solve_3x2_NonObviousSolutionCase002_Success<TypeParam> ();
}



// This is simplified version of test case #009 (transposed version of test case 002).
template<typename TypeParam>
void solve_2x3_NonObviousSolutionCase003_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    TypeParam e (2, 3);
    e(0, 0)=1.0;  e(0, 1)=0.0;  e(0, 2)=1.0;
    e(1, 0)=1.0;  e(1, 1)=1.0;  e(1, 2)=0.0;

    TypeParam t (2, 3);
    t(0, 0)=static_cast<value_type>(1.0e+17);
                  t(0, 1)=2.0;  t(0, 2)=4.0;
    t(1, 0)=3.0;  t(1, 1)=static_cast<value_type>(1.0e+17);
                                t(1, 2)=1.0;

    // Act.
    munkres_cpp::Munkres<value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_2x3_NonObviousSolutionCase003_Success)
{
    solve_2x3_NonObviousSolutionCase003_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_2x3_NonObviousSolutionCase003_Success)
{
    solve_2x3_NonObviousSolutionCase003_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_2x3_NonObviousSolutionCase003_Success)
{
    solve_2x3_NonObviousSolutionCase003_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_2x3_NonObviousSolutionCase003_Success)
{
    solve_2x3_NonObviousSolutionCase003_Success<TypeParam> ();
}



// This is test case based on test case #002, but extended by one "impossible" task and one "lazy" worker.
template<typename TypeParam>
void solve_4x3_NonObviousSolutionCase004_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    TypeParam e (4, 3);
    e(0, 0)=1.0;  e(0, 1)=1.0;  e(0, 2)=1.0;
    e(1, 0)=0.0;  e(1, 1)=1.0;  e(1, 2)=1.0;
    e(2, 0)=1.0;  e(2, 1)=1.0;  e(2, 2)=0.0;
    e(3, 0)=1.0;  e(3, 1)=0.0;  e(3, 2)=1.0;

    TypeParam t (4, 3);
    t(0, 0)=static_cast<value_type>(1.0e+17);
                  t(0, 1)=3.0;  t(0, 2)=static_cast<value_type>(1.0e+17);
    t(1, 0)=2.0;  t(1, 1)=static_cast<value_type>(1.0e+17);
                                t(1, 2)=static_cast<value_type>(1.0e+17);
    t(2, 0)=static_cast<value_type>(1.0e+17);
                  t(2, 1)=static_cast<value_type>(1.0e+17);
                                t(2, 2)=static_cast<value_type>(1.0e+17);
    t(3, 0)=4.0;  t(3, 1)=1.0;
                                t(3, 2)=static_cast<value_type>(1.0e+17);

    // Act.
    munkres_cpp::Munkres<value_type> munkres (t);

    // Assert.
    EXPECT_EQ (e (1, 0), t (1, 0) );
    EXPECT_EQ (e (3, 1), t (3, 1) );
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_4x3_NonObviousSolutionCase004_Success)
{
    solve_4x3_NonObviousSolutionCase004_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_4x3_NonObviousSolutionCase004_Success)
{
    solve_4x3_NonObviousSolutionCase004_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_4x3_NonObviousSolutionCase004_Success)
{
    solve_4x3_NonObviousSolutionCase004_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_4x3_NonObviousSolutionCase004_Success)
{
    solve_4x3_NonObviousSolutionCase004_Success<TypeParam> ();
}



// This is test case based on test case #003, but extended by one "impossible" task and one "lazy" worker.
template<typename TypeParam>
void solve_3x4_NonObviousSolutionCase005_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    TypeParam e (3, 4);
    e(0, 0)=1.0;  e(0, 1)=0.0;  e(0, 2)=1.0;  e(0, 3)=1.0;
    e(1, 0)=1.0;  e(1, 1)=1.0;  e(1, 2)=1.0;  e(1, 3)=0.0;
    e(2, 0)=1.0;  e(2, 1)=1.0;  e(2, 2)=0.0;  e(2, 3)=1.0;

    TypeParam t (3, 4);
    t(0, 0)=static_cast<value_type>(1.0e+17);
                  t(0, 1)=2.0;  t(0, 2)=static_cast<value_type>(1.0e+17);
                                              t(0, 3)=4.0;
    t(1, 0)=3.0;  t(1, 1)=static_cast<value_type>(1.0e+17);
                                t(1, 2)=static_cast<value_type>(1.0e+17);
                                              t(1, 3)=1.0;
    t(2, 0)=static_cast<value_type>(1.0e+17);
                  t(2, 1)=static_cast<value_type>(1.0e+17);
                                t(2, 2)=static_cast<value_type>(1.0e+17);
                                              t(2, 3)=static_cast<value_type>(1.0e+17);

    // Act.
    munkres_cpp::Munkres<value_type> munkres (t);

    // Assert.
    EXPECT_EQ (e (0, 1), t (0, 1) );
    EXPECT_EQ (e (1, 3), t (1, 3) );
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_3x4_NonObviousSolutionCase005_Success)
{
    solve_3x4_NonObviousSolutionCase005_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_3x4_NonObviousSolutionCase005_Success)
{
    solve_3x4_NonObviousSolutionCase005_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_3x4_NonObviousSolutionCase005_Success)
{
    solve_3x4_NonObviousSolutionCase005_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_3x4_NonObviousSolutionCase005_Success)
{
    solve_3x4_NonObviousSolutionCase005_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_3x3_NonObviousSolutionCase006_Success ()
{
    // Arrange.
    TypeParam e (3, 3);
    e(0, 0)=1.0;  e(0, 1)=0.0;  e(0, 2)=1.0;
    e(1, 0)=0.0;  e(1, 1)=1.0;  e(1, 2)=1.0;
    e(2, 0)=1.0;  e(2, 1)=1.0;  e(2, 2)=0.0;

    TypeParam t (3, 3);
    t(0, 0)=1.0;  t(0, 1)=2.0;  t(0, 2)=1.0;
    t(1, 0)=0.0;  t(1, 1)=9.0;  t(1, 2)=9.0;
    t(2, 0)=9.0;  t(2, 1)=9.0;  t(2, 2)=0.0;

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_3x3_NonObviousSolutionCase006_Success)
{
    solve_3x3_NonObviousSolutionCase006_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, solve_3x3_NonObviousSolutionCase006_Success)
{
    solve_3x3_NonObviousSolutionCase006_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_3x3_NonObviousSolutionCase006_Success)
{
    solve_3x3_NonObviousSolutionCase006_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_3x3_NonObviousSolutionCase006_Success)
{
    solve_3x3_NonObviousSolutionCase006_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, solve_3x3_NonObviousSolutionCase006_Success)
{
    solve_3x3_NonObviousSolutionCase006_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixQt, solve_3x3_NonObviousSolutionCase006_Success)
{
    solve_3x3_NonObviousSolutionCase006_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_3x3_NonObviousSolutionCase006_Success)
{
    solve_3x3_NonObviousSolutionCase006_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_3x3_NonObviousSolutionCase007_Success ()
{
    // Arrange.
    TypeParam e (3, 3);
    e(0, 0)=1.0;  e(0, 1)=1.0;  e(0, 2)=0.0;
    e(1, 0)=1.0;  e(1, 1)=0.0;  e(1, 2)=1.0;
    e(2, 0)=0.0;  e(2, 1)=1.0;  e(2, 2)=1.0;

    TypeParam t (3, 3);
    t(0, 0)=0.0;  t(0, 1)=0.0;  t(0, 2)=4.0;
    t(1, 0)=4.0;  t(1, 1)=3.0;  t(1, 2)=9.0;
    t(2, 0)=3.0;  t(2, 1)=4.0;  t(2, 2)=9.0;

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_3x3_NonObviousSolutionCase007_Success)
{
    solve_3x3_NonObviousSolutionCase007_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, solve_3x3_NonObviousSolutionCase007_Success)
{
    solve_3x3_NonObviousSolutionCase007_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_3x3_NonObviousSolutionCase007_Success)
{
    solve_3x3_NonObviousSolutionCase007_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_3x3_NonObviousSolutionCase007_Success)
{
    solve_3x3_NonObviousSolutionCase007_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, solve_3x3_NonObviousSolutionCase007_Success)
{
    solve_3x3_NonObviousSolutionCase007_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixQt, solve_3x3_NonObviousSolutionCase007_Success)
{
    solve_3x3_NonObviousSolutionCase007_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_3x3_NonObviousSolutionCase007_Success)
{
    solve_3x3_NonObviousSolutionCase007_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_6x4_NonObviousSolutionCase008_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    TypeParam e (6, 4);
    e(0, 0)=1.0;  e(0, 1)=1.0;  e(0, 2)=1.0;  e(0, 3)=1.0;
    e(1, 0)=0.0;  e(1, 1)=1.0;  e(1, 2)=1.0;  e(1, 3)=1.0;
    e(2, 0)=1.0;  e(2, 1)=0.0;  e(2, 2)=1.0;  e(2, 3)=1.0;
    e(3, 0)=1.0;  e(3, 1)=1.0;  e(3, 2)=1.0;  e(3, 3)=1.0;
    e(4, 0)=1.0;  e(4, 1)=1.0;  e(4, 2)=1.0;  e(4, 3)=0.0;
    e(5, 0)=1.0;  e(5, 1)=1.0;  e(5, 2)=0.0;  e(5, 3)=1.0;

    TypeParam t (6, 4);
    t(0, 0)=static_cast<value_type>(1.79769e+308);
                  t(0, 1)=static_cast<value_type>(7.33184e+08);
                                t(0, 2)=static_cast<value_type>(9.41561e+08);
                                              t(0, 3)=static_cast<value_type>(2.79247e+08);
    t(1, 0)=static_cast<value_type>(3.06449e+08);
                  t(1, 1)=static_cast<value_type>(1.79769e+308);
                                t(1, 2)=static_cast<value_type>(3.3464e+08);
                                              t(1, 3)=static_cast<value_type>(7.06878e+08);
    t(2, 0)=static_cast<value_type>(9.93296e+08);
                  t(2, 1)=static_cast<value_type>(1.9414e+08);
                                t(2, 2)=static_cast<value_type>(1.79769e+308);
                                              t(2, 3)=static_cast<value_type>(1.14174e+08);
    t(3, 0)=static_cast<value_type>(3.51623e+08);
                  t(3, 1)=static_cast<value_type>(2.48635e+08);
                                t(3, 2)=static_cast<value_type>(7.81242e+08);
                                              t(3, 3)=static_cast<value_type>(1.79769e+308);
    t(4, 0)=static_cast<value_type>(7.02639e+08);
                  t(4, 1)=static_cast<value_type>(8.51663e+08);
                                t(4, 2)=static_cast<value_type>(9.37382e+08);
                                              t(4, 3)=static_cast<value_type>(4.96945e+07);
    t(5, 0)=static_cast<value_type>(7.58851e+08);
                  t(5, 1)=static_cast<value_type>(8.58445e+08);
                                t(5, 2)=static_cast<value_type>(8.7235e+07);
                                              t(5, 3)=static_cast<value_type>(5.47076e+08);

    munkres_cpp::replace_infinites<value_type> (t);

    // Act.
    munkres_cpp::Munkres<value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestFloatingResizeable, solve_6x4_NonObviousSolutionCase008_Success)
{
    solve_6x4_NonObviousSolutionCase008_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_4x6_NonObviousSolutionCase009_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    TypeParam e (4, 6);
    e(0, 0)=1.0;  e(0, 1)=0.0;  e(0, 2)=1.0;  e(0, 3)=1.0;  e(0, 4)=1.0;  e(0, 5)=1.0;
    e(1, 0)=1.0;  e(1, 1)=1.0;  e(1, 2)=0.0;  e(1, 3)=1.0;  e(1, 4)=1.0;  e(1, 5)=1.0;
    e(2, 0)=1.0;  e(2, 1)=1.0;  e(2, 2)=1.0;  e(2, 3)=1.0;  e(2, 4)=1.0;  e(2, 5)=0.0;
    e(3, 0)=1.0;  e(3, 1)=1.0;  e(3, 2)=1.0;  e(3, 3)=1.0;  e(3, 4)=0.0;  e(3, 5)=1.0;

    TypeParam t (4, 6);
    t(0, 0)=static_cast<value_type>(1.79769e+308);
                  t(0, 1)=static_cast<value_type>(3.06449e+08);
                                t(0, 2)=static_cast<value_type>(9.93296e+08);
                                              t(0, 3)=static_cast<value_type>(3.51623e+08);
                                                            t(0, 4)=static_cast<value_type>(7.02639e+08);
                                                                          t(0, 5)=static_cast<value_type>(7.58851e+08);
    t(1, 0)=static_cast<value_type>(7.33184e+08);
                  t(1, 1)=static_cast<value_type>(1.79769e+308);
                                t(1, 2)=static_cast<value_type>(1.9414e+08);
                                              t(1, 3)=static_cast<value_type>(2.48635e+08);
                                                            t(1, 4)=static_cast<value_type>(8.51663e+08);
                                                                          t(1, 5)=static_cast<value_type>(8.58445e+08);
    t(2, 0)=static_cast<value_type>(9.41561e+08);
                  t(2, 1)=static_cast<value_type>(3.3464e+08);
                                t(2, 2)=static_cast<value_type>(1.79769e+308);
                                              t(2, 3)=static_cast<value_type>(7.81242e+08);
                                                            t(2, 4)=static_cast<value_type>(9.37382e+08);
                                                                          t(2, 5)=static_cast<value_type>(8.7235e+07);
    t(3, 0)=static_cast<value_type>(2.79247e+08);
                  t(3, 1)=static_cast<value_type>(7.06878e+08);
                                t(3, 2)=static_cast<value_type>(1.14174e+08);
                                              t(3, 3)=static_cast<value_type>(1.79769e+308);
                                                            t(3, 4)=static_cast<value_type>(4.96945e+07);
                                                                          t(3, 5)=static_cast<value_type>(5.47076e+08);

    munkres_cpp::replace_infinites<value_type> (t);

    // Act.
    munkres_cpp::Munkres<value_type> munkres (t);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestFloatingResizeable, solve_4x6_NonObviousSolutionCase009_Success)
{
    solve_4x6_NonObviousSolutionCase009_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_3x3_NonObviousSolutionCase010_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    constexpr value_type infinity = std::numeric_limits<value_type>::infinity ();
    TypeParam t (3, 3);
    t(0, 0)=infinity;
                  t(0, 1)=42;   t(0, 2)=42;
    t(1, 0)=42;   t(1, 1)=0.0;  t(1, 2)=42;
    t(2, 0)=42;   t(2, 1)=42;   t(2, 2)=0.0;

    // Act.
    munkres_cpp::replace_infinites (t);
    munkres_cpp::Munkres<value_type> munkres (t);

    // Assert.
    EXPECT_NE (0, t (0, 0) );
}

TYPED_TEST (MunkresTestFloating, solve_3x3_NonObviousSolutionCase010_Success)
{
    solve_3x3_NonObviousSolutionCase010_Success<TypeParam> ();
}



template<typename TypeParam>
void solve_3x3_IsValid_Fail ()
{
    // Arrange.
    TypeParam e (3, 3);
    e(0, 0)=0.0;  e(0, 1)=1.0;  e(0, 2)=1.0;
    //      ^             ^
    //      |             |
    //    Wrong         Wrong
    e(1, 0)=0.0;  e(1, 1)=1.0;  e(1, 2)=1.0;
    e(2, 0)=1.0;  e(2, 1)=1.0;  e(2, 2)=0.0;

    TypeParam t (3, 3);
    t(0, 0)=1.0;  t(0, 1)=0.0;  t(0, 2)=1.0;
    t(1, 0)=0.0;  t(1, 1)=1.0;  t(1, 2)=1.0;
    t(2, 0)=1.0;  t(2, 1)=1.0;  t(2, 2)=0.0;

    // Act.
    munkres_cpp::Munkres<typename TypeParam::matrix_base::value_type> munkres (t);

    // Assert.
    const auto NotMatrixCompare = [](const TypeParam & e, const TypeParam & t){
        return !MatrixCompare<TypeParam> (e, t);
    };
    EXPECT_PRED2 (NotMatrixCompare, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, solve_3x3_IsValid_Fail)
{
    solve_3x3_IsValid_Fail<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, solve_3x3_IsValid_Fail)
{
    solve_3x3_IsValid_Fail<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, solve_3x3_IsValid_Fail)
{
    solve_3x3_IsValid_Fail<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, solve_3x3_IsValid_Fail)
{
    solve_3x3_IsValid_Fail<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, solve_3x3_IsValid_Fail)
{
    solve_3x3_IsValid_Fail<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixQt, solve_3x3_IsValid_Fail)
{
    solve_3x3_IsValid_Fail<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, solve_3x3_IsValid_Fail)
{
    solve_3x3_IsValid_Fail<TypeParam> ();
}

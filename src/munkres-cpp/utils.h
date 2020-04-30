#if !defined(__MUNKRES_CPP_UTILS_H__)
#define __MUNKRES_CPP_UTILS_H__

#include "munkres-cpp/matrix_base.h"
#include <algorithm>



namespace munkres_cpp
{

template<typename T>
typename std::enable_if<std::is_floating_point<T>::value>::type
replace_infinites (matrix_base<T> & matrix)
{
    std::replace_if (matrix.begin (), matrix.end (), [](const T & v){return std::isinf (v);}, std::numeric_limits<T>::max () );
}



template<typename T>
typename std::enable_if<std::is_integral<T>::value, bool>::type
is_data_invalid (const T & value)
{
    return std::numeric_limits<T>::is_signed && value < T (0);
}

template<typename T>
typename std::enable_if<!std::is_integral<T>::value, bool>::type
is_data_invalid (const T & value)
{
    return value < T (0) || !(std::fpclassify (value) == FP_ZERO || std::fpclassify (value) == FP_NORMAL);
}

template<typename T>
bool is_data_valid (/*const*/ matrix_base<T> & matrix)
{
    return !std::any_of (matrix.begin (), matrix.end (), [](const T & v){return is_data_invalid<T> (v);});
}

}// namespace munkres_cpp

#endif /* !defined(__MUNKRES_CPP_UTILS_H__) */

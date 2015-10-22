//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/DualPivotQuicksort.java
//

#ifndef _JavaUtilDualPivotQuicksort_H_
#define _JavaUtilDualPivotQuicksort_H_

#include "../../J2ObjC_header.h"

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSShortArray;

/*!
 @brief This class implements the Dual-Pivot Quicksort algorithm by
 Vladimir Yaroslavskiy, Jon Bentley, and Joshua Bloch.
 The algorithm
 offers O(n log(n)) performance on many data sets that cause other
 quicksorts to degrade to quadratic performance, and is typically
 faster than traditional (one-pivot) Quicksort implementations.
 @author Vladimir Yaroslavskiy
 @author Jon Bentley
 @author Josh Bloch
 @version 2009.11.29 m765.827.12i
 */
@interface JavaUtilDualPivotQuicksort : NSObject

#pragma mark Public

/*!
 @brief Sorts the specified array into ascending numerical order.
 @param a the array to be sorted
 */
+ (void)sortWithByteArray:(IOSByteArray *)a;

/*!
 @brief Sorts the specified range of the array into ascending order.
 The range
 to be sorted extends from the index <code>fromIndex</code>, inclusive, to
 the index <code>toIndex</code>, exclusive. If <code>fromIndex == toIndex</code>,
 the range to be sorted is empty (and the call is a no-op).
 @param a the array to be sorted
 @param fromIndex the index of the first element, inclusive, to be sorted
 @param toIndex the index of the last element, exclusive, to be sorted
 @throws IllegalArgumentException if <code>fromIndex > toIndex</code>
 @throws ArrayIndexOutOfBoundsException
 if <code>fromIndex < 0</code> or <code>toIndex > a.length</code>
 */
+ (void)sortWithByteArray:(IOSByteArray *)a
                  withInt:(jint)fromIndex
                  withInt:(jint)toIndex;

/*!
 @brief Sorts the specified array into ascending numerical order.
 @param a the array to be sorted
 */
+ (void)sortWithCharArray:(IOSCharArray *)a;

/*!
 @brief Sorts the specified range of the array into ascending order.
 The range
 to be sorted extends from the index <code>fromIndex</code>, inclusive, to
 the index <code>toIndex</code>, exclusive. If <code>fromIndex == toIndex</code>,
 the range to be sorted is empty (and the call is a no-op).
 @param a the array to be sorted
 @param fromIndex the index of the first element, inclusive, to be sorted
 @param toIndex the index of the last element, exclusive, to be sorted
 @throws IllegalArgumentException if <code>fromIndex > toIndex</code>
 @throws ArrayIndexOutOfBoundsException
 if <code>fromIndex < 0</code> or <code>toIndex > a.length</code>
 */
+ (void)sortWithCharArray:(IOSCharArray *)a
                  withInt:(jint)fromIndex
                  withInt:(jint)toIndex;

/*!
 @brief Sorts the specified array into ascending numerical order.
 <p>The <code><</code> relation does not provide a total order on all double
 values: <code>-0.0d == 0.0d</code> is <code>true</code> and a <code>Double.NaN</code>
 value compares neither less than, greater than, nor equal to any value,
 even itself. This method uses the total order imposed by the method
 <code>Double.compareTo</code>: <code>-0.0d</code> is treated as less than value
 <code>0.0d</code> and <code>Double.NaN</code> is considered greater than any
 other value and all <code>Double.NaN</code> values are considered equal.
 @param a the array to be sorted
 */
+ (void)sortWithDoubleArray:(IOSDoubleArray *)a;

/*!
 @brief Sorts the specified range of the array into ascending order.
 The range
 to be sorted extends from the index <code>fromIndex</code>, inclusive, to
 the index <code>toIndex</code>, exclusive. If <code>fromIndex == toIndex</code>,
 the range to be sorted is empty (and the call is a no-op).
 <p>The <code><</code> relation does not provide a total order on all double
 values: <code>-0.0d == 0.0d</code> is <code>true</code> and a <code>Double.NaN</code>
 value compares neither less than, greater than, nor equal to any value,
 even itself. This method uses the total order imposed by the method
 <code>Double.compareTo</code>: <code>-0.0d</code> is treated as less than value
 <code>0.0d</code> and <code>Double.NaN</code> is considered greater than any
 other value and all <code>Double.NaN</code> values are considered equal.
 @param a the array to be sorted
 @param fromIndex the index of the first element, inclusive, to be sorted
 @param toIndex the index of the last element, exclusive, to be sorted
 @throws IllegalArgumentException if <code>fromIndex > toIndex</code>
 @throws ArrayIndexOutOfBoundsException
 if <code>fromIndex < 0</code> or <code>toIndex > a.length</code>
 */
+ (void)sortWithDoubleArray:(IOSDoubleArray *)a
                    withInt:(jint)fromIndex
                    withInt:(jint)toIndex;

/*!
 @brief Sorts the specified array into ascending numerical order.
 <p>The <code><</code> relation does not provide a total order on all float
 values: <code>-0.0f == 0.0f</code> is <code>true</code> and a <code>Float.NaN</code>
 value compares neither less than, greater than, nor equal to any value,
 even itself. This method uses the total order imposed by the method
 <code>Float.compareTo</code>: <code>-0.0f</code> is treated as less than value
 <code>0.0f</code> and <code>Float.NaN</code> is considered greater than any
 other value and all <code>Float.NaN</code> values are considered equal.
 @param a the array to be sorted
 */
+ (void)sortWithFloatArray:(IOSFloatArray *)a;

/*!
 @brief Sorts the specified range of the array into ascending order.
 The range
 to be sorted extends from the index <code>fromIndex</code>, inclusive, to
 the index <code>toIndex</code>, exclusive. If <code>fromIndex == toIndex</code>,
 the range to be sorted is empty  and the call is a no-op).
 <p>The <code><</code> relation does not provide a total order on all float
 values: <code>-0.0f == 0.0f</code> is <code>true</code> and a <code>Float.NaN</code>
 value compares neither less than, greater than, nor equal to any value,
 even itself. This method uses the total order imposed by the method
 <code>Float.compareTo</code>: <code>-0.0f</code> is treated as less than value
 <code>0.0f</code> and <code>Float.NaN</code> is considered greater than any
 other value and all <code>Float.NaN</code> values are considered equal.
 @param a the array to be sorted
 @param fromIndex the index of the first element, inclusive, to be sorted
 @param toIndex the index of the last element, exclusive, to be sorted
 @throws IllegalArgumentException if <code>fromIndex > toIndex</code>
 @throws ArrayIndexOutOfBoundsException
 if <code>fromIndex < 0</code> or <code>toIndex > a.length</code>
 */
+ (void)sortWithFloatArray:(IOSFloatArray *)a
                   withInt:(jint)fromIndex
                   withInt:(jint)toIndex;

/*!
 @brief Sorts the specified array into ascending numerical order.
 @param a the array to be sorted
 */
+ (void)sortWithIntArray:(IOSIntArray *)a;

/*!
 @brief Sorts the specified range of the array into ascending order.
 The range
 to be sorted extends from the index <code>fromIndex</code>, inclusive, to
 the index <code>toIndex</code>, exclusive. If <code>fromIndex == toIndex</code>,
 the range to be sorted is empty (and the call is a no-op).
 @param a the array to be sorted
 @param fromIndex the index of the first element, inclusive, to be sorted
 @param toIndex the index of the last element, exclusive, to be sorted
 @throws IllegalArgumentException if <code>fromIndex > toIndex</code>
 @throws ArrayIndexOutOfBoundsException
 if <code>fromIndex < 0</code> or <code>toIndex > a.length</code>
 */
+ (void)sortWithIntArray:(IOSIntArray *)a
                 withInt:(jint)fromIndex
                 withInt:(jint)toIndex;

/*!
 @brief Sorts the specified array into ascending numerical order.
 @param a the array to be sorted
 */
+ (void)sortWithLongArray:(IOSLongArray *)a;

/*!
 @brief Sorts the specified range of the array into ascending order.
 The range
 to be sorted extends from the index <code>fromIndex</code>, inclusive, to
 the index <code>toIndex</code>, exclusive. If <code>fromIndex == toIndex</code>,
 the range to be sorted is empty (and the call is a no-op).
 @param a the array to be sorted
 @param fromIndex the index of the first element, inclusive, to be sorted
 @param toIndex the index of the last element, exclusive, to be sorted
 @throws IllegalArgumentException if <code>fromIndex > toIndex</code>
 @throws ArrayIndexOutOfBoundsException
 if <code>fromIndex < 0</code> or <code>toIndex > a.length</code>
 */
+ (void)sortWithLongArray:(IOSLongArray *)a
                  withInt:(jint)fromIndex
                  withInt:(jint)toIndex;

/*!
 @brief Sorts the specified array into ascending numerical order.
 @param a the array to be sorted
 */
+ (void)sortWithShortArray:(IOSShortArray *)a;

/*!
 @brief Sorts the specified range of the array into ascending order.
 The range
 to be sorted extends from the index <code>fromIndex</code>, inclusive, to
 the index <code>toIndex</code>, exclusive. If <code>fromIndex == toIndex</code>,
 the range to be sorted is empty (and the call is a no-op).
 @param a the array to be sorted
 @param fromIndex the index of the first element, inclusive, to be sorted
 @param toIndex the index of the last element, exclusive, to be sorted
 @throws IllegalArgumentException if <code>fromIndex > toIndex</code>
 @throws ArrayIndexOutOfBoundsException
 if <code>fromIndex < 0</code> or <code>toIndex > a.length</code>
 */
+ (void)sortWithShortArray:(IOSShortArray *)a
                   withInt:(jint)fromIndex
                   withInt:(jint)toIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilDualPivotQuicksort)

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithIntArray_(IOSIntArray *a);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithIntArray_withInt_withInt_(IOSIntArray *a, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithLongArray_(IOSLongArray *a);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithLongArray_withInt_withInt_(IOSLongArray *a, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithShortArray_(IOSShortArray *a);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithShortArray_withInt_withInt_(IOSShortArray *a, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithCharArray_(IOSCharArray *a);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithCharArray_withInt_withInt_(IOSCharArray *a, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithByteArray_(IOSByteArray *a);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithByteArray_withInt_withInt_(IOSByteArray *a, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithFloatArray_(IOSFloatArray *a);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithFloatArray_withInt_withInt_(IOSFloatArray *a, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithDoubleArray_(IOSDoubleArray *a);

FOUNDATION_EXPORT void JavaUtilDualPivotQuicksort_sortWithDoubleArray_withInt_withInt_(IOSDoubleArray *a, jint fromIndex, jint toIndex);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDualPivotQuicksort)

#endif // _JavaUtilDualPivotQuicksort_H_
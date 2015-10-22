//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/DataInputStream.java
//

#ifndef _JavaIoDataInputStream_H_
#define _JavaIoDataInputStream_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/DataInput.h"
#include "../../java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

/*!
 @brief Wraps an existing <code>InputStream</code> and reads big-endian typed data from it.
 Typically, this stream has been written by a DataOutputStream. Types that can
 be read include byte, 16-bit short, 32-bit int, 32-bit float, 64-bit long,
 64-bit double, byte strings, and strings encoded in
 <code>modified UTF-8</code>.
 */
@interface JavaIoDataInputStream : JavaIoFilterInputStream < JavaIoDataInput >

#pragma mark Public

/*!
 @brief Constructs a new DataInputStream on the InputStream <code>in</code>.
 All
 reads are then filtered through this stream. Note that data read by this
 stream is not in a human readable format and was most likely created by a
 DataOutputStream.
 <p><strong>Warning:</strong> passing a null source creates an invalid
 <code>DataInputStream</code>. All operations on such a stream will fail.
 @param inArg
 the source InputStream the filter reads from.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jint)readWithByteArray:(IOSByteArray *)buffer;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jboolean)readBoolean;

- (jbyte)readByte;

- (jchar)readChar;

- (jdouble)readDouble;

- (jfloat)readFloat;

- (void)readFullyWithByteArray:(IOSByteArray *)dst;

- (void)readFullyWithByteArray:(IOSByteArray *)dst
                       withInt:(jint)offset
                       withInt:(jint)byteCount;

- (jint)readInt;

/*!
 */
- (NSString *)readLine;

- (jlong)readLong;

- (jshort)readShort;

- (jint)readUnsignedByte;

- (jint)readUnsignedShort;

- (NSString *)readUTF;

+ (NSString *)readUTFWithJavaIoDataInput:(id<JavaIoDataInput>)inArg;

/*!
 @brief Skips <code>count</code> number of bytes in this stream.
 Subsequent <code>read()</code>
 s will not return these bytes unless <code>reset()</code> is used.
 This method will not throw an <code>EOFException</code> if the end of the
 input is reached before <code>count</code> bytes where skipped.
 @param count
 the number of bytes to skip.
 @return the number of bytes actually skipped.
 @throws IOException
 if a problem occurs during skipping.
 */
- (jint)skipBytesWithInt:(jint)count;

#pragma mark Package-Private

- (NSString *)decodeUTFWithInt:(jint)utfSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoDataInputStream)

FOUNDATION_EXPORT void JavaIoDataInputStream_initWithJavaIoInputStream_(JavaIoDataInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoDataInputStream *new_JavaIoDataInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *JavaIoDataInputStream_readUTFWithJavaIoDataInput_(id<JavaIoDataInput> inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoDataInputStream)

#endif // _JavaIoDataInputStream_H_
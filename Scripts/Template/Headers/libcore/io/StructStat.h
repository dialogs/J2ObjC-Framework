//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructStat.java
//

#ifndef _LibcoreIoStructStat_H_
#define _LibcoreIoStructStat_H_

#include "../../J2ObjC_header.h"

/*!
 @brief File information returned by fstat(2), lstat(2), and stat(2).
 Corresponds to C's
 <code>struct stat</code> from
 <a href="http://www.opengroup.org/onlinepubs/000095399/basedefs/sys/stat.h.html">&lt;stat.h&gt;</a>
 */
@interface LibcoreIoStructStat : NSObject {
 @public
  /*!
   @brief Device ID of device containing file.
   */
  jlong st_dev_;
  /*!
   @brief File serial number (inode).
   */
  jlong st_ino_;
  /*!
   @brief Mode (permissions) of file.
   */
  jint st_mode_;
  /*!
   @brief Number of hard links to the file.
   */
  jlong st_nlink_;
  /*!
   @brief User ID of file.
   */
  jint st_uid_;
  /*!
   @brief Group ID of file.
   */
  jint st_gid_;
  /*!
   @brief Device ID (if file is character or block special).
   */
  jlong st_rdev_;
  /*!
   @brief For regular files, the file size in bytes.
   For symbolic links, the length in bytes of the pathname contained in the symbolic link.
 For a shared memory object, the length in bytes.
 For a typed memory object, the length in bytes.
 For other file types, the use of this field is unspecified.
   */
  jlong st_size_;
  /*!
   @brief Time of last access.
   */
  jlong st_atime_;
  /*!
   @brief Time of last data modification.
   */
  jlong st_mtime_;
  /*!
   @brief Time of last status change.
   */
  jlong st_ctime_;
  /*!
   @brief A file system-specific preferred I/O block size for this object.
   For some file system types, this may vary from file to file.
   */
  jlong st_blksize_;
  /*!
   @brief Number of blocks allocated for this object.
   */
  jlong st_blocks_;
}

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)st_dev
                    withLong:(jlong)st_ino
                     withInt:(jint)st_mode
                    withLong:(jlong)st_nlink
                     withInt:(jint)st_uid
                     withInt:(jint)st_gid
                    withLong:(jlong)st_rdev
                    withLong:(jlong)st_size
                    withLong:(jlong)st_atime
                    withLong:(jlong)st_mtime
                    withLong:(jlong)st_ctime
                    withLong:(jlong)st_blksize
                    withLong:(jlong)st_blocks;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoStructStat)

FOUNDATION_EXPORT void LibcoreIoStructStat_initWithLong_withLong_withInt_withLong_withInt_withInt_withLong_withLong_withLong_withLong_withLong_withLong_withLong_(LibcoreIoStructStat *self, jlong st_dev, jlong st_ino, jint st_mode, jlong st_nlink, jint st_uid, jint st_gid, jlong st_rdev, jlong st_size, jlong st_atime, jlong st_mtime, jlong st_ctime, jlong st_blksize, jlong st_blocks);

FOUNDATION_EXPORT LibcoreIoStructStat *new_LibcoreIoStructStat_initWithLong_withLong_withInt_withLong_withInt_withInt_withLong_withLong_withLong_withLong_withLong_withLong_withLong_(jlong st_dev, jlong st_ino, jint st_mode, jlong st_nlink, jint st_uid, jint st_gid, jlong st_rdev, jlong st_size, jlong st_atime, jlong st_mtime, jlong st_ctime, jlong st_blksize, jlong st_blocks) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoStructStat)

#endif // _LibcoreIoStructStat_H_
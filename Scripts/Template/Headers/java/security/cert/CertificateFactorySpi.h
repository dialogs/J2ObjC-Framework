//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertificateFactorySpi.java
//

#ifndef _JavaSecurityCertCertificateFactorySpi_H_
#define _JavaSecurityCertCertificateFactorySpi_H_

#include "../../../J2ObjC_header.h"

@class JavaIoInputStream;
@class JavaSecurityCertCRL;
@class JavaSecurityCertCertPath;
@class JavaSecurityCertCertificate;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>) for the
 <code>CertificateFactory</code> class.
 This SPI must be implemented for each
 certificate type a security provider wishes to support.
 */
@interface JavaSecurityCertCertificateFactorySpi : NSObject

#pragma mark Public

/*!
 @brief Constructs a new instance of this class.
 */
- (instancetype)init;

/*!
 @brief Generates and initializes a <code>Certificate</code> from the provided input
 stream.
 @param inStream
 the stream from which the data is read to create the
 certificate.
 @return an initialized certificate.
 @throws CertificateException
 if parsing problems are detected.
 */
- (JavaSecurityCertCertificate *)engineGenerateCertificateWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates and initializes a collection of certificates from the provided
 input stream.
 @param inStream
 the stream from where data is read to create the certificates.
 @return a collection of certificates.
 @throws CertificateException
 if parsing problems are detected.
 */
- (id<JavaUtilCollection>)engineGenerateCertificatesWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates a <code>CertPath</code> from the provided <code>InputStream</code>.
 The
 default encoding scheme is applied.
 @param inStream
 an input stream with encoded data.
 @return a <code>CertPath</code> initialized from the provided data.
 @throws CertificateException
 if parsing problems are detected.
 */
- (JavaSecurityCertCertPath *)engineGenerateCertPathWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates a <code>CertPath</code> (a certificate chain) from the given
 <code>inputStream</code>, assuming the given <code>encoding</code> from
 <code>engineGetCertPathEncodings()</code>.
 @throws CertificateException
 if parsing problems are detected.
 @throws UnsupportedOperationException
 if the provider does not implement this method.
 */
- (JavaSecurityCertCertPath *)engineGenerateCertPathWithJavaIoInputStream:(JavaIoInputStream *)inStream
                                                             withNSString:(NSString *)encoding;

/*!
 @brief Generates a <code>CertPath</code> from the provided list of certificates.
 The
 encoding is the default encoding.
 @param certificates
 the list containing certificates in a format supported by the
 <code>CertificateFactory</code>.
 @return a <code>CertPath</code> initialized from the provided data.
 @throws CertificateException
 if parsing problems are detected.
 @throws UnsupportedOperationException
 if the provider does not implement this method.
 */
- (JavaSecurityCertCertPath *)engineGenerateCertPathWithJavaUtilList:(id<JavaUtilList>)certificates;

/*!
 @brief Generates and initializes a <i>Certificate Revocation List</i> (CRL) from
 the provided input stream.
 @param inStream
 the stream from where data is read to create the CRL.
 @return an CRL instance.
 @throws CRLException
 if parsing problems are detected.
 */
- (JavaSecurityCertCRL *)engineGenerateCRLWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates and initializes a collection of <i>Certificate Revocation
 List</i> (CRL) from the provided input stream.
 @param inStream
 the stream from which the data is read to create the CRLs.
 @return a collection of CRLs.
 @throws CRLException
 if parsing problems are detected.
 */
- (id<JavaUtilCollection>)engineGenerateCRLsWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns an <code>Iterator</code> over the supported <code>CertPath</code> encodings
 (as Strings).
 The first element is the default encoding.
 @return an iterator over supported <code>CertPath</code> encodings (as
 Strings).
 */
- (id<JavaUtilIterator>)engineGetCertPathEncodings;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateFactorySpi)

FOUNDATION_EXPORT void JavaSecurityCertCertificateFactorySpi_init(JavaSecurityCertCertificateFactorySpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateFactorySpi)

#endif // _JavaSecurityCertCertificateFactorySpi_H_
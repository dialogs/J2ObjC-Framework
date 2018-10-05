#!/bin/bash
set -ev

j2objc_version=2.2
sha1_checksum=d003004f9291bee9e7b0ffef8cc150f263d3af53

echo "fetching j2objc dist"
curl -OL https://github.com/google/j2objc/releases/download/${j2objc_version}/j2objc-${j2objc_version}.zip
echo "${sha1_checksum}  j2objc-${j2objc_version}.zip" | shasum -c
unzip -o -q j2objc-${j2objc_version}.zip
mv j2objc-${j2objc_version} Distributive
rm j2objc-${j2objc_version}.zip

echo "Creating framework"
mkdir Frameworks
mkdir Frameworks/j2objc.framework
cp -a Scripts/Template/* Frameworks/j2objc.framework/
cp Distributive/lib/libjre_emul.a Frameworks/j2objc.framework/j2objc

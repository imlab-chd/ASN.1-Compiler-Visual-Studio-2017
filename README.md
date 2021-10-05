# Open Source ASN.1 Compiler(Visual Studio 2017)
 Open Source ASN.1 Compiler(Visual Studio 2017)

Knowledge about ASN.1, please see https://github.com/vlm/asn1c

Many difficulites to compile ASN.1 with Visual Studio 2017 since it does not support C99 very well.
To make it work, I have done the following steps:
1. Install LLVM-12.0.1-win64.exe(https://releases.llvm.org/download.html) on your machine to prepare the according compiler and linker from LLVM. 
2. install llvm.vsix(https://marketplace.visualstudio.com/items?itemName=LLVMExtensions.llvm-toolchain) for Visual Studio 2017 so that we can modify the platfrom toolkit from Visual Studio 2017 (v141) to LLVM in Property-->General.
3. Correct the left errors one by one, some only need to be commented out.

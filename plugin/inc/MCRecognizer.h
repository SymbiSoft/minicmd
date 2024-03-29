/*
 ============================================================================
 Name           : MiniCMD
 Author         : Just Fancy
 Project Home   : http://code.google.com/p/minicmd/
 ============================================================================
    MiniCMD, mini commander for Symbian OS phone
    Copyright (C) 2011  Just Fancy

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ============================================================================
 */
#ifndef __MINICMD_RECOGNIZER_H_
#define __MINICMD_RECOGNIZER_H_

#include <apmrec.h>

class CMCRecognizer : public CApaDataRecognizerType
{
public:
    static CApaDataRecognizerType* NewL();
    CMCRecognizer();

    static void RunMiniCMD();
    
public:
    TDataType SupportedDataTypeL(TInt aIndex) const;
};

#endif // __MINICMD_RECOGNIZER_H_

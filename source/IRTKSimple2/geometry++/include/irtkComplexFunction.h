/*=========================================================================

  Library   : Image Registration Toolkit (IRTK)
  Module    : $Id: irtkComplexFunction.h 2 2008-12-23 12:40:14Z dr $
  Copyright : Imperial College, Department of Computing
              Visual Information Processing (VIP), 2008 onwards
  Date      : $Date: 2008-12-23 12:40:14 +0000 (Tue, 23 Dec 2008) $
  Version   : $Revision: 2 $
  Changes   : $Author: dr $

=========================================================================*/

#ifndef _IRTKCOMPLEXFUNCTION_H

#define _IRTKCOMPLEXFUNCTION_H

/**

   Complex function class.

*/

class irtkComplexFunction : public irtkObject
{

public:

  /// Virtual destructor
  virtual ~irtkComplexFunction();

  /// Pure virtual evaluation function
  virtual complex<float> Evaluate(float x, float y, float z) = 0;

};

#endif

// python wrapper for vtkTensorGlyph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTensorGlyph.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTensorGlyph(PyObject *dict); }
extern "C" { PyObject *PyvtkTensorGlyph_ClassNew(); }


static PyObject *
PyvtkTensorGlyph_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTensorGlyph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorGlyph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTensorGlyph *tempr = vtkTensorGlyph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTensorGlyph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorGlyph::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTensorGlyph::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTensorGlyph::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkTensorGlyph::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0, temp1);
    }
    else
    {
      op->vtkTensorGlyph::SetSourceConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTensorGlyph_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTensorGlyph_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTensorGlyph_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkTensorGlyph_SetSourceConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return nullptr;
}


static PyObject *
PyvtkTensorGlyph_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkTensorGlyph::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOn();
    }
    else
    {
      op->vtkTensorGlyph::ScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOff();
    }
    else
    {
      op->vtkTensorGlyph::ScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkTensorGlyph::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetThreeGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreeGlyphs(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetThreeGlyphs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetThreeGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThreeGlyphs() :
      op->vtkTensorGlyph::GetThreeGlyphs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ThreeGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeGlyphsOn();
    }
    else
    {
      op->vtkTensorGlyph::ThreeGlyphsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ThreeGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeGlyphsOff();
    }
    else
    {
      op->vtkTensorGlyph::ThreeGlyphsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetSymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSymmetric(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetSymmetric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetSymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSymmetric() :
      op->vtkTensorGlyph::GetSymmetric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SymmetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SymmetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SymmetricOn();
    }
    else
    {
      op->vtkTensorGlyph::SymmetricOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SymmetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SymmetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SymmetricOff();
    }
    else
    {
      op->vtkTensorGlyph::SymmetricOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLength(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkTensorGlyph::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetExtractEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractEigenvalues(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetExtractEigenvalues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ExtractEigenvaluesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractEigenvaluesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractEigenvaluesOn();
    }
    else
    {
      op->vtkTensorGlyph::ExtractEigenvaluesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ExtractEigenvaluesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractEigenvaluesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractEigenvaluesOff();
    }
    else
    {
      op->vtkTensorGlyph::ExtractEigenvaluesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetExtractEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractEigenvalues() :
      op->vtkTensorGlyph::GetExtractEigenvalues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetColorGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorGlyphs(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetColorGlyphs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetColorGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorGlyphs() :
      op->vtkTensorGlyph::GetColorGlyphs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ColorGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsOn();
    }
    else
    {
      op->vtkTensorGlyph::ColorGlyphsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ColorGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsOff();
    }
    else
    {
      op->vtkTensorGlyph::ColorGlyphsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetColorModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorModeMinValue() :
      op->vtkTensorGlyph::GetColorModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetColorModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorModeMaxValue() :
      op->vtkTensorGlyph::GetColorModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkTensorGlyph::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetColorModeToScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToScalars();
    }
    else
    {
      op->vtkTensorGlyph::SetColorModeToScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetColorModeToEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToEigenvalues();
    }
    else
    {
      op->vtkTensorGlyph::SetColorModeToEigenvalues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetClampScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampScaling(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetClampScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetClampScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampScaling() :
      op->vtkTensorGlyph::GetClampScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ClampScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampScalingOn();
    }
    else
    {
      op->vtkTensorGlyph::ClampScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ClampScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampScalingOff();
    }
    else
    {
      op->vtkTensorGlyph::ClampScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetMaxScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxScaleFactor(temp0);
    }
    else
    {
      op->vtkTensorGlyph::SetMaxScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetMaxScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxScaleFactor() :
      op->vtkTensorGlyph::GetMaxScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTensorGlyph_Methods[] = {
  {"IsTypeOf", PyvtkTensorGlyph_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTensorGlyph_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTensorGlyph_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTensorGlyph\nC++: static vtkTensorGlyph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTensorGlyph_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTensorGlyph\nC++: vtkTensorGlyph *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTensorGlyph_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTensorGlyph_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceData", PyvtkTensorGlyph_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkPolyData) -> None\nC++: void SetSourceData(vtkPolyData *source)\n\nSpecify the geometry to copy to each point. Note that this method\ndoes not connect the pipeline. The algorithm will work on the\ninput data as it is without updating the producer of the data.\nSee SetSourceConnection for connecting the pipeline.\n"},
  {"GetSource", PyvtkTensorGlyph_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkTensorGlyph_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, id:int, algOutput:vtkAlgorithmOutput)\n    -> None\nC++: void SetSourceConnection(int id,\n    vtkAlgorithmOutput *algOutput)\nSetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {"SetScaling", PyvtkTensorGlyph_SetScaling, METH_VARARGS,
   "SetScaling(self, _arg:int) -> None\nC++: virtual void SetScaling(vtkTypeBool _arg)\n\nTurn on/off scaling of glyph with eigenvalues.\n"},
  {"GetScaling", PyvtkTensorGlyph_GetScaling, METH_VARARGS,
   "GetScaling(self) -> int\nC++: virtual vtkTypeBool GetScaling()\n\n"},
  {"ScalingOn", PyvtkTensorGlyph_ScalingOn, METH_VARARGS,
   "ScalingOn(self) -> None\nC++: virtual void ScalingOn()\n\n"},
  {"ScalingOff", PyvtkTensorGlyph_ScalingOff, METH_VARARGS,
   "ScalingOff(self) -> None\nC++: virtual void ScalingOff()\n\n"},
  {"SetScaleFactor", PyvtkTensorGlyph_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nSpecify scale factor to scale object by. (Scale factor always\naffects output even if scaling is off.)\n"},
  {"GetScaleFactor", PyvtkTensorGlyph_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetThreeGlyphs", PyvtkTensorGlyph_SetThreeGlyphs, METH_VARARGS,
   "SetThreeGlyphs(self, _arg:int) -> None\nC++: virtual void SetThreeGlyphs(vtkTypeBool _arg)\n\nTurn on/off drawing three glyphs\n"},
  {"GetThreeGlyphs", PyvtkTensorGlyph_GetThreeGlyphs, METH_VARARGS,
   "GetThreeGlyphs(self) -> int\nC++: virtual vtkTypeBool GetThreeGlyphs()\n\n"},
  {"ThreeGlyphsOn", PyvtkTensorGlyph_ThreeGlyphsOn, METH_VARARGS,
   "ThreeGlyphsOn(self) -> None\nC++: virtual void ThreeGlyphsOn()\n\n"},
  {"ThreeGlyphsOff", PyvtkTensorGlyph_ThreeGlyphsOff, METH_VARARGS,
   "ThreeGlyphsOff(self) -> None\nC++: virtual void ThreeGlyphsOff()\n\n"},
  {"SetSymmetric", PyvtkTensorGlyph_SetSymmetric, METH_VARARGS,
   "SetSymmetric(self, _arg:int) -> None\nC++: virtual void SetSymmetric(vtkTypeBool _arg)\n\nTurn on/off drawing a mirror of each glyph\n"},
  {"GetSymmetric", PyvtkTensorGlyph_GetSymmetric, METH_VARARGS,
   "GetSymmetric(self) -> int\nC++: virtual vtkTypeBool GetSymmetric()\n\n"},
  {"SymmetricOn", PyvtkTensorGlyph_SymmetricOn, METH_VARARGS,
   "SymmetricOn(self) -> None\nC++: virtual void SymmetricOn()\n\n"},
  {"SymmetricOff", PyvtkTensorGlyph_SymmetricOff, METH_VARARGS,
   "SymmetricOff(self) -> None\nC++: virtual void SymmetricOff()\n\n"},
  {"SetLength", PyvtkTensorGlyph_SetLength, METH_VARARGS,
   "SetLength(self, _arg:float) -> None\nC++: virtual void SetLength(double _arg)\n\nSet/Get the distance, along x, from the origin to the end of the\nsource glyph. It is used to draw the symmetric glyphs.\n"},
  {"GetLength", PyvtkTensorGlyph_GetLength, METH_VARARGS,
   "GetLength(self) -> float\nC++: virtual double GetLength()\n\n"},
  {"SetExtractEigenvalues", PyvtkTensorGlyph_SetExtractEigenvalues, METH_VARARGS,
   "SetExtractEigenvalues(self, _arg:int) -> None\nC++: virtual void SetExtractEigenvalues(vtkTypeBool _arg)\n\nTurn on/off extraction of eigenvalues from tensor.\n"},
  {"ExtractEigenvaluesOn", PyvtkTensorGlyph_ExtractEigenvaluesOn, METH_VARARGS,
   "ExtractEigenvaluesOn(self) -> None\nC++: virtual void ExtractEigenvaluesOn()\n\n"},
  {"ExtractEigenvaluesOff", PyvtkTensorGlyph_ExtractEigenvaluesOff, METH_VARARGS,
   "ExtractEigenvaluesOff(self) -> None\nC++: virtual void ExtractEigenvaluesOff()\n\n"},
  {"GetExtractEigenvalues", PyvtkTensorGlyph_GetExtractEigenvalues, METH_VARARGS,
   "GetExtractEigenvalues(self) -> int\nC++: virtual vtkTypeBool GetExtractEigenvalues()\n\n"},
  {"SetColorGlyphs", PyvtkTensorGlyph_SetColorGlyphs, METH_VARARGS,
   "SetColorGlyphs(self, _arg:int) -> None\nC++: virtual void SetColorGlyphs(vtkTypeBool _arg)\n\nTurn on/off coloring of glyph with input scalar data or\neigenvalues. If false, or input scalar data not present, then the\nscalars from the source object are passed through the filter.\n"},
  {"GetColorGlyphs", PyvtkTensorGlyph_GetColorGlyphs, METH_VARARGS,
   "GetColorGlyphs(self) -> int\nC++: virtual vtkTypeBool GetColorGlyphs()\n\n"},
  {"ColorGlyphsOn", PyvtkTensorGlyph_ColorGlyphsOn, METH_VARARGS,
   "ColorGlyphsOn(self) -> None\nC++: virtual void ColorGlyphsOn()\n\n"},
  {"ColorGlyphsOff", PyvtkTensorGlyph_ColorGlyphsOff, METH_VARARGS,
   "ColorGlyphsOff(self) -> None\nC++: virtual void ColorGlyphsOff()\n\n"},
  {"SetColorMode", PyvtkTensorGlyph_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\nSet the color mode to be used for the glyphs.  This can be set to\nuse the input scalars (default) or to use the eigenvalues at the\npoint.  If ThreeGlyphs is set and the eigenvalues are chosen for\ncoloring then each glyph is colored by the corresponding\neigenvalue and if not set the color corresponding to the largest\neigenvalue is chosen.  The recognized values are:\nCOLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1\n"},
  {"GetColorModeMinValue", PyvtkTensorGlyph_GetColorModeMinValue, METH_VARARGS,
   "GetColorModeMinValue(self) -> int\nC++: virtual int GetColorModeMinValue()\n\n"},
  {"GetColorModeMaxValue", PyvtkTensorGlyph_GetColorModeMaxValue, METH_VARARGS,
   "GetColorModeMaxValue(self) -> int\nC++: virtual int GetColorModeMaxValue()\n\n"},
  {"GetColorMode", PyvtkTensorGlyph_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetColorModeToScalars", PyvtkTensorGlyph_SetColorModeToScalars, METH_VARARGS,
   "SetColorModeToScalars(self) -> None\nC++: void SetColorModeToScalars()\n\n"},
  {"SetColorModeToEigenvalues", PyvtkTensorGlyph_SetColorModeToEigenvalues, METH_VARARGS,
   "SetColorModeToEigenvalues(self) -> None\nC++: void SetColorModeToEigenvalues()\n\n"},
  {"SetClampScaling", PyvtkTensorGlyph_SetClampScaling, METH_VARARGS,
   "SetClampScaling(self, _arg:int) -> None\nC++: virtual void SetClampScaling(vtkTypeBool _arg)\n\nTurn on/off scalar clamping. If scalar clamping is on, the ivar\nMaxScaleFactor is used to control the maximum scale factor. (This\nis useful to prevent uncontrolled scaling near singularities.)\n"},
  {"GetClampScaling", PyvtkTensorGlyph_GetClampScaling, METH_VARARGS,
   "GetClampScaling(self) -> int\nC++: virtual vtkTypeBool GetClampScaling()\n\n"},
  {"ClampScalingOn", PyvtkTensorGlyph_ClampScalingOn, METH_VARARGS,
   "ClampScalingOn(self) -> None\nC++: virtual void ClampScalingOn()\n\n"},
  {"ClampScalingOff", PyvtkTensorGlyph_ClampScalingOff, METH_VARARGS,
   "ClampScalingOff(self) -> None\nC++: virtual void ClampScalingOff()\n\n"},
  {"SetMaxScaleFactor", PyvtkTensorGlyph_SetMaxScaleFactor, METH_VARARGS,
   "SetMaxScaleFactor(self, _arg:float) -> None\nC++: virtual void SetMaxScaleFactor(double _arg)\n\nSet/Get the maximum allowable scale factor. This value is\ncompared to the combination of the scale factor times the\neigenvalue. If less, the scale factor is reset to the\nMaxScaleFactor. The boolean ClampScaling has to be \"on\" for this\nto work.\n"},
  {"GetMaxScaleFactor", PyvtkTensorGlyph_GetMaxScaleFactor, METH_VARARGS,
   "GetMaxScaleFactor(self) -> float\nC++: virtual double GetMaxScaleFactor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTensorGlyph_Doc =
  "vtkTensorGlyph - scale and orient glyph(s) according to eigenvalues\nand eigenvectors of symmetrical part of tensor\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTensorGlyph is a filter that copies a geometric representation\n"
  "(specified as polygonal data) to every input point. The geometric\n"
  "representation, or glyph, can be scaled and/or rotated according to\n"
  "the tensor at the input point. Scaling and rotation is controlled by\n"
  "the eigenvalues/eigenvectors of the symmetrical part of the tensor as\n"
  "follows: For each tensor, the eigenvalues (and associated\n"
  "eigenvectors) are sorted to determine the major, medium, and minor\n"
  "eigenvalues/eigenvectors. The eigenvalue decomposition only makes\n"
  "sense for symmetric tensors, hence the need to only consider the\n"
  "symmetric part of the tensor, which is 1/2 (T + T.transposed()).\n\n"
  "If the boolean variable ThreeGlyphs is not set the major eigenvalue\n"
  "scales the glyph in the x-direction, the medium in the y-direction,\n"
  "and the minor in the z-direction. Then, the glyph is rotated so that\n"
  "the glyph's local x-axis lies along the major eigenvector, y-axis\n"
  "along the medium eigenvector, and z-axis along the minor.\n\n"
  "If the boolean variable ThreeGlyphs is set three glyphs are produced,\n"
  "each of them oriented along an eigenvector and scaled according to\n"
  "the corresponding eigenvector.\n\n"
  "If the boolean variable Symmetric is set each glyph is mirrored (2 or\n"
  "6 glyphs will be produced)\n\n"
  "The x-axis of the source glyph will correspond to the eigenvector on\n"
  "output. Point (0,0,0) in the source will be placed in the data point.\n"
  "Variable Length will normally correspond to the distance from the\n"
  "origin to the tip of the source glyph along the x-axis, but can be\n"
  "changed to produce other results when Symmetric is on, e.g. glyphs\n"
  "that do not touch or that overlap.\n\n"
  "Please note that when Symmetric is false it will generally be better\n"
  "to place the source glyph from (-0.5,0,0) to (0.5,0,0), i.e. centered\n"
  "at the origin. When symmetric is true the placement from (0,0,0) to\n"
  "(1,0,0) will generally be more convenient.\n\n"
  "A scale factor is provided to control the amount of scaling. Also,\n"
  "you can turn off scaling completely if desired. The boolean variable\n"
  "ClampScaling controls the maximum scaling (in conjunction with\n"
  "MaxScaleFactor.) This is useful in certain applications where\n"
  "singularities or large order of magnitude differences exist in the\n"
  "eigenvalues.\n\n"
  "If the boolean variable ColorGlyphs is set to true the glyphs are\n"
  "colored.  The glyphs can be colored using the input scalars\n"
  "(SetColorModeToScalars), which is the default, or colored using the\n"
  "eigenvalues (SetColorModeToEigenvalues).\n\n"
  "Another instance variable, ExtractEigenvalues, has been provided to\n"
  "control extraction of eigenvalues/eigenvectors. If this boolean is\n"
  "false, then eigenvalues/eigenvectors are not extracted, and the\n"
  "columns of the tensor are taken as the eigenvectors (the norm of\n"
  "column, always positive, is the eigenvalue).  This allows additional\n"
  "capability over the vtkGlyph3D object. That is, the glyph can be\n"
  "oriented in three directions instead of one.\n\n"
  "@par Thanks: Thanks to Jose Paulo Moitinho de Almeida for\n"
  "enhancements.\n\n"
  "@sa\n"
  "vtkGlyph3D vtkPointLoad vtkHyperStreamline\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTensorGlyph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkTensorGlyph", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkTensorGlyph_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkTensorGlyph_StaticNew()
{
  return vtkTensorGlyph::New();
}

PyObject *PyvtkTensorGlyph_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTensorGlyph_Type, PyvtkTensorGlyph_Methods,
    "vtkTensorGlyph",
 &PyvtkTensorGlyph_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "COLOR_BY_SCALARS", vtkTensorGlyph::COLOR_BY_SCALARS },
        { "COLOR_BY_EIGENVALUES", vtkTensorGlyph::COLOR_BY_EIGENVALUES },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTensorGlyph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTensorGlyph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTensorGlyph", o) != 0)
  {
    Py_DECREF(o);
  }

}


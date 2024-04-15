// python wrapper for vtkMINCImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMINCImageWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMINCImageWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkMINCImageWriter_ClassNew(); }


static PyObject *
PyvtkMINCImageWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMINCImageWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMINCImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMINCImageWriter *tempr = vtkMINCImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMINCImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMINCImageWriter::NewInstance());

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
PyvtkMINCImageWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMINCImageWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMINCImageWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkMINCImageWriter::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkMINCImageWriter::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkMINCImageWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkMINCImageWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetDirectionCosines(temp0);
    }
    else
    {
      op->vtkMINCImageWriter::SetDirectionCosines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetDirectionCosines() :
      op->vtkMINCImageWriter::GetDirectionCosines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRescaleSlope(temp0);
    }
    else
    {
      op->vtkMINCImageWriter::SetRescaleSlope(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleSlope() :
      op->vtkMINCImageWriter::GetRescaleSlope());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRescaleIntercept(temp0);
    }
    else
    {
      op->vtkMINCImageWriter::SetRescaleIntercept(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleIntercept() :
      op->vtkMINCImageWriter::GetRescaleIntercept());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetImageAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  vtkMINCImageAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMINCImageAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetImageAttributes(temp0);
    }
    else
    {
      op->vtkMINCImageWriter::SetImageAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetImageAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMINCImageAttributes *tempr = (ap.IsBound() ?
      op->GetImageAttributes() :
      op->vtkMINCImageWriter::GetImageAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetStrictValidation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrictValidation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStrictValidation(temp0);
    }
    else
    {
      op->vtkMINCImageWriter::SetStrictValidation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_StrictValidationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StrictValidationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StrictValidationOn();
    }
    else
    {
      op->vtkMINCImageWriter::StrictValidationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_StrictValidationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StrictValidationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StrictValidationOff();
    }
    else
    {
      op->vtkMINCImageWriter::StrictValidationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetStrictValidation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrictValidation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStrictValidation() :
      op->vtkMINCImageWriter::GetStrictValidation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetHistoryAddition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistoryAddition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistoryAddition(temp0);
    }
    else
    {
      op->vtkMINCImageWriter::SetHistoryAddition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetHistoryAddition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistoryAddition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHistoryAddition() :
      op->vtkMINCImageWriter::GetHistoryAddition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMINCImageWriter_Methods[] = {
  {"IsTypeOf", PyvtkMINCImageWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMINCImageWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMINCImageWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMINCImageWriter\nC++: static vtkMINCImageWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMINCImageWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMINCImageWriter\nC++: vtkMINCImageWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMINCImageWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMINCImageWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFileExtensions", PyvtkMINCImageWriter_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: virtual const char *GetFileExtensions()\n\nGet the extension for this file format.\n"},
  {"GetDescriptiveName", PyvtkMINCImageWriter_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {"SetFileName", PyvtkMINCImageWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, name:str) -> None\nC++: void SetFileName(const char *name) override;\n\nSet the file name.\n"},
  {"Write", PyvtkMINCImageWriter_Write, METH_VARARGS,
   "Write(self) -> None\nC++: void Write() override;\n\nWrite the data.  This will attempt to stream the data\nslice-by-slice through the pipeline and out to the file, unless\nthe whole extent of the input has already been updated.\n"},
  {"SetDirectionCosines", PyvtkMINCImageWriter_SetDirectionCosines, METH_VARARGS,
   "SetDirectionCosines(self, matrix:vtkMatrix4x4) -> None\nC++: virtual void SetDirectionCosines(vtkMatrix4x4 *matrix)\n\nSet a matrix that describes the orientation of the data.  The\nthree columns of this matrix should give the unit-vector\ndirections for the VTK x, y and z dimensions respectively. The\nwriter will use this information to determine how to map the VTK\ndimensions to the canonical MINC dimensions, and if necessary,\nthe writer will re-order one or more dimensions back-to-front to\nensure that no MINC dimension ends up with a direction cosines\nvector whose dot product with the canonical unit vector for that\ndimension is negative.\n"},
  {"GetDirectionCosines", PyvtkMINCImageWriter_GetDirectionCosines, METH_VARARGS,
   "GetDirectionCosines(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetDirectionCosines()\n\n"},
  {"SetRescaleSlope", PyvtkMINCImageWriter_SetRescaleSlope, METH_VARARGS,
   "SetRescaleSlope(self, _arg:float) -> None\nC++: virtual void SetRescaleSlope(double _arg)\n\nSet the slope and intercept for rescaling the intensities.  The\ndefault values are zero, which indicates to the reader that no\nrescaling is to be performed.\n"},
  {"GetRescaleSlope", PyvtkMINCImageWriter_GetRescaleSlope, METH_VARARGS,
   "GetRescaleSlope(self) -> float\nC++: virtual double GetRescaleSlope()\n\n"},
  {"SetRescaleIntercept", PyvtkMINCImageWriter_SetRescaleIntercept, METH_VARARGS,
   "SetRescaleIntercept(self, _arg:float) -> None\nC++: virtual void SetRescaleIntercept(double _arg)\n\n"},
  {"GetRescaleIntercept", PyvtkMINCImageWriter_GetRescaleIntercept, METH_VARARGS,
   "GetRescaleIntercept(self) -> float\nC++: virtual double GetRescaleIntercept()\n\n"},
  {"SetImageAttributes", PyvtkMINCImageWriter_SetImageAttributes, METH_VARARGS,
   "SetImageAttributes(self, attributes:vtkMINCImageAttributes)\n    -> None\nC++: virtual void SetImageAttributes(\n    vtkMINCImageAttributes *attributes)\n\nSet the image attributes, which contain patient information and\nother useful metadata.\n"},
  {"GetImageAttributes", PyvtkMINCImageWriter_GetImageAttributes, METH_VARARGS,
   "GetImageAttributes(self) -> vtkMINCImageAttributes\nC++: virtual vtkMINCImageAttributes *GetImageAttributes()\n\n"},
  {"SetStrictValidation", PyvtkMINCImageWriter_SetStrictValidation, METH_VARARGS,
   "SetStrictValidation(self, _arg:int) -> None\nC++: virtual void SetStrictValidation(vtkTypeBool _arg)\n\nSet whether to validate that all variable attributes that have\nbeen set are ones that are listed in the MINC standard.\n"},
  {"StrictValidationOn", PyvtkMINCImageWriter_StrictValidationOn, METH_VARARGS,
   "StrictValidationOn(self) -> None\nC++: virtual void StrictValidationOn()\n\n"},
  {"StrictValidationOff", PyvtkMINCImageWriter_StrictValidationOff, METH_VARARGS,
   "StrictValidationOff(self) -> None\nC++: virtual void StrictValidationOff()\n\n"},
  {"GetStrictValidation", PyvtkMINCImageWriter_GetStrictValidation, METH_VARARGS,
   "GetStrictValidation(self) -> int\nC++: virtual vtkTypeBool GetStrictValidation()\n\n"},
  {"SetHistoryAddition", PyvtkMINCImageWriter_SetHistoryAddition, METH_VARARGS,
   "SetHistoryAddition(self, _arg:str) -> None\nC++: virtual void SetHistoryAddition(const char *_arg)\n\nSet a string value to append to the history of the file.  This\nstring should describe, briefly, how the file was processed.\n"},
  {"GetHistoryAddition", PyvtkMINCImageWriter_GetHistoryAddition, METH_VARARGS,
   "GetHistoryAddition(self) -> str\nC++: virtual char *GetHistoryAddition()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMINCImageWriter_Doc =
  "vtkMINCImageWriter - A writer for MINC files.\n\n"
  "Superclass: vtkImageWriter\n\n"
  "MINC is a NetCDF-based medical image file format that was developed\n"
  "at the Montreal Neurological Institute in 1992. The data is written\n"
  "slice-by-slice, and this writer is therefore suitable for streaming\n"
  "MINC data that is larger than the memory size through VTK.  This\n"
  "writer can also produce files with up to 4 dimensions, where the\n"
  "fourth dimension is provided by using AddInput() to specify multiple\n"
  "input data sets.  If you want to set header information for the file,\n"
  "you must supply a vtkMINCImageAttributes\n"
  "@sa\n"
  "vtkMINCImageReader vtkMINCImageAttributes@par Thanks: Thanks to David\n"
  "Gobbi for writing this class and Atamai Inc. for contributing it to\n"
  "VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMINCImageWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMINC.vtkMINCImageWriter", // tp_name
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
  PyvtkMINCImageWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMINCImageWriter_StaticNew()
{
  return vtkMINCImageWriter::New();
}

PyObject *PyvtkMINCImageWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMINCImageWriter_Type, PyvtkMINCImageWriter_Methods,
    "vtkMINCImageWriter",
 &PyvtkMINCImageWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMINCImageWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMINCImageWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMINCImageWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkMINCImageReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMINCImageReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMINCImageReader(PyObject *dict); }
extern "C" { PyObject *PyvtkMINCImageReader_ClassNew(); }


static PyObject *
PyvtkMINCImageReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMINCImageReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMINCImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMINCImageReader *tempr = vtkMINCImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMINCImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMINCImageReader::NewInstance());

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
PyvtkMINCImageReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMINCImageReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMINCImageReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      op->vtkMINCImageReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkMINCImageReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkMINCImageReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkMINCImageReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetDirectionCosines() :
      op->vtkMINCImageReader::GetDirectionCosines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleSlope() :
      op->vtkMINCImageReader::GetRescaleSlope());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleIntercept() :
      op->vtkMINCImageReader::GetRescaleIntercept());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_SetRescaleRealValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleRealValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRescaleRealValues(temp0);
    }
    else
    {
      op->vtkMINCImageReader::SetRescaleRealValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_RescaleRealValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleRealValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RescaleRealValuesOn();
    }
    else
    {
      op->vtkMINCImageReader::RescaleRealValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_RescaleRealValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleRealValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RescaleRealValuesOff();
    }
    else
    {
      op->vtkMINCImageReader::RescaleRealValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetRescaleRealValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleRealValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRescaleRealValues() :
      op->vtkMINCImageReader::GetRescaleRealValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataRange() :
      op->vtkMINCImageReader::GetDataRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMINCImageReader_GetDataRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataRange(temp0);
    }
    else
    {
      op->vtkMINCImageReader::GetDataRange(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMINCImageReader_GetDataRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMINCImageReader_GetDataRange_s1(self, args);
    case 1:
      return PyvtkMINCImageReader_GetDataRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataRange");
  return nullptr;
}


static PyObject *
PyvtkMINCImageReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkMINCImageReader::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkMINCImageReader::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkMINCImageReader::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetImageAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMINCImageAttributes *tempr = (ap.IsBound() ?
      op->GetImageAttributes() :
      op->vtkMINCImageReader::GetImageAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMINCImageReader_Methods[] = {
  {"IsTypeOf", PyvtkMINCImageReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMINCImageReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMINCImageReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMINCImageReader\nC++: static vtkMINCImageReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMINCImageReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMINCImageReader\nC++: vtkMINCImageReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMINCImageReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMINCImageReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkMINCImageReader_SetFileName, METH_VARARGS,
   "SetFileName(self, name:str) -> None\nC++: void SetFileName(const char *name) override;\n\nSet the file name.\n"},
  {"GetFileExtensions", PyvtkMINCImageReader_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: const char *GetFileExtensions() override;\n\nGet the extension for this file format.\n"},
  {"GetDescriptiveName", PyvtkMINCImageReader_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: const char *GetDescriptiveName() override;\n\nGet the name of this file format.\n"},
  {"CanReadFile", PyvtkMINCImageReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, name:str) -> int\nC++: int CanReadFile(const char *name) override;\n\nTest whether the specified file can be read.\n"},
  {"GetDirectionCosines", PyvtkMINCImageReader_GetDirectionCosines, METH_VARARGS,
   "GetDirectionCosines(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetDirectionCosines()\n\nGet a matrix that describes the orientation of the data. The\nthree columns of the matrix are the direction cosines for the x,\ny and z dimensions respectively.\n"},
  {"GetRescaleSlope", PyvtkMINCImageReader_GetRescaleSlope, METH_VARARGS,
   "GetRescaleSlope(self) -> float\nC++: virtual double GetRescaleSlope()\n\nGet the slope and intercept for rescaling the scalar values to\nreal data values.  To convert scalar values to real values, use\nthe equation y = x*RescaleSlope + RescaleIntercept.\n"},
  {"GetRescaleIntercept", PyvtkMINCImageReader_GetRescaleIntercept, METH_VARARGS,
   "GetRescaleIntercept(self) -> float\nC++: virtual double GetRescaleIntercept()\n\n"},
  {"SetRescaleRealValues", PyvtkMINCImageReader_SetRescaleRealValues, METH_VARARGS,
   "SetRescaleRealValues(self, _arg:int) -> None\nC++: virtual void SetRescaleRealValues(vtkTypeBool _arg)\n\nRescale real data values to float.  If this is done, the\nRescaleSlope and RescaleIntercept will be set to 1 and 0\nrespectively.  This is off by default.\n"},
  {"RescaleRealValuesOn", PyvtkMINCImageReader_RescaleRealValuesOn, METH_VARARGS,
   "RescaleRealValuesOn(self) -> None\nC++: virtual void RescaleRealValuesOn()\n\n"},
  {"RescaleRealValuesOff", PyvtkMINCImageReader_RescaleRealValuesOff, METH_VARARGS,
   "RescaleRealValuesOff(self) -> None\nC++: virtual void RescaleRealValuesOff()\n\n"},
  {"GetRescaleRealValues", PyvtkMINCImageReader_GetRescaleRealValues, METH_VARARGS,
   "GetRescaleRealValues(self) -> int\nC++: virtual vtkTypeBool GetRescaleRealValues()\n\n"},
  {"GetDataRange", PyvtkMINCImageReader_GetDataRange, METH_VARARGS,
   "GetDataRange(self) -> (float, float)\nC++: virtual double *GetDataRange()\nGetDataRange(self, range:[float, float]) -> None\nC++: virtual void GetDataRange(double range[2])\n\nGet the scalar range of the output from the information in the\nfile header.  This is more efficient that computing the scalar\nrange, but in some cases the MINC file stores an incorrect\nvalid_range and the DataRange will be incorrect.\n"},
  {"GetNumberOfTimeSteps", PyvtkMINCImageReader_GetNumberOfTimeSteps, METH_VARARGS,
   "GetNumberOfTimeSteps(self) -> int\nC++: virtual int GetNumberOfTimeSteps()\n\nGet the number of time steps in the file.\n"},
  {"SetTimeStep", PyvtkMINCImageReader_SetTimeStep, METH_VARARGS,
   "SetTimeStep(self, _arg:int) -> None\nC++: virtual void SetTimeStep(int _arg)\n\nSet the time step to read.\n"},
  {"GetTimeStep", PyvtkMINCImageReader_GetTimeStep, METH_VARARGS,
   "GetTimeStep(self) -> int\nC++: virtual int GetTimeStep()\n\n"},
  {"GetImageAttributes", PyvtkMINCImageReader_GetImageAttributes, METH_VARARGS,
   "GetImageAttributes(self) -> vtkMINCImageAttributes\nC++: virtual vtkMINCImageAttributes *GetImageAttributes()\n\nGet the image attributes, which contain patient information and\nother useful metadata.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMINCImageReader_Doc =
  "vtkMINCImageReader - A reader for MINC files.\n\n"
  "Superclass: vtkImageReader2\n\n"
  "MINC is a NetCDF-based medical image file format that was developed\n"
  "at the Montreal Neurological Institute in 1992. This class will read\n"
  "a MINC file into VTK, rearranging the data to match the VTK x, y, and\n"
  "z dimensions, and optionally rescaling real-valued data to VTK_FLOAT\n"
  "if RescaleRealValuesOn() is set. If RescaleRealValues is off, then\n"
  "the data will be stored in its original data type and the\n"
  "GetRescaleSlope(), GetRescaleIntercept() method can be used to\n"
  "retrieve global rescaling parameters. If the original file had a time\n"
  "dimension, the SetTimeStep() method can be used to specify a time\n"
  "step to read. All of the original header information can be accessed\n"
  "though the GetImageAttributes() method.\n"
  "@sa\n"
  "vtkMINCImageWriter vtkMINCImageAttributes@par Thanks: Thanks to David\n"
  "Gobbi for writing this class and Atamai Inc. for contributing it to\n"
  "VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMINCImageReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMINC.vtkMINCImageReader", // tp_name
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
  PyvtkMINCImageReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMINCImageReader_StaticNew()
{
  return vtkMINCImageReader::New();
}

PyObject *PyvtkMINCImageReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMINCImageReader_Type, PyvtkMINCImageReader_Methods,
    "vtkMINCImageReader",
 &PyvtkMINCImageReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageReader2");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMINCImageReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMINCImageReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMINCImageReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


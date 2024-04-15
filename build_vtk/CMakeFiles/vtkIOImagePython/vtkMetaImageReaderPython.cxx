// python wrapper for vtkMetaImageReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMetaImageReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMetaImageReader(PyObject *dict); }
extern "C" { PyObject *PyvtkMetaImageReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static PyObject *
PyvtkMetaImageReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMetaImageReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMetaImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMetaImageReader *tempr = vtkMetaImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMetaImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMetaImageReader::NewInstance());

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
PyvtkMetaImageReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMetaImageReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMetaImageReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkMetaImageReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkMetaImageReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetPixelSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPixelSpacing() :
      op->vtkMetaImageReader::GetPixelSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkMetaImageReader::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkMetaImageReader::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetImagePositionPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImagePositionPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetImagePositionPatient() :
      op->vtkMetaImageReader::GetImagePositionPatient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkMetaImageReader::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetPixelRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelRepresentation() :
      op->vtkMetaImageReader::GetPixelRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkMetaImageReader::GetDataByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleSlope() :
      op->vtkMetaImageReader::GetRescaleSlope());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetRescaleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleOffset() :
      op->vtkMetaImageReader::GetRescaleOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetBitsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBitsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBitsAllocated() :
      op->vtkMetaImageReader::GetBitsAllocated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetDistanceUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDistanceUnits() :
      op->vtkMetaImageReader::GetDistanceUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetAnatomicalOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnatomicalOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAnatomicalOrientation() :
      op->vtkMetaImageReader::GetAnatomicalOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetGantryAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGantryAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGantryAngle() :
      op->vtkMetaImageReader::GetGantryAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPatientName() :
      op->vtkMetaImageReader::GetPatientName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPatientID() :
      op->vtkMetaImageReader::GetPatientID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDate() :
      op->vtkMetaImageReader::GetDate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSeries() :
      op->vtkMetaImageReader::GetSeries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetImageNumber() :
      op->vtkMetaImageReader::GetImageNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetModality() :
      op->vtkMetaImageReader::GetModality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetStudyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStudyID() :
      op->vtkMetaImageReader::GetStudyID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetStudyUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStudyUID() :
      op->vtkMetaImageReader::GetStudyUID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetTransferSyntaxUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferSyntaxUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTransferSyntaxUID() :
      op->vtkMetaImageReader::GetTransferSyntaxUID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkMetaImageReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMetaImageReader_Methods[] = {
  {"IsTypeOf", PyvtkMetaImageReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMetaImageReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMetaImageReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMetaImageReader\nC++: static vtkMetaImageReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMetaImageReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMetaImageReader\nC++: vtkMetaImageReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMetaImageReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMetaImageReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFileExtensions", PyvtkMetaImageReader_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: const char *GetFileExtensions() override;\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {"GetDescriptiveName", PyvtkMetaImageReader_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: const char *GetDescriptiveName() override;\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {"GetPixelSpacing", PyvtkMetaImageReader_GetPixelSpacing, METH_VARARGS,
   "GetPixelSpacing(self) -> Pointer\nC++: double *GetPixelSpacing()\n\n"},
  {"GetWidth", PyvtkMetaImageReader_GetWidth, METH_VARARGS,
   "GetWidth(self) -> int\nC++: int GetWidth()\n\n"},
  {"GetHeight", PyvtkMetaImageReader_GetHeight, METH_VARARGS,
   "GetHeight(self) -> int\nC++: int GetHeight()\n\n"},
  {"GetImagePositionPatient", PyvtkMetaImageReader_GetImagePositionPatient, METH_VARARGS,
   "GetImagePositionPatient(self) -> Pointer\nC++: double *GetImagePositionPatient()\n\n"},
  {"GetNumberOfComponents", PyvtkMetaImageReader_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: int GetNumberOfComponents()\n\n"},
  {"GetPixelRepresentation", PyvtkMetaImageReader_GetPixelRepresentation, METH_VARARGS,
   "GetPixelRepresentation(self) -> int\nC++: int GetPixelRepresentation()\n\n"},
  {"GetDataByteOrder", PyvtkMetaImageReader_GetDataByteOrder, METH_VARARGS,
   "GetDataByteOrder(self) -> int\nC++: int GetDataByteOrder() override;\n\n"},
  {"GetRescaleSlope", PyvtkMetaImageReader_GetRescaleSlope, METH_VARARGS,
   "GetRescaleSlope(self) -> float\nC++: virtual double GetRescaleSlope()\n\n"},
  {"GetRescaleOffset", PyvtkMetaImageReader_GetRescaleOffset, METH_VARARGS,
   "GetRescaleOffset(self) -> float\nC++: virtual double GetRescaleOffset()\n\n"},
  {"GetBitsAllocated", PyvtkMetaImageReader_GetBitsAllocated, METH_VARARGS,
   "GetBitsAllocated(self) -> int\nC++: virtual int GetBitsAllocated()\n\n"},
  {"GetDistanceUnits", PyvtkMetaImageReader_GetDistanceUnits, METH_VARARGS,
   "GetDistanceUnits(self) -> str\nC++: virtual char *GetDistanceUnits()\n\n"},
  {"GetAnatomicalOrientation", PyvtkMetaImageReader_GetAnatomicalOrientation, METH_VARARGS,
   "GetAnatomicalOrientation(self) -> str\nC++: virtual char *GetAnatomicalOrientation()\n\n"},
  {"GetGantryAngle", PyvtkMetaImageReader_GetGantryAngle, METH_VARARGS,
   "GetGantryAngle(self) -> float\nC++: virtual double GetGantryAngle()\n\n"},
  {"GetPatientName", PyvtkMetaImageReader_GetPatientName, METH_VARARGS,
   "GetPatientName(self) -> str\nC++: virtual char *GetPatientName()\n\n"},
  {"GetPatientID", PyvtkMetaImageReader_GetPatientID, METH_VARARGS,
   "GetPatientID(self) -> str\nC++: virtual char *GetPatientID()\n\n"},
  {"GetDate", PyvtkMetaImageReader_GetDate, METH_VARARGS,
   "GetDate(self) -> str\nC++: virtual char *GetDate()\n\n"},
  {"GetSeries", PyvtkMetaImageReader_GetSeries, METH_VARARGS,
   "GetSeries(self) -> str\nC++: virtual char *GetSeries()\n\n"},
  {"GetImageNumber", PyvtkMetaImageReader_GetImageNumber, METH_VARARGS,
   "GetImageNumber(self) -> str\nC++: virtual char *GetImageNumber()\n\n"},
  {"GetModality", PyvtkMetaImageReader_GetModality, METH_VARARGS,
   "GetModality(self) -> str\nC++: virtual char *GetModality()\n\n"},
  {"GetStudyID", PyvtkMetaImageReader_GetStudyID, METH_VARARGS,
   "GetStudyID(self) -> str\nC++: virtual char *GetStudyID()\n\n"},
  {"GetStudyUID", PyvtkMetaImageReader_GetStudyUID, METH_VARARGS,
   "GetStudyUID(self) -> str\nC++: virtual char *GetStudyUID()\n\n"},
  {"GetTransferSyntaxUID", PyvtkMetaImageReader_GetTransferSyntaxUID, METH_VARARGS,
   "GetTransferSyntaxUID(self) -> str\nC++: virtual char *GetTransferSyntaxUID()\n\n"},
  {"CanReadFile", PyvtkMetaImageReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, name:str) -> int\nC++: int CanReadFile(const char *name) override;\n\nTest whether the file with the given name can be read by this\nreader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMetaImageReader_Doc =
  "vtkMetaImageReader - read binary UNC meta image data\n\n"
  "Superclass: vtkImageReader2\n\n"
  "One of the formats for which a reader is already available in the\n"
  "toolkit is the MetaImage file format. This is a fairly simple yet\n"
  "powerful format consisting of a text header and a binary data\n"
  "section. The following instructions describe how you can write a\n"
  "MetaImage header for the data that you download from the BrainWeb\n"
  "page.\n\n"
  "The minimal structure of the MetaImage header is the following:\n\n\n"
  "   NDims = 3\n"
  "   DimSize = 181 217 181\n"
  "   ElementType = MET_UCHAR\n"
  "   ElementSpacing = 1.0 1.0 1.0\n"
  "   ElementByteOrderMSB = False\n"
  "   ElementDataFile = brainweb1.raw\n\n"
  "* NDims indicate that this is a 3D image. ITK can handle images of\n"
  "  arbitrary dimension.\n"
  "* DimSize indicates the size of the volume in pixels along each\n"
  "  direction.\n"
  "* ElementType indicate the primitive type used for pixels. In this\n"
  "  case is \"unsigned char\", implying that the data is digitized in 8\n"
  "  bits / pixel.\n"
  "* ElementSpacing indicates the physical separation between the center\n"
  "of one pixel and the center of the next pixel along each direction in\n"
  "space. The units used are millimeters.\n"
  "* ElementByteOrderMSB indicates is the data is encoded in little or\n"
  "  big endian order. You might want to play with this value when\n"
  "  moving data between different computer platforms.\n"
  "* ElementDataFile is the name of the file containing the raw binary\n"
  "  data of the image. This file must be in the same directory as the\n"
  "  header.\n\n"
  "MetaImage headers are expected to have extension: \".mha\" or \".mhd\"\n\n"
  "Once you write this header text file, it should be possible to read\n"
  "the image into your ITK based application using the\n"
  "itk::FileIOToImageFilter class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMetaImageReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkMetaImageReader", // tp_name
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
  PyvtkMetaImageReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMetaImageReader_StaticNew()
{
  return vtkMetaImageReader::New();
}

PyObject *PyvtkMetaImageReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMetaImageReader_Type, PyvtkMetaImageReader_Methods,
    "vtkMetaImageReader",
 &PyvtkMetaImageReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMetaImageReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMetaImageReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMetaImageReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


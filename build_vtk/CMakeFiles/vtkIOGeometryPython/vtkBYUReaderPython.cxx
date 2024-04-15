// python wrapper for vtkBYUReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBYUReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBYUReader(PyObject *dict); }
extern "C" { PyObject *PyvtkBYUReader_ClassNew(); }


static PyObject *
PyvtkBYUReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBYUReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBYUReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBYUReader *tempr = vtkBYUReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBYUReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBYUReader::NewInstance());

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
PyvtkBYUReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBYUReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBYUReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometryFileName(temp0);
    }
    else
    {
      op->vtkBYUReader::SetGeometryFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryFileName() :
      op->vtkBYUReader::GetGeometryFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

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
      op->vtkBYUReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkBYUReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementFileName(temp0);
    }
    else
    {
      op->vtkBYUReader::SetDisplacementFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementFileName() :
      op->vtkBYUReader::GetDisplacementFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarFileName(temp0);
    }
    else
    {
      op->vtkBYUReader::SetScalarFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarFileName() :
      op->vtkBYUReader::GetScalarFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureFileName(temp0);
    }
    else
    {
      op->vtkBYUReader::SetTextureFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTextureFileName() :
      op->vtkBYUReader::GetTextureFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadDisplacement(temp0);
    }
    else
    {
      op->vtkBYUReader::SetReadDisplacement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadDisplacement() :
      op->vtkBYUReader::GetReadDisplacement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadDisplacementOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadDisplacementOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadDisplacementOn();
    }
    else
    {
      op->vtkBYUReader::ReadDisplacementOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadDisplacementOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadDisplacementOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadDisplacementOff();
    }
    else
    {
      op->vtkBYUReader::ReadDisplacementOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadScalar(temp0);
    }
    else
    {
      op->vtkBYUReader::SetReadScalar(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadScalar() :
      op->vtkBYUReader::GetReadScalar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadScalarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadScalarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadScalarOn();
    }
    else
    {
      op->vtkBYUReader::ReadScalarOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadScalarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadScalarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadScalarOff();
    }
    else
    {
      op->vtkBYUReader::ReadScalarOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadTexture(temp0);
    }
    else
    {
      op->vtkBYUReader::SetReadTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadTexture() :
      op->vtkBYUReader::GetReadTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadTextureOn();
    }
    else
    {
      op->vtkBYUReader::ReadTextureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadTextureOff();
    }
    else
    {
      op->vtkBYUReader::ReadTextureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetPartNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPartNumber(temp0);
    }
    else
    {
      op->vtkBYUReader::SetPartNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumberMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumberMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartNumberMinValue() :
      op->vtkBYUReader::GetPartNumberMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumberMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumberMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartNumberMaxValue() :
      op->vtkBYUReader::GetPartNumberMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartNumber() :
      op->vtkBYUReader::GetPartNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_CanReadFile(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = vtkBYUReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBYUReader_Methods[] = {
  {"IsTypeOf", PyvtkBYUReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBYUReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBYUReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBYUReader\nC++: static vtkBYUReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBYUReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBYUReader\nC++: vtkBYUReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBYUReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBYUReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGeometryFileName", PyvtkBYUReader_SetGeometryFileName, METH_VARARGS,
   "SetGeometryFileName(self, _arg:str) -> None\nC++: virtual void SetGeometryFileName(const char *_arg)\n\nSpecify name of geometry FileName.\n"},
  {"GetGeometryFileName", PyvtkBYUReader_GetGeometryFileName, METH_VARARGS,
   "GetGeometryFileName(self) -> str\nC++: virtual char *GetGeometryFileName()\n\n"},
  {"SetFileName", PyvtkBYUReader_SetFileName, METH_VARARGS,
   "SetFileName(self, f:str) -> None\nC++: virtual void SetFileName(const char *f)\n\nSpecify name of geometry FileName (alias).\n"},
  {"GetFileName", PyvtkBYUReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetDisplacementFileName", PyvtkBYUReader_SetDisplacementFileName, METH_VARARGS,
   "SetDisplacementFileName(self, _arg:str) -> None\nC++: virtual void SetDisplacementFileName(const char *_arg)\n\nSpecify name of displacement FileName.\n"},
  {"GetDisplacementFileName", PyvtkBYUReader_GetDisplacementFileName, METH_VARARGS,
   "GetDisplacementFileName(self) -> str\nC++: virtual char *GetDisplacementFileName()\n\n"},
  {"SetScalarFileName", PyvtkBYUReader_SetScalarFileName, METH_VARARGS,
   "SetScalarFileName(self, _arg:str) -> None\nC++: virtual void SetScalarFileName(const char *_arg)\n\nSpecify name of scalar FileName.\n"},
  {"GetScalarFileName", PyvtkBYUReader_GetScalarFileName, METH_VARARGS,
   "GetScalarFileName(self) -> str\nC++: virtual char *GetScalarFileName()\n\n"},
  {"SetTextureFileName", PyvtkBYUReader_SetTextureFileName, METH_VARARGS,
   "SetTextureFileName(self, _arg:str) -> None\nC++: virtual void SetTextureFileName(const char *_arg)\n\nSpecify name of texture coordinates FileName.\n"},
  {"GetTextureFileName", PyvtkBYUReader_GetTextureFileName, METH_VARARGS,
   "GetTextureFileName(self) -> str\nC++: virtual char *GetTextureFileName()\n\n"},
  {"SetReadDisplacement", PyvtkBYUReader_SetReadDisplacement, METH_VARARGS,
   "SetReadDisplacement(self, _arg:int) -> None\nC++: virtual void SetReadDisplacement(vtkTypeBool _arg)\n\nTurn on/off the reading of the displacement file.\n"},
  {"GetReadDisplacement", PyvtkBYUReader_GetReadDisplacement, METH_VARARGS,
   "GetReadDisplacement(self) -> int\nC++: virtual vtkTypeBool GetReadDisplacement()\n\n"},
  {"ReadDisplacementOn", PyvtkBYUReader_ReadDisplacementOn, METH_VARARGS,
   "ReadDisplacementOn(self) -> None\nC++: virtual void ReadDisplacementOn()\n\n"},
  {"ReadDisplacementOff", PyvtkBYUReader_ReadDisplacementOff, METH_VARARGS,
   "ReadDisplacementOff(self) -> None\nC++: virtual void ReadDisplacementOff()\n\n"},
  {"SetReadScalar", PyvtkBYUReader_SetReadScalar, METH_VARARGS,
   "SetReadScalar(self, _arg:int) -> None\nC++: virtual void SetReadScalar(vtkTypeBool _arg)\n\nTurn on/off the reading of the scalar file.\n"},
  {"GetReadScalar", PyvtkBYUReader_GetReadScalar, METH_VARARGS,
   "GetReadScalar(self) -> int\nC++: virtual vtkTypeBool GetReadScalar()\n\n"},
  {"ReadScalarOn", PyvtkBYUReader_ReadScalarOn, METH_VARARGS,
   "ReadScalarOn(self) -> None\nC++: virtual void ReadScalarOn()\n\n"},
  {"ReadScalarOff", PyvtkBYUReader_ReadScalarOff, METH_VARARGS,
   "ReadScalarOff(self) -> None\nC++: virtual void ReadScalarOff()\n\n"},
  {"SetReadTexture", PyvtkBYUReader_SetReadTexture, METH_VARARGS,
   "SetReadTexture(self, _arg:int) -> None\nC++: virtual void SetReadTexture(vtkTypeBool _arg)\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {"GetReadTexture", PyvtkBYUReader_GetReadTexture, METH_VARARGS,
   "GetReadTexture(self) -> int\nC++: virtual vtkTypeBool GetReadTexture()\n\n"},
  {"ReadTextureOn", PyvtkBYUReader_ReadTextureOn, METH_VARARGS,
   "ReadTextureOn(self) -> None\nC++: virtual void ReadTextureOn()\n\n"},
  {"ReadTextureOff", PyvtkBYUReader_ReadTextureOff, METH_VARARGS,
   "ReadTextureOff(self) -> None\nC++: virtual void ReadTextureOff()\n\n"},
  {"SetPartNumber", PyvtkBYUReader_SetPartNumber, METH_VARARGS,
   "SetPartNumber(self, _arg:int) -> None\nC++: virtual void SetPartNumber(int _arg)\n\nSet/Get the part number to be read.\n"},
  {"GetPartNumberMinValue", PyvtkBYUReader_GetPartNumberMinValue, METH_VARARGS,
   "GetPartNumberMinValue(self) -> int\nC++: virtual int GetPartNumberMinValue()\n\n"},
  {"GetPartNumberMaxValue", PyvtkBYUReader_GetPartNumberMaxValue, METH_VARARGS,
   "GetPartNumberMaxValue(self) -> int\nC++: virtual int GetPartNumberMaxValue()\n\n"},
  {"GetPartNumber", PyvtkBYUReader_GetPartNumber, METH_VARARGS,
   "GetPartNumber(self) -> int\nC++: virtual int GetPartNumber()\n\n"},
  {"CanReadFile", PyvtkBYUReader_CanReadFile, METH_VARARGS,
   "CanReadFile(filename:str) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns 1 if this file can be read and 0 if the file cannot be\nread. Because BYU files do not have anything in the header\nspecifying the file type, the result is not definitive.  Invalid\nfiles may still return 1 although a valid file will never return\n0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBYUReader_Doc =
  "vtkBYUReader - read MOVIE.BYU polygon files\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkBYUReader is a source object that reads MOVIE.BYU polygon files.\n"
  "These files consist of a geometry file (.g), a scalar file (.s), a\n"
  "displacement or vector file (.d), and a 2D texture coordinate file\n"
  "(.t).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBYUReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkBYUReader", // tp_name
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
  PyvtkBYUReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBYUReader_StaticNew()
{
  return vtkBYUReader::New();
}

PyObject *PyvtkBYUReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBYUReader_Type, PyvtkBYUReader_Methods,
    "vtkBYUReader",
 &PyvtkBYUReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBYUReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBYUReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBYUReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


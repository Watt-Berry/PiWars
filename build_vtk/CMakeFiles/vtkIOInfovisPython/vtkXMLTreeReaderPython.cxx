// python wrapper for vtkXMLTreeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLTreeReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLTreeReader(PyObject *dict); }
extern "C" { PyObject *PyvtkXMLTreeReader_ClassNew(); }


static PyObject *
PyvtkXMLTreeReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLTreeReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLTreeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLTreeReader *tempr = vtkXMLTreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLTreeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLTreeReader::NewInstance());

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
PyvtkXMLTreeReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLTreeReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLTreeReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLTreeReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

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
      op->vtkXMLTreeReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLString() :
      op->vtkXMLTreeReader::GetXMLString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXMLString(temp0);
    }
    else
    {
      op->vtkXMLTreeReader::SetXMLString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgePedigreeIdArrayName() :
      op->vtkXMLTreeReader::GetEdgePedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgePedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkXMLTreeReader::SetEdgePedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexPedigreeIdArrayName() :
      op->vtkXMLTreeReader::GetVertexPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexPedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkXMLTreeReader::SetVertexPedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetGenerateEdgePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateEdgePedigreeIds(temp0);
    }
    else
    {
      op->vtkXMLTreeReader::SetGenerateEdgePedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetGenerateEdgePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdgePedigreeIds() :
      op->vtkXMLTreeReader::GetGenerateEdgePedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GenerateEdgePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgePedigreeIdsOn();
    }
    else
    {
      op->vtkXMLTreeReader::GenerateEdgePedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GenerateEdgePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgePedigreeIdsOff();
    }
    else
    {
      op->vtkXMLTreeReader::GenerateEdgePedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetGenerateVertexPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertexPedigreeIds(temp0);
    }
    else
    {
      op->vtkXMLTreeReader::SetGenerateVertexPedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetGenerateVertexPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateVertexPedigreeIds() :
      op->vtkXMLTreeReader::GetGenerateVertexPedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GenerateVertexPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexPedigreeIdsOn();
    }
    else
    {
      op->vtkXMLTreeReader::GenerateVertexPedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GenerateVertexPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexPedigreeIdsOff();
    }
    else
    {
      op->vtkXMLTreeReader::GenerateVertexPedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetMaskArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMaskArrays() :
      op->vtkXMLTreeReader::GetMaskArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetMaskArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskArrays(temp0);
    }
    else
    {
      op->vtkXMLTreeReader::SetMaskArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_MaskArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskArraysOn();
    }
    else
    {
      op->vtkXMLTreeReader::MaskArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_MaskArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskArraysOff();
    }
    else
    {
      op->vtkXMLTreeReader::MaskArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetReadCharData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadCharData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadCharData() :
      op->vtkXMLTreeReader::GetReadCharData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetReadCharData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadCharData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadCharData(temp0);
    }
    else
    {
      op->vtkXMLTreeReader::SetReadCharData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_ReadCharDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCharDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadCharDataOn();
    }
    else
    {
      op->vtkXMLTreeReader::ReadCharDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_ReadCharDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCharDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadCharDataOff();
    }
    else
    {
      op->vtkXMLTreeReader::ReadCharDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetReadTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadTagName() :
      op->vtkXMLTreeReader::GetReadTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetReadTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadTagName(temp0);
    }
    else
    {
      op->vtkXMLTreeReader::SetReadTagName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_ReadTagNameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTagNameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadTagNameOn();
    }
    else
    {
      op->vtkXMLTreeReader::ReadTagNameOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_ReadTagNameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTagNameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadTagNameOff();
    }
    else
    {
      op->vtkXMLTreeReader::ReadTagNameOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLTreeReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLTreeReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLTreeReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLTreeReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLTreeReader\nC++: static vtkXMLTreeReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLTreeReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLTreeReader\nC++: vtkXMLTreeReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLTreeReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLTreeReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFileName", PyvtkXMLTreeReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\nIf set, reads in the XML file specified.\n"},
  {"SetFileName", PyvtkXMLTreeReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetXMLString", PyvtkXMLTreeReader_GetXMLString, METH_VARARGS,
   "GetXMLString(self) -> str\nC++: virtual char *GetXMLString()\n\nIf set, and FileName is not set, reads in the XML string.\n"},
  {"SetXMLString", PyvtkXMLTreeReader_SetXMLString, METH_VARARGS,
   "SetXMLString(self, _arg:str) -> None\nC++: virtual void SetXMLString(const char *_arg)\n\n"},
  {"GetEdgePedigreeIdArrayName", PyvtkXMLTreeReader_GetEdgePedigreeIdArrayName, METH_VARARGS,
   "GetEdgePedigreeIdArrayName(self) -> str\nC++: virtual char *GetEdgePedigreeIdArrayName()\n\nThe name of the edge pedigree ids. Default is \"edge id\".\n"},
  {"SetEdgePedigreeIdArrayName", PyvtkXMLTreeReader_SetEdgePedigreeIdArrayName, METH_VARARGS,
   "SetEdgePedigreeIdArrayName(self, _arg:str) -> None\nC++: virtual void SetEdgePedigreeIdArrayName(const char *_arg)\n\n"},
  {"GetVertexPedigreeIdArrayName", PyvtkXMLTreeReader_GetVertexPedigreeIdArrayName, METH_VARARGS,
   "GetVertexPedigreeIdArrayName(self) -> str\nC++: virtual char *GetVertexPedigreeIdArrayName()\n\nThe name of the vertex pedigree ids. Default is \"vertex id\".\n"},
  {"SetVertexPedigreeIdArrayName", PyvtkXMLTreeReader_SetVertexPedigreeIdArrayName, METH_VARARGS,
   "SetVertexPedigreeIdArrayName(self, _arg:str) -> None\nC++: virtual void SetVertexPedigreeIdArrayName(const char *_arg)\n\n"},
  {"SetGenerateEdgePedigreeIds", PyvtkXMLTreeReader_SetGenerateEdgePedigreeIds, METH_VARARGS,
   "SetGenerateEdgePedigreeIds(self, _arg:bool) -> None\nC++: virtual void SetGenerateEdgePedigreeIds(bool _arg)\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {"GetGenerateEdgePedigreeIds", PyvtkXMLTreeReader_GetGenerateEdgePedigreeIds, METH_VARARGS,
   "GetGenerateEdgePedigreeIds(self) -> bool\nC++: virtual bool GetGenerateEdgePedigreeIds()\n\n"},
  {"GenerateEdgePedigreeIdsOn", PyvtkXMLTreeReader_GenerateEdgePedigreeIdsOn, METH_VARARGS,
   "GenerateEdgePedigreeIdsOn(self) -> None\nC++: virtual void GenerateEdgePedigreeIdsOn()\n\n"},
  {"GenerateEdgePedigreeIdsOff", PyvtkXMLTreeReader_GenerateEdgePedigreeIdsOff, METH_VARARGS,
   "GenerateEdgePedigreeIdsOff(self) -> None\nC++: virtual void GenerateEdgePedigreeIdsOff()\n\n"},
  {"SetGenerateVertexPedigreeIds", PyvtkXMLTreeReader_SetGenerateVertexPedigreeIds, METH_VARARGS,
   "SetGenerateVertexPedigreeIds(self, _arg:bool) -> None\nC++: virtual void SetGenerateVertexPedigreeIds(bool _arg)\n\n"},
  {"GetGenerateVertexPedigreeIds", PyvtkXMLTreeReader_GetGenerateVertexPedigreeIds, METH_VARARGS,
   "GetGenerateVertexPedigreeIds(self) -> bool\nC++: virtual bool GetGenerateVertexPedigreeIds()\n\n"},
  {"GenerateVertexPedigreeIdsOn", PyvtkXMLTreeReader_GenerateVertexPedigreeIdsOn, METH_VARARGS,
   "GenerateVertexPedigreeIdsOn(self) -> None\nC++: virtual void GenerateVertexPedigreeIdsOn()\n\n"},
  {"GenerateVertexPedigreeIdsOff", PyvtkXMLTreeReader_GenerateVertexPedigreeIdsOff, METH_VARARGS,
   "GenerateVertexPedigreeIdsOff(self) -> None\nC++: virtual void GenerateVertexPedigreeIdsOff()\n\n"},
  {"GetMaskArrays", PyvtkXMLTreeReader_GetMaskArrays, METH_VARARGS,
   "GetMaskArrays(self) -> bool\nC++: virtual bool GetMaskArrays()\n\nIf on, makes bit arrays for each attribute with name\n.valid.attribute_name for each attribute.  Default is off.\n"},
  {"SetMaskArrays", PyvtkXMLTreeReader_SetMaskArrays, METH_VARARGS,
   "SetMaskArrays(self, _arg:bool) -> None\nC++: virtual void SetMaskArrays(bool _arg)\n\n"},
  {"MaskArraysOn", PyvtkXMLTreeReader_MaskArraysOn, METH_VARARGS,
   "MaskArraysOn(self) -> None\nC++: virtual void MaskArraysOn()\n\n"},
  {"MaskArraysOff", PyvtkXMLTreeReader_MaskArraysOff, METH_VARARGS,
   "MaskArraysOff(self) -> None\nC++: virtual void MaskArraysOff()\n\n"},
  {"GetReadCharData", PyvtkXMLTreeReader_GetReadCharData, METH_VARARGS,
   "GetReadCharData(self) -> bool\nC++: virtual bool GetReadCharData()\n\nIf on, stores the XML character data (i.e. textual data between\ntags) into an array named CharDataField, otherwise this field is\nskipped. Default is off.\n"},
  {"SetReadCharData", PyvtkXMLTreeReader_SetReadCharData, METH_VARARGS,
   "SetReadCharData(self, _arg:bool) -> None\nC++: virtual void SetReadCharData(bool _arg)\n\n"},
  {"ReadCharDataOn", PyvtkXMLTreeReader_ReadCharDataOn, METH_VARARGS,
   "ReadCharDataOn(self) -> None\nC++: virtual void ReadCharDataOn()\n\n"},
  {"ReadCharDataOff", PyvtkXMLTreeReader_ReadCharDataOff, METH_VARARGS,
   "ReadCharDataOff(self) -> None\nC++: virtual void ReadCharDataOff()\n\n"},
  {"GetReadTagName", PyvtkXMLTreeReader_GetReadTagName, METH_VARARGS,
   "GetReadTagName(self) -> bool\nC++: virtual bool GetReadTagName()\n\nIf on, stores the XML tag name data in a field called .tagname\notherwise this field is skipped. Default is on.\n"},
  {"SetReadTagName", PyvtkXMLTreeReader_SetReadTagName, METH_VARARGS,
   "SetReadTagName(self, _arg:bool) -> None\nC++: virtual void SetReadTagName(bool _arg)\n\n"},
  {"ReadTagNameOn", PyvtkXMLTreeReader_ReadTagNameOn, METH_VARARGS,
   "ReadTagNameOn(self) -> None\nC++: virtual void ReadTagNameOn()\n\n"},
  {"ReadTagNameOff", PyvtkXMLTreeReader_ReadTagNameOff, METH_VARARGS,
   "ReadTagNameOff(self) -> None\nC++: virtual void ReadTagNameOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXMLTreeReader_Doc =
  "vtkXMLTreeReader - reads an XML file into a vtkTree\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "vtkXMLTreeReader parses an XML file and uses the nesting structure of\n"
  "the XML tags to generate a tree.  Node attributes are assigned to\n"
  "node arrays, and the special arrays .tagname and .chardata contain\n"
  "the tag type and the text internal to the tag, respectively.  The\n"
  "arrays are of type vtkStringArray.  There is an array for each\n"
  "attribute type in the XML file, even if it appears in only one tag. \n"
  "If an attribute is missing from a tag, its value is the empty string.\n\n"
  "If MaskArrays is on (the default is off), the filter will\n"
  "additionally make bit arrays whose names are prepended with \".valid.\"\n"
  "which are 1 if the element contains that attribute, and 0 otherwise.\n\n"
  "For example, the XML file containing the text:\n\n"
  "&lt;node name=\"jeff\" age=\"26\"&gt;\n"
  "  this is text in jeff's node\n"
  "  &lt;node name=\"joe\"&gt;\n"
  "    &lt;node name=\"al\" initials=\"amb\" other=\"something\"/&gt;\n"
  "    &lt;node name=\"dave\" age=\"30\"/&gt;\n"
  "  &lt;/node&gt;\n"
  "  &lt;node name=\"lisa\"&gt;this is text in lisa's node&lt;/node&gt;\n"
  "  &lt;node name=\"darlene\" age=\"29\"/&gt; &lt;/node&gt; \n\n"
  "would be parsed into a tree with the following node IDs and\n"
  "structure:\n\n"
  "0 (jeff) - children: 1 (joe), 4 (lisa), 5 (darlene) 1 (joe)  -\n"
  "children: 2 (al), 3 (dave) 2 (al) 3 (dave) 4 (lisa) 5 (darlene) \n\n"
  "and the node data arrays would be as follows:\n\n"
  "name      initials  other     age       .tagname  .chardata\n"
  "----------------------------------------------------------------------\n"
  "    -------------------------- jeff      (empty)   (empty)   26      \n"
  "  node     \"  this is text in jeff's node\\n  \\n  \\n  \\n\" joe      \n"
  "    (empty)   (empty)   (empty)    node     \"\\n    \\n    \\n  \" al    \n"
  "   amb       something (empty)    node     (empty) dave      (empty) \n"
  " (empty)   30         node     (empty) lisa      (empty)   (empty)  \n"
  "    (empty)    node     \"this is text in lisa's node\" darlene  \n"
  "    (empty)   (empty)   29         node     (empty) \n\n"
  "There would also be the following bit arrays if MaskArrays is on:\n\n"
  ".valid.name   .valid.initials   .valid.other   .valid.age\n"
  "--------------------------------------------------------- 1          \n"
  "  0                 0              1 1             0                \n"
  "    0              0 1             1                 1              0\n"
  "    1             0                 0              1 1             0 \n"
  "               0              0 1             0                 0    \n"
  "         1 \n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLTreeReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOInfovis.vtkXMLTreeReader", // tp_name
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
  PyvtkXMLTreeReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLTreeReader_StaticNew()
{
  return vtkXMLTreeReader::New();
}

PyObject *PyvtkXMLTreeReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLTreeReader_Type, PyvtkXMLTreeReader_Methods,
    "vtkXMLTreeReader",
 &PyvtkXMLTreeReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTreeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLTreeReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLTreeReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLTreeReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


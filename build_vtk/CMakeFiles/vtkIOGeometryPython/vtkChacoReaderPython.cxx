// python wrapper for vtkChacoReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkChacoReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChacoReader(PyObject *dict); }
extern "C" { PyObject *PyvtkChacoReader_ClassNew(); }


static PyObject *
PyvtkChacoReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChacoReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChacoReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChacoReader *tempr = vtkChacoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChacoReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChacoReader::NewInstance());

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
PyvtkChacoReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkChacoReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkChacoReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_SetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBaseName(temp0);
    }
    else
    {
      op->vtkChacoReader::SetBaseName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBaseName() :
      op->vtkChacoReader::GetBaseName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_SetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateGlobalElementIdArray(temp0);
    }
    else
    {
      op->vtkChacoReader::SetGenerateGlobalElementIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateGlobalElementIdArray() :
      op->vtkChacoReader::GetGenerateGlobalElementIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateGlobalElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGlobalElementIdArrayOn();
    }
    else
    {
      op->vtkChacoReader::GenerateGlobalElementIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateGlobalElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGlobalElementIdArrayOff();
    }
    else
    {
      op->vtkChacoReader::GenerateGlobalElementIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGlobalElementIdArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkChacoReader::GetGlobalElementIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_SetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateGlobalNodeIdArray(temp0);
    }
    else
    {
      op->vtkChacoReader::SetGenerateGlobalNodeIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateGlobalNodeIdArray() :
      op->vtkChacoReader::GetGenerateGlobalNodeIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateGlobalNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGlobalNodeIdArrayOn();
    }
    else
    {
      op->vtkChacoReader::GenerateGlobalNodeIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateGlobalNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGlobalNodeIdArrayOff();
    }
    else
    {
      op->vtkChacoReader::GenerateGlobalNodeIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGlobalNodeIdArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkChacoReader::GetGlobalNodeIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_SetGenerateVertexWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertexWeightArrays(temp0);
    }
    else
    {
      op->vtkChacoReader::SetGenerateVertexWeightArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGenerateVertexWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVertexWeightArrays() :
      op->vtkChacoReader::GetGenerateVertexWeightArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateVertexWeightArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexWeightArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexWeightArraysOn();
    }
    else
    {
      op->vtkChacoReader::GenerateVertexWeightArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateVertexWeightArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexWeightArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexWeightArraysOff();
    }
    else
    {
      op->vtkChacoReader::GenerateVertexWeightArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfVertexWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertexWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVertexWeights() :
      op->vtkChacoReader::GetNumberOfVertexWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetVertexWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexWeightArrayName(temp0) :
      op->vtkChacoReader::GetVertexWeightArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_SetGenerateEdgeWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgeWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateEdgeWeightArrays(temp0);
    }
    else
    {
      op->vtkChacoReader::SetGenerateEdgeWeightArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGenerateEdgeWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgeWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateEdgeWeightArrays() :
      op->vtkChacoReader::GetGenerateEdgeWeightArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateEdgeWeightArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgeWeightArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgeWeightArraysOn();
    }
    else
    {
      op->vtkChacoReader::GenerateEdgeWeightArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateEdgeWeightArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgeWeightArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgeWeightArraysOff();
    }
    else
    {
      op->vtkChacoReader::GenerateEdgeWeightArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeWeights() :
      op->vtkChacoReader::GetNumberOfEdgeWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeWeightArrayName(temp0) :
      op->vtkChacoReader::GetEdgeWeightArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkChacoReader::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkChacoReader::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkChacoReader::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfCellWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellWeightArrays() :
      op->vtkChacoReader::GetNumberOfCellWeightArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfPointWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointWeightArrays() :
      op->vtkChacoReader::GetNumberOfPointWeightArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChacoReader_Methods[] = {
  {"IsTypeOf", PyvtkChacoReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChacoReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChacoReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkChacoReader\nC++: static vtkChacoReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChacoReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkChacoReader\nC++: vtkChacoReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkChacoReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkChacoReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBaseName", PyvtkChacoReader_SetBaseName, METH_VARARGS,
   "SetBaseName(self, _arg:str) -> None\nC++: virtual void SetBaseName(const char *_arg)\n\nSpecify the base name of the Chaco files.  The reader will try to\nopen BaseName.coords and BaseName.graph.\n"},
  {"GetBaseName", PyvtkChacoReader_GetBaseName, METH_VARARGS,
   "GetBaseName(self) -> str\nC++: virtual char *GetBaseName()\n\n"},
  {"SetGenerateGlobalElementIdArray", PyvtkChacoReader_SetGenerateGlobalElementIdArray, METH_VARARGS,
   "SetGenerateGlobalElementIdArray(self, _arg:int) -> None\nC++: virtual void SetGenerateGlobalElementIdArray(\n    vtkTypeBool _arg)\n\nIndicate whether this reader should create a cell array\ncontaining global IDs for the cells in the output\nvtkUnstructuredGrid.  These cells represent the edges that were\nin the Chaco file.  Each edge is a vtkLine. Default is ON.\n"},
  {"GetGenerateGlobalElementIdArray", PyvtkChacoReader_GetGenerateGlobalElementIdArray, METH_VARARGS,
   "GetGenerateGlobalElementIdArray(self) -> int\nC++: virtual vtkTypeBool GetGenerateGlobalElementIdArray()\n\n"},
  {"GenerateGlobalElementIdArrayOn", PyvtkChacoReader_GenerateGlobalElementIdArrayOn, METH_VARARGS,
   "GenerateGlobalElementIdArrayOn(self) -> None\nC++: virtual void GenerateGlobalElementIdArrayOn()\n\n"},
  {"GenerateGlobalElementIdArrayOff", PyvtkChacoReader_GenerateGlobalElementIdArrayOff, METH_VARARGS,
   "GenerateGlobalElementIdArrayOff(self) -> None\nC++: virtual void GenerateGlobalElementIdArrayOff()\n\n"},
  {"GetGlobalElementIdArrayName", PyvtkChacoReader_GetGlobalElementIdArrayName, METH_VARARGS,
   "GetGlobalElementIdArrayName() -> str\nC++: static const char *GetGlobalElementIdArrayName()\n\n"},
  {"SetGenerateGlobalNodeIdArray", PyvtkChacoReader_SetGenerateGlobalNodeIdArray, METH_VARARGS,
   "SetGenerateGlobalNodeIdArray(self, _arg:int) -> None\nC++: virtual void SetGenerateGlobalNodeIdArray(vtkTypeBool _arg)\n\nIndicate whether this reader should create a point array of\nglobal IDs for the points in the output vtkUnstructuredGrid. \nThese points are the vertices that were in the Chaco file. \nGlobal point IDs start at \"1\" for the first vertex in\nBaseName.coords and go up from there. Default is ON.\n"},
  {"GetGenerateGlobalNodeIdArray", PyvtkChacoReader_GetGenerateGlobalNodeIdArray, METH_VARARGS,
   "GetGenerateGlobalNodeIdArray(self) -> int\nC++: virtual vtkTypeBool GetGenerateGlobalNodeIdArray()\n\n"},
  {"GenerateGlobalNodeIdArrayOn", PyvtkChacoReader_GenerateGlobalNodeIdArrayOn, METH_VARARGS,
   "GenerateGlobalNodeIdArrayOn(self) -> None\nC++: virtual void GenerateGlobalNodeIdArrayOn()\n\n"},
  {"GenerateGlobalNodeIdArrayOff", PyvtkChacoReader_GenerateGlobalNodeIdArrayOff, METH_VARARGS,
   "GenerateGlobalNodeIdArrayOff(self) -> None\nC++: virtual void GenerateGlobalNodeIdArrayOff()\n\n"},
  {"GetGlobalNodeIdArrayName", PyvtkChacoReader_GetGlobalNodeIdArrayName, METH_VARARGS,
   "GetGlobalNodeIdArrayName() -> str\nC++: static const char *GetGlobalNodeIdArrayName()\n\n"},
  {"SetGenerateVertexWeightArrays", PyvtkChacoReader_SetGenerateVertexWeightArrays, METH_VARARGS,
   "SetGenerateVertexWeightArrays(self, _arg:int) -> None\nC++: virtual void SetGenerateVertexWeightArrays(vtkTypeBool _arg)\n\nIndicate whether this reader should create a point array for each\nvertex weight in the Chaco file. Default is OFF.\n"},
  {"GetGenerateVertexWeightArrays", PyvtkChacoReader_GetGenerateVertexWeightArrays, METH_VARARGS,
   "GetGenerateVertexWeightArrays(self) -> int\nC++: virtual vtkTypeBool GetGenerateVertexWeightArrays()\n\n"},
  {"GenerateVertexWeightArraysOn", PyvtkChacoReader_GenerateVertexWeightArraysOn, METH_VARARGS,
   "GenerateVertexWeightArraysOn(self) -> None\nC++: virtual void GenerateVertexWeightArraysOn()\n\n"},
  {"GenerateVertexWeightArraysOff", PyvtkChacoReader_GenerateVertexWeightArraysOff, METH_VARARGS,
   "GenerateVertexWeightArraysOff(self) -> None\nC++: virtual void GenerateVertexWeightArraysOff()\n\n"},
  {"GetNumberOfVertexWeights", PyvtkChacoReader_GetNumberOfVertexWeights, METH_VARARGS,
   "GetNumberOfVertexWeights(self) -> int\nC++: virtual int GetNumberOfVertexWeights()\n\nReturns the number of weights per vertex in the Chaco file,\nwhether or not GenerateVertexWeightArrays is ON.\n"},
  {"GetVertexWeightArrayName", PyvtkChacoReader_GetVertexWeightArrayName, METH_VARARGS,
   "GetVertexWeightArrayName(self, weight:int) -> str\nC++: const char *GetVertexWeightArrayName(int weight)\n\nThis method returns the name of the selected Vertex weight point\narray.  If you did not turn on GenerateVertexWeightArrays, or if\nthe weight you requested is invalid, it returns nullptr. Weights\nbegin at one and go up to NumberOfVertexWeights. This is a\npointer to our copy of the name, so don't \"delete\" it.\n"},
  {"SetGenerateEdgeWeightArrays", PyvtkChacoReader_SetGenerateEdgeWeightArrays, METH_VARARGS,
   "SetGenerateEdgeWeightArrays(self, _arg:int) -> None\nC++: virtual void SetGenerateEdgeWeightArrays(vtkTypeBool _arg)\n\nEach edge in the Chaco file connects two vertices.  The file may\nspecify one or more weights for each edge.  (The weight for an\nedge from vertex A to vertex B equals the weight from B to A.)\nIndicate with the following parameter whether this reader should\ncreate a cell array for each weight for every edge. Default is\nOFF.\n"},
  {"GetGenerateEdgeWeightArrays", PyvtkChacoReader_GetGenerateEdgeWeightArrays, METH_VARARGS,
   "GetGenerateEdgeWeightArrays(self) -> int\nC++: virtual vtkTypeBool GetGenerateEdgeWeightArrays()\n\n"},
  {"GenerateEdgeWeightArraysOn", PyvtkChacoReader_GenerateEdgeWeightArraysOn, METH_VARARGS,
   "GenerateEdgeWeightArraysOn(self) -> None\nC++: virtual void GenerateEdgeWeightArraysOn()\n\n"},
  {"GenerateEdgeWeightArraysOff", PyvtkChacoReader_GenerateEdgeWeightArraysOff, METH_VARARGS,
   "GenerateEdgeWeightArraysOff(self) -> None\nC++: virtual void GenerateEdgeWeightArraysOff()\n\n"},
  {"GetNumberOfEdgeWeights", PyvtkChacoReader_GetNumberOfEdgeWeights, METH_VARARGS,
   "GetNumberOfEdgeWeights(self) -> int\nC++: virtual int GetNumberOfEdgeWeights()\n\nReturns the number of weights per edge in the Chaco file, whether\nor not GenerateEdgeWeightArrays is ON.\n"},
  {"GetEdgeWeightArrayName", PyvtkChacoReader_GetEdgeWeightArrayName, METH_VARARGS,
   "GetEdgeWeightArrayName(self, weight:int) -> str\nC++: const char *GetEdgeWeightArrayName(int weight)\n\nThis method returns the name of the selected Edge weight cell\narray.  If you did not turn on GenerateEdgeWeightArrays, or if\nthe weight you requested is invalid, it returns nullptr. Weights\nbegin at one and go up to NumberOfEdgeWeights. This is a pointer\nto our copy of the name, so don't \"delete\" it.\n"},
  {"GetDimensionality", PyvtkChacoReader_GetDimensionality, METH_VARARGS,
   "GetDimensionality(self) -> int\nC++: virtual int GetDimensionality()\n\nAccess to meta data generated by RequestInformation.\n"},
  {"GetNumberOfEdges", PyvtkChacoReader_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: virtual vtkIdType GetNumberOfEdges()\n\n"},
  {"GetNumberOfVertices", PyvtkChacoReader_GetNumberOfVertices, METH_VARARGS,
   "GetNumberOfVertices(self) -> int\nC++: virtual vtkIdType GetNumberOfVertices()\n\n"},
  {"GetNumberOfCellWeightArrays", PyvtkChacoReader_GetNumberOfCellWeightArrays, METH_VARARGS,
   "GetNumberOfCellWeightArrays(self) -> int\nC++: virtual int GetNumberOfCellWeightArrays()\n\nAfter this filter executes, this method returns the number of\ncell arrays that were created to hold the edge weights.  It is\nequal to NumberOfEdgeWeights if GenerateEdgeWeightArrays was ON.\n"},
  {"GetNumberOfPointWeightArrays", PyvtkChacoReader_GetNumberOfPointWeightArrays, METH_VARARGS,
   "GetNumberOfPointWeightArrays(self) -> int\nC++: virtual int GetNumberOfPointWeightArrays()\n\nAfter this filter executes, this method returns the number of\npoint arrays that were created to hold the vertex weights.  It is\nequal to NumberOfVertexWeights if GenerateVertexWeightArrays was\nON.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkChacoReader_Doc =
  "vtkChacoReader - Read a Chaco file and create a vtkUnstructuredGrid.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkChacoReader is an unstructured grid source object that reads Chaco\n"
  "files.  The reader DOES NOT respond to piece requests. Chaco is a\n"
  "graph partitioning package developed at Sandia National Laboratories\n"
  "in the early 1990s.  (http://www.cs.sandia.gov/~bahendr/chaco.html)\n\n"
  "Note that the Chaco \"edges\" become VTK \"cells\", and the Chaco\n"
  "\"vertices\" become VTK \"points\".\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChacoReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkChacoReader", // tp_name
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
  PyvtkChacoReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChacoReader_StaticNew()
{
  return vtkChacoReader::New();
}

PyObject *PyvtkChacoReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkChacoReader_Type, PyvtkChacoReader_Methods,
    "vtkChacoReader",
 &PyvtkChacoReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChacoReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChacoReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChacoReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


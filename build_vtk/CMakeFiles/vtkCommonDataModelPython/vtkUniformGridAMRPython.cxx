// python wrapper for vtkUniformGridAMR
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUniformGridAMR.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUniformGridAMR(PyObject *dict); }
extern "C" { PyObject *PyvtkUniformGridAMR_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataSet_ClassNew
extern "C" { PyObject *PyvtkCompositeDataSet_ClassNew(); }
#define DECLARED_PyvtkCompositeDataSet_ClassNew
#endif

static PyObject *
PyvtkUniformGridAMR_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUniformGridAMR::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGridAMR::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniformGridAMR *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGridAMR::NewInstance());

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
PyvtkUniformGridAMR_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUniformGridAMR::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUniformGridAMR::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkUniformGridAMR::NewIterator());

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
PyvtkUniformGridAMR_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUniformGridAMR::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkUniformGridAMR::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkUniformGridAMR::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkUniformGridAMR_Initialize_s1(self, args);
    case 2:
      return PyvtkUniformGridAMR_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}


static PyObject *
PyvtkUniformGridAMR_SetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridDescription(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::SetGridDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridDescription() :
      op->vtkUniformGridAMR::GetGridDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkUniformGridAMR::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetTotalNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfBlocks() :
      op->vtkUniformGridAMR::GetTotalNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets(temp0) :
      op->vtkUniformGridAMR::GetNumberOfDataSets(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::GetBounds(temp0);
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
PyvtkUniformGridAMR_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkUniformGridAMR::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUniformGridAMR_GetBounds_s1(self, args);
    case 0:
      return PyvtkUniformGridAMR_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkUniformGridAMR_GetMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMin(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::GetMin(temp0);
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
PyvtkUniformGridAMR_GetMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMax(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::GetMax(temp0);
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
PyvtkUniformGridAMR_SetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0, temp1);
    }
    else
    {
      op->vtkUniformGridAMR::SetDataSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_SetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkUniformGrid *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkUniformGrid"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformGridAMR::SetDataSet(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_SetDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUniformGridAMR_SetDataSet_s1(self, args);
    case 3:
      return PyvtkUniformGridAMR_SetDataSet_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSet");
  return nullptr;
}


static PyObject *
PyvtkUniformGridAMR_GetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkUniformGridAMR::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkUniformGrid *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0, temp1) :
      op->vtkUniformGridAMR::GetDataSet(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetDataSet_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkUniformGridAMR::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniformGridAMR_GetDataSet_Methods[] = {
  {"GetDataSet", PyvtkUniformGridAMR_GetDataSet_s1, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {"GetDataSet", PyvtkUniformGridAMR_GetDataSet_s3, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniformGridAMR_GetDataSet(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniformGridAMR_GetDataSet_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUniformGridAMR_GetDataSet_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSet");
  return nullptr;
}


static PyObject *
PyvtkUniformGridAMR_GetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex(temp0, temp1) :
      op->vtkUniformGridAMR::GetCompositeIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetLevelAndIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelAndIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetLevelAndIndex(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformGridAMR::GetLevelAndIndex(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_CompositeShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
  {
    if (ap.IsBound())
    {
      op->CompositeShallowCopy(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::CompositeShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_RecursiveShallowCopy(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method RecursiveShallowCopy."
    " (" "Please use ShallowCopy instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "RecursiveShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RecursiveShallowCopy(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::RecursiveShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniformGridAMR_GetData_Methods[] = {
  {"GetData", PyvtkUniformGridAMR_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkUniformGridAMR_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniformGridAMR_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniformGridAMR_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUniformGridAMR_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkUniformGridAMR_Methods[] = {
  {"IsTypeOf", PyvtkUniformGridAMR_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUniformGridAMR_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUniformGridAMR_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUniformGridAMR\nC++: static vtkUniformGridAMR *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUniformGridAMR_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUniformGridAMR\nC++: vtkUniformGridAMR *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUniformGridAMR_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUniformGridAMR_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"NewIterator", PyvtkUniformGridAMR_NewIterator, METH_VARARGS,
   "NewIterator(self) -> vtkCompositeDataIterator\nC++: vtkCompositeDataIterator *NewIterator() override;\n\nReturn a new iterator (the iterator has to be deleted by the\nuser).\n"},
  {"GetDataObjectType", PyvtkUniformGridAMR_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"Initialize", PyvtkUniformGridAMR_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\nInitialize(self, numLevels:int, blocksPerLevel:(int, ...)) -> None\nC++: virtual void Initialize(int numLevels,\n    const int *blocksPerLevel)\n\nRestore data object to initial state.\n"},
  {"SetGridDescription", PyvtkUniformGridAMR_SetGridDescription, METH_VARARGS,
   "SetGridDescription(self, gridDescription:int) -> None\nC++: void SetGridDescription(int gridDescription)\n\nSet/Get the data description of this uniform grid instance, e.g.\nVTK_XYZ_GRID\n"},
  {"GetGridDescription", PyvtkUniformGridAMR_GetGridDescription, METH_VARARGS,
   "GetGridDescription(self) -> int\nC++: int GetGridDescription()\n\n"},
  {"GetNumberOfLevels", PyvtkUniformGridAMR_GetNumberOfLevels, METH_VARARGS,
   "GetNumberOfLevels(self) -> int\nC++: unsigned int GetNumberOfLevels()\n\nGet number of levels.\n"},
  {"GetTotalNumberOfBlocks", PyvtkUniformGridAMR_GetTotalNumberOfBlocks, METH_VARARGS,
   "GetTotalNumberOfBlocks(self) -> int\nC++: virtual unsigned int GetTotalNumberOfBlocks()\n\nGet the total number of blocks, including nullptr blocks\n"},
  {"GetNumberOfDataSets", PyvtkUniformGridAMR_GetNumberOfDataSets, METH_VARARGS,
   "GetNumberOfDataSets(self, level:int) -> int\nC++: unsigned int GetNumberOfDataSets(unsigned int level)\n\nGet the number of datasets at the given level, including null\nblocks\n"},
  {"GetBounds", PyvtkUniformGridAMR_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\nGetBounds(self) -> Pointer\nC++: const double *GetBounds()\n\nGet the (min/max) bounds of the AMR domain.\n"},
  {"GetMin", PyvtkUniformGridAMR_GetMin, METH_VARARGS,
   "GetMin(self, min:[float, float, float]) -> None\nC++: void GetMin(double min[3])\n\n"},
  {"GetMax", PyvtkUniformGridAMR_GetMax, METH_VARARGS,
   "GetMax(self, max:[float, float, float]) -> None\nC++: void GetMax(double max[3])\n\n"},
  {"SetDataSet", PyvtkUniformGridAMR_SetDataSet, METH_VARARGS,
   "SetDataSet(self, iter:vtkCompositeDataIterator,\n    dataObj:vtkDataObject) -> None\nC++: void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj) override;\nSetDataSet(self, level:int, idx:int, grid:vtkUniformGrid) -> None\nC++: virtual void SetDataSet(unsigned int level, unsigned int idx,\n     vtkUniformGrid *grid)\n\nOverriding superclass method.\n"},
  {"GetDataSet", PyvtkUniformGridAMR_GetDataSet, METH_VARARGS,
   "GetDataSet(self, iter:vtkCompositeDataIterator) -> vtkDataObject\nC++: vtkDataObject *GetDataSet(vtkCompositeDataIterator *iter)\n    override;\nGetDataSet(self, level:int, idx:int) -> vtkUniformGrid\nC++: vtkUniformGrid *GetDataSet(unsigned int level,\n    unsigned int idx)\nGetDataSet(self, flatIndex:int) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(unsigned int flatIndex)\n\nGet the data set pointed to by iter\n"},
  {"GetCompositeIndex", PyvtkUniformGridAMR_GetCompositeIndex, METH_VARARGS,
   "GetCompositeIndex(self, level:int, index:int) -> int\nC++: int GetCompositeIndex(unsigned int level, unsigned int index)\n\nRetrieves the composite index associated with the data at the\ngiven (level,index) pair.\n"},
  {"GetLevelAndIndex", PyvtkUniformGridAMR_GetLevelAndIndex, METH_VARARGS,
   "GetLevelAndIndex(self, compositeIdx:int, level:int, idx:int)\n    -> None\nC++: void GetLevelAndIndex(unsigned int compositeIdx,\n    unsigned int &level, unsigned int &idx)\n\nGiven the compositeIdx (as set by SetCompositeIdx) this method\nreturns the corresponding level and dataset index within the\nlevel.\n"},
  {"CompositeShallowCopy", PyvtkUniformGridAMR_CompositeShallowCopy, METH_VARARGS,
   "CompositeShallowCopy(self, src:vtkCompositeDataSet) -> None\nC++: void CompositeShallowCopy(vtkCompositeDataSet *src) override;\n\nShallowCopy.\n"},
  {"ShallowCopy", PyvtkUniformGridAMR_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the data up to the array\npointers only. The implementation is delegated to the differenent\nsubclasses. If you want to copy the actual data, @see DeepCopy.\n\nThis method shallow copy the field data and copy the internal\nstructure.\n"},
  {"RecursiveShallowCopy", PyvtkUniformGridAMR_RecursiveShallowCopy, METH_VARARGS,
   "RecursiveShallowCopy(self, src:vtkDataObject) -> None\nC++: void RecursiveShallowCopy(vtkDataObject *src) override;\n\nDepreacted RecursiveShallowCopy method, uses ShallowCopy\n"},
  {"DeepCopy", PyvtkUniformGridAMR_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nDeepCopy.\n"},
  {"CopyStructure", PyvtkUniformGridAMR_CopyStructure, METH_VARARGS,
   "CopyStructure(self, src:vtkCompositeDataSet) -> None\nC++: void CopyStructure(vtkCompositeDataSet *src) override;\n\nCopyStructure.\n"},
  {"GetData", PyvtkUniformGridAMR_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkUniformGridAMR\nC++: static vtkUniformGridAMR *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkUniformGridAMR\nC++: static vtkUniformGridAMR *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUniformGridAMR_Doc =
  "vtkUniformGridAMR - a concrete implementation of vtkCompositeDataSet\n\n"
  "Superclass: vtkCompositeDataSet\n\n"
  "vtkUniformGridAMR is an AMR (hierarchical) composite dataset that\n"
  "holds vtkUniformGrids.\n\n"
  "@sa\n"
  "vtkUniformGridAMRDataIterator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUniformGridAMR_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkUniformGridAMR", // tp_name
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
  PyvtkUniformGridAMR_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUniformGridAMR_StaticNew()
{
  return vtkUniformGridAMR::New();
}

PyObject *PyvtkUniformGridAMR_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUniformGridAMR_Type, PyvtkUniformGridAMR_Methods,
    "vtkUniformGridAMR",
 &PyvtkUniformGridAMR_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUniformGridAMR(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUniformGridAMR_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUniformGridAMR", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkPartitionedDataSetCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSetCollection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPartitionedDataSetCollection(PyObject *dict); }
extern "C" { PyObject *PyvtkPartitionedDataSetCollection_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectTree_ClassNew
extern "C" { PyObject *PyvtkDataObjectTree_ClassNew(); }
#define DECLARED_PyvtkDataObjectTree_ClassNew
#endif

static PyObject *
PyvtkPartitionedDataSetCollection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPartitionedDataSetCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPartitionedDataSetCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPartitionedDataSetCollection *tempr = vtkPartitionedDataSetCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPartitionedDataSetCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPartitionedDataSetCollection::NewInstance());

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
PyvtkPartitionedDataSetCollection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPartitionedDataSetCollection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPartitionedDataSetCollection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPartitionedDataSetCollection::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SetNumberOfPartitionedDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitionedDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPartitionedDataSets(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::SetNumberOfPartitionedDataSets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetNumberOfPartitionedDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitionedDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitionedDataSets() :
      op->vtkPartitionedDataSetCollection::GetNumberOfPartitionedDataSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetPartitionedDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionedDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPartitionedDataSet *tempr = (ap.IsBound() ?
      op->GetPartitionedDataSet(temp0) :
      op->vtkPartitionedDataSetCollection::GetPartitionedDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SetPartitionedDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartitionedDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  vtkPartitionedDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPartitionedDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetPartitionedDataSet(temp0, temp1);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::SetPartitionedDataSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_RemovePartitionedDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePartitionedDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePartitionedDataSet(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::RemovePartitionedDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SetPartition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkDataObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetPartition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::SetPartition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetPartition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetPartition(temp0, temp1) :
      op->vtkPartitionedDataSetCollection::GetPartition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetPartitionAsDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionAsDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetPartitionAsDataObject(temp0, temp1) :
      op->vtkPartitionedDataSetCollection::GetPartitionAsDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions(temp0) :
      op->vtkPartitionedDataSetCollection::GetNumberOfPartitions(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPartitions(temp0, temp1);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::SetNumberOfPartitions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_HasMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkPartitionedDataSetCollection::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSetCollection_HasMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkPartitionedDataSetCollection::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetCollection_HasMetaData_Methods[] = {
  {"HasMetaData", PyvtkPartitionedDataSetCollection_HasMetaData_s1, METH_VARARGS,
   "@I"},
  {"HasMetaData", PyvtkPartitionedDataSetCollection_HasMetaData_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSetCollection_HasMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSetCollection_HasMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HasMetaData");
  return nullptr;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkPartitionedDataSetCollection::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSetCollection_GetMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkPartitionedDataSetCollection::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetCollection_GetMetaData_Methods[] = {
  {"GetMetaData", PyvtkPartitionedDataSetCollection_GetMetaData_s1, METH_VARARGS,
   "@I"},
  {"GetMetaData", PyvtkPartitionedDataSetCollection_GetMetaData_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSetCollection_GetMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSetCollection_GetMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMetaData");
  return nullptr;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetDataAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataAssembly *tempr = (ap.IsBound() ?
      op->GetDataAssembly() :
      op->vtkPartitionedDataSetCollection::GetDataAssembly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SetDataAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  vtkDataAssembly *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataAssembly"))
  {
    if (ap.IsBound())
    {
      op->SetDataAssembly(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::SetDataAssembly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetCompositeIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCompositeIndex(temp0) :
      op->vtkPartitionedDataSetCollection::GetCompositeIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSetCollection_GetCompositeIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCompositeIndex(temp0, temp1) :
      op->vtkPartitionedDataSetCollection::GetCompositeIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSetCollection_GetCompositeIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPartitionedDataSetCollection_GetCompositeIndex_s1(self, args);
    case 2:
      return PyvtkPartitionedDataSetCollection_GetCompositeIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCompositeIndex");
  return nullptr;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkPartitionedDataSetCollection *tempr = vtkPartitionedDataSetCollection::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSetCollection_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPartitionedDataSetCollection *tempr = vtkPartitionedDataSetCollection::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetCollection_GetData_Methods[] = {
  {"GetData", PyvtkPartitionedDataSetCollection_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkPartitionedDataSetCollection_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSetCollection_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSetCollection_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPartitionedDataSetCollection_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPartitionedDataSetCollection::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_CompositeShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

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
      op->vtkPartitionedDataSetCollection::CompositeShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

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
      op->vtkPartitionedDataSetCollection::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

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
      op->vtkPartitionedDataSetCollection::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

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
      op->vtkPartitionedDataSetCollection::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPartitionedDataSetCollection::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetCollection_Methods[] = {
  {"IsTypeOf", PyvtkPartitionedDataSetCollection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPartitionedDataSetCollection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPartitionedDataSetCollection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPartitionedDataSetCollection\nC++: static vtkPartitionedDataSetCollection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPartitionedDataSetCollection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPartitionedDataSetCollection\nC++: vtkPartitionedDataSetCollection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPartitionedDataSetCollection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPartitionedDataSetCollection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkPartitionedDataSetCollection_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"SetNumberOfPartitionedDataSets", PyvtkPartitionedDataSetCollection_SetNumberOfPartitionedDataSets, METH_VARARGS,
   "SetNumberOfPartitionedDataSets(self, numDataSets:int) -> None\nC++: void SetNumberOfPartitionedDataSets(unsigned int numDataSets)\n\nSet the number of blocks. This will cause allocation if the new\nnumber of blocks is greater than the current size. All new blocks\nare initialized to with empty `vtkPartitionedDataSetCollection`\ninstances.\n"},
  {"GetNumberOfPartitionedDataSets", PyvtkPartitionedDataSetCollection_GetNumberOfPartitionedDataSets, METH_VARARGS,
   "GetNumberOfPartitionedDataSets(self) -> int\nC++: unsigned int GetNumberOfPartitionedDataSets()\n\nReturns the number of blocks.\n"},
  {"GetPartitionedDataSet", PyvtkPartitionedDataSetCollection_GetPartitionedDataSet, METH_VARARGS,
   "GetPartitionedDataSet(self, idx:int) -> vtkPartitionedDataSet\nC++: vtkPartitionedDataSet *GetPartitionedDataSet(\n    unsigned int idx)\n\nReturns the block at the given index. It is recommended that one\nuses the iterators to iterate over composite datasets rather than\nusing this API.\n"},
  {"SetPartitionedDataSet", PyvtkPartitionedDataSetCollection_SetPartitionedDataSet, METH_VARARGS,
   "SetPartitionedDataSet(self, idx:int,\n    dataset:vtkPartitionedDataSet) -> None\nC++: void SetPartitionedDataSet(unsigned int idx,\n    vtkPartitionedDataSet *dataset)\n\nSets the data object as the given block. The total number of\nblocks will be resized to fit the requested block no.\n\n@remark `dataset` cannot be nullptr.\n"},
  {"RemovePartitionedDataSet", PyvtkPartitionedDataSetCollection_RemovePartitionedDataSet, METH_VARARGS,
   "RemovePartitionedDataSet(self, idx:int) -> None\nC++: void RemovePartitionedDataSet(unsigned int idx)\n\nRemove the given block from the dataset.\n"},
  {"SetPartition", PyvtkPartitionedDataSetCollection_SetPartition, METH_VARARGS,
   "SetPartition(self, idx:int, partition:int, object:vtkDataObject)\n    -> None\nC++: void SetPartition(unsigned int idx, unsigned int partition,\n    vtkDataObject *object)\n\nAPI to get/set partitions using a tuple index.\n"},
  {"GetPartition", PyvtkPartitionedDataSetCollection_GetPartition, METH_VARARGS,
   "GetPartition(self, idx:int, partition:int) -> vtkDataSet\nC++: vtkDataSet *GetPartition(unsigned int idx,\n    unsigned int partition)\n\n"},
  {"GetPartitionAsDataObject", PyvtkPartitionedDataSetCollection_GetPartitionAsDataObject, METH_VARARGS,
   "GetPartitionAsDataObject(self, idx:int, partition:int)\n    -> vtkDataObject\nC++: vtkDataObject *GetPartitionAsDataObject(unsigned int idx,\n    unsigned int partition)\n\n"},
  {"GetNumberOfPartitions", PyvtkPartitionedDataSetCollection_GetNumberOfPartitions, METH_VARARGS,
   "GetNumberOfPartitions(self, idx:int) -> int\nC++: unsigned int GetNumberOfPartitions(unsigned int idx)\n\nReturns the number of partitions in a partitioned dataset at the\ngiven index.\n"},
  {"SetNumberOfPartitions", PyvtkPartitionedDataSetCollection_SetNumberOfPartitions, METH_VARARGS,
   "SetNumberOfPartitions(self, idx:int, numPartitions:int) -> None\nC++: void SetNumberOfPartitions(unsigned int idx,\n    unsigned int numPartitions)\n\nSet number of partitions at a given index. Note, this will call\n`SetNumberOfPartitionedDataSets` if needed to grow the\ncollection.\n"},
  {"HasMetaData", PyvtkPartitionedDataSetCollection_HasMetaData, METH_VARARGS,
   "HasMetaData(self, idx:int) -> int\nC++: vtkTypeBool HasMetaData(unsigned int idx)\nHasMetaData(self, iter:vtkCompositeDataIterator) -> int\nC++: vtkTypeBool HasMetaData(vtkCompositeDataIterator *iter)\n    override;\n\nReturns true if meta-data is available for a given block.\n"},
  {"GetMetaData", PyvtkPartitionedDataSetCollection_GetMetaData, METH_VARARGS,
   "GetMetaData(self, idx:int) -> vtkInformation\nC++: vtkInformation *GetMetaData(unsigned int idx)\nGetMetaData(self, iter:vtkCompositeDataIterator) -> vtkInformation\nC++: vtkInformation *GetMetaData(vtkCompositeDataIterator *iter)\n    override;\n\nReturns the meta-data for the block. If none is already present,\na new vtkInformation object will be allocated. Use HasMetaData to\navoid allocating vtkInformation objects.\n"},
  {"GetDataAssembly", PyvtkPartitionedDataSetCollection_GetDataAssembly, METH_VARARGS,
   "GetDataAssembly(self) -> vtkDataAssembly\nC++: virtual vtkDataAssembly *GetDataAssembly()\n\nDataAssembly provides a way to define hierarchical organization\nof partitioned-datasets. These methods provide access to the data\nassembly instances associated, if any.\n"},
  {"SetDataAssembly", PyvtkPartitionedDataSetCollection_SetDataAssembly, METH_VARARGS,
   "SetDataAssembly(self, assembly:vtkDataAssembly) -> None\nC++: void SetDataAssembly(vtkDataAssembly *assembly)\n\n"},
  {"GetCompositeIndex", PyvtkPartitionedDataSetCollection_GetCompositeIndex, METH_VARARGS,
   "GetCompositeIndex(self, idx:int) -> int\nC++: unsigned int GetCompositeIndex(unsigned int idx)\nGetCompositeIndex(self, idx:int, partition:int) -> int\nC++: unsigned int GetCompositeIndex(unsigned int idx,\n    unsigned int partition)\n\nReturns the composite index (sometimes referred to as the\nflat-index) for either a partitioned dataset or a specific\npartition in a partitioned dataset.\n"},
  {"GetData", PyvtkPartitionedDataSetCollection_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkPartitionedDataSetCollection\nC++: static vtkPartitionedDataSetCollection *GetData(\n    vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0)\n    -> vtkPartitionedDataSetCollection\nC++: static vtkPartitionedDataSetCollection *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"GetMTime", PyvtkPartitionedDataSetCollection_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include DataAssembly MTime.\n"},
  {"CompositeShallowCopy", PyvtkPartitionedDataSetCollection_CompositeShallowCopy, METH_VARARGS,
   "CompositeShallowCopy(self, src:vtkCompositeDataSet) -> None\nC++: void CompositeShallowCopy(vtkCompositeDataSet *src) override;\n\nOverridden to handle vtkDataAssembly.\n"},
  {"ShallowCopy", PyvtkPartitionedDataSetCollection_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the data up to the array\npointers only. The implementation is delegated to the differenent\nsubclasses. If you want to copy the actual data, @see DeepCopy.\n\nThis method shallow copy the field data and copy the internal\nstructure.\n"},
  {"DeepCopy", PyvtkPartitionedDataSetCollection_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"CopyStructure", PyvtkPartitionedDataSetCollection_CopyStructure, METH_VARARGS,
   "CopyStructure(self, input:vtkCompositeDataSet) -> None\nC++: void CopyStructure(vtkCompositeDataSet *input) override;\n\nCopies the tree structure from the input. All pointers to\nnon-composite data objects are initialized to nullptr. This also\nshallow copies the meta data associated with all the nodes.\n"},
  {"Initialize", PyvtkPartitionedDataSetCollection_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPartitionedDataSetCollection_Doc =
  "vtkPartitionedDataSetCollection - Composite dataset that groups\ndatasets as a collection.\n\n"
  "Superclass: vtkDataObjectTree\n\n"
  "vtkPartitionedDataSetCollection is a vtkCompositeDataSet that stores\n"
  "a collection of non-null vtkPartitionedDataSets. These items can\n"
  "represent different concepts depending on the context. For example,\n"
  "they can represent region of different materials in a simulation or\n"
  "parts in an assembly. It is not requires that items have anything in\n"
  "common. For example, they can have completely different point or cell\n"
  "arrays.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPartitionedDataSetCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPartitionedDataSetCollection", // tp_name
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
  PyvtkPartitionedDataSetCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPartitionedDataSetCollection_StaticNew()
{
  return vtkPartitionedDataSetCollection::New();
}

PyObject *PyvtkPartitionedDataSetCollection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPartitionedDataSetCollection_Type, PyvtkPartitionedDataSetCollection_Methods,
    "vtkPartitionedDataSetCollection",
 &PyvtkPartitionedDataSetCollection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectTree_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPartitionedDataSetCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPartitionedDataSetCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPartitionedDataSetCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}


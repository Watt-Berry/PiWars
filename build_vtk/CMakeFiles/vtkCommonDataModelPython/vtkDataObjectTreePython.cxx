// python wrapper for vtkDataObjectTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataObjectTree.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectTree(PyObject *dict); }
extern "C" { PyObject *PyvtkDataObjectTree_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataSet_ClassNew
extern "C" { PyObject *PyvtkCompositeDataSet_ClassNew(); }
#define DECLARED_PyvtkCompositeDataSet_ClassNew
#endif

static PyObject *
PyvtkDataObjectTree_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectTree *tempr = vtkDataObjectTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectTree::NewInstance());

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
PyvtkDataObjectTree_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataObjectTree::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataObjectTree::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_NewTreeIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewTreeIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectTreeIterator *tempr = (ap.IsBound() ?
      op->NewTreeIterator() :
      op->vtkDataObjectTree::NewTreeIterator());

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
PyvtkDataObjectTree_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkDataObjectTree::NewIterator());

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
PyvtkDataObjectTree_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

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
      op->vtkDataObjectTree::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

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
      op->vtkDataObjectTree::SetDataSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_SetDataSetFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkDataObjectTreeIterator *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectTreeIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetDataSetFrom(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectTree::SetDataSetFrom(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkDataObjectTree::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectTree_GetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkDataObjectTree::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectTree_GetDataSet_Methods[] = {
  {"GetDataSet", PyvtkDataObjectTree_GetDataSet_s1, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {"GetDataSet", PyvtkDataObjectTree_GetDataSet_s2, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataObjectTree_GetDataSet(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObjectTree_GetDataSet_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSet");
  return nullptr;
}


static PyObject *
PyvtkDataObjectTree_GetMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkDataObjectTree::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_HasMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkDataObjectTree::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkDataObjectTree::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataObjectTree::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_CompositeShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

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
      op->vtkDataObjectTree::CompositeShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

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
      op->vtkDataObjectTree::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

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
      op->vtkDataObjectTree::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_RecursiveShallowCopy(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method RecursiveShallowCopy."
    " (" "Please use ShallowCopy instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "RecursiveShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

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
      op->vtkDataObjectTree::RecursiveShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkDataObjectTree::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkDataObjectTree::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkDataObjectTree *tempr = vtkDataObjectTree::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectTree_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkDataObjectTree *tempr = vtkDataObjectTree::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectTree_GetData_Methods[] = {
  {"GetData", PyvtkDataObjectTree_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkDataObjectTree_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataObjectTree_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObjectTree_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataObjectTree_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkDataObjectTree_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkDataObjectTree::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectTree_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectTree_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectTree_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectTree_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataObjectTree\nC++: static vtkDataObjectTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectTree_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataObjectTree\nC++: vtkDataObjectTree *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataObjectTree_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataObjectTree_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"NewTreeIterator", PyvtkDataObjectTree_NewTreeIterator, METH_VARARGS,
   "NewTreeIterator(self) -> vtkDataObjectTreeIterator\nC++: virtual vtkDataObjectTreeIterator *NewTreeIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n"},
  {"NewIterator", PyvtkDataObjectTree_NewIterator, METH_VARARGS,
   "NewIterator(self) -> vtkCompositeDataIterator\nC++: vtkCompositeDataIterator *NewIterator() override;\n\nReturn a new iterator (the iterator has to be deleted by user).\n\n* Use NewTreeIterator when you have a pointer to a\n  vtkDataObjectTree\n* and NewIterator when you have a pointer to a\n  vtkCompositeDataSet;\n* NewIterator is inherited and calls NewTreeIterator internally.\n"},
  {"CopyStructure", PyvtkDataObjectTree_CopyStructure, METH_VARARGS,
   "CopyStructure(self, input:vtkCompositeDataSet) -> None\nC++: void CopyStructure(vtkCompositeDataSet *input) override;\n\nCopies the tree structure from the input. All pointers to\nnon-composite data objects are initialized to nullptr. This also\nshallow copies the meta data associated with all the nodes.\n"},
  {"SetDataSet", PyvtkDataObjectTree_SetDataSet, METH_VARARGS,
   "SetDataSet(self, iter:vtkCompositeDataIterator,\n    dataObj:vtkDataObject) -> None\nC++: void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj) override;\n\nSets the data set at the location pointed by the iterator. The\niterator does not need to be iterating over this dataset itself.\nIt can be any composite datasite with similar structure (achieved\nby using CopyStructure).\n"},
  {"SetDataSetFrom", PyvtkDataObjectTree_SetDataSetFrom, METH_VARARGS,
   "SetDataSetFrom(self, iter:vtkDataObjectTreeIterator,\n    dataObj:vtkDataObject) -> None\nC++: void SetDataSetFrom(vtkDataObjectTreeIterator *iter,\n    vtkDataObject *dataObj)\n\nSets the data at the location provided by a\nvtkDataObjectTreeIterator\n"},
  {"GetDataSet", PyvtkDataObjectTree_GetDataSet, METH_VARARGS,
   "GetDataSet(self, iter:vtkCompositeDataIterator) -> vtkDataObject\nC++: vtkDataObject *GetDataSet(vtkCompositeDataIterator *iter)\n    override;\nGetDataSet(self, flatIndex:int) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(unsigned int flatIndex)\n\nReturns the dataset located at the position pointed by the\niterator. The iterator does not need to be iterating over this\ndataset itself. It can be an iterator for composite dataset with\nsimilar structure (achieved by using CopyStructure).\n"},
  {"GetMetaData", PyvtkDataObjectTree_GetMetaData, METH_VARARGS,
   "GetMetaData(self, iter:vtkCompositeDataIterator) -> vtkInformation\nC++: virtual vtkInformation *GetMetaData(\n    vtkCompositeDataIterator *iter)\n\nReturns the meta-data associated with the position pointed by the\niterator. This will create a new vtkInformation object if none\nalready exists. Use HasMetaData to avoid creating the\nvtkInformation object unnecessarily. The iterator does not need\nto be iterating over this dataset itself. It can be an iterator\nfor composite dataset with similar structure (achieved by using\nCopyStructure).\n"},
  {"HasMetaData", PyvtkDataObjectTree_HasMetaData, METH_VARARGS,
   "HasMetaData(self, iter:vtkCompositeDataIterator) -> int\nC++: virtual vtkTypeBool HasMetaData(\n    vtkCompositeDataIterator *iter)\n\nReturns if any meta-data associated with the position pointed by\nthe iterator. The iterator does not need to be iterating over\nthis dataset itself. It can be an iterator for composite dataset\nwith similar structure (achieved by using CopyStructure).\n"},
  {"GetActualMemorySize", PyvtkDataObjectTree_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated.\n"},
  {"Initialize", PyvtkDataObjectTree_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"CompositeShallowCopy", PyvtkDataObjectTree_CompositeShallowCopy, METH_VARARGS,
   "CompositeShallowCopy(self, src:vtkCompositeDataSet) -> None\nC++: void CompositeShallowCopy(vtkCompositeDataSet *src) override;\n\nCompositeShallow, Shallow and Deep copy.\n"},
  {"ShallowCopy", PyvtkDataObjectTree_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the data up to the array\npointers only. The implementation is delegated to the differenent\nsubclasses. If you want to copy the actual data, @see DeepCopy.\n\nThis method shallow copy the field data and copy the internal\nstructure.\n"},
  {"DeepCopy", PyvtkDataObjectTree_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"RecursiveShallowCopy", PyvtkDataObjectTree_RecursiveShallowCopy, METH_VARARGS,
   "RecursiveShallowCopy(self, src:vtkDataObject) -> None\nC++: void RecursiveShallowCopy(vtkDataObject *src) override;\n\n@deprecated RecursiveShallowCopy method, @see ShallowCopy\n"},
  {"GetNumberOfPoints", PyvtkDataObjectTree_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nReturns the total number of points of all blocks. This will\niterate over all blocks and call GetNumberOfPoints() so it might\nbe expansive.\n"},
  {"GetNumberOfCells", PyvtkDataObjectTree_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nReturns the total number of cells of all blocks. This will\niterate over all blocks and call GetNumberOfPoints() so it might\nbe expensive.\n"},
  {"GetData", PyvtkDataObjectTree_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkDataObjectTree\nC++: static vtkDataObjectTree *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkDataObjectTree\nC++: static vtkDataObjectTree *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"GetDataObjectType", PyvtkDataObjectTree_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nOverridden to return `VTK_DATA_OBJECT_TREE`.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataObjectTree_Doc =
  "vtkDataObjectTree - provides implementation for most abstract methods\nin the superclass vtkCompositeDataSet\n\n"
  "Superclass: vtkCompositeDataSet\n\n"
  "vtkDataObjectTree is represents a collection of datasets (including\n"
  "other composite datasets). It provides an interface to access the\n"
  "datasets through iterators. vtkDataObjectTree provides methods that\n"
  "are used by subclasses to store the datasets. vtkDataObjectTree\n"
  "provides the datastructure for a full tree representation. Subclasses\n"
  "provide the semantics for it and control how this tree is built.\n\n"
  "@sa\n"
  "vtkDataObjectTreeIterator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObjectTree", // tp_name
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
  PyvtkDataObjectTree_Doc, // tp_doc
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

PyObject *PyvtkDataObjectTree_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataObjectTree_Type, PyvtkDataObjectTree_Methods,
    "vtkDataObjectTree",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObjectTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectTree", o) != 0)
  {
    Py_DECREF(o);
  }

}


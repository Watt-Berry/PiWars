// python wrapper for vtkCompositeDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataSet(PyObject *dict); }
extern "C" { PyObject *PyvtkCompositeDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static PyObject *
PyvtkCompositeDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataSet::NewInstance());

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
PyvtkCompositeDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositeDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositeDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkCompositeDataIterator *tempr = op->NewIterator();

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
PyvtkCompositeDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkCompositeDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    op->SetDataSet(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkDataObject *tempr = op->GetDataSet(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataSet_GetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkCompositeDataSet::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_GetDataSet_Methods[] = {
  {"GetDataSet", PyvtkCompositeDataSet_GetDataSet_s1, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {"GetDataSet", PyvtkCompositeDataSet_GetDataSet_s2, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositeDataSet_GetDataSet(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeDataSet_GetDataSet_Methods;
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
PyvtkCompositeDataSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCompositeDataSet::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataSet_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_GetData_Methods[] = {
  {"GetData", PyvtkCompositeDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkCompositeDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositeDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkCompositeDataSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCompositeDataSet::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_CompositeShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::CompositeShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_RecursiveShallowCopy(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method RecursiveShallowCopy."
    " (" "Use ShallowCopy instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "RecursiveShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::RecursiveShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkCompositeDataSet::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCompositeDataSet::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkCompositeDataSet::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::GetBounds(temp0);
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
PyvtkCompositeDataSet_NAME(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkCompositeDataSet::NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_CURRENT_PROCESS_CAN_LOAD_BLOCK(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CURRENT_PROCESS_CAN_LOAD_BLOCK");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkCompositeDataSet::CURRENT_PROCESS_CAN_LOAD_BLOCK();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositeDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositeDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"NewIterator", PyvtkCompositeDataSet_NewIterator, METH_VARARGS,
   "NewIterator(self) -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n"},
  {"GetDataObjectType", PyvtkCompositeDataSet_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"CopyStructure", PyvtkCompositeDataSet_CopyStructure, METH_VARARGS,
   "CopyStructure(self, input:vtkCompositeDataSet) -> None\nC++: virtual void CopyStructure(vtkCompositeDataSet *input)\n\nCopies the tree structure from the input. All pointers to\nnon-composite data objects are initialized to nullptr. This also\nshallow copies the meta data associated with all the nodes.\n"},
  {"SetDataSet", PyvtkCompositeDataSet_SetDataSet, METH_VARARGS,
   "SetDataSet(self, iter:vtkCompositeDataIterator,\n    dataObj:vtkDataObject) -> None\nC++: virtual void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj)\n\nSets the data set at the location pointed by the iterator. The\niterator does not need to be iterating over this dataset itself.\nIt can be any composite dataset with similar structure (achieved\nby using CopyStructure).\n"},
  {"GetDataSet", PyvtkCompositeDataSet_GetDataSet, METH_VARARGS,
   "GetDataSet(self, iter:vtkCompositeDataIterator) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(\n    vtkCompositeDataIterator *iter)\nGetDataSet(self, flatIndex:int) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(unsigned int flatIndex)\n\nReturns the dataset located at the position pointed by the\niterator. The iterator does not need to be iterating over this\ndataset itself. It can be an iterator for composite dataset with\nsimilar structure (achieved by using CopyStructure).\n"},
  {"GetActualMemorySize", PyvtkCompositeDataSet_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated.\n"},
  {"GetData", PyvtkCompositeDataSet_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"Initialize", PyvtkCompositeDataSet_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"CompositeShallowCopy", PyvtkCompositeDataSet_CompositeShallowCopy, METH_VARARGS,
   "CompositeShallowCopy(self, src:vtkCompositeDataSet) -> None\nC++: virtual void CompositeShallowCopy(vtkCompositeDataSet *src)\n\nThe goal of the method is to copy the data up to the dataset\npointers only. The implementation is delegated to the differenent\nsubclasses. If you want to copy up to array pointers, @see\nvtkDataObject::ShallowCopy.\n\nThis method just calls vtkDataObject::ShallowCopy.\n"},
  {"RecursiveShallowCopy", PyvtkCompositeDataSet_RecursiveShallowCopy, METH_VARARGS,
   "RecursiveShallowCopy(self, src:vtkDataObject) -> None\nC++: virtual void RecursiveShallowCopy(vtkDataObject *src)\n\n@deprecated RecursiveShallowCopy method, @see ShallowCopy\n"},
  {"GetNumberOfPoints", PyvtkCompositeDataSet_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturns the total number of points of all blocks. This will\niterate over all blocks and call GetNumberOfPoints() so it might\nbe expensive.\n"},
  {"GetNumberOfCells", PyvtkCompositeDataSet_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nReturns the total number of cells of all blocks. This will\niterate over all blocks and call GetNumberOfPoints() so it might\nbe expensive.\n"},
  {"GetNumberOfElements", PyvtkCompositeDataSet_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self, type:int) -> int\nC++: vtkIdType GetNumberOfElements(int type) override;\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {"GetBounds", PyvtkCompositeDataSet_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nReturn the geometric bounding box in the form (xmin,xmax,\nymin,ymax, zmin,zmax).  Note that if the composite dataset\ncontains abstract types (i.e., non vtkDataSet types) such as\ntables these will be ignored by the method. In cases where no\nvtkDataSet is contained in the composite dataset then the\nreturned bounds will be undefined. THIS METHOD IS THREAD SAFE IF\nFIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT\nMODIFIED.\n"},
  {"NAME", PyvtkCompositeDataSet_NAME, METH_VARARGS,
   "NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *NAME()\n\nKey used to put node name in the meta-data associated with a\nnode.\n"},
  {"CURRENT_PROCESS_CAN_LOAD_BLOCK", PyvtkCompositeDataSet_CURRENT_PROCESS_CAN_LOAD_BLOCK, METH_VARARGS,
   "CURRENT_PROCESS_CAN_LOAD_BLOCK() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CURRENT_PROCESS_CAN_LOAD_BLOCK(\n    )\n\nKey used to indicate that the current process can load the data\nin the node.  Used for parallel readers where the nodes are\nassigned to the processes by the reader to indicate further down\nthe pipeline which nodes will be on which processes.\n***THIS IS AN EXPERIMENTAL KEY SUBJECT TO CHANGE WITHOUT\n    NOTICE***\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompositeDataSet_Doc =
  "vtkCompositeDataSet - abstract superclass for composite (multi-block\nor AMR) datasets\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkCompositeDataSet is an abstract class that represents a collection\n"
  "of datasets (including other composite datasets). It provides an\n"
  "interface to access the datasets through iterators.\n"
  "vtkCompositeDataSet provides methods that are used by subclasses to\n"
  "store the datasets. vtkCompositeDataSet provides the datastructure\n"
  "for a full tree representation. Subclasses provide the semantics for\n"
  "it and control how this tree is built.\n\n"
  "@sa\n"
  "vtkCompositeDataIterator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositeDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCompositeDataSet", // tp_name
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
  PyvtkCompositeDataSet_Doc, // tp_doc
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

PyObject *PyvtkCompositeDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositeDataSet_Type, PyvtkCompositeDataSet_Methods,
    "vtkCompositeDataSet",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}


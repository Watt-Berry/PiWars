// python wrapper for vtkAbstractCellLinks
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractCellLinks.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractCellLinks(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractCellLinks_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractCellLinks_CellLinksTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAbstractCellLinks.CellLinksTypes", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkAbstractCellLinks_CellLinksTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAbstractCellLinks_CellLinksTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAbstractCellLinks_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractCellLinks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractCellLinks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractCellLinks *tempr = vtkAbstractCellLinks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLinks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractCellLinks::NewInstance());

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
PyvtkAbstractCellLinks_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractCellLinks::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractCellLinks::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0);
    }
    else
    {
      op->vtkAbstractCellLinks::SetDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkAbstractCellLinks::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_BuildLinks_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method BuildLinks."
    " (" "Use SetDataSet() and BuildLinks() instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->BuildLinks(temp0);
    }
    else
    {
      op->vtkAbstractCellLinks::BuildLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLinks_BuildLinks_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->BuildLinks();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLinks_BuildLinks(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAbstractCellLinks_BuildLinks_s1(self, args);
    case 0:
      return PyvtkAbstractCellLinks_BuildLinks_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BuildLinks");
  return nullptr;
}


static PyObject *
PyvtkAbstractCellLinks_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Initialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Squeeze();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Reset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned long tempr = op->GetActualMemorySize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  vtkAbstractCellLinks *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLinks"))
  {
    op->DeepCopy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_ComputeType_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeType");

  long long temp0;
  long long temp1;
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    int tempr = vtkAbstractCellLinks::ComputeType(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLinks_ComputeType_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeType");

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkAbstractCellLinks::ComputeType(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractCellLinks_ComputeType_Methods[] = {
  {"ComputeType", PyvtkAbstractCellLinks_ComputeType_s1, METH_VARARGS | METH_STATIC,
   "kkV *vtkCellArray"},
  {"ComputeType", PyvtkAbstractCellLinks_ComputeType_s2, METH_VARARGS | METH_STATIC,
   "kkk"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAbstractCellLinks_ComputeType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractCellLinks_ComputeType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeType");
  return nullptr;
}


static PyObject *
PyvtkAbstractCellLinks_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkAbstractCellLinks::GetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_SelectCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  const size_t size0 = 2;
  long long temp0[2];
  long long save0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    op->SelectCells(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_SetSequentialProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSequentialProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSequentialProcessing(temp0);
    }
    else
    {
      op->vtkAbstractCellLinks::SetSequentialProcessing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_GetSequentialProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequentialProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSequentialProcessing() :
      op->vtkAbstractCellLinks::GetSequentialProcessing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_SequentialProcessingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SequentialProcessingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SequentialProcessingOn();
    }
    else
    {
      op->vtkAbstractCellLinks::SequentialProcessingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_SequentialProcessingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SequentialProcessingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SequentialProcessingOff();
    }
    else
    {
      op->vtkAbstractCellLinks::SequentialProcessingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_GetBuildTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetBuildTime() :
      op->vtkAbstractCellLinks::GetBuildTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkAbstractCellLinks::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractCellLinks_Methods[] = {
  {"IsTypeOf", PyvtkAbstractCellLinks_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractCellLinks_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractCellLinks_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractCellLinks\nC++: static vtkAbstractCellLinks *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractCellLinks_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractCellLinks\nC++: vtkAbstractCellLinks *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractCellLinks_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractCellLinks_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataSet", PyvtkAbstractCellLinks_SetDataSet, METH_VARARGS,
   "SetDataSet(self, __a:vtkDataSet) -> None\nC++: virtual void SetDataSet(vtkDataSet *)\n\nSet/Get the points/cells defining this dataset.\n"},
  {"GetDataSet", PyvtkAbstractCellLinks_GetDataSet, METH_VARARGS,
   "GetDataSet(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSet()\n\n"},
  {"BuildLinks", PyvtkAbstractCellLinks_BuildLinks, METH_VARARGS,
   "BuildLinks(self, data:vtkDataSet) -> None\nC++: void BuildLinks(vtkDataSet *data)\nBuildLinks(self) -> None\nC++: virtual void BuildLinks()\n\nSet the input dataset and build the link list array.\n"},
  {"Initialize", PyvtkAbstractCellLinks_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nRelease memory and revert to empty state.\n"},
  {"Squeeze", PyvtkAbstractCellLinks_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: virtual void Squeeze()\n\nReclaim any unused memory.\n"},
  {"Reset", PyvtkAbstractCellLinks_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: virtual void Reset()\n\nReset to a state of no entries without freeing the memory.\n"},
  {"GetActualMemorySize", PyvtkAbstractCellLinks_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this cell\nlinks array. Used to support streaming and reading/writing data.\nThe value returned is guaranteed to be greater than or equal to\nthe memory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"DeepCopy", PyvtkAbstractCellLinks_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkAbstractCellLinks) -> None\nC++: virtual void DeepCopy(vtkAbstractCellLinks *src)\n\nStandard DeepCopy method.  Since this object contains no\nreference to other objects, there is no ShallowCopy.\n"},
  {"ComputeType", PyvtkAbstractCellLinks_ComputeType, METH_VARARGS,
   "ComputeType(maxPtId:int, maxCellId:int, ca:vtkCellArray) -> int\nC++: static int ComputeType(vtkIdType maxPtId,\n    vtkIdType maxCellId, vtkCellArray *ca)\nComputeType(maxPtId:int, maxCellId:int, connectivitySize:int)\n    -> int\nC++: static int ComputeType(vtkIdType maxPtId,\n    vtkIdType maxCellId, vtkIdType connectivitySize)\n\nBased on the input (i.e., number of points, number of cells, and\nlength of connectivity array) this helper method returns the\nintegral type to use when instantiating cell link-related classes\nin order to properly represent the data.  The return value is one\nof the types defined in the enum CellLinksType enum defined\npreviously. Subclasses may choose to instantiate themselves with\ndifferent integral types for performance and/or memory reasons.\nThis method is useful when instantiating a\nvtkStaticCellLinksTemplate; when instantiating a vtkCellLinks the\nclass is hardwired for vtkIdType.\n"},
  {"GetType", PyvtkAbstractCellLinks_GetType, METH_VARARGS,
   "GetType(self) -> int\nC++: virtual int GetType()\n\nReturn the type of locator (see enum above).\n"},
  {"SelectCells", PyvtkAbstractCellLinks_SelectCells, METH_VARARGS,
   "SelectCells(self, minMaxDegree:[int, int], cellSelection:[int,\n    ...]) -> None\nC++: virtual void SelectCells(vtkIdType minMaxDegree[2],\n    unsigned char *cellSelection)\n\nSelect all cells with a point degree in the range\n[minDegree,maxDegree). The degree is the number of cells using a\npoint. The selection is indicated through the provided unsigned\nchar array, with a non-zero value indicates selection. The memory\nallocated for cellSelection must be the maximum cell id\nreferenced in the links.\n"},
  {"SetSequentialProcessing", PyvtkAbstractCellLinks_SetSequentialProcessing, METH_VARARGS,
   "SetSequentialProcessing(self, _arg:bool) -> None\nC++: virtual void SetSequentialProcessing(bool _arg)\n\nForce sequential processing (i.e. single thread) of the link\nbuilding process. By default, sequential processing is off. Note\nthis flag only applies if the class has been compiled with\nVTK_SMP_IMPLEMENTATION_TYPE set to something other than\nSequential. (If set to Sequential, then the filter always runs in\nserial mode.) This flag is typically used for benchmarking\npurposes.\n"},
  {"GetSequentialProcessing", PyvtkAbstractCellLinks_GetSequentialProcessing, METH_VARARGS,
   "GetSequentialProcessing(self) -> bool\nC++: virtual bool GetSequentialProcessing()\n\n"},
  {"SequentialProcessingOn", PyvtkAbstractCellLinks_SequentialProcessingOn, METH_VARARGS,
   "SequentialProcessingOn(self) -> None\nC++: virtual void SequentialProcessingOn()\n\n"},
  {"SequentialProcessingOff", PyvtkAbstractCellLinks_SequentialProcessingOff, METH_VARARGS,
   "SequentialProcessingOff(self) -> None\nC++: virtual void SequentialProcessingOff()\n\n"},
  {"GetBuildTime", PyvtkAbstractCellLinks_GetBuildTime, METH_VARARGS,
   "GetBuildTime(self) -> int\nC++: virtual vtkMTimeType GetBuildTime()\n\nReturn the time of the last data structure build.\n"},
  {"UsesGarbageCollector", PyvtkAbstractCellLinks_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: bool UsesGarbageCollector() override;\n\nHandle the dataset <-> Links loop.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractCellLinks_Doc =
  "vtkAbstractCellLinks - an abstract base class for classes that build\ntopological links from points to cells\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAbstractCellLinks is a family of supplemental objects to\n"
  "vtkCellArray and vtkCellTypes, enabling fast access from points to\n"
  "the cells using the points. vtkAbstractCellLinks is an array of\n"
  "links, each link representing a list of cell ids using a particular\n"
  "point. The information provided by this object can be used to\n"
  "determine neighbors and construct other local topological\n"
  "information.\n\n"
  "@sa\n"
  "vtkCellLinks vtkStaticCellLinks vtkStaticCellLinksTemplate\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractCellLinks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAbstractCellLinks", // tp_name
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
  PyvtkAbstractCellLinks_Doc, // tp_doc
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

PyObject *PyvtkAbstractCellLinks_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractCellLinks_Type, PyvtkAbstractCellLinks_Methods,
    "vtkAbstractCellLinks",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAbstractCellLinks_CellLinksTypes_Type);
  PyVTKEnum_Add(&PyvtkAbstractCellLinks_CellLinksTypes_Type, "vtkAbstractCellLinks.CellLinksTypes");

  o = (PyObject *)&PyvtkAbstractCellLinks_CellLinksTypes_Type;
  if (PyDict_SetItemString(d, "CellLinksTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkAbstractCellLinks::CellLinksTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "LINKS_NOT_DEFINED", vtkAbstractCellLinks::LINKS_NOT_DEFINED },
        { "CELL_LINKS", vtkAbstractCellLinks::CELL_LINKS },
        { "STATIC_CELL_LINKS_USHORT", vtkAbstractCellLinks::STATIC_CELL_LINKS_USHORT },
        { "STATIC_CELL_LINKS_UINT", vtkAbstractCellLinks::STATIC_CELL_LINKS_UINT },
        { "STATIC_CELL_LINKS_IDTYPE", vtkAbstractCellLinks::STATIC_CELL_LINKS_IDTYPE },
        { "STATIC_CELL_LINKS_SPECIALIZED", vtkAbstractCellLinks::STATIC_CELL_LINKS_SPECIALIZED },
      };

    o = PyvtkAbstractCellLinks_CellLinksTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractCellLinks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractCellLinks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractCellLinks", o) != 0)
  {
    Py_DECREF(o);
  }

}


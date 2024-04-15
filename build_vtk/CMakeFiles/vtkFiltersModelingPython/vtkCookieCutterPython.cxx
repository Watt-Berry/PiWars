// python wrapper for vtkCookieCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCookieCutter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCookieCutter(PyObject *dict); }
extern "C" { PyObject *PyvtkCookieCutter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCookieCutter_PointInterpolationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkCookieCutter.PointInterpolationType", // tp_name
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
PyObject *PyvtkCookieCutter_PointInterpolationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCookieCutter_PointInterpolationType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCookieCutter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCookieCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCookieCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCookieCutter *tempr = vtkCookieCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCookieCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCookieCutter::NewInstance());

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
PyvtkCookieCutter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCookieCutter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCookieCutter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetLoopsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetLoopsConnection(temp0);
    }
    else
    {
      op->vtkCookieCutter::SetLoopsConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetLoopsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetLoopsConnection() :
      op->vtkCookieCutter::GetLoopsConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetLoopsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetLoopsData(temp0);
    }
    else
    {
      op->vtkCookieCutter::SetLoopsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetLoops() :
      op->vtkCookieCutter::GetLoops());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellData(temp0);
    }
    else
    {
      op->vtkCookieCutter::SetPassCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCellData() :
      op->vtkCookieCutter::GetPassCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_PassCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOn();
    }
    else
    {
      op->vtkCookieCutter::PassCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_PassCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOff();
    }
    else
    {
      op->vtkCookieCutter::PassCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointData(temp0);
    }
    else
    {
      op->vtkCookieCutter::SetPassPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkCookieCutter::GetPassPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOn();
    }
    else
    {
      op->vtkCookieCutter::PassPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOff();
    }
    else
    {
      op->vtkCookieCutter::PassPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetPointInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointInterpolation(temp0);
    }
    else
    {
      op->vtkCookieCutter::SetPointInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetPointInterpolationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointInterpolationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointInterpolationMinValue() :
      op->vtkCookieCutter::GetPointInterpolationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetPointInterpolationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointInterpolationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointInterpolationMaxValue() :
      op->vtkCookieCutter::GetPointInterpolationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetPointInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointInterpolation() :
      op->vtkCookieCutter::GetPointInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetPointInterpolationToMeshEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointInterpolationToMeshEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointInterpolationToMeshEdges();
    }
    else
    {
      op->vtkCookieCutter::SetPointInterpolationToMeshEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetPointInterpolationToLoopEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointInterpolationToLoopEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointInterpolationToLoopEdges();
    }
    else
    {
      op->vtkCookieCutter::SetPointInterpolationToLoopEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkCookieCutter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkCookieCutter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCookieCutter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCookieCutter *op = static_cast<vtkCookieCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkCookieCutter::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCookieCutter_Methods[] = {
  {"IsTypeOf", PyvtkCookieCutter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCookieCutter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCookieCutter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCookieCutter\nC++: static vtkCookieCutter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCookieCutter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCookieCutter\nC++: vtkCookieCutter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCookieCutter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCookieCutter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLoopsConnection", PyvtkCookieCutter_SetLoopsConnection, METH_VARARGS,
   "SetLoopsConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetLoopsConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the a second vtkPolyData input which defines trim loops\nused to cut the input polygonal data. These loops must be\nmanifold, i.e., do not self intersect. The loops are defined from\nthe polygons and polylines defined in this second input. Note\nthat if polylines are used, they are assumed to be closed.\n"},
  {"GetLoopsConnection", PyvtkCookieCutter_GetLoopsConnection, METH_VARARGS,
   "GetLoopsConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetLoopsConnection()\n\n"},
  {"SetLoopsData", PyvtkCookieCutter_SetLoopsData, METH_VARARGS,
   "SetLoopsData(self, loops:vtkDataObject) -> None\nC++: void SetLoopsData(vtkDataObject *loops)\n\nSpecify the a second vtkPolyData input which defines trim loops\nused to cut the input polygonal data. These loops must be\nmanifold, i.e., do not self intersect. The loops are defined from\nthe polygons and polylines defined in this second input.\n"},
  {"GetLoops", PyvtkCookieCutter_GetLoops, METH_VARARGS,
   "GetLoops(self) -> vtkDataObject\nC++: vtkDataObject *GetLoops()\n\n"},
  {"SetPassCellData", PyvtkCookieCutter_SetPassCellData, METH_VARARGS,
   "SetPassCellData(self, _arg:bool) -> None\nC++: virtual void SetPassCellData(bool _arg)\n\nIndicate whether cell data from the input mesh is to be passed\nthrough to the output mesh. By default, PassCellData is enabled.\n"},
  {"GetPassCellData", PyvtkCookieCutter_GetPassCellData, METH_VARARGS,
   "GetPassCellData(self) -> bool\nC++: virtual bool GetPassCellData()\n\n"},
  {"PassCellDataOn", PyvtkCookieCutter_PassCellDataOn, METH_VARARGS,
   "PassCellDataOn(self) -> None\nC++: virtual void PassCellDataOn()\n\n"},
  {"PassCellDataOff", PyvtkCookieCutter_PassCellDataOff, METH_VARARGS,
   "PassCellDataOff(self) -> None\nC++: virtual void PassCellDataOff()\n\n"},
  {"SetPassPointData", PyvtkCookieCutter_SetPassPointData, METH_VARARGS,
   "SetPassPointData(self, _arg:bool) -> None\nC++: virtual void SetPassPointData(bool _arg)\n\nIndicate whether point data from the input mesh are to be passed\nthrough and/or interpolated to the output mesh. By default,\nPassPointData is enabled. Note: both the input mesh points and\nthe trim loops, must have identical point data. Otherwise, a set\noperation will be performed to process just the point data arrays\ncommon to both the mesh point data and loops point data.\n"},
  {"GetPassPointData", PyvtkCookieCutter_GetPassPointData, METH_VARARGS,
   "GetPassPointData(self) -> bool\nC++: virtual bool GetPassPointData()\n\n"},
  {"PassPointDataOn", PyvtkCookieCutter_PassPointDataOn, METH_VARARGS,
   "PassPointDataOn(self) -> None\nC++: virtual void PassPointDataOn()\n\n"},
  {"PassPointDataOff", PyvtkCookieCutter_PassPointDataOff, METH_VARARGS,
   "PassPointDataOff(self) -> None\nC++: virtual void PassPointDataOff()\n\n"},
  {"SetPointInterpolation", PyvtkCookieCutter_SetPointInterpolation, METH_VARARGS,
   "SetPointInterpolation(self, _arg:int) -> None\nC++: virtual void SetPointInterpolation(int _arg)\n\nIf PassPointData is on, indicate how new point data is to\ngenerated at the intersection points between the input mesh edges\nand the trim edges (trim edges form the loops). By default,\nPointInterpolation is set to USE_MESH_EDGES.\n"},
  {"GetPointInterpolationMinValue", PyvtkCookieCutter_GetPointInterpolationMinValue, METH_VARARGS,
   "GetPointInterpolationMinValue(self) -> int\nC++: virtual int GetPointInterpolationMinValue()\n\n"},
  {"GetPointInterpolationMaxValue", PyvtkCookieCutter_GetPointInterpolationMaxValue, METH_VARARGS,
   "GetPointInterpolationMaxValue(self) -> int\nC++: virtual int GetPointInterpolationMaxValue()\n\n"},
  {"GetPointInterpolation", PyvtkCookieCutter_GetPointInterpolation, METH_VARARGS,
   "GetPointInterpolation(self) -> int\nC++: virtual int GetPointInterpolation()\n\n"},
  {"SetPointInterpolationToMeshEdges", PyvtkCookieCutter_SetPointInterpolationToMeshEdges, METH_VARARGS,
   "SetPointInterpolationToMeshEdges(self) -> None\nC++: void SetPointInterpolationToMeshEdges()\n\n"},
  {"SetPointInterpolationToLoopEdges", PyvtkCookieCutter_SetPointInterpolationToLoopEdges, METH_VARARGS,
   "SetPointInterpolationToLoopEdges(self) -> None\nC++: void SetPointInterpolationToLoopEdges()\n\n"},
  {"SetLocator", PyvtkCookieCutter_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkCookieCutter_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkCookieCutter_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCookieCutter_Doc =
  "vtkCookieCutter - cut vtkPolyData defined on the 2D plane with one or\nmore polygons\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter crops an input vtkPolyData consisting of cells (i.e.,\n"
  "points, lines, polygons, and triangle strips) with trim loops\n"
  "specified by a second input containing polygons and/or polylines. The\n"
  "input vtkPolyData and the loops must lie on the same plane. Note that\n"
  "this filter can handle concave polygons and/or loops. It may produce\n"
  "multiple output polygons for each polygon/loop interaction.\n"
  "Similarly, it may produce multiple line segments and so on. (The\n"
  "input to cookie cut (input0) is referred to as the input mesh, while\n"
  "the loops used to cut the input mesh (input1) are referred to as the\n"
  "trim loops.)\n\n"
  "The filter has the option to pass through and generate point and cell\n"
  "data.  If PassCellData is enabled, then the cell data associated with\n"
  "the cropped cells, or cells passed through from the input mesh, are\n"
  "passed through to the output. If PassPointData is enabled, then in\n"
  "similar fashion the point data is passed through; however new points\n"
  "generated by intersection may have point data interpolated in one of\n"
  "two ways. First, the input mesh edges are interpolated at the new\n"
  "intersection points to generate point data, or the trim loop edges\n"
  "are interpolated at the new intersection points to generate point\n"
  "data. Note: for PassPointData and point interpolation to function,\n"
  "the filter requires that the point data attributes (from the mesh and\n"
  "trim loop) are exactly the same. If they are not, then a set\n"
  "intersection operation is performed which uses the point data arrays\n"
  "common to both the mesh and trim loops.\n\n"
  "@warning\n"
  "The mesh and trim loops must lie on the same plane and the plane may\n"
  "be arbitrarily oriented. If not on the same plane, tolerancing issues\n"
  "can produce erratic results.\n\n"
  "@sa\n"
  "vtkImprintFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCookieCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkCookieCutter", // tp_name
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
  PyvtkCookieCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCookieCutter_StaticNew()
{
  return vtkCookieCutter::New();
}

PyObject *PyvtkCookieCutter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCookieCutter_Type, PyvtkCookieCutter_Methods,
    "vtkCookieCutter",
 &PyvtkCookieCutter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCookieCutter_PointInterpolationType_Type);
  PyVTKEnum_Add(&PyvtkCookieCutter_PointInterpolationType_Type, "vtkCookieCutter.PointInterpolationType");

  o = (PyObject *)&PyvtkCookieCutter_PointInterpolationType_Type;
  if (PyDict_SetItemString(d, "PointInterpolationType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkCookieCutter::PointInterpolationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "USE_MESH_EDGES", vtkCookieCutter::USE_MESH_EDGES },
        { "USE_LOOP_EDGES", vtkCookieCutter::USE_LOOP_EDGES },
      };

    o = PyvtkCookieCutter_PointInterpolationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCookieCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCookieCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCookieCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkOctreeImageToPointSetFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOctreeImageToPointSetFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOctreeImageToPointSetFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkOctreeImageToPointSetFilter_ClassNew(); }


static PyObject *
PyvtkOctreeImageToPointSetFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOctreeImageToPointSetFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOctreeImageToPointSetFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOctreeImageToPointSetFilter *tempr = vtkOctreeImageToPointSetFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOctreeImageToPointSetFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOctreeImageToPointSetFilter::NewInstance());

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
PyvtkOctreeImageToPointSetFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOctreeImageToPointSetFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOctreeImageToPointSetFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_SetCreateVerticesCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateVerticesCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateVerticesCellArray(temp0);
    }
    else
    {
      op->vtkOctreeImageToPointSetFilter::SetCreateVerticesCellArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_GetCreateVerticesCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateVerticesCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCreateVerticesCellArray() :
      op->vtkOctreeImageToPointSetFilter::GetCreateVerticesCellArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_CreateVerticesCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateVerticesCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateVerticesCellArrayOn();
    }
    else
    {
      op->vtkOctreeImageToPointSetFilter::CreateVerticesCellArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_CreateVerticesCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateVerticesCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateVerticesCellArrayOff();
    }
    else
    {
      op->vtkOctreeImageToPointSetFilter::CreateVerticesCellArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_SetProcessInputCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessInputCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessInputCellArray(temp0);
    }
    else
    {
      op->vtkOctreeImageToPointSetFilter::SetProcessInputCellArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_GetProcessInputCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessInputCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProcessInputCellArray() :
      op->vtkOctreeImageToPointSetFilter::GetProcessInputCellArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_ProcessInputCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInputCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessInputCellArrayOn();
    }
    else
    {
      op->vtkOctreeImageToPointSetFilter::ProcessInputCellArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_ProcessInputCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInputCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessInputCellArrayOff();
    }
    else
    {
      op->vtkOctreeImageToPointSetFilter::ProcessInputCellArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_SetCellArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayComponent(temp0);
    }
    else
    {
      op->vtkOctreeImageToPointSetFilter::SetCellArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_GetCellArrayComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayComponentMinValue() :
      op->vtkOctreeImageToPointSetFilter::GetCellArrayComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_GetCellArrayComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayComponentMaxValue() :
      op->vtkOctreeImageToPointSetFilter::GetCellArrayComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreeImageToPointSetFilter_GetCellArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreeImageToPointSetFilter *op = static_cast<vtkOctreeImageToPointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayComponent() :
      op->vtkOctreeImageToPointSetFilter::GetCellArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOctreeImageToPointSetFilter_Methods[] = {
  {"IsTypeOf", PyvtkOctreeImageToPointSetFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOctreeImageToPointSetFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOctreeImageToPointSetFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOctreeImageToPointSetFilter\nC++: static vtkOctreeImageToPointSetFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOctreeImageToPointSetFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOctreeImageToPointSetFilter\nC++: vtkOctreeImageToPointSetFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOctreeImageToPointSetFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOctreeImageToPointSetFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCreateVerticesCellArray", PyvtkOctreeImageToPointSetFilter_SetCreateVerticesCellArray, METH_VARARGS,
   "SetCreateVerticesCellArray(self, _arg:bool) -> None\nC++: virtual void SetCreateVerticesCellArray(bool _arg)\n\nSet/Get if a cell array of vertices will be created.\n\nThe default is on.\n"},
  {"GetCreateVerticesCellArray", PyvtkOctreeImageToPointSetFilter_GetCreateVerticesCellArray, METH_VARARGS,
   "GetCreateVerticesCellArray(self) -> bool\nC++: virtual bool GetCreateVerticesCellArray()\n\n"},
  {"CreateVerticesCellArrayOn", PyvtkOctreeImageToPointSetFilter_CreateVerticesCellArrayOn, METH_VARARGS,
   "CreateVerticesCellArrayOn(self) -> None\nC++: virtual void CreateVerticesCellArrayOn()\n\n"},
  {"CreateVerticesCellArrayOff", PyvtkOctreeImageToPointSetFilter_CreateVerticesCellArrayOff, METH_VARARGS,
   "CreateVerticesCellArrayOff(self) -> None\nC++: virtual void CreateVerticesCellArrayOff()\n\n"},
  {"SetProcessInputCellArray", PyvtkOctreeImageToPointSetFilter_SetProcessInputCellArray, METH_VARARGS,
   "SetProcessInputCellArray(self, _arg:bool) -> None\nC++: virtual void SetProcessInputCellArray(bool _arg)\n\nSet/Get if array defined using SetInputArrayToProcess, which MUST\nbe a cell data array, will be processed.\n\nThe default is off.\n"},
  {"GetProcessInputCellArray", PyvtkOctreeImageToPointSetFilter_GetProcessInputCellArray, METH_VARARGS,
   "GetProcessInputCellArray(self) -> bool\nC++: virtual bool GetProcessInputCellArray()\n\n"},
  {"ProcessInputCellArrayOn", PyvtkOctreeImageToPointSetFilter_ProcessInputCellArrayOn, METH_VARARGS,
   "ProcessInputCellArrayOn(self) -> None\nC++: virtual void ProcessInputCellArrayOn()\n\n"},
  {"ProcessInputCellArrayOff", PyvtkOctreeImageToPointSetFilter_ProcessInputCellArrayOff, METH_VARARGS,
   "ProcessInputCellArrayOff(self) -> None\nC++: virtual void ProcessInputCellArrayOff()\n\n"},
  {"SetCellArrayComponent", PyvtkOctreeImageToPointSetFilter_SetCellArrayComponent, METH_VARARGS,
   "SetCellArrayComponent(self, _arg:int) -> None\nC++: virtual void SetCellArrayComponent(int _arg)\n\nSet/Get the component of the input cell data array to process.\n\nThe default is 0.\n"},
  {"GetCellArrayComponentMinValue", PyvtkOctreeImageToPointSetFilter_GetCellArrayComponentMinValue, METH_VARARGS,
   "GetCellArrayComponentMinValue(self) -> int\nC++: virtual int GetCellArrayComponentMinValue()\n\n"},
  {"GetCellArrayComponentMaxValue", PyvtkOctreeImageToPointSetFilter_GetCellArrayComponentMaxValue, METH_VARARGS,
   "GetCellArrayComponentMaxValue(self) -> int\nC++: virtual int GetCellArrayComponentMaxValue()\n\n"},
  {"GetCellArrayComponent", PyvtkOctreeImageToPointSetFilter_GetCellArrayComponent, METH_VARARGS,
   "GetCellArrayComponent(self) -> int\nC++: virtual int GetCellArrayComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOctreeImageToPointSetFilter_Doc =
  "vtkOctreeImageToPointSetFilter - Convert an octree image to point set\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkOctreeImageToPointSetFilter is a filter that converts an image\n"
  "with an octree unsigned char cell array to a pointset. Each bit of\n"
  "the unsigned char indicates if the cell had a point close to one of\n"
  "its 8 corners.\n\n"
  "It can optionally also output a point data array based on an input\n"
  "cell data scalar array by setting SetInputArrayToProcess. This array\n"
  "will have one of the components of the input array.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa vtkPointSetToOctreeImageFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOctreeImageToPointSetFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometryPreview.vtkOctreeImageToPointSetFilter", // tp_name
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
  PyvtkOctreeImageToPointSetFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOctreeImageToPointSetFilter_StaticNew()
{
  return vtkOctreeImageToPointSetFilter::New();
}

PyObject *PyvtkOctreeImageToPointSetFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOctreeImageToPointSetFilter_Type, PyvtkOctreeImageToPointSetFilter_Methods,
    "vtkOctreeImageToPointSetFilter",
 &PyvtkOctreeImageToPointSetFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOctreeImageToPointSetFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOctreeImageToPointSetFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOctreeImageToPointSetFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}


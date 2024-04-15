// python wrapper for vtkVectorNorm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVectorNorm.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVectorNorm(PyObject *dict); }
extern "C" { PyObject *PyvtkVectorNorm_ClassNew(); }


static PyObject *
PyvtkVectorNorm_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVectorNorm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVectorNorm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVectorNorm *tempr = vtkVectorNorm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVectorNorm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVectorNorm::NewInstance());

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
PyvtkVectorNorm_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVectorNorm::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVectorNorm::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalize(temp0);
    }
    else
    {
      op->vtkVectorNorm::SetNormalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_GetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalize() :
      op->vtkVectorNorm::GetNormalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_NormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeOn();
    }
    else
    {
      op->vtkVectorNorm::NormalizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_NormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeOff();
    }
    else
    {
      op->vtkVectorNorm::NormalizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeMode(temp0);
    }
    else
    {
      op->vtkVectorNorm::SetAttributeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeMode() :
      op->vtkVectorNorm::GetAttributeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetAttributeModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToDefault();
    }
    else
    {
      op->vtkVectorNorm::SetAttributeModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetAttributeModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUsePointData();
    }
    else
    {
      op->vtkVectorNorm::SetAttributeModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetAttributeModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUseCellData();
    }
    else
    {
      op->vtkVectorNorm::SetAttributeModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorNorm_GetAttributeModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeModeAsString() :
      op->vtkVectorNorm::GetAttributeModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVectorNorm_Methods[] = {
  {"IsTypeOf", PyvtkVectorNorm_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVectorNorm_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVectorNorm_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVectorNorm\nC++: static vtkVectorNorm *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVectorNorm_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVectorNorm\nC++: vtkVectorNorm *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVectorNorm_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVectorNorm_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNormalize", PyvtkVectorNorm_SetNormalize, METH_VARARGS,
   "SetNormalize(self, _arg:int) -> None\nC++: virtual void SetNormalize(vtkTypeBool _arg)\n\n"},
  {"GetNormalize", PyvtkVectorNorm_GetNormalize, METH_VARARGS,
   "GetNormalize(self) -> int\nC++: virtual vtkTypeBool GetNormalize()\n\n"},
  {"NormalizeOn", PyvtkVectorNorm_NormalizeOn, METH_VARARGS,
   "NormalizeOn(self) -> None\nC++: virtual void NormalizeOn()\n\n"},
  {"NormalizeOff", PyvtkVectorNorm_NormalizeOff, METH_VARARGS,
   "NormalizeOff(self) -> None\nC++: virtual void NormalizeOff()\n\n"},
  {"SetAttributeMode", PyvtkVectorNorm_SetAttributeMode, METH_VARARGS,
   "SetAttributeMode(self, _arg:int) -> None\nC++: virtual void SetAttributeMode(int _arg)\n\nControl how the filter works to generate scalar data from the\ninput vector data. By default, (AttributeModeToDefault) the\nfilter will generate the scalar norm for point and cell data (if\nvector data present in the input). Alternatively, you can\nexplicitly set the filter to generate point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {"GetAttributeMode", PyvtkVectorNorm_GetAttributeMode, METH_VARARGS,
   "GetAttributeMode(self) -> int\nC++: virtual int GetAttributeMode()\n\n"},
  {"SetAttributeModeToDefault", PyvtkVectorNorm_SetAttributeModeToDefault, METH_VARARGS,
   "SetAttributeModeToDefault(self) -> None\nC++: void SetAttributeModeToDefault()\n\n"},
  {"SetAttributeModeToUsePointData", PyvtkVectorNorm_SetAttributeModeToUsePointData, METH_VARARGS,
   "SetAttributeModeToUsePointData(self) -> None\nC++: void SetAttributeModeToUsePointData()\n\n"},
  {"SetAttributeModeToUseCellData", PyvtkVectorNorm_SetAttributeModeToUseCellData, METH_VARARGS,
   "SetAttributeModeToUseCellData(self) -> None\nC++: void SetAttributeModeToUseCellData()\n\n"},
  {"GetAttributeModeAsString", PyvtkVectorNorm_GetAttributeModeAsString, METH_VARARGS,
   "GetAttributeModeAsString(self) -> str\nC++: const char *GetAttributeModeAsString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVectorNorm_Doc =
  "vtkVectorNorm - generate scalars from Euclidean norm of vectors\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkVectorNorm is a filter that generates scalar values by computing\n"
  "Euclidean norm of vector triplets. Scalars can be normalized 0<=s<=1\n"
  "if desired.\n\n"
  "Note that this filter operates on point or cell attribute data, or\n"
  "both.  By default, the filter operates on both point and cell data if\n"
  "vector point and cell data, respectively, are available from the\n"
  "input. Alternatively, you can choose to generate scalar norm values\n"
  "for just cell or point data.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVectorNorm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkVectorNorm", // tp_name
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
  PyvtkVectorNorm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVectorNorm_StaticNew()
{
  return vtkVectorNorm::New();
}

PyObject *PyvtkVectorNorm_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVectorNorm_Type, PyvtkVectorNorm_Methods,
    "vtkVectorNorm",
 &PyvtkVectorNorm_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVectorNorm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVectorNorm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVectorNorm", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_ATTRIBUTE_MODE_DEFAULT", 0 },
        { "VTK_ATTRIBUTE_MODE_USE_POINT_DATA", 1 },
        { "VTK_ATTRIBUTE_MODE_USE_CELL_DATA", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}


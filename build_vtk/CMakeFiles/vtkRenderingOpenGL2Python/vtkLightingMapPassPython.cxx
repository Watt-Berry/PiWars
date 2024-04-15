// python wrapper for vtkLightingMapPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLightingMapPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLightingMapPass(PyObject *dict); }
extern "C" { PyObject *PyvtkLightingMapPass_ClassNew(); }

#ifndef DECLARED_PyvtkDefaultPass_ClassNew
extern "C" { PyObject *PyvtkDefaultPass_ClassNew(); }
#define DECLARED_PyvtkDefaultPass_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLightingMapPass_RenderMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkLightingMapPass.RenderMode", // tp_name
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
PyObject *PyvtkLightingMapPass_RenderMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLightingMapPass_RenderMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLightingMapPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLightingMapPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightingMapPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightingMapPass *op = static_cast<vtkLightingMapPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLightingMapPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightingMapPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLightingMapPass *tempr = vtkLightingMapPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightingMapPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightingMapPass *op = static_cast<vtkLightingMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLightingMapPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLightingMapPass::NewInstance());

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
PyvtkLightingMapPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLightingMapPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightingMapPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightingMapPass *op = static_cast<vtkLightingMapPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLightingMapPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightingMapPass_SetRenderType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightingMapPass *op = static_cast<vtkLightingMapPass *>(vp);

  typedef vtkLightingMapPass::RenderMode temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkLightingMapPass.RenderMode"))
  {
    if (ap.IsBound())
    {
      op->SetRenderType(temp0);
    }
    else
    {
      op->vtkLightingMapPass::SetRenderType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightingMapPass_GetRenderType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightingMapPass *op = static_cast<vtkLightingMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkLightingMapPass::RenderMode tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetRenderType() :
      op->vtkLightingMapPass::GetRenderType());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkLightingMapPass_RenderMode_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightingMapPass_RENDER_LUMINANCE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RENDER_LUMINANCE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkLightingMapPass::RENDER_LUMINANCE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightingMapPass_RENDER_NORMALS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RENDER_NORMALS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkLightingMapPass::RENDER_NORMALS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLightingMapPass_Methods[] = {
  {"IsTypeOf", PyvtkLightingMapPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLightingMapPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLightingMapPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLightingMapPass\nC++: static vtkLightingMapPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLightingMapPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLightingMapPass\nC++: vtkLightingMapPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLightingMapPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLightingMapPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRenderType", PyvtkLightingMapPass_SetRenderType, METH_VARARGS,
   "SetRenderType(self, _arg:RenderMode) -> None\nC++: virtual void SetRenderType(RenderMode _arg)\n\n"},
  {"GetRenderType", PyvtkLightingMapPass_GetRenderType, METH_VARARGS,
   "GetRenderType(self) -> RenderMode\nC++: virtual RenderMode GetRenderType()\n\n"},
  {"RENDER_LUMINANCE", PyvtkLightingMapPass_RENDER_LUMINANCE, METH_VARARGS,
   "RENDER_LUMINANCE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *RENDER_LUMINANCE()\n\nIf this key exists on the PropertyKeys of a prop, the active\nscalar array on the prop will be rendered as its color. This key\nis mutually exclusive with the RENDER_LUMINANCE key.\n"},
  {"RENDER_NORMALS", PyvtkLightingMapPass_RENDER_NORMALS, METH_VARARGS,
   "RENDER_NORMALS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *RENDER_NORMALS()\n\nif this key exists on the ProperyKeys of a prop, the active\nvector array on the prop will be rendered as its color. This key\nis mutually exclusive with the RENDER_LUMINANCE key.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLightingMapPass_Doc =
  "vtkLightingMapPass - TO DO\n\n"
  "Superclass: vtkDefaultPass\n\n"
  "Renders lighting information directly instead of final shaded colors.\n"
  "The information keys allow the selection of either normal rendering\n"
  "or luminance. For normals, the (nx, ny, nz) tuple are rendered\n"
  "directly into the (r,g,b) fragment. For luminance, the diffuse and\n"
  "specular intensities are rendered into the red and green channels,\n"
  "respectively. The blue channel is zero. For both luminances and\n"
  "normals, the alpha channel is set to 1.0 if present.\n\n"
  "@sa\n"
  "vtkRenderPass vtkDefaultPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLightingMapPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkLightingMapPass", // tp_name
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
  PyvtkLightingMapPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLightingMapPass_StaticNew()
{
  return vtkLightingMapPass::New();
}

PyObject *PyvtkLightingMapPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLightingMapPass_Type, PyvtkLightingMapPass_Methods,
    "vtkLightingMapPass",
 &PyvtkLightingMapPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDefaultPass_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLightingMapPass_RenderMode_Type);
  PyVTKEnum_Add(&PyvtkLightingMapPass_RenderMode_Type, "vtkLightingMapPass.RenderMode");

  o = (PyObject *)&PyvtkLightingMapPass_RenderMode_Type;
  if (PyDict_SetItemString(d, "RenderMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkLightingMapPass::RenderMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "LUMINANCE", vtkLightingMapPass::LUMINANCE },
        { "NORMALS", vtkLightingMapPass::NORMALS },
      };

    o = PyvtkLightingMapPass_RenderMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLightingMapPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLightingMapPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLightingMapPass", o) != 0)
  {
    Py_DECREF(o);
  }

}


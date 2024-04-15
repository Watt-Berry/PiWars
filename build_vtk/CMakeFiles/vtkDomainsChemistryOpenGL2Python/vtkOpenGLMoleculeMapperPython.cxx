// python wrapper for vtkOpenGLMoleculeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLMoleculeMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLMoleculeMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLMoleculeMapper_ClassNew(); }


static PyObject *
PyvtkOpenGLMoleculeMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLMoleculeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLMoleculeMapper *op = static_cast<vtkOpenGLMoleculeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLMoleculeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLMoleculeMapper *tempr = vtkOpenGLMoleculeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLMoleculeMapper *op = static_cast<vtkOpenGLMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLMoleculeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLMoleculeMapper::NewInstance());

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
PyvtkOpenGLMoleculeMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLMoleculeMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLMoleculeMapper *op = static_cast<vtkOpenGLMoleculeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLMoleculeMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLMoleculeMapper *op = static_cast<vtkOpenGLMoleculeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLMoleculeMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLMoleculeMapper *op = static_cast<vtkOpenGLMoleculeMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkOpenGLMoleculeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_GetFastAtomMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastAtomMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLMoleculeMapper *op = static_cast<vtkOpenGLMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLSphereMapper *tempr = (ap.IsBound() ?
      op->GetFastAtomMapper() :
      op->vtkOpenGLMoleculeMapper::GetFastAtomMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_ProcessSelectorPixelBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessSelectorPixelBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLMoleculeMapper *op = static_cast<vtkOpenGLMoleculeMapper *>(vp);

  vtkHardwareSelector *temp0 = nullptr;
  std::vector<unsigned int> temp1(ap.GetArgSize(1));
  vtkProp *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkHardwareSelector") &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetVTKObject(temp2, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLMoleculeMapper::ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLMoleculeMapper_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLMoleculeMapper *op = static_cast<vtkOpenGLMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapScalars(temp0);
    }
    else
    {
      op->vtkOpenGLMoleculeMapper::SetMapScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLMoleculeMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLMoleculeMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLMoleculeMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLMoleculeMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLMoleculeMapper\nC++: static vtkOpenGLMoleculeMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLMoleculeMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLMoleculeMapper\nC++: vtkOpenGLMoleculeMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLMoleculeMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLMoleculeMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkOpenGLMoleculeMapper_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:vtkActor) -> None\nC++: void Render(vtkRenderer *, vtkActor *) override;\n\nReimplemented from base class\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLMoleculeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetFastAtomMapper", PyvtkOpenGLMoleculeMapper_GetFastAtomMapper, METH_VARARGS,
   "GetFastAtomMapper(self) -> vtkOpenGLSphereMapper\nC++: vtkOpenGLSphereMapper *GetFastAtomMapper()\n\nprovide access to the underlying mappers\n"},
  {"ProcessSelectorPixelBuffers", PyvtkOpenGLMoleculeMapper_ProcessSelectorPixelBuffers, METH_VARARGS,
   "ProcessSelectorPixelBuffers(self, sel:vtkHardwareSelector,\n    pixeloffsets:[int, ...], prop:vtkProp) -> None\nC++: void ProcessSelectorPixelBuffers(vtkHardwareSelector *sel,\n    std::vector<unsigned int> &pixeloffsets, vtkProp *prop)\n    override;\n\nallows a mapper to update a selections color buffers Called from\na prop which in turn is called from the selector\n"},
  {"SetMapScalars", PyvtkOpenGLMoleculeMapper_SetMapScalars, METH_VARARGS,
   "SetMapScalars(self, map:bool) -> None\nC++: void SetMapScalars(bool map) override;\n\nHelper method to set ScalarMode on both FastAtomMapper and\nFastBondMapper. true means VTK_COLOR_MODE_MAP_SCALARS, false\nVTK_COLOR_MODE_DIRECT_SCALARS.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLMoleculeMapper_Doc =
  "vtkOpenGLMoleculeMapper - An accelerated class for rendering molecules\n\n"
  "Superclass: vtkMoleculeMapper\n\n"
  "A vtkMoleculeMapper that uses imposters to do the rendering. It uses\n"
  "vtkOpenGLSphereMapper and vtkOpenGLStickMapper to do the rendering.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLMoleculeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistryOpenGL2.vtkOpenGLMoleculeMapper", // tp_name
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
  PyvtkOpenGLMoleculeMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLMoleculeMapper_StaticNew()
{
  return vtkOpenGLMoleculeMapper::New();
}

PyObject *PyvtkOpenGLMoleculeMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLMoleculeMapper_Type, PyvtkOpenGLMoleculeMapper_Methods,
    "vtkOpenGLMoleculeMapper",
 &PyvtkOpenGLMoleculeMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMoleculeMapper");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLMoleculeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLMoleculeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLMoleculeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}


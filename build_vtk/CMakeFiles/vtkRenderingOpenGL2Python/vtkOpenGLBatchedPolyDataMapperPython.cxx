// python wrapper for vtkOpenGLBatchedPolyDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLBatchedPolyDataMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLBatchedPolyDataMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLBatchedPolyDataMapper_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkOpenGLPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
#endif

static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLBatchedPolyDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLBatchedPolyDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLBatchedPolyDataMapper *tempr = vtkOpenGLBatchedPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLBatchedPolyDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLBatchedPolyDataMapper::NewInstance());

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
PyvtkOpenGLBatchedPolyDataMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLBatchedPolyDataMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLBatchedPolyDataMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_ClearBatchElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearBatchElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearBatchElements();
    }
    else
    {
      op->vtkOpenGLBatchedPolyDataMapper::ClearBatchElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

  vtkCompositePolyDataMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositePolyDataMapper"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkOpenGLBatchedPolyDataMapper::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPiece(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLBatchedPolyDataMapper::RenderPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_UnmarkBatchElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnmarkBatchElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnmarkBatchElements();
    }
    else
    {
      op->vtkOpenGLBatchedPolyDataMapper::UnmarkBatchElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_ClearUnmarkedBatchElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUnmarkedBatchElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearUnmarkedBatchElements();
    }
    else
    {
      op->vtkOpenGLBatchedPolyDataMapper::ClearUnmarkedBatchElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLBatchedPolyDataMapper_ProcessSelectorPixelBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessSelectorPixelBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLBatchedPolyDataMapper *op = static_cast<vtkOpenGLBatchedPolyDataMapper *>(vp);

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
      op->vtkOpenGLBatchedPolyDataMapper::ProcessSelectorPixelBuffers(temp0, temp1, temp2);
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

static PyMethodDef PyvtkOpenGLBatchedPolyDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLBatchedPolyDataMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLBatchedPolyDataMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLBatchedPolyDataMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLBatchedPolyDataMapper\nC++: static vtkOpenGLBatchedPolyDataMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLBatchedPolyDataMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLBatchedPolyDataMapper\nC++: vtkOpenGLBatchedPolyDataMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLBatchedPolyDataMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLBatchedPolyDataMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ClearBatchElements", PyvtkOpenGLBatchedPolyDataMapper_ClearBatchElements, METH_VARARGS,
   "ClearBatchElements(self) -> None\nC++: void ClearBatchElements()\n\n"},
  {"SetParent", PyvtkOpenGLBatchedPolyDataMapper_SetParent, METH_VARARGS,
   "SetParent(self, parent:vtkCompositePolyDataMapper) -> None\nC++: void SetParent(vtkCompositePolyDataMapper *parent)\n\n"},
  {"RenderPiece", PyvtkOpenGLBatchedPolyDataMapper_RenderPiece, METH_VARARGS,
   "RenderPiece(self, renderer:vtkRenderer, actor:vtkActor) -> None\nC++: void RenderPiece(vtkRenderer *renderer, vtkActor *actor)\n    override;\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"UnmarkBatchElements", PyvtkOpenGLBatchedPolyDataMapper_UnmarkBatchElements, METH_VARARGS,
   "UnmarkBatchElements(self) -> None\nC++: void UnmarkBatchElements()\n\n"},
  {"ClearUnmarkedBatchElements", PyvtkOpenGLBatchedPolyDataMapper_ClearUnmarkedBatchElements, METH_VARARGS,
   "ClearUnmarkedBatchElements(self) -> None\nC++: void ClearUnmarkedBatchElements()\n\n"},
  {"ProcessSelectorPixelBuffers", PyvtkOpenGLBatchedPolyDataMapper_ProcessSelectorPixelBuffers, METH_VARARGS,
   "ProcessSelectorPixelBuffers(self, sel:vtkHardwareSelector,\n    pixeloffsets:[int, ...], prop:vtkProp) -> None\nC++: void ProcessSelectorPixelBuffers(vtkHardwareSelector *sel,\n    std::vector<unsigned int> &pixeloffsets, vtkProp *prop)\n    override;\n\nallows a mapper to update a selections color buffers Called from\na prop which in turn is called from the selector\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLBatchedPolyDataMapper_Doc =
  "vtkOpenGLBatchedPolyDataMapper - An OpenGL mapper for batched\nrendering of vtkPolyData.\n\n"
  "Superclass: vtkOpenGLPolyDataMapper\n\n"
  "The parent class is determined at compile time. On OpenGL ES, the\n"
  "parent class is vtkOpenGLES30PolyDataMapper. Everywhere else, the\n"
  "parent class is vtkOpenGLPolyDataMapper.\n\n"
  "@sa vtkOpenGLPolyDataMapper vtkOpenGLES30PolyDataMapper\n"
  "    vtkOpenGLCompositePolyDataMapperDelegator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLBatchedPolyDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLBatchedPolyDataMapper", // tp_name
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
  PyvtkOpenGLBatchedPolyDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLBatchedPolyDataMapper_StaticNew()
{
  return vtkOpenGLBatchedPolyDataMapper::New();
}

PyObject *PyvtkOpenGLBatchedPolyDataMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLBatchedPolyDataMapper_Type, PyvtkOpenGLBatchedPolyDataMapper_Methods,
    "vtkOpenGLBatchedPolyDataMapper",
 &PyvtkOpenGLBatchedPolyDataMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLPolyDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLBatchedPolyDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLBatchedPolyDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLBatchedPolyDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkCompositePolyDataMapperDelegator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkCompositePolyDataMapperDelegator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositePolyDataMapperDelegator(PyObject *dict); }
extern "C" { PyObject *PyvtkCompositePolyDataMapperDelegator_ClassNew(); }


static PyObject *
PyvtkCompositePolyDataMapperDelegator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositePolyDataMapperDelegator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositePolyDataMapperDelegator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositePolyDataMapperDelegator *tempr = vtkCompositePolyDataMapperDelegator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositePolyDataMapperDelegator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositePolyDataMapperDelegator::NewInstance());

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
PyvtkCompositePolyDataMapperDelegator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositePolyDataMapperDelegator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositePolyDataMapperDelegator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  vtkCompositePolyDataMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositePolyDataMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapperDelegator::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_GetDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmartPointer<vtkPolyDataMapper> tempr = (ap.IsBound() ?
      op->GetDelegate() :
      op->vtkCompositePolyDataMapperDelegator::GetDelegate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_GetMarked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMarked() :
      op->vtkCompositePolyDataMapperDelegator::GetMarked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_Mark(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Mark");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Mark();
    }
    else
    {
      op->vtkCompositePolyDataMapperDelegator::Mark();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_Unmark(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unmark");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Unmark();
    }
    else
    {
      op->vtkCompositePolyDataMapperDelegator::Unmark();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_ClearUnmarkedBatchElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUnmarkedBatchElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ClearUnmarkedBatchElements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_UnmarkBatchElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnmarkBatchElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->UnmarkBatchElements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  vtkCompositePolyDataMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositePolyDataMapper"))
  {
    op->SetParent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapperDelegator_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapperDelegator *op = static_cast<vtkCompositePolyDataMapperDelegator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Clear();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapperDelegator_Methods[] = {
  {"IsTypeOf", PyvtkCompositePolyDataMapperDelegator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositePolyDataMapperDelegator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositePolyDataMapperDelegator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkCompositePolyDataMapperDelegator\nC++: static vtkCompositePolyDataMapperDelegator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositePolyDataMapperDelegator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositePolyDataMapperDelegator\nC++: vtkCompositePolyDataMapperDelegator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositePolyDataMapperDelegator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositePolyDataMapperDelegator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkCompositePolyDataMapperDelegator_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, polydataMapper:vtkCompositePolyDataMapper)\n    -> None\nC++: virtual void ShallowCopy(\n    vtkCompositePolyDataMapper *polydataMapper)\n\nShallow copies scalar array related properties into the delegate.\n"},
  {"GetDelegate", PyvtkCompositePolyDataMapperDelegator_GetDelegate, METH_VARARGS,
   "GetDelegate(self) -> vtkPolyDataMapper\nC++: vtkSmartPointer<vtkPolyDataMapper> GetDelegate() noexcept;\n\nGet a reference to the delegate.\n"},
  {"GetMarked", PyvtkCompositePolyDataMapperDelegator_GetMarked, METH_VARARGS,
   "GetMarked(self) -> bool\nC++: bool GetMarked()\n\nKeep track of what data is being used as the structure can change\n"},
  {"Mark", PyvtkCompositePolyDataMapperDelegator_Mark, METH_VARARGS,
   "Mark(self) -> None\nC++: void Mark()\n\n"},
  {"Unmark", PyvtkCompositePolyDataMapperDelegator_Unmark, METH_VARARGS,
   "Unmark(self) -> None\nC++: void Unmark()\n\n"},
  {"ClearUnmarkedBatchElements", PyvtkCompositePolyDataMapperDelegator_ClearUnmarkedBatchElements, METH_VARARGS,
   "ClearUnmarkedBatchElements(self) -> None\nC++: virtual void ClearUnmarkedBatchElements()\n\n"},
  {"UnmarkBatchElements", PyvtkCompositePolyDataMapperDelegator_UnmarkBatchElements, METH_VARARGS,
   "UnmarkBatchElements(self) -> None\nC++: virtual void UnmarkBatchElements()\n\n"},
  {"SetParent", PyvtkCompositePolyDataMapperDelegator_SetParent, METH_VARARGS,
   "SetParent(self, mapper:vtkCompositePolyDataMapper) -> None\nC++: virtual void SetParent(vtkCompositePolyDataMapper *mapper)\n\nAssign a parent mapper. The parent enables delegates to access\nhigher level attributes.\n\nDelegates can access attributes like\nColorMissingArraysWithNanColor and selection accessed. Also, they\ncan invoke events on the parent mapper. Ex: UpdateShaderEvent\n"},
  {"Clear", PyvtkCompositePolyDataMapperDelegator_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: virtual void Clear()\n\nClear all batch elements.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompositePolyDataMapperDelegator_Doc =
  "vtkCompositePolyDataMapperDelegator - Delegates rendering of multiple\npolydata that share similar signatures.\n\n"
  "Superclass: vtkObject\n\n"
  "Concrete graphics implementations are expected to manage and\n"
  "trampoline render functions to the delegate.\n\n"
  "@sa vtkOpenGLCompositePolyDataMapperDelegator\n"
  "    vtkCompositePolyDataMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositePolyDataMapperDelegator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCompositePolyDataMapperDelegator", // tp_name
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
  PyvtkCompositePolyDataMapperDelegator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositePolyDataMapperDelegator_StaticNew()
{
  return vtkCompositePolyDataMapperDelegator::New();
}

PyObject *PyvtkCompositePolyDataMapperDelegator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositePolyDataMapperDelegator_Type, PyvtkCompositePolyDataMapperDelegator_Methods,
    "vtkCompositePolyDataMapperDelegator",
 &PyvtkCompositePolyDataMapperDelegator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositePolyDataMapperDelegator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositePolyDataMapperDelegator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositePolyDataMapperDelegator", o) != 0)
  {
    Py_DECREF(o);
  }

}


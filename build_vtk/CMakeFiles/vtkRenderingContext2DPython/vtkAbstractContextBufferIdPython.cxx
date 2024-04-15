// python wrapper for vtkAbstractContextBufferId
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractContextBufferId.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractContextBufferId(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractContextBufferId_ClassNew(); }


static PyObject *
PyvtkAbstractContextBufferId_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractContextBufferId::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractContextBufferId::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractContextBufferId *tempr = vtkAbstractContextBufferId::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextBufferId *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractContextBufferId::NewInstance());

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
PyvtkAbstractContextBufferId_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractContextBufferId::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractContextBufferId::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkAbstractContextBufferId::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidth(temp0);
    }
    else
    {
      op->vtkAbstractContextBufferId::SetWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkAbstractContextBufferId::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeight(temp0);
    }
    else
    {
      op->vtkAbstractContextBufferId::SetHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    op->SetContext(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = op->GetContext();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsSupported();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Allocate();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_IsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsAllocated();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValues(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetPickedItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = op->GetPickedItem(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkAbstractContextBufferId::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractContextBufferId_Methods[] = {
  {"IsTypeOf", PyvtkAbstractContextBufferId_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractContextBufferId_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractContextBufferId_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractContextBufferId\nC++: static vtkAbstractContextBufferId *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractContextBufferId_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractContextBufferId\nC++: vtkAbstractContextBufferId *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractContextBufferId_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractContextBufferId_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetWidth", PyvtkAbstractContextBufferId_GetWidth, METH_VARARGS,
   "GetWidth(self) -> int\nC++: virtual int GetWidth()\n\nNumber of columns. Initial value is 0.\n"},
  {"SetWidth", PyvtkAbstractContextBufferId_SetWidth, METH_VARARGS,
   "SetWidth(self, _arg:int) -> None\nC++: virtual void SetWidth(int _arg)\n\nSet the number of columns. Initial value is 0.\n"},
  {"GetHeight", PyvtkAbstractContextBufferId_GetHeight, METH_VARARGS,
   "GetHeight(self) -> int\nC++: virtual int GetHeight()\n\nNumber of rows. Initial value is 0.\n"},
  {"SetHeight", PyvtkAbstractContextBufferId_SetHeight, METH_VARARGS,
   "SetHeight(self, _arg:int) -> None\nC++: virtual void SetHeight(int _arg)\n\nSet the number of rows. Initial value is 0.\n"},
  {"SetContext", PyvtkAbstractContextBufferId_SetContext, METH_VARARGS,
   "SetContext(self, context:vtkRenderWindow) -> None\nC++: virtual void SetContext(vtkRenderWindow *context)\n\nSet/Get the OpenGL context owning the texture object resource.\n"},
  {"GetContext", PyvtkAbstractContextBufferId_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetContext()\n\n"},
  {"IsSupported", PyvtkAbstractContextBufferId_IsSupported, METH_VARARGS,
   "IsSupported(self) -> bool\nC++: virtual bool IsSupported()\n\nReturns if the context supports the required extensions.\n\\pre context_is_set: this->GetContext()!=0\n"},
  {"Allocate", PyvtkAbstractContextBufferId_Allocate, METH_VARARGS,
   "Allocate(self) -> None\nC++: virtual void Allocate()\n\nAllocate the memory for at least Width*Height elements.\n\\pre positive_width: GetWidth()>0\n\\pre positive_height: GetHeight()>0\n"},
  {"IsAllocated", PyvtkAbstractContextBufferId_IsAllocated, METH_VARARGS,
   "IsAllocated(self) -> bool\nC++: virtual bool IsAllocated()\n\nTell if the buffer has been allocated.\n"},
  {"SetValues", PyvtkAbstractContextBufferId_SetValues, METH_VARARGS,
   "SetValues(self, srcXmin:int, srcYmin:int) -> None\nC++: virtual void SetValues(int srcXmin, int srcYmin)\n\nCopy the contents of the current read buffer to the internal\nstructure starting at lower left corner of the framebuffer\n(srcXmin,srcYmin).\n\\pre is_allocated: this->IsAllocated()\n"},
  {"GetPickedItem", PyvtkAbstractContextBufferId_GetPickedItem, METH_VARARGS,
   "GetPickedItem(self, x:int, y:int) -> int\nC++: virtual vtkIdType GetPickedItem(int x, int y)\n\nReturn item under abscissa x and ordinate y. Abscissa go from\nleft to right. Ordinate go from bottom to top. The return value\nis -1 if there is no item.\n\\pre is_allocated: IsAllocated()\n\\post valid_result: result>=-1\n"},
  {"ReleaseGraphicsResources", PyvtkAbstractContextBufferId_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self) -> None\nC++: virtual void ReleaseGraphicsResources()\n\nRelease any graphics resources that are being consumed by this\nobject. Default implementation is empty.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractContextBufferId_Doc =
  "vtkAbstractContextBufferId - 2D array of ids, used for picking.\n\n"
  "Superclass: vtkObject\n\n"
  "An 2D array where each element is the id of an entity drawn at the\n"
  "given pixel. The access is not specified in this class. The\n"
  "effective/concrete subclass vtkContextBufferId stores the whole\n"
  "buffer in RAM. The access to a value is fast and independent of the\n"
  "OpenGL. However it requires to first fill the whole buffer by\n"
  "transferring the buffer generated by OpenGL from the VRAM to the RAM.\n"
  "It is inefficient if the context of the scene changes during\n"
  "interaction.\n\n"
  "The effective/concrete subclass vtkOpenGLContextBufferId keeps the\n"
  "buffer id on the VRAM in a texture image. The access to a value is\n"
  "slower than a simple read access to an array but it does not require\n"
  "a large transfer of data from the VRAM to the RAM.\n\n"
  "@sa\n"
  "vtkContextBufferId, vtkOpenGLContextBufferId\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractContextBufferId_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkAbstractContextBufferId", // tp_name
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
  PyvtkAbstractContextBufferId_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAbstractContextBufferId_StaticNew()
{
  return vtkAbstractContextBufferId::New();
}

PyObject *PyvtkAbstractContextBufferId_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractContextBufferId_Type, PyvtkAbstractContextBufferId_Methods,
    "vtkAbstractContextBufferId",
 &PyvtkAbstractContextBufferId_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractContextBufferId(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractContextBufferId_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractContextBufferId", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkTextureUnitManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTextureUnitManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureUnitManager(PyObject *dict); }
extern "C" { PyObject *PyvtkTextureUnitManager_ClassNew(); }


static PyObject *
PyvtkTextureUnitManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextureUnitManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureUnitManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextureUnitManager *tempr = vtkTextureUnitManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureUnitManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureUnitManager::NewInstance());

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
PyvtkTextureUnitManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextureUnitManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextureUnitManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkTextureUnitManager::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_GetNumberOfTextureUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextureUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTextureUnits() :
      op->vtkTextureUnitManager::GetNumberOfTextureUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_Allocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate() :
      op->vtkTextureUnitManager::Allocate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureUnitManager_Allocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0) :
      op->vtkTextureUnitManager::Allocate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureUnitManager_Allocate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkTextureUnitManager_Allocate_s1(self, args);
    case 1:
      return PyvtkTextureUnitManager_Allocate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Allocate");
  return nullptr;
}


static PyObject *
PyvtkTextureUnitManager_IsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAllocated(temp0) :
      op->vtkTextureUnitManager::IsAllocated(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureUnitManager_Free(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Free");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureUnitManager *op = static_cast<vtkTextureUnitManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Free(temp0);
    }
    else
    {
      op->vtkTextureUnitManager::Free(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureUnitManager_Methods[] = {
  {"IsTypeOf", PyvtkTextureUnitManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextureUnitManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextureUnitManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextureUnitManager\nC++: static vtkTextureUnitManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextureUnitManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextureUnitManager\nC++: vtkTextureUnitManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextureUnitManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextureUnitManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkTextureUnitManager_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nUpdate the number of hardware texture units for the current\ncontext\n"},
  {"GetNumberOfTextureUnits", PyvtkTextureUnitManager_GetNumberOfTextureUnits, METH_VARARGS,
   "GetNumberOfTextureUnits(self) -> int\nC++: int GetNumberOfTextureUnits()\n\nNumber of texture units supported by the OpenGL context.\n"},
  {"Allocate", PyvtkTextureUnitManager_Allocate, METH_VARARGS,
   "Allocate(self) -> int\nC++: virtual int Allocate()\nAllocate(self, unit:int) -> int\nC++: virtual int Allocate(int unit)\n\nReserve a texture unit. It returns its number. It returns -1 if\nthe allocation failed (because there are no more texture units\nleft).\n\\post valid_result: result==-1 || result>=0 &&\n    result<this->GetNumberOfTextureUnits())\n\\post allocated: result==-1 || this->IsAllocated(result)\n"},
  {"IsAllocated", PyvtkTextureUnitManager_IsAllocated, METH_VARARGS,
   "IsAllocated(self, textureUnitId:int) -> bool\nC++: bool IsAllocated(int textureUnitId)\n\nTell if texture unit `textureUnitId' is already allocated.\n\\pre valid_textureUnitId_range : textureUnitId>=0 &&\ntextureUnitId<this->GetNumberOfTextureUnits()\n"},
  {"Free", PyvtkTextureUnitManager_Free, METH_VARARGS,
   "Free(self, textureUnitId:int) -> None\nC++: virtual void Free(int textureUnitId)\n\nRelease a texture unit.\n\\pre valid_textureUnitId: textureUnitId>=0 &&\n    textureUnitId<this->GetNumberOfTextureUnits()\n\\pre allocated_textureUnitId: this->IsAllocated(textureUnitId)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextureUnitManager_Doc =
  "vtkTextureUnitManager - allocate/free texture units.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTextureUnitManager is a central place used by shaders to reserve a\n"
  "texture unit ( Allocate() ) or release it ( Free() ).\n\n"
  "Don't create a vtkTextureUnitManager, query it from the\n"
  "vtkOpenGLRenderWindow\n\n"
  "@sa\n"
  "vtkOpenGLRenderWindow\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextureUnitManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkTextureUnitManager", // tp_name
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
  PyvtkTextureUnitManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextureUnitManager_StaticNew()
{
  return vtkTextureUnitManager::New();
}

PyObject *PyvtkTextureUnitManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextureUnitManager_Type, PyvtkTextureUnitManager_Methods,
    "vtkTextureUnitManager",
 &PyvtkTextureUnitManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureUnitManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureUnitManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureUnitManager", o) != 0)
  {
    Py_DECREF(o);
  }

}


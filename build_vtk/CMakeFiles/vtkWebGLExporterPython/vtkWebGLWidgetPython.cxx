// python wrapper for vtkWebGLWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWebGLWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebGLWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkWebGLWidget_ClassNew(); }

#ifndef DECLARED_PyvtkWebGLObject_ClassNew
extern "C" { PyObject *PyvtkWebGLObject_ClassNew(); }
#define DECLARED_PyvtkWebGLObject_ClassNew
#endif

static PyObject *
PyvtkWebGLWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebGLWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebGLWidget *tempr = vtkWebGLWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebGLWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLWidget::NewInstance());

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
PyvtkWebGLWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWebGLWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWebGLWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBinaryData();
    }
    else
    {
      op->vtkWebGLWidget::GenerateBinaryData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData(temp0) :
      op->vtkWebGLWidget::GetBinaryData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize(temp0) :
      op->vtkWebGLWidget::GetBinarySize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParts() :
      op->vtkWebGLWidget::GetNumberOfParts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetDataFromColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataFromColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  vtkActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->GetDataFromColorMap(temp0);
    }
    else
    {
      op->vtkWebGLWidget::GetDataFromColorMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWebGLWidget_Methods[] = {
  {"IsTypeOf", PyvtkWebGLWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebGLWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebGLWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWebGLWidget\nC++: static vtkWebGLWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebGLWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWebGLWidget\nC++: vtkWebGLWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWebGLWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWebGLWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GenerateBinaryData", PyvtkWebGLWidget_GenerateBinaryData, METH_VARARGS,
   "GenerateBinaryData(self) -> None\nC++: void GenerateBinaryData() override;\n\n"},
  {"GetBinaryData", PyvtkWebGLWidget_GetBinaryData, METH_VARARGS,
   "GetBinaryData(self, part:int) -> Pointer\nC++: unsigned char *GetBinaryData(int part) override;\n\n"},
  {"GetBinarySize", PyvtkWebGLWidget_GetBinarySize, METH_VARARGS,
   "GetBinarySize(self, part:int) -> int\nC++: int GetBinarySize(int part) override;\n\n"},
  {"GetNumberOfParts", PyvtkWebGLWidget_GetNumberOfParts, METH_VARARGS,
   "GetNumberOfParts(self) -> int\nC++: int GetNumberOfParts() override;\n\n"},
  {"GetDataFromColorMap", PyvtkWebGLWidget_GetDataFromColorMap, METH_VARARGS,
   "GetDataFromColorMap(self, actor:vtkActor2D) -> None\nC++: void GetDataFromColorMap(vtkActor2D *actor)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWebGLWidget_Doc =
  "vtkWebGLWidget - Widget representation for WebGL.\n\n"
  "Superclass: vtkWebGLObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWebGLWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkWebGLExporter.vtkWebGLWidget", // tp_name
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
  PyvtkWebGLWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebGLWidget_StaticNew()
{
  return vtkWebGLWidget::New();
}

PyObject *PyvtkWebGLWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWebGLWidget_Type, PyvtkWebGLWidget_Methods,
    "vtkWebGLWidget",
 &PyvtkWebGLWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWebGLObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWebGLWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebGLWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebGLWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}


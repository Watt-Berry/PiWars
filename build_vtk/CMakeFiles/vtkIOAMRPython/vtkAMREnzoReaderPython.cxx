// python wrapper for vtkAMREnzoReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMREnzoReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMREnzoReader(PyObject *dict); }
extern "C" { PyObject *PyvtkAMREnzoReader_ClassNew(); }

#ifndef DECLARED_PyvtkAMRBaseReader_ClassNew
extern "C" { PyObject *PyvtkAMRBaseReader_ClassNew(); }
#define DECLARED_PyvtkAMRBaseReader_ClassNew
#endif

static PyObject *
PyvtkAMREnzoReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMREnzoReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMREnzoReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMREnzoReader *tempr = vtkAMREnzoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMREnzoReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMREnzoReader::NewInstance());

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
PyvtkAMREnzoReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMREnzoReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMREnzoReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_SetConvertToCGS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertToCGS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertToCGS(temp0);
    }
    else
    {
      op->vtkAMREnzoReader::SetConvertToCGS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetConvertToCGS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertToCGS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConvertToCGS() :
      op->vtkAMREnzoReader::GetConvertToCGS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_ConvertToCGSOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToCGSOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertToCGSOn();
    }
    else
    {
      op->vtkAMREnzoReader::ConvertToCGSOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_ConvertToCGSOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToCGSOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertToCGSOff();
    }
    else
    {
      op->vtkAMREnzoReader::ConvertToCGSOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkAMREnzoReader::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkAMREnzoReader::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkAMREnzoReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMREnzoReader_Methods[] = {
  {"IsTypeOf", PyvtkAMREnzoReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMREnzoReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMREnzoReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMREnzoReader\nC++: static vtkAMREnzoReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMREnzoReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMREnzoReader\nC++: vtkAMREnzoReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMREnzoReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMREnzoReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetConvertToCGS", PyvtkAMREnzoReader_SetConvertToCGS, METH_VARARGS,
   "SetConvertToCGS(self, _arg:int) -> None\nC++: virtual void SetConvertToCGS(vtkTypeBool _arg)\n\nSet/Get whether data should be converted to CGS\n"},
  {"GetConvertToCGS", PyvtkAMREnzoReader_GetConvertToCGS, METH_VARARGS,
   "GetConvertToCGS(self) -> int\nC++: virtual vtkTypeBool GetConvertToCGS()\n\n"},
  {"ConvertToCGSOn", PyvtkAMREnzoReader_ConvertToCGSOn, METH_VARARGS,
   "ConvertToCGSOn(self) -> None\nC++: virtual void ConvertToCGSOn()\n\n"},
  {"ConvertToCGSOff", PyvtkAMREnzoReader_ConvertToCGSOff, METH_VARARGS,
   "ConvertToCGSOff(self) -> None\nC++: virtual void ConvertToCGSOff()\n\n"},
  {"GetNumberOfBlocks", PyvtkAMREnzoReader_GetNumberOfBlocks, METH_VARARGS,
   "GetNumberOfBlocks(self) -> int\nC++: int GetNumberOfBlocks() override;\n\nSee vtkAMRBaseReader::GetNumberOfBlocks\n"},
  {"GetNumberOfLevels", PyvtkAMREnzoReader_GetNumberOfLevels, METH_VARARGS,
   "GetNumberOfLevels(self) -> int\nC++: int GetNumberOfLevels() override;\n\nSee vtkAMRBaseReader::GetNumberOfLevels\n"},
  {"SetFileName", PyvtkAMREnzoReader_SetFileName, METH_VARARGS,
   "SetFileName(self, fileName:str) -> None\nC++: void SetFileName(const char *fileName) override;\n\nSee vtkAMRBaseReader::SetFileName\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMREnzoReader_Doc =
  "vtkAMREnzoReader - A concrete instance of vtkAMRBaseReader that\nimplements functionality for reading Enzo AMR datasets.\n\n"
  "Superclass: vtkAMRBaseReader\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMREnzoReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOAMR.vtkAMREnzoReader", // tp_name
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
  PyvtkAMREnzoReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMREnzoReader_StaticNew()
{
  return vtkAMREnzoReader::New();
}

PyObject *PyvtkAMREnzoReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMREnzoReader_Type, PyvtkAMREnzoReader_Methods,
    "vtkAMREnzoReader",
 &PyvtkAMREnzoReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAMRBaseReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMREnzoReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMREnzoReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMREnzoReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


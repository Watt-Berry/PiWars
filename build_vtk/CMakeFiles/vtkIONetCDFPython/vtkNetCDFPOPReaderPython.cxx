// python wrapper for vtkNetCDFPOPReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkNetCDFPOPReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNetCDFPOPReader(PyObject *dict); }
extern "C" { PyObject *PyvtkNetCDFPOPReader_ClassNew(); }


static PyObject *
PyvtkNetCDFPOPReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetCDFPOPReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFPOPReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNetCDFPOPReader *tempr = vtkNetCDFPOPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetCDFPOPReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFPOPReader::NewInstance());

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
PyvtkNetCDFPOPReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkNetCDFPOPReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkNetCDFPOPReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      op->vtkNetCDFPOPReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNetCDFPOPReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0, temp1, temp2);
    }
    else
    {
      op->vtkNetCDFPOPReader::SetStride(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNetCDFPOPReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0);
    }
    else
    {
      op->vtkNetCDFPOPReader::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNetCDFPOPReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkNetCDFPOPReader_SetStride_s1(self, args);
    case 1:
      return PyvtkNetCDFPOPReader_SetStride_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return nullptr;
}


static PyObject *
PyvtkNetCDFPOPReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkNetCDFPOPReader::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkNetCDFPOPReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkNetCDFPOPReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkNetCDFPOPReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariableArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkNetCDFPOPReader::SetVariableArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNetCDFPOPReader_Methods[] = {
  {"IsTypeOf", PyvtkNetCDFPOPReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNetCDFPOPReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNetCDFPOPReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkNetCDFPOPReader\nC++: static vtkNetCDFPOPReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNetCDFPOPReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkNetCDFPOPReader\nC++: vtkNetCDFPOPReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkNetCDFPOPReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkNetCDFPOPReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkNetCDFPOPReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nThe file to open\n"},
  {"GetFileName", PyvtkNetCDFPOPReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetStride", PyvtkNetCDFPOPReader_SetStride, METH_VARARGS,
   "SetStride(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetStride(int _arg1, int _arg2, int _arg3)\nSetStride(self, _arg:(int, int, int)) -> None\nC++: virtual void SetStride(const int _arg[3])\n\nEnable subsampling in i,j and k dimensions in the\nvtkRectilinearGrid\n"},
  {"GetStride", PyvtkNetCDFPOPReader_GetStride, METH_VARARGS,
   "GetStride(self) -> (int, int, int)\nC++: virtual int *GetStride()\n\n"},
  {"GetNumberOfVariableArrays", PyvtkNetCDFPOPReader_GetNumberOfVariableArrays, METH_VARARGS,
   "GetNumberOfVariableArrays(self) -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {"GetVariableArrayName", PyvtkNetCDFPOPReader_GetVariableArrayName, METH_VARARGS,
   "GetVariableArrayName(self, index:int) -> str\nC++: virtual const char *GetVariableArrayName(int index)\n\n"},
  {"GetVariableArrayStatus", PyvtkNetCDFPOPReader_GetVariableArrayStatus, METH_VARARGS,
   "GetVariableArrayStatus(self, name:str) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\n"},
  {"SetVariableArrayStatus", PyvtkNetCDFPOPReader_SetVariableArrayStatus, METH_VARARGS,
   "SetVariableArrayStatus(self, name:str, status:int) -> None\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkNetCDFPOPReader_Doc =
  "vtkNetCDFPOPReader - read NetCDF files .Author Joshua Wu 09.15.2009\n\n"
  "Superclass: vtkRectilinearGridAlgorithm\n\n"
  "vtkNetCDFPOPReader is a source object that reads NetCDF files. It\n"
  "should be able to read most any NetCDF file that wants to output a\n"
  "rectilinear grid.  The ordering of the variables is changed such that\n"
  "the NetCDF x, y, z directions correspond to the vtkRectilinearGrid z,\n"
  "y, x directions, respectively.  The striding is done with respect to\n"
  "the vtkRectilinearGrid ordering.  Additionally, the z coordinates of\n"
  "the vtkRectilinearGrid are negated so that the first slice/plane has\n"
  "the highest z-value and the last slice/plane has the lowest z-value.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNetCDFPOPReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIONetCDF.vtkNetCDFPOPReader", // tp_name
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
  PyvtkNetCDFPOPReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNetCDFPOPReader_StaticNew()
{
  return vtkNetCDFPOPReader::New();
}

PyObject *PyvtkNetCDFPOPReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkNetCDFPOPReader_Type, PyvtkNetCDFPOPReader_Methods,
    "vtkNetCDFPOPReader",
 &PyvtkNetCDFPOPReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRectilinearGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNetCDFPOPReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNetCDFPOPReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNetCDFPOPReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkGenericDataObjectReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericDataObjectReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericDataObjectReader(PyObject *dict); }
extern "C" { PyObject *PyvtkGenericDataObjectReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataReader_ClassNew
extern "C" { PyObject *PyvtkDataReader_ClassNew(); }
#define DECLARED_PyvtkDataReader_ClassNew
#endif

static PyObject *
PyvtkGenericDataObjectReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericDataObjectReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericDataObjectReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericDataObjectReader *tempr = vtkGenericDataObjectReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericDataObjectReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericDataObjectReader::NewInstance());

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
PyvtkGenericDataObjectReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericDataObjectReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericDataObjectReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkGenericDataObjectReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataObjectReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkGenericDataObjectReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataObjectReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGenericDataObjectReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkGenericDataObjectReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyObject *
PyvtkGenericDataObjectReader_GetGraphOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraphOutput() :
      op->vtkGenericDataObjectReader::GetGraphOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetMoleculeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoleculeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetMoleculeOutput() :
      op->vtkGenericDataObjectReader::GetMoleculeOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkGenericDataObjectReader::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridOutput() :
      op->vtkGenericDataObjectReader::GetRectilinearGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridOutput() :
      op->vtkGenericDataObjectReader::GetStructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsOutput() :
      op->vtkGenericDataObjectReader::GetStructuredPointsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetTableOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTableOutput() :
      op->vtkGenericDataObjectReader::GetTableOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetTreeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetTreeOutput() :
      op->vtkGenericDataObjectReader::GetTreeOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkGenericDataObjectReader::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_ReadOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ReadOutputType() :
      op->vtkGenericDataObjectReader::ReadOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_ReadMetaDataSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaDataSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  std::string temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMetaDataSimple(temp0, temp1) :
      op->vtkGenericDataObjectReader::ReadMetaDataSimple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_ReadMeshSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMeshSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMeshSimple(temp0, temp1) :
      op->vtkGenericDataObjectReader::ReadMeshSimple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericDataObjectReader_Methods[] = {
  {"IsTypeOf", PyvtkGenericDataObjectReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericDataObjectReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericDataObjectReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericDataObjectReader\nC++: static vtkGenericDataObjectReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericDataObjectReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericDataObjectReader\nC++: vtkGenericDataObjectReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericDataObjectReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericDataObjectReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOutput", PyvtkGenericDataObjectReader_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nGetOutput(self, idx:int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int idx)\n\nGet the output of this filter\n"},
  {"GetGraphOutput", PyvtkGenericDataObjectReader_GetGraphOutput, METH_VARARGS,
   "GetGraphOutput(self) -> vtkGraph\nC++: vtkGraph *GetGraphOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used nullptr is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {"GetMoleculeOutput", PyvtkGenericDataObjectReader_GetMoleculeOutput, METH_VARARGS,
   "GetMoleculeOutput(self) -> vtkMolecule\nC++: vtkMolecule *GetMoleculeOutput()\n\n"},
  {"GetPolyDataOutput", PyvtkGenericDataObjectReader_GetPolyDataOutput, METH_VARARGS,
   "GetPolyDataOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\n"},
  {"GetRectilinearGridOutput", PyvtkGenericDataObjectReader_GetRectilinearGridOutput, METH_VARARGS,
   "GetRectilinearGridOutput(self) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\n"},
  {"GetStructuredGridOutput", PyvtkGenericDataObjectReader_GetStructuredGridOutput, METH_VARARGS,
   "GetStructuredGridOutput(self) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\n"},
  {"GetStructuredPointsOutput", PyvtkGenericDataObjectReader_GetStructuredPointsOutput, METH_VARARGS,
   "GetStructuredPointsOutput(self) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\n"},
  {"GetTableOutput", PyvtkGenericDataObjectReader_GetTableOutput, METH_VARARGS,
   "GetTableOutput(self) -> vtkTable\nC++: vtkTable *GetTableOutput()\n\n"},
  {"GetTreeOutput", PyvtkGenericDataObjectReader_GetTreeOutput, METH_VARARGS,
   "GetTreeOutput(self) -> vtkTree\nC++: vtkTree *GetTreeOutput()\n\n"},
  {"GetUnstructuredGridOutput", PyvtkGenericDataObjectReader_GetUnstructuredGridOutput, METH_VARARGS,
   "GetUnstructuredGridOutput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\n"},
  {"ReadOutputType", PyvtkGenericDataObjectReader_ReadOutputType, METH_VARARGS,
   "ReadOutputType(self) -> int\nC++: virtual int ReadOutputType()\n\nThis method can be used to find out the type of output expected\nwithout needing to read the whole file.\n"},
  {"ReadMetaDataSimple", PyvtkGenericDataObjectReader_ReadMetaDataSimple, METH_VARARGS,
   "ReadMetaDataSimple(self, fname:str, metadata:vtkInformation)\n    -> int\nC++: int ReadMetaDataSimple(const std::string &fname,\n    vtkInformation *metadata) override;\n\nRead metadata from file.\n"},
  {"ReadMeshSimple", PyvtkGenericDataObjectReader_ReadMeshSimple, METH_VARARGS,
   "ReadMeshSimple(self, fname:str, output:vtkDataObject) -> int\nC++: int ReadMeshSimple(const std::string &fname,\n    vtkDataObject *output) override;\n\nActual reading happens here\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenericDataObjectReader_Doc =
  "vtkGenericDataObjectReader - class to read any type of vtk data object\n\n"
  "Superclass: vtkDataReader\n\n"
  "vtkGenericDataObjectReader is a class that provides instance\n"
  "variables and methods to read any type of data object in\n"
  "Visualization Toolkit (vtk) format.  The output type of this class\n"
  "will vary depending upon the type of data file. Convenience methods\n"
  "are provided to return the data as a particular type. (See text for\n"
  "format description details). The superclass of this class,\n"
  "vtkDataReader, provides many methods for controlling the reading of\n"
  "the data file, see vtkDataReader for more information.\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems.\n"
  "@sa\n"
  "vtkDataReader vtkGraphReader vtkPolyDataReader\n"
  "vtkRectilinearGridReader vtkStructuredPointsReader\n"
  "vtkStructuredGridReader vtkTableReader vtkTreeReader\n"
  "vtkUnstructuredGridReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericDataObjectReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLegacy.vtkGenericDataObjectReader", // tp_name
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
  PyvtkGenericDataObjectReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericDataObjectReader_StaticNew()
{
  return vtkGenericDataObjectReader::New();
}

PyObject *PyvtkGenericDataObjectReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericDataObjectReader_Type, PyvtkGenericDataObjectReader_Methods,
    "vtkGenericDataObjectReader",
 &PyvtkGenericDataObjectReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericDataObjectReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericDataObjectReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericDataObjectReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


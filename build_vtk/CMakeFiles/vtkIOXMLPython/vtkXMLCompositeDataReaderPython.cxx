// python wrapper for vtkXMLCompositeDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLCompositeDataReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLCompositeDataReader(PyObject *dict); }
extern "C" { PyObject *PyvtkXMLCompositeDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLReader_ClassNew
extern "C" { PyObject *PyvtkXMLReader_ClassNew(); }
#define DECLARED_PyvtkXMLReader_ClassNew
#endif

static PyObject *
PyvtkXMLCompositeDataReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLCompositeDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLCompositeDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLCompositeDataReader *tempr = vtkXMLCompositeDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLCompositeDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLCompositeDataReader::NewInstance());

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
PyvtkXMLCompositeDataReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLCompositeDataReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLCompositeDataReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_SetPieceDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceDistribution(temp0);
    }
    else
    {
      op->vtkXMLCompositeDataReader::SetPieceDistribution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetPieceDistributionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceDistributionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceDistributionMinValue() :
      op->vtkXMLCompositeDataReader::GetPieceDistributionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetPieceDistributionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceDistributionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceDistributionMaxValue() :
      op->vtkXMLCompositeDataReader::GetPieceDistributionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetPieceDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceDistribution() :
      op->vtkXMLCompositeDataReader::GetPieceDistribution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLCompositeDataReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLCompositeDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLCompositeDataReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLCompositeDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLCompositeDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLCompositeDataReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyObject *
PyvtkXMLCompositeDataReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

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
      op->vtkXMLCompositeDataReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLCompositeDataReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLCompositeDataReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLCompositeDataReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLCompositeDataReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLCompositeDataReader\nC++: static vtkXMLCompositeDataReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLCompositeDataReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLCompositeDataReader\nC++: vtkXMLCompositeDataReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLCompositeDataReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLCompositeDataReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPieceDistribution", PyvtkXMLCompositeDataReader_SetPieceDistribution, METH_VARARGS,
   "SetPieceDistribution(self, _arg:int) -> None\nC++: virtual void SetPieceDistribution(int _arg)\n\n"},
  {"GetPieceDistributionMinValue", PyvtkXMLCompositeDataReader_GetPieceDistributionMinValue, METH_VARARGS,
   "GetPieceDistributionMinValue(self) -> int\nC++: virtual int GetPieceDistributionMinValue()\n\n"},
  {"GetPieceDistributionMaxValue", PyvtkXMLCompositeDataReader_GetPieceDistributionMaxValue, METH_VARARGS,
   "GetPieceDistributionMaxValue(self) -> int\nC++: virtual int GetPieceDistributionMaxValue()\n\n"},
  {"GetPieceDistribution", PyvtkXMLCompositeDataReader_GetPieceDistribution, METH_VARARGS,
   "GetPieceDistribution(self) -> int\nC++: virtual int GetPieceDistribution()\n\n"},
  {"GetOutput", PyvtkXMLCompositeDataReader_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput()\nGetOutput(self, __a:int) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {"SetFileName", PyvtkXMLCompositeDataReader_SetFileName, METH_VARARGS,
   "SetFileName(self, __a:str) -> None\nC++: void SetFileName(const char *) override;\n\nGet/Set the name of the input file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXMLCompositeDataReader_Doc =
  "vtkXMLCompositeDataReader - Reader for multi-group datasets\n\n"
  "Superclass: vtkXMLReader\n\n"
  "vtkXMLCompositeDataReader reads the VTK XML multi-group data file\n"
  "format. XML multi-group data files are meta-files that point to a\n"
  "list of serial VTK XML files. When reading in parallel, it will\n"
  "distribute sub-blocks among processor. If the number of sub-blocks is\n"
  "less than the number of processors, some processors will not have any\n"
  "sub-blocks for that group. If the number of sub-blocks is larger than\n"
  "the number of processors, each processor will possibly have more than\n"
  "1 sub-block.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLCompositeDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLCompositeDataReader", // tp_name
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
  PyvtkXMLCompositeDataReader_Doc, // tp_doc
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

PyObject *PyvtkXMLCompositeDataReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLCompositeDataReader_Type, PyvtkXMLCompositeDataReader_Methods,
    "vtkXMLCompositeDataReader",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkXMLReader_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "Block", vtkXMLCompositeDataReader::Block },
        { "Interleave", vtkXMLCompositeDataReader::Interleave },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLCompositeDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLCompositeDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLCompositeDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


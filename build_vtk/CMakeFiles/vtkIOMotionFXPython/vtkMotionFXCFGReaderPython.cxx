// python wrapper for vtkMotionFXCFGReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMotionFXCFGReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMotionFXCFGReader(PyObject *dict); }
extern "C" { PyObject *PyvtkMotionFXCFGReader_ClassNew(); }


static PyObject *
PyvtkMotionFXCFGReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMotionFXCFGReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMotionFXCFGReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMotionFXCFGReader *tempr = vtkMotionFXCFGReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMotionFXCFGReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMotionFXCFGReader::NewInstance());

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
PyvtkMotionFXCFGReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMotionFXCFGReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMotionFXCFGReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

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
      op->vtkMotionFXCFGReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMotionFXCFGReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_SetTimeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeResolution(temp0);
    }
    else
    {
      op->vtkMotionFXCFGReader::SetTimeResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetTimeResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeResolutionMinValue() :
      op->vtkMotionFXCFGReader::GetTimeResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetTimeResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeResolutionMaxValue() :
      op->vtkMotionFXCFGReader::GetTimeResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMotionFXCFGReader_GetTimeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMotionFXCFGReader *op = static_cast<vtkMotionFXCFGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeResolution() :
      op->vtkMotionFXCFGReader::GetTimeResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMotionFXCFGReader_Methods[] = {
  {"IsTypeOf", PyvtkMotionFXCFGReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMotionFXCFGReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMotionFXCFGReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMotionFXCFGReader\nC++: static vtkMotionFXCFGReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMotionFXCFGReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMotionFXCFGReader\nC++: vtkMotionFXCFGReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMotionFXCFGReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMotionFXCFGReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkMotionFXCFGReader_SetFileName, METH_VARARGS,
   "SetFileName(self, fname:str) -> None\nC++: void SetFileName(const char *fname)\n\nGet/Set the filename.\n"},
  {"GetFileName", PyvtkMotionFXCFGReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: const char *GetFileName()\n\n"},
  {"SetTimeResolution", PyvtkMotionFXCFGReader_SetTimeResolution, METH_VARARGS,
   "SetTimeResolution(self, _arg:int) -> None\nC++: virtual void SetTimeResolution(int _arg)\n\nGet/Set the time resolution for timesteps produced by the reader.\n"},
  {"GetTimeResolutionMinValue", PyvtkMotionFXCFGReader_GetTimeResolutionMinValue, METH_VARARGS,
   "GetTimeResolutionMinValue(self) -> int\nC++: virtual int GetTimeResolutionMinValue()\n\n"},
  {"GetTimeResolutionMaxValue", PyvtkMotionFXCFGReader_GetTimeResolutionMaxValue, METH_VARARGS,
   "GetTimeResolutionMaxValue(self) -> int\nC++: virtual int GetTimeResolutionMaxValue()\n\n"},
  {"GetTimeResolution", PyvtkMotionFXCFGReader_GetTimeResolution, METH_VARARGS,
   "GetTimeResolution(self) -> int\nC++: virtual int GetTimeResolution()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMotionFXCFGReader_Doc =
  "vtkMotionFXCFGReader - reader for MotionFX motion definitions cfg\nfiles.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "MotionFX files comprise of `motion`s for a collection of STL files.\n"
  "The motions define the transformations to apply to STL geometry to\n"
  "emulate motion like translation, rotation, planetary motion, etc.\n\n"
  "This reader reads such a CFG file and produces a temporal output for\n"
  "the time range defined in the file. The resolution of time can be\n"
  "controlled using the `SetTimeResolution` method. The output is a\n"
  "multiblock dataset with blocks for each of bodies, identified by an\n"
  "STL file, in the cfg file.\n\n"
  "The reader uses PEGTL (https://github.com/taocpp/PEGTL) to define and\n"
  "parse the grammar for the CFG file.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMotionFXCFGReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMotionFX.vtkMotionFXCFGReader", // tp_name
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
  PyvtkMotionFXCFGReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMotionFXCFGReader_StaticNew()
{
  return vtkMotionFXCFGReader::New();
}

PyObject *PyvtkMotionFXCFGReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMotionFXCFGReader_Type, PyvtkMotionFXCFGReader_Methods,
    "vtkMotionFXCFGReader",
 &PyvtkMotionFXCFGReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMotionFXCFGReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMotionFXCFGReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMotionFXCFGReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


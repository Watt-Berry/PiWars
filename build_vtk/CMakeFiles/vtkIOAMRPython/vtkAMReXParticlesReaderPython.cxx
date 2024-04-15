// python wrapper for vtkAMReXParticlesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMReXParticlesReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMReXParticlesReader(PyObject *dict); }
extern "C" { PyObject *PyvtkAMReXParticlesReader_ClassNew(); }


static PyObject *
PyvtkAMReXParticlesReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMReXParticlesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMReXParticlesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMReXParticlesReader *tempr = vtkAMReXParticlesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMReXParticlesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMReXParticlesReader::NewInstance());

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
PyvtkAMReXParticlesReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMReXParticlesReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMReXParticlesReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_SetPlotFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotFileName(temp0);
    }
    else
    {
      op->vtkAMReXParticlesReader::SetPlotFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_GetPlotFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlotFileName() :
      op->vtkAMReXParticlesReader::GetPlotFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_SetParticleType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParticleType(temp0);
    }
    else
    {
      op->vtkAMReXParticlesReader::SetParticleType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_GetParticleType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetParticleType() :
      &op->vtkAMReXParticlesReader::GetParticleType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkAMReXParticlesReader::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_CanReadFile(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetFilePath(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = vtkAMReXParticlesReader::CanReadFile(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMReXParticlesReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMReXParticlesReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMReXParticlesReader *op = static_cast<vtkAMReXParticlesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMReXParticlesReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMReXParticlesReader_Methods[] = {
  {"IsTypeOf", PyvtkAMReXParticlesReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMReXParticlesReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMReXParticlesReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMReXParticlesReader\nC++: static vtkAMReXParticlesReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMReXParticlesReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMReXParticlesReader\nC++: vtkAMReXParticlesReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMReXParticlesReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMReXParticlesReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPlotFileName", PyvtkAMReXParticlesReader_SetPlotFileName, METH_VARARGS,
   "SetPlotFileName(self, fname:str) -> None\nC++: void SetPlotFileName(const char *fname)\n\nGet/Set the AMReX plotfile. Note this is a directory on the\nfilesystem and not the file.\n"},
  {"GetPlotFileName", PyvtkAMReXParticlesReader_GetPlotFileName, METH_VARARGS,
   "GetPlotFileName(self) -> str\nC++: const char *GetPlotFileName()\n\n"},
  {"SetParticleType", PyvtkAMReXParticlesReader_SetParticleType, METH_VARARGS,
   "SetParticleType(self, str:str) -> None\nC++: void SetParticleType(const std::string &str)\n\nGet/Set the particle type to read. By default, this is set to\n'particles'.\n"},
  {"GetParticleType", PyvtkAMReXParticlesReader_GetParticleType, METH_VARARGS,
   "GetParticleType(self) -> str\nC++: const std::string &GetParticleType()\n\n"},
  {"GetPointDataArraySelection", PyvtkAMReXParticlesReader_GetPointDataArraySelection, METH_VARARGS,
   "GetPointDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointDataArraySelection()\n\nGet vtkDataArraySelection instance to select point arrays to\nread. Due to the nature of the AMReX particles files, all point\ndata is read in from the disk, despite certain arrays unselected.\nThe unselected arrays will be discarded from the generated output\ndataset.\n"},
  {"CanReadFile", PyvtkAMReXParticlesReader_CanReadFile, METH_VARARGS,
   "CanReadFile(fname:str, particlesType:str=...) -> int\nC++: static int CanReadFile(const char *fname,\n    const char *particlesType=nullptr)\n\nReturns 1 is fname refers to a plotfile that the reader can read.\n"},
  {"SetController", PyvtkAMReXParticlesReader_SetController, METH_VARARGS,
   "SetController(self, controller:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *controller)\n\nGet/Set the controller to use. By default, the global\nvtkMultiProcessController will be used.\n"},
  {"GetController", PyvtkAMReXParticlesReader_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMReXParticlesReader_Doc =
  "vtkAMReXParticlesReader - reader for AMReX plotfiles particle data.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkAMReXParticlesReader readers particle data from AMReX plotfiles.\n"
  "The reader is based on the  `ParticleContainer::Restart` and\n"
  "`amrex_binary_particles_to_vtp` files in the [AMReX\n"
  "code](https://amrex-codes.github.io/).\n\n"
  "The reader reads all levels in as blocks in output multiblock dataset\n"
  "distributed datasets at each level between ranks in a contiguous\n"
  "fashion.\n\n"
  "To use the reader, one must set the `PlotFileName` and `ParticleType`\n"
  "which identifies the type particles from the PlotFileName to read.\n\n"
  "The reader provides ability to select point data arrays to be made\n"
  "available in the output. Note that due to the nature of the file\n"
  "structure, all variables are still read in and hence deselecting\n"
  "arrays does not reduce I/O calls or initial memory requirements.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMReXParticlesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOAMR.vtkAMReXParticlesReader", // tp_name
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
  PyvtkAMReXParticlesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMReXParticlesReader_StaticNew()
{
  return vtkAMReXParticlesReader::New();
}

PyObject *PyvtkAMReXParticlesReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMReXParticlesReader_Type, PyvtkAMReXParticlesReader_Methods,
    "vtkAMReXParticlesReader",
 &PyvtkAMReXParticlesReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMReXParticlesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMReXParticlesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMReXParticlesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


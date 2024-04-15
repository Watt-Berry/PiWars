// python wrapper for vtkMNITagPointReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMNITagPointReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMNITagPointReader(PyObject *dict); }
extern "C" { PyObject *PyvtkMNITagPointReader_ClassNew(); }


static PyObject *
PyvtkMNITagPointReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMNITagPointReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMNITagPointReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMNITagPointReader *tempr = vtkMNITagPointReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMNITagPointReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMNITagPointReader::NewInstance());

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
PyvtkMNITagPointReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMNITagPointReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMNITagPointReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      op->vtkMNITagPointReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMNITagPointReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkMNITagPointReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkMNITagPointReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkMNITagPointReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetNumberOfVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVolumes() :
      op->vtkMNITagPointReader::GetNumberOfVolumes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints(temp0) :
      op->vtkMNITagPointReader::GetPoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMNITagPointReader_GetPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkMNITagPointReader::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMNITagPointReader_GetPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMNITagPointReader_GetPoints_s1(self, args);
    case 0:
      return PyvtkMNITagPointReader_GetPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoints");
  return nullptr;
}


static PyObject *
PyvtkMNITagPointReader_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkMNITagPointReader::GetLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetWeights() :
      op->vtkMNITagPointReader::GetWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetStructureIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructureIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetStructureIds() :
      op->vtkMNITagPointReader::GetStructureIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetPatientIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetPatientIds() :
      op->vtkMNITagPointReader::GetPatientIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetComments() :
      op->vtkMNITagPointReader::GetComments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMNITagPointReader_Methods[] = {
  {"IsTypeOf", PyvtkMNITagPointReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMNITagPointReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMNITagPointReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMNITagPointReader\nC++: static vtkMNITagPointReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMNITagPointReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMNITagPointReader\nC++: vtkMNITagPointReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMNITagPointReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMNITagPointReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkMNITagPointReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSet the file name.\n"},
  {"GetFileName", PyvtkMNITagPointReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetFileExtensions", PyvtkMNITagPointReader_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: virtual const char *GetFileExtensions()\n\nGet the extension for this file format.\n"},
  {"GetDescriptiveName", PyvtkMNITagPointReader_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {"CanReadFile", PyvtkMNITagPointReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, name:str) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the specified file can be read.\n"},
  {"GetNumberOfVolumes", PyvtkMNITagPointReader_GetNumberOfVolumes, METH_VARARGS,
   "GetNumberOfVolumes(self) -> int\nC++: virtual int GetNumberOfVolumes()\n\nGet the number of volumes specified by the file, which will be\nequal to one or two.  There will be an output point set for each\nvolume, so really, this parameter just tells you the number of\noutputs to expect from this reader.\n"},
  {"GetPoints", PyvtkMNITagPointReader_GetPoints, METH_VARARGS,
   "GetPoints(self, port:int) -> vtkPoints\nC++: virtual vtkPoints *GetPoints(int port)\nGetPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\nGet the points.  These are also provided in the first and second\noutput ports of the reader.  This method will return nullptr if\nthere is no data.\n"},
  {"GetLabelText", PyvtkMNITagPointReader_GetLabelText, METH_VARARGS,
   "GetLabelText(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetLabelText()\n\nGet the labels.  These same labels are provided in the output\npoint sets, as the PointData data array named \"LabelText\". This\nwill return nullptr if there were no labels in the file.\n"},
  {"GetWeights", PyvtkMNITagPointReader_GetWeights, METH_VARARGS,
   "GetWeights(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetWeights()\n\nGet the weights.  These are also provided in the output point\nsets, as the PointData data array named \"Weights\". This will\nreturn nullptr if there were no weights in the file.\n"},
  {"GetStructureIds", PyvtkMNITagPointReader_GetStructureIds, METH_VARARGS,
   "GetStructureIds(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetStructureIds()\n\nGet the structure ids.  These are also provided in the output\npoint sets, as the PointData data array named \"StructureIds\".\nThis will return nullptr if there were no ids in the file.\n"},
  {"GetPatientIds", PyvtkMNITagPointReader_GetPatientIds, METH_VARARGS,
   "GetPatientIds(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetPatientIds()\n\nGet the patient ids.  These are also provided in the output point\nsets, as the PointData data array named \"PatientIds\". This will\nreturn nullptr if there were no ids in the file.\n"},
  {"GetComments", PyvtkMNITagPointReader_GetComments, METH_VARARGS,
   "GetComments(self) -> str\nC++: virtual const char *GetComments()\n\nGet any comments that are included in the file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMNITagPointReader_Doc =
  "vtkMNITagPointReader - A reader for MNI tag files.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "The MNI .tag file format is used to store labeled points, it can\n"
  "store either one or two point sets.  All point sets must have the\n"
  "same number of points and they will share the same labels.  This file\n"
  "format was developed at the McConnell Brain Imaging Centre at the\n"
  "Montreal Neurological Institute and is used by their software. The\n"
  "labels are stored as a vtkStringArray in the PointData of the output\n"
  "dataset, which is a vtkPolyData.\n"
  "@sa\n"
  "vtkMINCImageReader vtkMNIObjectReader vtkMNITransformReader@par\n"
  "Thanks: Thanks to David Gobbi for contributing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMNITagPointReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMINC.vtkMNITagPointReader", // tp_name
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
  PyvtkMNITagPointReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMNITagPointReader_StaticNew()
{
  return vtkMNITagPointReader::New();
}

PyObject *PyvtkMNITagPointReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMNITagPointReader_Type, PyvtkMNITagPointReader_Methods,
    "vtkMNITagPointReader",
 &PyvtkMNITagPointReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMNITagPointReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMNITagPointReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMNITagPointReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


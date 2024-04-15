// python wrapper for vtkVolumeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVolumeReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeReader(PyObject *dict); }
extern "C" { PyObject *PyvtkVolumeReader_ClassNew(); }


static PyObject *
PyvtkVolumeReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeReader *tempr = vtkVolumeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeReader::NewInstance());

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
PyvtkVolumeReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVolumeReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVolumeReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePrefix(temp0);
    }
    else
    {
      op->vtkVolumeReader::SetFilePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkVolumeReader::GetFilePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePattern(temp0);
    }
    else
    {
      op->vtkVolumeReader::SetFilePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePattern() :
      op->vtkVolumeReader::GetFilePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetImageRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImageRange(temp0, temp1);
    }
    else
    {
      op->vtkVolumeReader::SetImageRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetImageRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetImageRange(temp0);
    }
    else
    {
      op->vtkVolumeReader::SetImageRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetImageRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeReader_SetImageRange_s1(self, args);
    case 1:
      return PyvtkVolumeReader_SetImageRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImageRange");
  return nullptr;
}


static PyObject *
PyvtkVolumeReader_GetImageRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageRange() :
      op->vtkVolumeReader::GetImageRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDataSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeReader::SetDataSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataSpacing(temp0);
    }
    else
    {
      op->vtkVolumeReader::SetDataSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeReader_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkVolumeReader_SetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return nullptr;
}


static PyObject *
PyvtkVolumeReader_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkVolumeReader::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDataOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeReader::SetDataOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataOrigin(temp0);
    }
    else
    {
      op->vtkVolumeReader::SetDataOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeReader_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkVolumeReader_SetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return nullptr;
}


static PyObject *
PyvtkVolumeReader_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkVolumeReader::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeReader_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = op->GetImage(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeReader_Methods[] = {
  {"IsTypeOf", PyvtkVolumeReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVolumeReader\nC++: static vtkVolumeReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVolumeReader\nC++: vtkVolumeReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVolumeReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVolumeReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFilePrefix", PyvtkVolumeReader_SetFilePrefix, METH_VARARGS,
   "SetFilePrefix(self, _arg:str) -> None\nC++: virtual void SetFilePrefix(const char *_arg)\n\nSpecify file prefix for the image file(s).\n"},
  {"GetFilePrefix", PyvtkVolumeReader_GetFilePrefix, METH_VARARGS,
   "GetFilePrefix(self) -> str\nC++: virtual char *GetFilePrefix()\n\n"},
  {"SetFilePattern", PyvtkVolumeReader_SetFilePattern, METH_VARARGS,
   "SetFilePattern(self, _arg:str) -> None\nC++: virtual void SetFilePattern(const char *_arg)\n\nThe snprintf format used to build filename from FilePrefix and\nnumber.\n"},
  {"GetFilePattern", PyvtkVolumeReader_GetFilePattern, METH_VARARGS,
   "GetFilePattern(self) -> str\nC++: virtual char *GetFilePattern()\n\n"},
  {"SetImageRange", PyvtkVolumeReader_SetImageRange, METH_VARARGS,
   "SetImageRange(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetImageRange(int _arg1, int _arg2)\nSetImageRange(self, _arg:(int, int)) -> None\nC++: void SetImageRange(const int _arg[2])\n\nSet the range of files to read.\n"},
  {"GetImageRange", PyvtkVolumeReader_GetImageRange, METH_VARARGS,
   "GetImageRange(self) -> (int, int)\nC++: virtual int *GetImageRange()\n\n"},
  {"SetDataSpacing", PyvtkVolumeReader_SetDataSpacing, METH_VARARGS,
   "SetDataSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDataSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetDataSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataSpacing(const double _arg[3])\n\nSpecify the spacing for the data.\n"},
  {"GetDataSpacing", PyvtkVolumeReader_GetDataSpacing, METH_VARARGS,
   "GetDataSpacing(self) -> (float, float, float)\nC++: virtual double *GetDataSpacing()\n\n"},
  {"SetDataOrigin", PyvtkVolumeReader_SetDataOrigin, METH_VARARGS,
   "SetDataOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetDataOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetDataOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataOrigin(const double _arg[3])\n\nSpecify the origin for the data.\n"},
  {"GetDataOrigin", PyvtkVolumeReader_GetDataOrigin, METH_VARARGS,
   "GetDataOrigin(self) -> (float, float, float)\nC++: virtual double *GetDataOrigin()\n\n"},
  {"GetImage", PyvtkVolumeReader_GetImage, METH_VARARGS,
   "GetImage(self, ImageNumber:int) -> vtkImageData\nC++: virtual vtkImageData *GetImage(int ImageNumber)\n\nOther objects make use of this method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVolumeReader_Doc =
  "vtkVolumeReader - read image files\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkVolumeReader is a source object that reads image files.\n\n"
  "VolumeReader creates structured point datasets. The dimension of the\n"
  "dataset depends upon the number of files read. Reading a single file\n"
  "results in a 2D image, while reading more than one file results in a\n"
  "3D volume.\n\n"
  "File names are created using FilePattern and FilePrefix as follows:\n"
  "snprintf (filename, sizeof(filename), FilePattern, FilePrefix,\n"
  "number); where number is in the range ImageRange[0] to ImageRange[1].\n"
  "If ImageRange[1] <= ImageRange[0], then slice number ImageRange[0] is\n"
  "read. Thus to read an image set ImageRange[0] = ImageRange[1] = slice\n"
  "number. The default behavior is to read a single file (i.e., image\n"
  "slice 1).\n\n"
  "The DataMask instance variable is used to read data files with\n"
  "embedded connectivity or segmentation information. For example, some\n"
  "data has the high order bit set to indicate connected surface. The\n"
  "DataMask allows you to select this data. Other important ivars\n"
  "include HeaderSize, which allows you to skip over initial info, and\n"
  "SwapBytes, which turns on/off byte swapping. Consider using\n"
  "vtkImageReader as a replacement.\n\n"
  "@sa\n"
  "vtkSliceCubes vtkMarchingCubes vtkPNMReader vtkVolume16Reader\n"
  "vtkImageReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVolumeReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkVolumeReader", // tp_name
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
  PyvtkVolumeReader_Doc, // tp_doc
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

PyObject *PyvtkVolumeReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVolumeReader_Type, PyvtkVolumeReader_Methods,
    "vtkVolumeReader",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkMNIObjectWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMNIObjectWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMNIObjectWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkMNIObjectWriter_ClassNew(); }


static PyObject *
PyvtkMNIObjectWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMNIObjectWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMNIObjectWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMNIObjectWriter *tempr = vtkMNIObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMNIObjectWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMNIObjectWriter::NewInstance());

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
PyvtkMNIObjectWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMNIObjectWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMNIObjectWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkMNIObjectWriter::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkMNIObjectWriter::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkMNIObjectWriter::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkMNIObjectWriter::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkMNIObjectWriter::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkMNIObjectWriter::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkMNIObjectWriter::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkMNIObjectWriter::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMNIObjectWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMNIObjectWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkMNIObjectWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMNIObjectWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMNIObjectWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkMNIObjectWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyObject *
PyvtkMNIObjectWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

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
      op->vtkMNIObjectWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMNIObjectWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkMNIObjectWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkMNIObjectWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkMNIObjectWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkMNIObjectWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkMNIObjectWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkMNIObjectWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMNIObjectWriter_Methods[] = {
  {"IsTypeOf", PyvtkMNIObjectWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMNIObjectWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMNIObjectWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMNIObjectWriter\nC++: static vtkMNIObjectWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMNIObjectWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMNIObjectWriter\nC++: vtkMNIObjectWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMNIObjectWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMNIObjectWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFileExtensions", PyvtkMNIObjectWriter_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: virtual const char *GetFileExtensions()\n\nGet the extension for this file format.\n"},
  {"GetDescriptiveName", PyvtkMNIObjectWriter_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {"SetProperty", PyvtkMNIObjectWriter_SetProperty, METH_VARARGS,
   "SetProperty(self, property:vtkProperty) -> None\nC++: virtual void SetProperty(vtkProperty *property)\n\nSet the property associated with the object.  Optional. This is\nuseful for exporting an actor.\n"},
  {"GetProperty", PyvtkMNIObjectWriter_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\n"},
  {"SetMapper", PyvtkMNIObjectWriter_SetMapper, METH_VARARGS,
   "SetMapper(self, mapper:vtkMapper) -> None\nC++: virtual void SetMapper(vtkMapper *mapper)\n\nSet the mapper associated with the object.  Optional. This is\nuseful for exporting an actor with the same colors that are used\nto display the actor within VTK.\n"},
  {"GetMapper", PyvtkMNIObjectWriter_GetMapper, METH_VARARGS,
   "GetMapper(self) -> vtkMapper\nC++: virtual vtkMapper *GetMapper()\n\n"},
  {"SetLookupTable", PyvtkMNIObjectWriter_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, table:vtkLookupTable) -> None\nC++: virtual void SetLookupTable(vtkLookupTable *table)\n\nSet the lookup table associated with the object.  This will be\nused to convert scalar values to colors, if a mapper is not set.\n"},
  {"GetLookupTable", PyvtkMNIObjectWriter_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\n"},
  {"GetInput", PyvtkMNIObjectWriter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkPolyData\nC++: vtkPolyData *GetInput()\nGetInput(self, port:int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"SetFileName", PyvtkMNIObjectWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"GetFileName", PyvtkMNIObjectWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetFileType", PyvtkMNIObjectWriter_SetFileType, METH_VARARGS,
   "SetFileType(self, _arg:int) -> None\nC++: virtual void SetFileType(int _arg)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileTypeMinValue", PyvtkMNIObjectWriter_GetFileTypeMinValue, METH_VARARGS,
   "GetFileTypeMinValue(self) -> int\nC++: virtual int GetFileTypeMinValue()\n\n"},
  {"GetFileTypeMaxValue", PyvtkMNIObjectWriter_GetFileTypeMaxValue, METH_VARARGS,
   "GetFileTypeMaxValue(self) -> int\nC++: virtual int GetFileTypeMaxValue()\n\n"},
  {"GetFileType", PyvtkMNIObjectWriter_GetFileType, METH_VARARGS,
   "GetFileType(self) -> int\nC++: virtual int GetFileType()\n\n"},
  {"SetFileTypeToASCII", PyvtkMNIObjectWriter_SetFileTypeToASCII, METH_VARARGS,
   "SetFileTypeToASCII(self) -> None\nC++: void SetFileTypeToASCII()\n\n"},
  {"SetFileTypeToBinary", PyvtkMNIObjectWriter_SetFileTypeToBinary, METH_VARARGS,
   "SetFileTypeToBinary(self) -> None\nC++: void SetFileTypeToBinary()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMNIObjectWriter_Doc =
  "vtkMNIObjectWriter - A writer for MNI surface mesh files.\n\n"
  "Superclass: vtkWriter\n\n"
  "The MNI .obj file format is used to store geometrical data.  This\n"
  "file format was developed at the McConnell Brain Imaging Centre at\n"
  "the Montreal Neurological Institute and is used by their software.\n"
  "Only polygon and line files are supported by this writer.  For these\n"
  "formats, all data elements are written including normals, colors, and\n"
  "surface properties.  ASCII and binary file types are supported.\n"
  "@sa\n"
  "vtkMINCImageReader vtkMNIObjectReader vtkMNITransformReader@par\n"
  "Thanks: Thanks to David Gobbi for writing this class and Atamai Inc.\n"
  "for contributing it to VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMNIObjectWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMINC.vtkMNIObjectWriter", // tp_name
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
  PyvtkMNIObjectWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMNIObjectWriter_StaticNew()
{
  return vtkMNIObjectWriter::New();
}

PyObject *PyvtkMNIObjectWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMNIObjectWriter_Type, PyvtkMNIObjectWriter_Methods,
    "vtkMNIObjectWriter",
 &PyvtkMNIObjectWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMNIObjectWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMNIObjectWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMNIObjectWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}


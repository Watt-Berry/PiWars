// python wrapper for vtkPLYReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPLYReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPLYReader(PyObject *dict); }
extern "C" { PyObject *PyvtkPLYReader_ClassNew(); }


static PyObject *
PyvtkPLYReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPLYReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPLYReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPLYReader *tempr = vtkPLYReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPLYReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPLYReader::NewInstance());

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
PyvtkPLYReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPLYReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPLYReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_CanReadFile(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = vtkPLYReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetComments() :
      op->vtkPLYReader::GetComments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_GetFaceTextureTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceTextureTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFaceTextureTolerance() :
      op->vtkPLYReader::GetFaceTextureTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_SetFaceTextureTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceTextureTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFaceTextureTolerance(temp0);
    }
    else
    {
      op->vtkPLYReader::SetFaceTextureTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFromInputString(temp0);
    }
    else
    {
      op->vtkPLYReader::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkPLYReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkPLYReader::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkPLYReader::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_SetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0);
    }
    else
    {
      op->vtkPLYReader::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_SetStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  vtkResourceStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResourceStream"))
  {
    if (ap.IsBound())
    {
      op->SetStream(temp0);
    }
    else
    {
      op->vtkPLYReader::SetStream(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_GetStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResourceStream *tempr = (ap.IsBound() ?
      op->GetStream() :
      op->vtkPLYReader::GetStream());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_SetReadFromInputStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFromInputStream(temp0);
    }
    else
    {
      op->vtkPLYReader::SetReadFromInputStream(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_GetReadFromInputStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadFromInputStream() :
      op->vtkPLYReader::GetReadFromInputStream());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_ReadFromInputStreamOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStreamOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStreamOn();
    }
    else
    {
      op->vtkPLYReader::ReadFromInputStreamOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_ReadFromInputStreamOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStreamOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStreamOff();
    }
    else
    {
      op->vtkPLYReader::ReadFromInputStreamOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_GetDuplicatePointsForFaceTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicatePointsForFaceTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDuplicatePointsForFaceTexture() :
      op->vtkPLYReader::GetDuplicatePointsForFaceTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_SetDuplicatePointsForFaceTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicatePointsForFaceTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDuplicatePointsForFaceTexture(temp0);
    }
    else
    {
      op->vtkPLYReader::SetDuplicatePointsForFaceTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPLYReader_Methods[] = {
  {"IsTypeOf", PyvtkPLYReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPLYReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPLYReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPLYReader\nC++: static vtkPLYReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPLYReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPLYReader\nC++: vtkPLYReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPLYReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPLYReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CanReadFile", PyvtkPLYReader_CanReadFile, METH_VARARGS,
   "CanReadFile(filename:str) -> int\nC++: static int CanReadFile(const char *filename)\n\nA simple, non-exhaustive check to see if a file is a valid ply\nfile.\n"},
  {"GetComments", PyvtkPLYReader_GetComments, METH_VARARGS,
   "GetComments(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetComments()\n\n"},
  {"GetFaceTextureTolerance", PyvtkPLYReader_GetFaceTextureTolerance, METH_VARARGS,
   "GetFaceTextureTolerance(self) -> float\nC++: virtual float GetFaceTextureTolerance()\n\nTolerance used to detect different texture coordinates for shared\npoints for faces.\n"},
  {"SetFaceTextureTolerance", PyvtkPLYReader_SetFaceTextureTolerance, METH_VARARGS,
   "SetFaceTextureTolerance(self, _arg:float) -> None\nC++: virtual void SetFaceTextureTolerance(float _arg)\n\n"},
  {"SetReadFromInputString", PyvtkPLYReader_SetReadFromInputString, METH_VARARGS,
   "SetReadFromInputString(self, _arg:bool) -> None\nC++: virtual void SetReadFromInputString(bool _arg)\n\nEnable reading from an InputString instead of the default, a\nfile. Note that reading from an input stream would be more\nflexible (enabling other kind of streams) and possibly more\nefficient because we don't need to save the whole stream to a\nstring. However a stream interface does not translate well to\npython and the string interface satisfies our current needs. So\nwe leave the stream interface for future work.\n"},
  {"GetReadFromInputString", PyvtkPLYReader_GetReadFromInputString, METH_VARARGS,
   "GetReadFromInputString(self) -> bool\nC++: virtual bool GetReadFromInputString()\n\n"},
  {"ReadFromInputStringOn", PyvtkPLYReader_ReadFromInputStringOn, METH_VARARGS,
   "ReadFromInputStringOn(self) -> None\nC++: virtual void ReadFromInputStringOn()\n\n"},
  {"ReadFromInputStringOff", PyvtkPLYReader_ReadFromInputStringOff, METH_VARARGS,
   "ReadFromInputStringOff(self) -> None\nC++: virtual void ReadFromInputStringOff()\n\n"},
  {"SetInputString", PyvtkPLYReader_SetInputString, METH_VARARGS,
   "SetInputString(self, s:str) -> None\nC++: void SetInputString(const std::string &s)\n\n"},
  {"SetStream", PyvtkPLYReader_SetStream, METH_VARARGS,
   "SetStream(self, _arg:vtkResourceStream) -> None\nC++: virtual void SetStream(vtkResourceStream *_arg)\n\nSpecify stream to read from\n"},
  {"GetStream", PyvtkPLYReader_GetStream, METH_VARARGS,
   "GetStream(self) -> vtkResourceStream\nC++: virtual vtkResourceStream *GetStream()\n\n"},
  {"SetReadFromInputStream", PyvtkPLYReader_SetReadFromInputStream, METH_VARARGS,
   "SetReadFromInputStream(self, _arg:bool) -> None\nC++: virtual void SetReadFromInputStream(bool _arg)\n\nEnable reading from an InputStream `ReadFromInputStream` has an\nhigher priotity than `ReadFromInputString`.\n"},
  {"GetReadFromInputStream", PyvtkPLYReader_GetReadFromInputStream, METH_VARARGS,
   "GetReadFromInputStream(self) -> bool\nC++: virtual bool GetReadFromInputStream()\n\n"},
  {"ReadFromInputStreamOn", PyvtkPLYReader_ReadFromInputStreamOn, METH_VARARGS,
   "ReadFromInputStreamOn(self) -> None\nC++: virtual void ReadFromInputStreamOn()\n\n"},
  {"ReadFromInputStreamOff", PyvtkPLYReader_ReadFromInputStreamOff, METH_VARARGS,
   "ReadFromInputStreamOff(self) -> None\nC++: virtual void ReadFromInputStreamOff()\n\n"},
  {"GetDuplicatePointsForFaceTexture", PyvtkPLYReader_GetDuplicatePointsForFaceTexture, METH_VARARGS,
   "GetDuplicatePointsForFaceTexture(self) -> bool\nC++: virtual bool GetDuplicatePointsForFaceTexture()\n\nIf true (default) and the \"face\" element has the property\n\"texcoord\" duplicate face points if they have 2 or more different\ntexture coordinates. Otherwise, each texture coordinate for a\nface point overwrites previously set texture coordinates for that\npoint.\n"},
  {"SetDuplicatePointsForFaceTexture", PyvtkPLYReader_SetDuplicatePointsForFaceTexture, METH_VARARGS,
   "SetDuplicatePointsForFaceTexture(self, _arg:bool) -> None\nC++: virtual void SetDuplicatePointsForFaceTexture(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPLYReader_Doc =
  "vtkPLYReader - read Stanford University PLY polygonal file format\n\n"
  "Superclass: vtkAbstractPolyDataReader\n\n"
  "vtkPLYReader is a source object that reads polygonal data in Stanford\n"
  "University PLY file format (see\n"
  "http://graphics.stanford.edu/data/3Dscanrep). It requires that the\n"
  "elements \"vertex\" and \"face\" are defined. The \"vertex\" element must\n"
  "have the properties \"x\", \"y\", and \"z\". The \"face\" element must have\n"
  "the property \"vertex_indices\" defined. Optionally, if the \"face\"\n"
  "element has the properties \"intensity\" and/or the triplet \"red\",\n"
  "\"green\", \"blue\", and optionally \"alpha\"; these are read and added as\n"
  "scalars to the output data. If the \"face\" element has the property\n"
  "\"texcoord\" a new TCoords point array is created and points are\n"
  "duplicated if they have 2 or more different texture coordinates.\n"
  "Points are duplicated only if DuplicatePointsForFaceTexture is true\n"
  "(default). This creates a polygonal data that can be textured without\n"
  "artifacts. If unique points are required use a vtkCleanPolyData\n"
  "filter after this reader or use this reader with\n"
  "DuplicatePointsForFaceTexture set to false.\n\n"
  "@sa\n"
  "vtkPLYWriter, vtkCleanPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPLYReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOPLY.vtkPLYReader", // tp_name
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
  PyvtkPLYReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPLYReader_StaticNew()
{
  return vtkPLYReader::New();
}

PyObject *PyvtkPLYReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPLYReader_Type, PyvtkPLYReader_Methods,
    "vtkPLYReader",
 &PyvtkPLYReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAbstractPolyDataReader");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPLYReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPLYReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPLYReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


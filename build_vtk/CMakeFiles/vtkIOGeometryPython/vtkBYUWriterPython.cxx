// python wrapper for vtkBYUWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBYUWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBYUWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkBYUWriter_ClassNew(); }


static PyObject *
PyvtkBYUWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBYUWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBYUWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBYUWriter *tempr = vtkBYUWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBYUWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBYUWriter::NewInstance());

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
PyvtkBYUWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBYUWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBYUWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometryFileName(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetGeometryFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryFileName() :
      op->vtkBYUWriter::GetGeometryFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementFileName(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetDisplacementFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementFileName() :
      op->vtkBYUWriter::GetDisplacementFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarFileName(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetScalarFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarFileName() :
      op->vtkBYUWriter::GetScalarFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureFileName(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetTextureFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTextureFileName() :
      op->vtkBYUWriter::GetTextureFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteDisplacement(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetWriteDisplacement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteDisplacement() :
      op->vtkBYUWriter::GetWriteDisplacement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteDisplacementOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDisplacementOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteDisplacementOn();
    }
    else
    {
      op->vtkBYUWriter::WriteDisplacementOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteDisplacementOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDisplacementOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteDisplacementOff();
    }
    else
    {
      op->vtkBYUWriter::WriteDisplacementOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteScalar(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetWriteScalar(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteScalar() :
      op->vtkBYUWriter::GetWriteScalar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteScalarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteScalarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteScalarOn();
    }
    else
    {
      op->vtkBYUWriter::WriteScalarOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteScalarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteScalarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteScalarOff();
    }
    else
    {
      op->vtkBYUWriter::WriteScalarOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteTexture(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetWriteTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteTexture() :
      op->vtkBYUWriter::GetWriteTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteTextureOn();
    }
    else
    {
      op->vtkBYUWriter::WriteTextureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteTextureOff();
    }
    else
    {
      op->vtkBYUWriter::WriteTextureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkBYUWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBYUWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkBYUWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBYUWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBYUWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkBYUWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}

static PyMethodDef PyvtkBYUWriter_Methods[] = {
  {"IsTypeOf", PyvtkBYUWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBYUWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBYUWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBYUWriter\nC++: static vtkBYUWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBYUWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBYUWriter\nC++: vtkBYUWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBYUWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBYUWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGeometryFileName", PyvtkBYUWriter_SetGeometryFileName, METH_VARARGS,
   "SetGeometryFileName(self, _arg:str) -> None\nC++: virtual void SetGeometryFileName(const char *_arg)\n\nSpecify the name of the geometry file to write.\n"},
  {"GetGeometryFileName", PyvtkBYUWriter_GetGeometryFileName, METH_VARARGS,
   "GetGeometryFileName(self) -> str\nC++: virtual char *GetGeometryFileName()\n\n"},
  {"SetDisplacementFileName", PyvtkBYUWriter_SetDisplacementFileName, METH_VARARGS,
   "SetDisplacementFileName(self, _arg:str) -> None\nC++: virtual void SetDisplacementFileName(const char *_arg)\n\nSpecify the name of the displacement file to write.\n"},
  {"GetDisplacementFileName", PyvtkBYUWriter_GetDisplacementFileName, METH_VARARGS,
   "GetDisplacementFileName(self) -> str\nC++: virtual char *GetDisplacementFileName()\n\n"},
  {"SetScalarFileName", PyvtkBYUWriter_SetScalarFileName, METH_VARARGS,
   "SetScalarFileName(self, _arg:str) -> None\nC++: virtual void SetScalarFileName(const char *_arg)\n\nSpecify the name of the scalar file to write.\n"},
  {"GetScalarFileName", PyvtkBYUWriter_GetScalarFileName, METH_VARARGS,
   "GetScalarFileName(self) -> str\nC++: virtual char *GetScalarFileName()\n\n"},
  {"SetTextureFileName", PyvtkBYUWriter_SetTextureFileName, METH_VARARGS,
   "SetTextureFileName(self, _arg:str) -> None\nC++: virtual void SetTextureFileName(const char *_arg)\n\nSpecify the name of the texture file to write.\n"},
  {"GetTextureFileName", PyvtkBYUWriter_GetTextureFileName, METH_VARARGS,
   "GetTextureFileName(self) -> str\nC++: virtual char *GetTextureFileName()\n\n"},
  {"SetWriteDisplacement", PyvtkBYUWriter_SetWriteDisplacement, METH_VARARGS,
   "SetWriteDisplacement(self, _arg:int) -> None\nC++: virtual void SetWriteDisplacement(vtkTypeBool _arg)\n\nTurn on/off writing the displacement file.\n"},
  {"GetWriteDisplacement", PyvtkBYUWriter_GetWriteDisplacement, METH_VARARGS,
   "GetWriteDisplacement(self) -> int\nC++: virtual vtkTypeBool GetWriteDisplacement()\n\n"},
  {"WriteDisplacementOn", PyvtkBYUWriter_WriteDisplacementOn, METH_VARARGS,
   "WriteDisplacementOn(self) -> None\nC++: virtual void WriteDisplacementOn()\n\n"},
  {"WriteDisplacementOff", PyvtkBYUWriter_WriteDisplacementOff, METH_VARARGS,
   "WriteDisplacementOff(self) -> None\nC++: virtual void WriteDisplacementOff()\n\n"},
  {"SetWriteScalar", PyvtkBYUWriter_SetWriteScalar, METH_VARARGS,
   "SetWriteScalar(self, _arg:int) -> None\nC++: virtual void SetWriteScalar(vtkTypeBool _arg)\n\nTurn on/off writing the scalar file.\n"},
  {"GetWriteScalar", PyvtkBYUWriter_GetWriteScalar, METH_VARARGS,
   "GetWriteScalar(self) -> int\nC++: virtual vtkTypeBool GetWriteScalar()\n\n"},
  {"WriteScalarOn", PyvtkBYUWriter_WriteScalarOn, METH_VARARGS,
   "WriteScalarOn(self) -> None\nC++: virtual void WriteScalarOn()\n\n"},
  {"WriteScalarOff", PyvtkBYUWriter_WriteScalarOff, METH_VARARGS,
   "WriteScalarOff(self) -> None\nC++: virtual void WriteScalarOff()\n\n"},
  {"SetWriteTexture", PyvtkBYUWriter_SetWriteTexture, METH_VARARGS,
   "SetWriteTexture(self, _arg:int) -> None\nC++: virtual void SetWriteTexture(vtkTypeBool _arg)\n\nTurn on/off writing the texture file.\n"},
  {"GetWriteTexture", PyvtkBYUWriter_GetWriteTexture, METH_VARARGS,
   "GetWriteTexture(self) -> int\nC++: virtual vtkTypeBool GetWriteTexture()\n\n"},
  {"WriteTextureOn", PyvtkBYUWriter_WriteTextureOn, METH_VARARGS,
   "WriteTextureOn(self) -> None\nC++: virtual void WriteTextureOn()\n\n"},
  {"WriteTextureOff", PyvtkBYUWriter_WriteTextureOff, METH_VARARGS,
   "WriteTextureOff(self) -> None\nC++: virtual void WriteTextureOff()\n\n"},
  {"GetInput", PyvtkBYUWriter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkPolyData\nC++: vtkPolyData *GetInput()\nGetInput(self, port:int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBYUWriter_Doc =
  "vtkBYUWriter - write MOVIE.BYU files\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkBYUWriter writes MOVIE.BYU polygonal files. These files consist of\n"
  "a geometry file (.g), a scalar file (.s), a displacement or vector\n"
  "file (.d), and a 2D texture coordinate file (.t). These files must be\n"
  "specified to the object, the appropriate boolean variables must be\n"
  "true, and data must be available from the input for the files to be\n"
  "written. WARNING: this writer does not currently write triangle\n"
  "strips. Use vtkTriangleFilter to convert strips to triangles.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBYUWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkBYUWriter", // tp_name
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
  PyvtkBYUWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBYUWriter_StaticNew()
{
  return vtkBYUWriter::New();
}

PyObject *PyvtkBYUWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBYUWriter_Type, PyvtkBYUWriter_Methods,
    "vtkBYUWriter",
 &PyvtkBYUWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBYUWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBYUWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBYUWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}


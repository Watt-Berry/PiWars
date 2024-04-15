// python wrapper for vtkDicer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDicer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDicer(PyObject *dict); }
extern "C" { PyObject *PyvtkDicer_ClassNew(); }


static PyObject *
PyvtkDicer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDicer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDicer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDicer *tempr = vtkDicer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDicer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDicer::NewInstance());

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
PyvtkDicer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDicer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDicer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldData(temp0);
    }
    else
    {
      op->vtkDicer::SetFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkDicer::GetFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOn();
    }
    else
    {
      op->vtkDicer::FieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOff();
    }
    else
    {
      op->vtkDicer::FieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiceMode(temp0);
    }
    else
    {
      op->vtkDicer::SetDiceMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDiceModeMinValue() :
      op->vtkDicer::GetDiceModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDiceModeMaxValue() :
      op->vtkDicer::GetDiceModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDiceMode() :
      op->vtkDicer::GetDiceMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDiceModeToNumberOfPointsPerPiece();
    }
    else
    {
      op->vtkDicer::SetDiceModeToNumberOfPointsPerPiece();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToSpecifiedNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToSpecifiedNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDiceModeToSpecifiedNumberOfPieces();
    }
    else
    {
      op->vtkDicer::SetDiceModeToSpecifiedNumberOfPieces();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToMemoryLimitPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToMemoryLimitPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDiceModeToMemoryLimitPerPiece();
    }
    else
    {
      op->vtkDicer::SetDiceModeToMemoryLimitPerPiece();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfActualPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfActualPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfActualPieces() :
      op->vtkDicer::GetNumberOfActualPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SetNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointsPerPiece(temp0);
    }
    else
    {
      op->vtkDicer::SetNumberOfPointsPerPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPieceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPieceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerPieceMinValue() :
      op->vtkDicer::GetNumberOfPointsPerPieceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPieceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPieceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerPieceMaxValue() :
      op->vtkDicer::GetNumberOfPointsPerPieceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerPiece() :
      op->vtkDicer::GetNumberOfPointsPerPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkDicer::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPiecesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPiecesMinValue() :
      op->vtkDicer::GetNumberOfPiecesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPiecesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPiecesMaxValue() :
      op->vtkDicer::GetNumberOfPiecesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkDicer::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_SetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMemoryLimit(temp0);
    }
    else
    {
      op->vtkDicer::SetMemoryLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimitMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimitMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemoryLimitMinValue() :
      op->vtkDicer::GetMemoryLimitMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimitMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimitMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemoryLimitMaxValue() :
      op->vtkDicer::GetMemoryLimitMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemoryLimit() :
      op->vtkDicer::GetMemoryLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDicer_Methods[] = {
  {"IsTypeOf", PyvtkDicer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDicer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDicer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDicer\nC++: static vtkDicer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDicer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDicer\nC++: vtkDicer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDicer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDicer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFieldData", PyvtkDicer_SetFieldData, METH_VARARGS,
   "SetFieldData(self, _arg:int) -> None\nC++: virtual void SetFieldData(vtkTypeBool _arg)\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {"GetFieldData", PyvtkDicer_GetFieldData, METH_VARARGS,
   "GetFieldData(self) -> int\nC++: virtual vtkTypeBool GetFieldData()\n\n"},
  {"FieldDataOn", PyvtkDicer_FieldDataOn, METH_VARARGS,
   "FieldDataOn(self) -> None\nC++: virtual void FieldDataOn()\n\n"},
  {"FieldDataOff", PyvtkDicer_FieldDataOff, METH_VARARGS,
   "FieldDataOff(self) -> None\nC++: virtual void FieldDataOff()\n\n"},
  {"SetDiceMode", PyvtkDicer_SetDiceMode, METH_VARARGS,
   "SetDiceMode(self, _arg:int) -> None\nC++: virtual void SetDiceMode(int _arg)\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {"GetDiceModeMinValue", PyvtkDicer_GetDiceModeMinValue, METH_VARARGS,
   "GetDiceModeMinValue(self) -> int\nC++: virtual int GetDiceModeMinValue()\n\n"},
  {"GetDiceModeMaxValue", PyvtkDicer_GetDiceModeMaxValue, METH_VARARGS,
   "GetDiceModeMaxValue(self) -> int\nC++: virtual int GetDiceModeMaxValue()\n\n"},
  {"GetDiceMode", PyvtkDicer_GetDiceMode, METH_VARARGS,
   "GetDiceMode(self) -> int\nC++: virtual int GetDiceMode()\n\n"},
  {"SetDiceModeToNumberOfPointsPerPiece", PyvtkDicer_SetDiceModeToNumberOfPointsPerPiece, METH_VARARGS,
   "SetDiceModeToNumberOfPointsPerPiece(self) -> None\nC++: void SetDiceModeToNumberOfPointsPerPiece()\n\n"},
  {"SetDiceModeToSpecifiedNumberOfPieces", PyvtkDicer_SetDiceModeToSpecifiedNumberOfPieces, METH_VARARGS,
   "SetDiceModeToSpecifiedNumberOfPieces(self) -> None\nC++: void SetDiceModeToSpecifiedNumberOfPieces()\n\n"},
  {"SetDiceModeToMemoryLimitPerPiece", PyvtkDicer_SetDiceModeToMemoryLimitPerPiece, METH_VARARGS,
   "SetDiceModeToMemoryLimitPerPiece(self) -> None\nC++: void SetDiceModeToMemoryLimitPerPiece()\n\n"},
  {"GetNumberOfActualPieces", PyvtkDicer_GetNumberOfActualPieces, METH_VARARGS,
   "GetNumberOfActualPieces(self) -> int\nC++: virtual int GetNumberOfActualPieces()\n\nUse the following method after the filter has updated to\ndetermine the actual number of pieces the data was separated\ninto.\n"},
  {"SetNumberOfPointsPerPiece", PyvtkDicer_SetNumberOfPointsPerPiece, METH_VARARGS,
   "SetNumberOfPointsPerPiece(self, _arg:int) -> None\nC++: virtual void SetNumberOfPointsPerPiece(int _arg)\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {"GetNumberOfPointsPerPieceMinValue", PyvtkDicer_GetNumberOfPointsPerPieceMinValue, METH_VARARGS,
   "GetNumberOfPointsPerPieceMinValue(self) -> int\nC++: virtual int GetNumberOfPointsPerPieceMinValue()\n\n"},
  {"GetNumberOfPointsPerPieceMaxValue", PyvtkDicer_GetNumberOfPointsPerPieceMaxValue, METH_VARARGS,
   "GetNumberOfPointsPerPieceMaxValue(self) -> int\nC++: virtual int GetNumberOfPointsPerPieceMaxValue()\n\n"},
  {"GetNumberOfPointsPerPiece", PyvtkDicer_GetNumberOfPointsPerPiece, METH_VARARGS,
   "GetNumberOfPointsPerPiece(self) -> int\nC++: virtual int GetNumberOfPointsPerPiece()\n\n"},
  {"SetNumberOfPieces", PyvtkDicer_SetNumberOfPieces, METH_VARARGS,
   "SetNumberOfPieces(self, _arg:int) -> None\nC++: virtual void SetNumberOfPieces(int _arg)\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {"GetNumberOfPiecesMinValue", PyvtkDicer_GetNumberOfPiecesMinValue, METH_VARARGS,
   "GetNumberOfPiecesMinValue(self) -> int\nC++: virtual int GetNumberOfPiecesMinValue()\n\n"},
  {"GetNumberOfPiecesMaxValue", PyvtkDicer_GetNumberOfPiecesMaxValue, METH_VARARGS,
   "GetNumberOfPiecesMaxValue(self) -> int\nC++: virtual int GetNumberOfPiecesMaxValue()\n\n"},
  {"GetNumberOfPieces", PyvtkDicer_GetNumberOfPieces, METH_VARARGS,
   "GetNumberOfPieces(self) -> int\nC++: virtual int GetNumberOfPieces()\n\n"},
  {"SetMemoryLimit", PyvtkDicer_SetMemoryLimit, METH_VARARGS,
   "SetMemoryLimit(self, _arg:int) -> None\nC++: virtual void SetMemoryLimit(unsigned long _arg)\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkibibytes (1024 bytes).\n"},
  {"GetMemoryLimitMinValue", PyvtkDicer_GetMemoryLimitMinValue, METH_VARARGS,
   "GetMemoryLimitMinValue(self) -> int\nC++: virtual unsigned long GetMemoryLimitMinValue()\n\n"},
  {"GetMemoryLimitMaxValue", PyvtkDicer_GetMemoryLimitMaxValue, METH_VARARGS,
   "GetMemoryLimitMaxValue(self) -> int\nC++: virtual unsigned long GetMemoryLimitMaxValue()\n\n"},
  {"GetMemoryLimit", PyvtkDicer_GetMemoryLimit, METH_VARARGS,
   "GetMemoryLimit(self) -> int\nC++: virtual unsigned long GetMemoryLimit()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDicer_Doc =
  "vtkDicer - abstract superclass to divide dataset into pieces\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "Subclasses of vtkDicer divides the input dataset into separate\n"
  "pieces.  These pieces can then be operated on by other filters (e.g.,\n"
  "vtkThreshold). One application is to break very large polygonal\n"
  "models into pieces and performing viewing and occlusion culling on\n"
  "the pieces. Multiple pieces can also be streamed through the\n"
  "visualization pipeline.\n\n"
  "To use this filter, you must specify the execution mode of the\n"
  "filter; i.e., set the way that the piece size is controlled (do this\n"
  "by setting the DiceMode ivar). The filter does not change the\n"
  "geometry or topology of the input dataset, rather it generates\n"
  "integer numbers that indicate which piece a particular point belongs\n"
  "to (i.e., it modifies the point and cell attribute data). The integer\n"
  "number can be placed into the output scalar data, or the output field\n"
  "data.\n\n"
  "@warning\n"
  "The number of pieces generated may not equal the specified number of\n"
  "pieces. Use the method GetNumberOfActualPieces() after filter\n"
  "execution to get the actual number of pieces generated.\n\n"
  "@sa\n"
  "vtkOBBDicer vtkConnectedDicer vtkSpatialDicer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDicer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkDicer", // tp_name
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
  PyvtkDicer_Doc, // tp_doc
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

PyObject *PyvtkDicer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDicer_Type, PyvtkDicer_Methods,
    "vtkDicer",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDicer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDicer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDicer", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_DICE_MODE_NUMBER_OF_POINTS", 0 },
        { "VTK_DICE_MODE_SPECIFIED_NUMBER", 1 },
        { "VTK_DICE_MODE_MEMORY_LIMIT", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}


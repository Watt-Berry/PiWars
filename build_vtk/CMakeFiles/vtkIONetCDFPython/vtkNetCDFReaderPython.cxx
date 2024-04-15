// python wrapper for vtkNetCDFReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkNetCDFReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNetCDFReader(PyObject *dict); }
extern "C" { PyObject *PyvtkNetCDFReader_ClassNew(); }


static PyObject *
PyvtkNetCDFReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetCDFReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNetCDFReader *tempr = vtkNetCDFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetCDFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFReader::NewInstance());

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
PyvtkNetCDFReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkNetCDFReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkNetCDFReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

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
      op->vtkNetCDFReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNetCDFReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_UpdateMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateMetaData() :
      op->vtkNetCDFReader::UpdateMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkNetCDFReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkNetCDFReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkNetCDFReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariableArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkNetCDFReader::SetVariableArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetAllVariableArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllVariableArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAllVariableArrayNames() :
      op->vtkNetCDFReader::GetAllVariableArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVariableDimensions() :
      op->vtkNetCDFReader::GetVariableDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkNetCDFReader::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_ComputeArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ComputeArraySelection() :
      op->vtkNetCDFReader::ComputeArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetAllDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAllDimensions() :
      op->vtkNetCDFReader::GetAllDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetReplaceFillValueWithNan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceFillValueWithNan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceFillValueWithNan() :
      op->vtkNetCDFReader::GetReplaceFillValueWithNan());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetReplaceFillValueWithNan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceFillValueWithNan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceFillValueWithNan(temp0);
    }
    else
    {
      op->vtkNetCDFReader::SetReplaceFillValueWithNan(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_ReplaceFillValueWithNanOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceFillValueWithNanOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceFillValueWithNanOn();
    }
    else
    {
      op->vtkNetCDFReader::ReplaceFillValueWithNanOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_ReplaceFillValueWithNanOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceFillValueWithNanOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceFillValueWithNanOff();
    }
    else
    {
      op->vtkNetCDFReader::ReplaceFillValueWithNanOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetTimeUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTimeUnits() :
      op->vtkNetCDFReader::GetTimeUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetCalendar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalendar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCalendar() :
      op->vtkNetCDFReader::GetCalendar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFReader_QueryArrayUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryArrayUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->QueryArrayUnits(temp0) :
      op->vtkNetCDFReader::QueryArrayUnits(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNetCDFReader_Methods[] = {
  {"IsTypeOf", PyvtkNetCDFReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNetCDFReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNetCDFReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkNetCDFReader\nC++: static vtkNetCDFReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNetCDFReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkNetCDFReader\nC++: vtkNetCDFReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkNetCDFReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkNetCDFReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkNetCDFReader_SetFileName, METH_VARARGS,
   "SetFileName(self, filename:str) -> None\nC++: virtual void SetFileName(const char *filename)\n\n"},
  {"GetFileName", PyvtkNetCDFReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"UpdateMetaData", PyvtkNetCDFReader_UpdateMetaData, METH_VARARGS,
   "UpdateMetaData(self) -> int\nC++: int UpdateMetaData()\n\nUpdate the meta data from the current file.  Automatically called\nduring the RequestInformation pipeline update stage.\n"},
  {"GetNumberOfVariableArrays", PyvtkNetCDFReader_GetNumberOfVariableArrays, METH_VARARGS,
   "GetNumberOfVariableArrays(self) -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {"GetVariableArrayName", PyvtkNetCDFReader_GetVariableArrayName, METH_VARARGS,
   "GetVariableArrayName(self, index:int) -> str\nC++: virtual const char *GetVariableArrayName(int index)\n\n"},
  {"GetVariableArrayStatus", PyvtkNetCDFReader_GetVariableArrayStatus, METH_VARARGS,
   "GetVariableArrayStatus(self, name:str) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\n"},
  {"SetVariableArrayStatus", PyvtkNetCDFReader_SetVariableArrayStatus, METH_VARARGS,
   "SetVariableArrayStatus(self, name:str, status:int) -> None\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\n"},
  {"GetAllVariableArrayNames", PyvtkNetCDFReader_GetAllVariableArrayNames, METH_VARARGS,
   "GetAllVariableArrayNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetAllVariableArrayNames()\n\nConvenience method to get a list of variable arrays.  The length\nof the returned list is the same as GetNumberOfVariableArrays,\nand the string at each index i is the same as returned from\nGetVariableArrayname(i).\n"},
  {"GetVariableDimensions", PyvtkNetCDFReader_GetVariableDimensions, METH_VARARGS,
   "GetVariableDimensions(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetVariableDimensions()\n\nReturns an array with string encodings for the dimensions used in\neach of the variables.  The indices in the returned array\ncorrespond to those used in the GetVariableArrayName method.  Two\narrays with the same dimensions will have the same encoded string\nreturned by this method.\n"},
  {"SetDimensions", PyvtkNetCDFReader_SetDimensions, METH_VARARGS,
   "SetDimensions(self, dimensions:str) -> None\nC++: virtual void SetDimensions(const char *dimensions)\n\nLoads the grid with the given dimensions.  The dimensions are\nencoded in a string that conforms to the same format as returned\nby GetVariableDimensions and GetAllDimensions.  This method is\nreally a convenience method for SetVariableArrayStatus.  It turns\non all variables that have the given dimensions and turns off all\nother variables.\n"},
  {"ComputeArraySelection", PyvtkNetCDFReader_ComputeArraySelection, METH_VARARGS,
   "ComputeArraySelection(self) -> bool\nC++: bool ComputeArraySelection()\n\nEnables arrays in VariableArraySelection depending on Dimensions.\nReturns true if one variable matching Dimensions was found.\n"},
  {"GetAllDimensions", PyvtkNetCDFReader_GetAllDimensions, METH_VARARGS,
   "GetAllDimensions(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetAllDimensions()\n\nReturns an array with string encodings for the dimension\ncombinations used in the variables.  The result is the same as\nGetVariableDimensions except that each entry in the array is\nunique (a set of dimensions is only given once even if it occurs\nfor multiple variables) and the order is meaningless.\n"},
  {"GetReplaceFillValueWithNan", PyvtkNetCDFReader_GetReplaceFillValueWithNan, METH_VARARGS,
   "GetReplaceFillValueWithNan(self) -> int\nC++: virtual vtkTypeBool GetReplaceFillValueWithNan()\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {"SetReplaceFillValueWithNan", PyvtkNetCDFReader_SetReplaceFillValueWithNan, METH_VARARGS,
   "SetReplaceFillValueWithNan(self, _arg:int) -> None\nC++: virtual void SetReplaceFillValueWithNan(vtkTypeBool _arg)\n\n"},
  {"ReplaceFillValueWithNanOn", PyvtkNetCDFReader_ReplaceFillValueWithNanOn, METH_VARARGS,
   "ReplaceFillValueWithNanOn(self) -> None\nC++: virtual void ReplaceFillValueWithNanOn()\n\n"},
  {"ReplaceFillValueWithNanOff", PyvtkNetCDFReader_ReplaceFillValueWithNanOff, METH_VARARGS,
   "ReplaceFillValueWithNanOff(self) -> None\nC++: virtual void ReplaceFillValueWithNanOff()\n\n"},
  {"GetTimeUnits", PyvtkNetCDFReader_GetTimeUnits, METH_VARARGS,
   "GetTimeUnits(self) -> str\nC++: virtual char *GetTimeUnits()\n\nAccess to the time dimensions units. Can be used by the udunits\nlibrary to convert raw numerical time values into meaningful\nrepresentations.\n"},
  {"GetCalendar", PyvtkNetCDFReader_GetCalendar, METH_VARARGS,
   "GetCalendar(self) -> str\nC++: virtual char *GetCalendar()\n\n"},
  {"QueryArrayUnits", PyvtkNetCDFReader_QueryArrayUnits, METH_VARARGS,
   "QueryArrayUnits(self, ArrayName:str) -> str\nC++: std::string QueryArrayUnits(const char *ArrayName)\n\nGet units attached to a particular array in the netcdf file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkNetCDFReader_Doc =
  "vtkNetCDFReader - A superclass for reading netCDF files.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "Subclass add conventions to the reader.  This class just outputs data\n"
  "into a multi block data set with a vtkImageData at each block.  A\n"
  "block is created for each variable except that variables with\n"
  "matching dimensions will be placed in the same block.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNetCDFReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIONetCDF.vtkNetCDFReader", // tp_name
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
  PyvtkNetCDFReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNetCDFReader_StaticNew()
{
  return vtkNetCDFReader::New();
}

PyObject *PyvtkNetCDFReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkNetCDFReader_Type, PyvtkNetCDFReader_Methods,
    "vtkNetCDFReader",
 &PyvtkNetCDFReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNetCDFReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNetCDFReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNetCDFReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


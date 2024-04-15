// python wrapper for vtkNetCDFCFWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkNetCDFCFWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNetCDFCFWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkNetCDFCFWriter_ClassNew(); }


static PyObject *
PyvtkNetCDFCFWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetCDFCFWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFCFWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNetCDFCFWriter *tempr = vtkNetCDFCFWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetCDFCFWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFCFWriter::NewInstance());

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
PyvtkNetCDFCFWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkNetCDFCFWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkNetCDFCFWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

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
      op->vtkNetCDFCFWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNetCDFCFWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_SetCellArrayNamePostfix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayNamePostfix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayNamePostfix(temp0);
    }
    else
    {
      op->vtkNetCDFCFWriter::SetCellArrayNamePostfix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_GetCellArrayNamePostfix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayNamePostfix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCellArrayNamePostfix() :
      op->vtkNetCDFCFWriter::GetCellArrayNamePostfix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillValue(temp0);
    }
    else
    {
      op->vtkNetCDFCFWriter::SetFillValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFillValue() :
      op->vtkNetCDFCFWriter::GetFillValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_SetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeType(temp0);
    }
    else
    {
      op->vtkNetCDFCFWriter::SetAttributeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkNetCDFCFWriter::GetAttributeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_SetFillBlankedAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillBlankedAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillBlankedAttributes(temp0);
    }
    else
    {
      op->vtkNetCDFCFWriter::SetFillBlankedAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_GetFillBlankedAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillBlankedAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFillBlankedAttributes() :
      op->vtkNetCDFCFWriter::GetFillBlankedAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_FillBlankedAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillBlankedAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillBlankedAttributesOn();
    }
    else
    {
      op->vtkNetCDFCFWriter::FillBlankedAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_FillBlankedAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillBlankedAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillBlankedAttributesOff();
    }
    else
    {
      op->vtkNetCDFCFWriter::FillBlankedAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFWriter_AddGridMappingAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGridMappingAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddGridMappingAttribute(temp0, temp1);
    }
    else
    {
      op->vtkNetCDFCFWriter::AddGridMappingAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNetCDFCFWriter_AddGridMappingAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGridMappingAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddGridMappingAttribute(temp0, temp1);
    }
    else
    {
      op->vtkNetCDFCFWriter::AddGridMappingAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNetCDFCFWriter_AddGridMappingAttribute_Methods[] = {
  {"AddGridMappingAttribute", PyvtkNetCDFCFWriter_AddGridMappingAttribute_s1, METH_VARARGS,
   "@zz"},
  {"AddGridMappingAttribute", PyvtkNetCDFCFWriter_AddGridMappingAttribute_s2, METH_VARARGS,
   "@zd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkNetCDFCFWriter_AddGridMappingAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkNetCDFCFWriter_AddGridMappingAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddGridMappingAttribute");
  return nullptr;
}


static PyObject *
PyvtkNetCDFCFWriter_ClearGridMappingAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearGridMappingAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFWriter *op = static_cast<vtkNetCDFCFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearGridMappingAttributes();
    }
    else
    {
      op->vtkNetCDFCFWriter::ClearGridMappingAttributes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNetCDFCFWriter_Methods[] = {
  {"IsTypeOf", PyvtkNetCDFCFWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNetCDFCFWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNetCDFCFWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkNetCDFCFWriter\nC++: static vtkNetCDFCFWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNetCDFCFWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkNetCDFCFWriter\nC++: vtkNetCDFCFWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkNetCDFCFWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkNetCDFCFWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkNetCDFCFWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the file name of the file.\n"},
  {"GetFileName", PyvtkNetCDFCFWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetCellArrayNamePostfix", PyvtkNetCDFCFWriter_SetCellArrayNamePostfix, METH_VARARGS,
   "SetCellArrayNamePostfix(self, _arg:str) -> None\nC++: virtual void SetCellArrayNamePostfix(const char *_arg)\n\nVTK allows point and cell arrays with the same name, but NetCDF\ndoes not. This string is appended to a cell array name if it\nconflicts with a point array name when it is saved in a NetCDF\nfile. Default is _c.\n"},
  {"GetCellArrayNamePostfix", PyvtkNetCDFCFWriter_GetCellArrayNamePostfix, METH_VARARGS,
   "GetCellArrayNamePostfix(self) -> str\nC++: virtual char *GetCellArrayNamePostfix()\n\n"},
  {"SetFillValue", PyvtkNetCDFCFWriter_SetFillValue, METH_VARARGS,
   "SetFillValue(self, _arg:int) -> None\nC++: virtual void SetFillValue(int _arg)\n\nGet/Set the FillValue for all array. Care must be taken to make\nsure the value fits in the value type of each array. Fill value\nhas the same meaning as blanking in VTK but it is stored in the\ndata array. This is stored in the NetCDF file.\n"},
  {"GetFillValue", PyvtkNetCDFCFWriter_GetFillValue, METH_VARARGS,
   "GetFillValue(self) -> int\nC++: virtual int GetFillValue()\n\n"},
  {"SetAttributeType", PyvtkNetCDFCFWriter_SetAttributeType, METH_VARARGS,
   "SetAttributeType(self, _arg:int) -> None\nC++: virtual void SetAttributeType(int _arg)\n\nOnly arrays of this attribute type are saved in the file.\n(vtkDataObject::POINT or CELL). Saving only one type of arrays\navoids issues with conflicting array names between points and\ncells. Default is vtkDataObject::POINT\n"},
  {"GetAttributeType", PyvtkNetCDFCFWriter_GetAttributeType, METH_VARARGS,
   "GetAttributeType(self) -> int\nC++: virtual int GetAttributeType()\n\n"},
  {"SetFillBlankedAttributes", PyvtkNetCDFCFWriter_SetFillBlankedAttributes, METH_VARARGS,
   "SetFillBlankedAttributes(self, _arg:bool) -> None\nC++: virtual void SetFillBlankedAttributes(bool _arg)\n\nIf true, before writing to the file it fills all blanked cells\nand points in the attribute arrays with the fill value for the\ntype. Default is false.\n"},
  {"GetFillBlankedAttributes", PyvtkNetCDFCFWriter_GetFillBlankedAttributes, METH_VARARGS,
   "GetFillBlankedAttributes(self) -> bool\nC++: virtual bool GetFillBlankedAttributes()\n\n"},
  {"FillBlankedAttributesOn", PyvtkNetCDFCFWriter_FillBlankedAttributesOn, METH_VARARGS,
   "FillBlankedAttributesOn(self) -> None\nC++: virtual void FillBlankedAttributesOn()\n\n"},
  {"FillBlankedAttributesOff", PyvtkNetCDFCFWriter_FillBlankedAttributesOff, METH_VARARGS,
   "FillBlankedAttributesOff(self) -> None\nC++: virtual void FillBlankedAttributesOff()\n\n"},
  {"AddGridMappingAttribute", PyvtkNetCDFCFWriter_AddGridMappingAttribute, METH_VARARGS,
   "AddGridMappingAttribute(self, name:str, value:str) -> None\nC++: void AddGridMappingAttribute(const char *name,\n    const char *value)\nAddGridMappingAttribute(self, name:str, value:float) -> None\nC++: void AddGridMappingAttribute(const char *name, double value)\n\nAdd/clear attributes that define the grid mapping (or the\ncoordinate reference system (CRS))\n\n\n To obtain the correct CF conventions attribute names and values\n when knowing the EPSG code use projinfo <epsg_code> This will\n print the WKT string. From that you can get the attribute names\n and values you need for CF convention.. The WKT attribute names\n are fairly close to CF convention attribute names.  The following\n link also helps with the conversion.\n <a\n href=\"https://github.com/cf-convention/cf-conventions/wiki/Mapping-from-CF-Grid-Mapping-Attributes-to-CRS-WKT-Elements\">CF\n Grid Mapping to WKT</a> See also <a\n href=\"http://cfconventions.org/Data/cf-conventions/cf-conventions-1.9/cf-conventions.html#appendix-grid-mappings\">CF\n Grid Mapping</a> for the attributes needed for each projection.\n \n"},
  {"ClearGridMappingAttributes", PyvtkNetCDFCFWriter_ClearGridMappingAttributes, METH_VARARGS,
   "ClearGridMappingAttributes(self) -> None\nC++: void ClearGridMappingAttributes()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkNetCDFCFWriter_Doc =
  "vtkNetCDFCFWriter - Writes netCDF files that follow the CF convention.\n\n"
  "Superclass: vtkWriter\n\n"
  "Details on this convention can be found at\n"
  "<http://cfconventions.org/>\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNetCDFCFWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIONetCDF.vtkNetCDFCFWriter", // tp_name
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
  PyvtkNetCDFCFWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNetCDFCFWriter_StaticNew()
{
  return vtkNetCDFCFWriter::New();
}

PyObject *PyvtkNetCDFCFWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkNetCDFCFWriter_Type, PyvtkNetCDFCFWriter_Methods,
    "vtkNetCDFCFWriter",
 &PyvtkNetCDFCFWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNetCDFCFWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNetCDFCFWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNetCDFCFWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}


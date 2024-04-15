// python wrapper for vtkGeoProjection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGeoProjection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeoProjection(PyObject *dict); }
extern "C" { PyObject *PyvtkGeoProjection_ClassNew(); }


static PyObject *
PyvtkGeoProjection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeoProjection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeoProjection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeoProjection *tempr = vtkGeoProjection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeoProjection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeoProjection::NewInstance());

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
PyvtkGeoProjection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGeoProjection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGeoProjection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetNumberOfProjections(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfProjections");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkGeoProjection::GetNumberOfProjections();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetProjectionName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProjectionName");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkGeoProjection::GetProjectionName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetProjectionDescription(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProjectionDescription");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkGeoProjection::GetProjectionDescription(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkGeoProjection::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkGeoProjection::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndex() :
      op->vtkGeoProjection::GetIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkGeoProjection::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_SetCentralMeridian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCentralMeridian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCentralMeridian(temp0);
    }
    else
    {
      op->vtkGeoProjection::SetCentralMeridian(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetCentralMeridian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCentralMeridian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCentralMeridian() :
      op->vtkGeoProjection::GetCentralMeridian());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_SetOptionalParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOptionalParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOptionalParameter(temp0, temp1);
    }
    else
    {
      op->vtkGeoProjection::SetOptionalParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_RemoveOptionalParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOptionalParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveOptionalParameter(temp0);
    }
    else
    {
      op->vtkGeoProjection::RemoveOptionalParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetNumberOfOptionalParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOptionalParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOptionalParameters() :
      op->vtkGeoProjection::GetNumberOfOptionalParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetOptionalParameterKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptionalParameterKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOptionalParameterKey(temp0) :
      op->vtkGeoProjection::GetOptionalParameterKey(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetOptionalParameterValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptionalParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOptionalParameterValue(temp0) :
      op->vtkGeoProjection::GetOptionalParameterValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_ClearOptionalParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearOptionalParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearOptionalParameters();
    }
    else
    {
      op->vtkGeoProjection::ClearOptionalParameters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_SetPROJ4String(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPROJ4String");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPROJ4String(temp0);
    }
    else
    {
      op->vtkGeoProjection::SetPROJ4String(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetPROJ4String(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPROJ4String");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPROJ4String() :
      op->vtkGeoProjection::GetPROJ4String());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGeoProjection_Methods[] = {
  {"IsTypeOf", PyvtkGeoProjection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGeoProjection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGeoProjection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGeoProjection\nC++: static vtkGeoProjection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGeoProjection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGeoProjection\nC++: vtkGeoProjection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGeoProjection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGeoProjection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfProjections", PyvtkGeoProjection_GetNumberOfProjections, METH_VARARGS,
   "GetNumberOfProjections() -> int\nC++: static int GetNumberOfProjections()\n\nReturns the number of projections that this class offers.\n"},
  {"GetProjectionName", PyvtkGeoProjection_GetProjectionName, METH_VARARGS,
   "GetProjectionName(projection:int) -> str\nC++: static const char *GetProjectionName(int projection)\n\nReturns the name of one of the projections supported by this\nclass. You can pass these strings to SetName(char*).\n@param projection the index of a projection, must be in\n    [0,GetNumberOfProjections()[.\n"},
  {"GetProjectionDescription", PyvtkGeoProjection_GetProjectionDescription, METH_VARARGS,
   "GetProjectionDescription(projection:int) -> str\nC++: static const char *GetProjectionDescription(int projection)\n\nReturns a description of one of the projections supported by this\nclass.\n@param projection the index of a projection, must be in\n    [0,GetNumberOfProjections()[.\n"},
  {"SetName", PyvtkGeoProjection_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\nSet/get the short name describing the projection you wish to use.\nThis defaults to \"latlong\". To get a list of valid values, use\nthe GetNumberOfProjections() and GetProjectionName(int) static\nmethods.\n"},
  {"GetName", PyvtkGeoProjection_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\n"},
  {"GetIndex", PyvtkGeoProjection_GetIndex, METH_VARARGS,
   "GetIndex(self) -> int\nC++: int GetIndex()\n\nReturn the index of the current projection's type in the list of\nall projection types. On error, this will return -1. On success,\nit returns a number in [0,GetNumberOfProjections()[.\n"},
  {"GetDescription", PyvtkGeoProjection_GetDescription, METH_VARARGS,
   "GetDescription(self) -> str\nC++: const char *GetDescription()\n\nGet the description of a projection. This will return nullptr if\nthe projection name is invalid.\n"},
  {"SetCentralMeridian", PyvtkGeoProjection_SetCentralMeridian, METH_VARARGS,
   "SetCentralMeridian(self, _arg:float) -> None\nC++: virtual void SetCentralMeridian(double _arg)\n\nSet/get the longitude which corresponds to the central meridian\nof the projection. This defaults to 0, the Greenwich Meridian.\n"},
  {"GetCentralMeridian", PyvtkGeoProjection_GetCentralMeridian, METH_VARARGS,
   "GetCentralMeridian(self) -> float\nC++: virtual double GetCentralMeridian()\n\n"},
  {"SetOptionalParameter", PyvtkGeoProjection_SetOptionalParameter, METH_VARARGS,
   "SetOptionalParameter(self, key:str, value:str) -> None\nC++: void SetOptionalParameter(const char *key, const char *value)\n\nAdd an optional parameter to the projection that will be computed\nor replace it if already present.\n"},
  {"RemoveOptionalParameter", PyvtkGeoProjection_RemoveOptionalParameter, METH_VARARGS,
   "RemoveOptionalParameter(self, __a:str) -> None\nC++: void RemoveOptionalParameter(const char *)\n\nRemove an optional parameter to the projection that will be\ncomputed\n"},
  {"GetNumberOfOptionalParameters", PyvtkGeoProjection_GetNumberOfOptionalParameters, METH_VARARGS,
   "GetNumberOfOptionalParameters(self) -> int\nC++: int GetNumberOfOptionalParameters()\n\nReturn the number of optional parameters\n"},
  {"GetOptionalParameterKey", PyvtkGeoProjection_GetOptionalParameterKey, METH_VARARGS,
   "GetOptionalParameterKey(self, index:int) -> str\nC++: const char *GetOptionalParameterKey(int index)\n\nReturn the number of optional parameters\n"},
  {"GetOptionalParameterValue", PyvtkGeoProjection_GetOptionalParameterValue, METH_VARARGS,
   "GetOptionalParameterValue(self, index:int) -> str\nC++: const char *GetOptionalParameterValue(int index)\n\nReturn the number of optional parameters\n"},
  {"ClearOptionalParameters", PyvtkGeoProjection_ClearOptionalParameters, METH_VARARGS,
   "ClearOptionalParameters(self) -> None\nC++: void ClearOptionalParameters()\n\nClear all optional parameters\n"},
  {"SetPROJ4String", PyvtkGeoProjection_SetPROJ4String, METH_VARARGS,
   "SetPROJ4String(self, _arg:str) -> None\nC++: virtual void SetPROJ4String(const char *_arg)\n\nSet/Get/Clear projection string in PROJ.4 format. This is a\nspecial case alternative to setting the projection name and\nspecifying parameters.\n\note If the PROJ4String is not empty, it supercedes the other\nparameters and is used explicitly to instantiate the `projPJ`\nprojection object.\n"},
  {"GetPROJ4String", PyvtkGeoProjection_GetPROJ4String, METH_VARARGS,
   "GetPROJ4String(self) -> str\nC++: virtual char *GetPROJ4String()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGeoProjection_Doc =
  "vtkGeoProjection - Represent a projection from a sphere to a plane\n\n"
  "Superclass: vtkObject\n\n"
  "This class uses the PROJ.4 library to represent geographic coordinate\n"
  "projections.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGeoProjection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkGeovisCore.vtkGeoProjection", // tp_name
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
  PyvtkGeoProjection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeoProjection_StaticNew()
{
  return vtkGeoProjection::New();
}

PyObject *PyvtkGeoProjection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGeoProjection_Type, PyvtkGeoProjection_Methods,
    "vtkGeoProjection",
 &PyvtkGeoProjection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGeoProjection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeoProjection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeoProjection", o) != 0)
  {
    Py_DECREF(o);
  }

}


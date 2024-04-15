// python wrapper for vtkAbstractMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractMapper_ClassNew(); }


static PyObject *
PyvtkAbstractMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractMapper *tempr = vtkAbstractMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractMapper::NewInstance());

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
PyvtkAbstractMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAbstractMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkAbstractMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeToDraw() :
      op->vtkAbstractMapper::GetTimeToDraw());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_AddClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->AddClippingPlane(temp0);
    }
    else
    {
      op->vtkAbstractMapper::AddClippingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_RemoveClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->RemoveClippingPlane(temp0);
    }
    else
    {
      op->vtkAbstractMapper::RemoveClippingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_RemoveAllClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllClippingPlanes();
    }
    else
    {
      op->vtkAbstractMapper::RemoveAllClippingPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_SetClippingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->SetClippingPlanes(temp0);
    }
    else
    {
      op->vtkAbstractMapper::SetClippingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractMapper_SetClippingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetClippingPlanes(temp0);
    }
    else
    {
      op->vtkAbstractMapper::SetClippingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractMapper_SetClippingPlanes_Methods[] = {
  {"SetClippingPlanes", PyvtkAbstractMapper_SetClippingPlanes_s1, METH_VARARGS,
   "@V *vtkPlaneCollection"},
  {"SetClippingPlanes", PyvtkAbstractMapper_SetClippingPlanes_s2, METH_VARARGS,
   "@V *vtkPlanes"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAbstractMapper_SetClippingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractMapper_SetClippingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClippingPlanes");
  return nullptr;
}


static PyObject *
PyvtkAbstractMapper_GetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetClippingPlanes() :
      op->vtkAbstractMapper::GetClippingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAbstractMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetScalars(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalars");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkDataArray *tempr = vtkAbstractMapper::GetScalars(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetAbstractScalars(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAbstractScalars");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkAbstractArray *tempr = vtkAbstractMapper::GetAbstractScalars(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetGhostArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGhostArray");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkUnsignedCharArray *tempr = vtkAbstractMapper::GetGhostArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetNumberOfClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfClippingPlanes() :
      op->vtkAbstractMapper::GetNumberOfClippingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractMapper_Methods[] = {
  {"IsTypeOf", PyvtkAbstractMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractMapper\nC++: static vtkAbstractMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractMapper\nC++: vtkAbstractMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkAbstractMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride Modifiedtime as we have added Clipping planes\n"},
  {"ReleaseGraphicsResources", PyvtkAbstractMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetTimeToDraw", PyvtkAbstractMapper_GetTimeToDraw, METH_VARARGS,
   "GetTimeToDraw(self) -> float\nC++: virtual double GetTimeToDraw()\n\nGet the time required to draw the geometry last time it was\nrendered\n"},
  {"AddClippingPlane", PyvtkAbstractMapper_AddClippingPlane, METH_VARARGS,
   "AddClippingPlane(self, plane:vtkPlane) -> None\nC++: void AddClippingPlane(vtkPlane *plane)\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {"RemoveClippingPlane", PyvtkAbstractMapper_RemoveClippingPlane, METH_VARARGS,
   "RemoveClippingPlane(self, plane:vtkPlane) -> None\nC++: void RemoveClippingPlane(vtkPlane *plane)\n\n"},
  {"RemoveAllClippingPlanes", PyvtkAbstractMapper_RemoveAllClippingPlanes, METH_VARARGS,
   "RemoveAllClippingPlanes(self) -> None\nC++: void RemoveAllClippingPlanes()\n\n"},
  {"SetClippingPlanes", PyvtkAbstractMapper_SetClippingPlanes, METH_VARARGS,
   "SetClippingPlanes(self, __a:vtkPlaneCollection) -> None\nC++: virtual void SetClippingPlanes(vtkPlaneCollection *)\nSetClippingPlanes(self, planes:vtkPlanes) -> None\nC++: void SetClippingPlanes(vtkPlanes *planes)\n\nGet/Set the vtkPlaneCollection which specifies the clipping\nplanes.\n"},
  {"GetClippingPlanes", PyvtkAbstractMapper_GetClippingPlanes, METH_VARARGS,
   "GetClippingPlanes(self) -> vtkPlaneCollection\nC++: virtual vtkPlaneCollection *GetClippingPlanes()\n\n"},
  {"ShallowCopy", PyvtkAbstractMapper_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, m:vtkAbstractMapper) -> None\nC++: virtual void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {"GetScalars", PyvtkAbstractMapper_GetScalars, METH_VARARGS,
   "GetScalars(input:vtkDataSet, scalarMode:int, arrayAccessMode:int,\n    arrayId:int, arrayName:str, cellFlag:int) -> vtkDataArray\nC++: static vtkDataArray *GetScalars(vtkDataSet *input,\n    int scalarMode, int arrayAccessMode, int arrayId,\n    const char *arrayName, int &cellFlag)\n\nInternal helper function for getting the active scalars. The\nscalar mode indicates where the scalars come from.  The cellFlag\nis a return value that is set when the scalars actually are cell\nscalars. (0 for point scalars, 1 for cell scalars, 2 for field\nscalars) The arrayAccessMode is used to indicate how to retrieve\nthe scalars from field data, per id or per name (if the\nscalarMode indicates that).\n"},
  {"GetAbstractScalars", PyvtkAbstractMapper_GetAbstractScalars, METH_VARARGS,
   "GetAbstractScalars(input:vtkDataSet, scalarMode:int,\n    arrayAccessMode:int, arrayId:int, arrayName:str, cellFlag:int)\n     -> vtkAbstractArray\nC++: static vtkAbstractArray *GetAbstractScalars(\n    vtkDataSet *input, int scalarMode, int arrayAccessMode,\n    int arrayId, const char *arrayName, int &cellFlag)\n\nInternal helper function for getting the active scalars as an\nabstract array. The scalar mode indicates where the scalars come\nfrom.  The cellFlag is a return value that is set when the\nscalars actually are cell scalars.  (0 for point scalars, 1 for\ncell scalars, 2 for field scalars) The arrayAccessMode is used to\nindicate how to retrieve the scalars from field data, per id or\nper name (if the scalarMode indicates that).\n"},
  {"GetGhostArray", PyvtkAbstractMapper_GetGhostArray, METH_VARARGS,
   "GetGhostArray(input:vtkDataSet, scalarMode:int, ghostsToSkip:int)\n    -> vtkUnsignedCharArray\nC++: static vtkUnsignedCharArray *GetGhostArray(vtkDataSet *input,\n     int scalarMode, unsigned char &ghostsToSkip)\n\nReturns the ghost array associated with the corresponding scalar\nmode, if present. If no ghost array is available, this method\nreturns `nullptr`. `ghostsToSkip` is an output, and is set to the\nbit mask associated with the ghost array in the `vtkFieldData` in\nwhich the ghost array lives. This bit mask can be ignored if\n`nullptr` is returned.\n\n@sa\nvtkFieldData vtkDataSetAttributes vtkCellData vtkPointData\n"},
  {"GetNumberOfClippingPlanes", PyvtkAbstractMapper_GetNumberOfClippingPlanes, METH_VARARGS,
   "GetNumberOfClippingPlanes(self) -> int\nC++: int GetNumberOfClippingPlanes()\n\nGet the number of clipping planes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractMapper_Doc =
  "vtkAbstractMapper - abstract class specifies interface to map data\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkAbstractMapper is an abstract class to specify interface between\n"
  "data and graphics primitives or software rendering techniques.\n"
  "Subclasses of vtkAbstractMapper can be used for rendering 2D data,\n"
  "geometry, or volumetric data.\n\n"
  "@sa\n"
  "vtkAbstractMapper3D vtkMapper vtkPolyDataMapper vtkVolumeMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkAbstractMapper", // tp_name
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
  PyvtkAbstractMapper_Doc, // tp_doc
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

PyObject *PyvtkAbstractMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractMapper_Type, PyvtkAbstractMapper_Methods,
    "vtkAbstractMapper",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractMapper", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_SCALAR_MODE_DEFAULT", 0 },
        { "VTK_SCALAR_MODE_USE_POINT_DATA", 1 },
        { "VTK_SCALAR_MODE_USE_CELL_DATA", 2 },
        { "VTK_SCALAR_MODE_USE_POINT_FIELD_DATA", 3 },
        { "VTK_SCALAR_MODE_USE_CELL_FIELD_DATA", 4 },
        { "VTK_SCALAR_MODE_USE_FIELD_DATA", 5 },
        { "VTK_GET_ARRAY_BY_ID", 0 },
        { "VTK_GET_ARRAY_BY_NAME", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}


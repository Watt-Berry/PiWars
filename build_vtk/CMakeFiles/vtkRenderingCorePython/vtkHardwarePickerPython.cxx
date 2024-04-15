// python wrapper for vtkHardwarePicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHardwarePicker.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHardwarePicker(PyObject *dict); }
extern "C" { PyObject *PyvtkHardwarePicker_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPropPicker_ClassNew
extern "C" { PyObject *PyvtkAbstractPropPicker_ClassNew(); }
#define DECLARED_PyvtkAbstractPropPicker_ClassNew
#endif

static PyObject *
PyvtkHardwarePicker_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHardwarePicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHardwarePicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHardwarePicker *tempr = vtkHardwarePicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHardwarePicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHardwarePicker::NewInstance());

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
PyvtkHardwarePicker_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHardwarePicker::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHardwarePicker::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_SetSnapToMeshPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToMeshPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToMeshPoint(temp0);
    }
    else
    {
      op->vtkHardwarePicker::SetSnapToMeshPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetSnapToMeshPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToMeshPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSnapToMeshPoint() :
      op->vtkHardwarePicker::GetSnapToMeshPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_SnapToMeshPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToMeshPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToMeshPointOn();
    }
    else
    {
      op->vtkHardwarePicker::SnapToMeshPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_SnapToMeshPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToMeshPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToMeshPointOff();
    }
    else
    {
      op->vtkHardwarePicker::SnapToMeshPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPixelTolerance(temp0);
    }
    else
    {
      op->vtkHardwarePicker::SetPixelTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelTolerance() :
      op->vtkHardwarePicker::GetPixelTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractMapper3D *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkHardwarePicker::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkHardwarePicker::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetCompositeDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetCompositeDataSet() :
      op->vtkHardwarePicker::GetCompositeDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetFlatBlockIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlatBlockIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetFlatBlockIndex() :
      op->vtkHardwarePicker::GetFlatBlockIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkHardwarePicker::GetPointId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellId() :
      op->vtkHardwarePicker::GetCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetSubId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubId() :
      op->vtkHardwarePicker::GetSubId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetPCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPCoords() :
      op->vtkHardwarePicker::GetPCoords());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetPickNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPickNormal() :
      op->vtkHardwarePicker::GetPickNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_GetNormalFlipped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalFlipped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNormalFlipped() :
      op->vtkHardwarePicker::GetNormalFlipped());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwarePicker_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwarePicker *op = static_cast<vtkHardwarePicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1, temp2, temp3) :
      op->vtkHardwarePicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHardwarePicker_Methods[] = {
  {"IsTypeOf", PyvtkHardwarePicker_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHardwarePicker_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHardwarePicker_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHardwarePicker\nC++: static vtkHardwarePicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHardwarePicker_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHardwarePicker\nC++: vtkHardwarePicker *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHardwarePicker_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHardwarePicker_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSnapToMeshPoint", PyvtkHardwarePicker_SetSnapToMeshPoint, METH_VARARGS,
   "SetSnapToMeshPoint(self, _arg:bool) -> None\nC++: virtual void SetSnapToMeshPoint(bool _arg)\n\nSet/Get if the picker will snap to the closest mesh point or get\nthe actual intersected point. Default is off.\n"},
  {"GetSnapToMeshPoint", PyvtkHardwarePicker_GetSnapToMeshPoint, METH_VARARGS,
   "GetSnapToMeshPoint(self) -> bool\nC++: virtual bool GetSnapToMeshPoint()\n\n"},
  {"SnapToMeshPointOn", PyvtkHardwarePicker_SnapToMeshPointOn, METH_VARARGS,
   "SnapToMeshPointOn(self) -> None\nC++: virtual void SnapToMeshPointOn()\n\n"},
  {"SnapToMeshPointOff", PyvtkHardwarePicker_SnapToMeshPointOff, METH_VARARGS,
   "SnapToMeshPointOff(self) -> None\nC++: virtual void SnapToMeshPointOff()\n\n"},
  {"SetPixelTolerance", PyvtkHardwarePicker_SetPixelTolerance, METH_VARARGS,
   "SetPixelTolerance(self, _arg:int) -> None\nC++: virtual void SetPixelTolerance(int _arg)\n\nWhen SnapToMeshPoint is on, this is the pixel tolerance to use\nwhen snapping. Default is 5.\n"},
  {"GetPixelTolerance", PyvtkHardwarePicker_GetPixelTolerance, METH_VARARGS,
   "GetPixelTolerance(self) -> int\nC++: virtual int GetPixelTolerance()\n\n"},
  {"GetMapper", PyvtkHardwarePicker_GetMapper, METH_VARARGS,
   "GetMapper(self) -> vtkAbstractMapper3D\nC++: virtual vtkAbstractMapper3D *GetMapper()\n\nReturn mapper that was picked (if any).\n\nNote: Use vtkWeakPointer. This is because the Mapper may be\ndeleted.\n"},
  {"GetDataSet", PyvtkHardwarePicker_GetDataSet, METH_VARARGS,
   "GetDataSet(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSet()\n\nGet a pointer to the dataset that was picked (if any). If nothing\nwas picked then nullptr is returned.\n\nNote: Use vtkWeakPointer. This is because the DataSet may be\ndeleted.\n"},
  {"GetCompositeDataSet", PyvtkHardwarePicker_GetCompositeDataSet, METH_VARARGS,
   "GetCompositeDataSet(self) -> vtkCompositeDataSet\nC++: virtual vtkCompositeDataSet *GetCompositeDataSet()\n\nGet a pointer to the composite dataset that was picked (if any).\nIf nothing was picked or a non-composite data object was picked\nthen nullptr is returned.\n\nNote: Use vtkWeakPointer. This is because the CompositeDataSet\nmay be deleted.\n"},
  {"GetFlatBlockIndex", PyvtkHardwarePicker_GetFlatBlockIndex, METH_VARARGS,
   "GetFlatBlockIndex(self) -> int\nC++: virtual vtkIdType GetFlatBlockIndex()\n\nGet the flat block index of the vtkDataSet in the composite\ndataset that was picked (if any). If nothing was picked or a\nnon-composite data object was picked then -1 is returned.\n"},
  {"GetPointId", PyvtkHardwarePicker_GetPointId, METH_VARARGS,
   "GetPointId(self) -> int\nC++: virtual vtkIdType GetPointId()\n\nGet the id of the picked point.\n\nIf a prop is picked:\n\n1) if SnapOnMeshPoint is on, the pointId of the prop's dataset\n   will be returned\n2) If SnapOnMeshPoint is off, PointId = -1;\n\nIf a prop is not picked, PointId = -1;\n"},
  {"GetCellId", PyvtkHardwarePicker_GetCellId, METH_VARARGS,
   "GetCellId(self) -> int\nC++: virtual vtkIdType GetCellId()\n\nGet the id of the picked cell.\n\nIf a prop is picked:\n\n1) If SnapOnMeshPoint is on, CellId = -1.\n2) If SnapOnMeshPoint is off, the cellId of the prop's dataset\n   will be returned\n\nif a prop is not picked, CellId = -1.\n"},
  {"GetSubId", PyvtkHardwarePicker_GetSubId, METH_VARARGS,
   "GetSubId(self) -> int\nC++: virtual int GetSubId()\n\nGet the subId of the picked cell. This is useful, for example, if\nthe data is made of triangle strips.\n\nIf a prop is picked:\n\n1) If SnapOnMeshPoint is on, SubId = -1.\n2) If SnapOnMeshPoint is off and the picked cell is a triangle\n   strip, the subId of the intersected triangle will be returned,\notherwise SubId = -1.\n\nIf a prop is not picked, SubId = -1.\n"},
  {"GetPCoords", PyvtkHardwarePicker_GetPCoords, METH_VARARGS,
   "GetPCoords(self) -> (float, float, float)\nC++: virtual double *GetPCoords()\n\nGet the parametric coordinates of the picked cell. PCoords can be\nused to compute the weights that are needed to interpolate data\nvalues within the cell.\n\nIf a prop is picked:\n\n1) If SnapOnMeshPoint is on, PCoords will be a vector of\n   std::numeric_limits::quiet_NaN().\n2) If SnapOnMeshPoint is off, PCoords will be extracted and the\n   intersection point of the cell.\n\nif a prop is not picked, PCoords will be a vector of\nstd::numeric_limits::quiet_NaN().\n"},
  {"GetPickNormal", PyvtkHardwarePicker_GetPickNormal, METH_VARARGS,
   "GetPickNormal(self) -> (float, float, float)\nC++: virtual double *GetPickNormal()\n\nGet the normal of the point at the PickPosition.\n\nIf a prop is picked:\n\n1) If SnapOnMeshPoint is on, the picked normal will be extracted\n   from the PointData normals, if they exist, otherwise a vector\n   of std::numeric_limits::quiet_NaN() will be returned.\n2) If SnapOnMeshPoint is off, the picked normal on the\n   intersected cell will be extracted using ray intersection, if\n   the ray intersections was successful, otherwise a vector of\n   std::numeric_limits::quiet_NaN() will be returned.\n\nif a prop is not picked, the camera plane normal will be returned\nwill be returned.\n"},
  {"GetNormalFlipped", PyvtkHardwarePicker_GetNormalFlipped, METH_VARARGS,
   "GetNormalFlipped(self) -> bool\nC++: virtual bool GetNormalFlipped()\n\nGet if normal is flipped.\n\nThe normal will be flipped if point normals don't exist and the\nangle between the PickedNormal and the camera plane normal is\nmore than pi / 2.\n"},
  {"Pick", PyvtkHardwarePicker_Pick, METH_VARARGS,
   "Pick(self, selectionX:float, selectionY:float, selectionZ:float,\n    renderer:vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer) override;\n\nPerform the pick operation set the PickedProp.\n\nIf something is picked, 1 is returned, and PickPosition,\nPickNormal, and the rest of the results variables) are extracted\nfrom intersection with the PickedProp.\n\nIf something is not picked, 0 is returned, and PickPosition and\nPickNormal are extracted from the camera's focal plane.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHardwarePicker_Doc =
  "vtkHardwarePicker - pick a point or snap to point of an actor/prop\nusing graphics hardware\n\n"
  "Superclass: vtkAbstractPropPicker\n\n"
  "vtkHardwarePicker is used to pick point or snap to point of an\n"
  "actor/prop given a selection point (in display coordinates) and a\n"
  "renderer. This class uses graphics hardware/rendering system to pick\n"
  "rapidly (as compared to using ray casting as does vtkCellPicker and\n"
  "vtkPointPicker). This class determines the actor/prop pick position,\n"
  "and pick normal in world coordinates; pointId is determined if\n"
  "snapping is enabled, otherwise the cellId is determined. if no\n"
  "actor/prop is picked, pick position = camera focal point, and pick\n"
  "normal = camera plane normal.\n\n"
  "@warning This class supports only picking in a screen, and not in VR.\n\n"
  "@sa\n"
  "vtkPropPicker vtkPicker vtkWorldPointPicker vtkCellPicker\n"
  "vtkPointPicker\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHardwarePicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkHardwarePicker", // tp_name
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
  PyvtkHardwarePicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHardwarePicker_StaticNew()
{
  return vtkHardwarePicker::New();
}

PyObject *PyvtkHardwarePicker_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHardwarePicker_Type, PyvtkHardwarePicker_Methods,
    "vtkHardwarePicker",
 &PyvtkHardwarePicker_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPropPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHardwarePicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHardwarePicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHardwarePicker", o) != 0)
  {
    Py_DECREF(o);
  }

}


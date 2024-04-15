// python wrapper for vtkExtractSelectedFrustum
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractSelectedFrustum.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelectedFrustum(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractSelectedFrustum_ClassNew(); }

#ifndef DECLARED_PyvtkExtractSelectionBase_ClassNew
extern "C" { PyObject *PyvtkExtractSelectionBase_ClassNew(); }
#define DECLARED_PyvtkExtractSelectionBase_ClassNew
#endif

static PyObject *
PyvtkExtractSelectedFrustum_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectedFrustum::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedFrustum::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectedFrustum *tempr = vtkExtractSelectedFrustum::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectedFrustum *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedFrustum::NewInstance());

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
PyvtkExtractSelectedFrustum_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractSelectedFrustum::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractSelectedFrustum::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractSelectedFrustum::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetFrustum(temp0);
    }
    else
    {
      op->vtkExtractSelectedFrustum::SetFrustum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlanes *tempr = (ap.IsBound() ?
      op->GetFrustum() :
      op->vtkExtractSelectedFrustum::GetFrustum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_CreateFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  const size_t size0 = 32;
  double temp0[32];
  double save0[32];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->CreateFrustum(temp0);
    }
    else
    {
      op->vtkExtractSelectedFrustum::CreateFrustum(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetClipPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetClipPoints() :
      op->vtkExtractSelectedFrustum::GetClipPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkExtractSelectedFrustum::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkExtractSelectedFrustum::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContainingCells(temp0);
    }
    else
    {
      op->vtkExtractSelectedFrustum::SetContainingCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainingCells() :
      op->vtkExtractSelectedFrustum::GetContainingCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_OverallBoundsTest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OverallBoundsTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->OverallBoundsTest(temp0) :
      op->vtkExtractSelectedFrustum::OverallBoundsTest(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowBounds(temp0);
    }
    else
    {
      op->vtkExtractSelectedFrustum::SetShowBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBounds() :
      op->vtkExtractSelectedFrustum::GetShowBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_ShowBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowBoundsOn();
    }
    else
    {
      op->vtkExtractSelectedFrustum::ShowBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_ShowBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowBoundsOff();
    }
    else
    {
      op->vtkExtractSelectedFrustum::ShowBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkExtractSelectedFrustum::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkExtractSelectedFrustum::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkExtractSelectedFrustum::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkExtractSelectedFrustum::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSelectedFrustum_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectedFrustum_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectedFrustum_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectedFrustum_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractSelectedFrustum\nC++: static vtkExtractSelectedFrustum *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectedFrustum_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractSelectedFrustum\nC++: vtkExtractSelectedFrustum *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractSelectedFrustum_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractSelectedFrustum_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkExtractSelectedFrustum_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the Frustum\n"},
  {"SetFrustum", PyvtkExtractSelectedFrustum_SetFrustum, METH_VARARGS,
   "SetFrustum(self, __a:vtkPlanes) -> None\nC++: virtual void SetFrustum(vtkPlanes *)\n\nSet the selection frustum. The planes object must contain six\nplanes.\n"},
  {"GetFrustum", PyvtkExtractSelectedFrustum_GetFrustum, METH_VARARGS,
   "GetFrustum(self) -> vtkPlanes\nC++: virtual vtkPlanes *GetFrustum()\n\n"},
  {"CreateFrustum", PyvtkExtractSelectedFrustum_CreateFrustum, METH_VARARGS,
   "CreateFrustum(self, vertices:[float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float]) -> None\nC++: void CreateFrustum(double vertices[32])\n\nGiven eight vertices, creates a frustum. each pt is x,y,z,1 in\nthe following order near lower left, far lower left near upper\nleft, far upper left near lower right, far lower right near upper\nright, far upper right\n"},
  {"GetClipPoints", PyvtkExtractSelectedFrustum_GetClipPoints, METH_VARARGS,
   "GetClipPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetClipPoints()\n\nReturn eight points that define the selection frustum. Valid if\ncreate Frustum was used, invalid if SetFrustum was.\n"},
  {"SetFieldType", PyvtkExtractSelectedFrustum_SetFieldType, METH_VARARGS,
   "SetFieldType(self, _arg:int) -> None\nC++: virtual void SetFieldType(int _arg)\n\nSets/gets the intersection test type.\n"},
  {"GetFieldType", PyvtkExtractSelectedFrustum_GetFieldType, METH_VARARGS,
   "GetFieldType(self) -> int\nC++: virtual int GetFieldType()\n\n"},
  {"SetContainingCells", PyvtkExtractSelectedFrustum_SetContainingCells, METH_VARARGS,
   "SetContainingCells(self, _arg:int) -> None\nC++: virtual void SetContainingCells(int _arg)\n\nSets/gets the intersection test type. Only meaningful when\nfieldType is vtkSelection::POINT\n"},
  {"GetContainingCells", PyvtkExtractSelectedFrustum_GetContainingCells, METH_VARARGS,
   "GetContainingCells(self) -> int\nC++: virtual int GetContainingCells()\n\n"},
  {"OverallBoundsTest", PyvtkExtractSelectedFrustum_OverallBoundsTest, METH_VARARGS,
   "OverallBoundsTest(self, bounds:[float, ...]) -> int\nC++: int OverallBoundsTest(double *bounds)\n\nDoes a quick test on the AABBox defined by the bounds.\n"},
  {"SetShowBounds", PyvtkExtractSelectedFrustum_SetShowBounds, METH_VARARGS,
   "SetShowBounds(self, _arg:int) -> None\nC++: virtual void SetShowBounds(vtkTypeBool _arg)\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default.\n"},
  {"GetShowBounds", PyvtkExtractSelectedFrustum_GetShowBounds, METH_VARARGS,
   "GetShowBounds(self) -> int\nC++: virtual vtkTypeBool GetShowBounds()\n\n"},
  {"ShowBoundsOn", PyvtkExtractSelectedFrustum_ShowBoundsOn, METH_VARARGS,
   "ShowBoundsOn(self) -> None\nC++: virtual void ShowBoundsOn()\n\n"},
  {"ShowBoundsOff", PyvtkExtractSelectedFrustum_ShowBoundsOff, METH_VARARGS,
   "ShowBoundsOff(self) -> None\nC++: virtual void ShowBoundsOff()\n\n"},
  {"SetInsideOut", PyvtkExtractSelectedFrustum_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nWhen on, extracts cells outside the frustum instead of inside.\n"},
  {"GetInsideOut", PyvtkExtractSelectedFrustum_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkExtractSelectedFrustum_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkExtractSelectedFrustum_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractSelectedFrustum_Doc =
  "vtkExtractSelectedFrustum - Returns the portion of the input dataset\nthat lies within a selection frustum.\n\n"
  "Superclass: vtkExtractSelectionBase\n\n"
  "This class intersects the input DataSet with a frustum and determines\n"
  "which cells and points lie within the frustum. The frustum is defined\n"
  "with a vtkPlanes containing six cutting planes. The output is a\n"
  "DataSet that is either a shallow copy of the input dataset with two\n"
  "new \"vtkInsidedness\" attribute arrays, or a completely new\n"
  "UnstructuredGrid that contains only the cells and points of the input\n"
  "that are inside the frustum. The PreserveTopology flag controls which\n"
  "occurs. When PreserveTopology is off this filter adds a scalar array\n"
  "called vtkOriginalCellIds that says what input cell produced each\n"
  "output cell. This is an example of a Pedigree ID which helps to trace\n"
  "back results.\n\n"
  "@sa\n"
  "vtkExtractGeometry, vtkAreaPicker, vtkExtractSelection, vtkSelection\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractSelectedFrustum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkExtractSelectedFrustum", // tp_name
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
  PyvtkExtractSelectedFrustum_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelectedFrustum_StaticNew()
{
  return vtkExtractSelectedFrustum::New();
}

PyObject *PyvtkExtractSelectedFrustum_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractSelectedFrustum_Type, PyvtkExtractSelectedFrustum_Methods,
    "vtkExtractSelectedFrustum",
 &PyvtkExtractSelectedFrustum_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkExtractSelectionBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectedFrustum(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectedFrustum_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectedFrustum", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkLabeledContourMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLabeledContourMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabeledContourMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkLabeledContourMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static PyObject *
PyvtkLabeledContourMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabeledContourMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabeledContourMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabeledContourMapper *tempr = vtkLabeledContourMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabeledContourMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabeledContourMapper::NewInstance());

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
PyvtkLabeledContourMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabeledContourMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabeledContourMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkLabeledContourMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkLabeledContourMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkLabeledContourMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkLabeledContourMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLabeledContourMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkLabeledContourMapper::GetBounds(temp0);
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
PyvtkLabeledContourMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLabeledContourMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkLabeledContourMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkLabeledContourMapper_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkLabeledContourMapper::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkTextPropertyCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextPropertyCollection"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperties(temp0);
    }
    else
    {
      op->vtkLabeledContourMapper::SetTextProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextPropertyCollection *tempr = (ap.IsBound() ?
      op->GetTextProperties() :
      op->vtkLabeledContourMapper::GetTextProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetTextPropertyMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPropertyMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetTextPropertyMapping() :
      op->vtkLabeledContourMapper::GetTextPropertyMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SetTextPropertyMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPropertyMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetTextPropertyMapping(temp0);
    }
    else
    {
      op->vtkLabeledContourMapper::SetTextPropertyMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkLabeledContourMapper::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkLabeledContourMapper::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkLabeledContourMapper::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkLabeledContourMapper::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SetSkipDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipDistance(temp0);
    }
    else
    {
      op->vtkLabeledContourMapper::SetSkipDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetSkipDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSkipDistance() :
      op->vtkLabeledContourMapper::GetSkipDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetPolyDataMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataMapper *tempr = (ap.IsBound() ?
      op->GetPolyDataMapper() :
      op->vtkLabeledContourMapper::GetPolyDataMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

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
      op->vtkLabeledContourMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLabeledContourMapper_Methods[] = {
  {"IsTypeOf", PyvtkLabeledContourMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabeledContourMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabeledContourMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabeledContourMapper\nC++: static vtkLabeledContourMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabeledContourMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabeledContourMapper\nC++: vtkLabeledContourMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabeledContourMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabeledContourMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkLabeledContourMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nMethod initiates the mapping process. Generally sent by the actor\nas each frame is rendered.\n"},
  {"SetInputData", PyvtkLabeledContourMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, in_:vtkPolyData) -> None\nC++: void SetInputData(vtkPolyData *in)\n\nSpecify the input data to map.\n"},
  {"GetInput", PyvtkLabeledContourMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nGet the input as a vtkDataSet.  This method is overridden in the\nspecialized mapper classes to return more specific data types.\n"},
  {"GetBounds", PyvtkLabeledContourMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"SetTextProperty", PyvtkLabeledContourMapper_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, tprop:vtkTextProperty) -> None\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nThe text property used to label the lines. Note that both\nvertical and horizontal justifications will be reset to\n\"Centered\" prior to rendering.\n\note This is a convenience method that clears TextProperties and\ninserts the argument as the only property in the collection.\n@sa SetTextProperties\n"},
  {"SetTextProperties", PyvtkLabeledContourMapper_SetTextProperties, METH_VARARGS,
   "SetTextProperties(self, coll:vtkTextPropertyCollection) -> None\nC++: virtual void SetTextProperties(\n    vtkTextPropertyCollection *coll)\n\nThe text properties used to label the lines. Note that both\nvertical and horizontal justifications will be reset to\n\"Centered\" prior to rendering.\n\n* If the TextPropertyMapping array exists, then it is used to\n  identify which\n* text property to use for each label as follows: If the scalar\n  value of a\n* line is found in the mapping, the index of the value in mapping\nis used to\n* lookup the text property in the collection. If there are more\n  mapping\n* values than properties, the properties are looped through until\nthe\n* mapping is exhausted.\n\n* Lines with scalar values missing from the mapping are assigned\n  text\n* properties in a round-robin fashion starting from the beginning\nof the\n* collection, repeating from the start of the collection as\n  necessary.\n* @sa SetTextProperty\n* @sa SetTextPropertyMapping\n"},
  {"GetTextProperties", PyvtkLabeledContourMapper_GetTextProperties, METH_VARARGS,
   "GetTextProperties(self) -> vtkTextPropertyCollection\nC++: virtual vtkTextPropertyCollection *GetTextProperties()\n\n"},
  {"GetTextPropertyMapping", PyvtkLabeledContourMapper_GetTextPropertyMapping, METH_VARARGS,
   "GetTextPropertyMapping(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetTextPropertyMapping()\n\nValues in this array correspond to vtkTextProperty objects in the\nTextProperties collection. If a contour line's scalar value\nexists in this array, the corresponding text property is used for\nthe label. See SetTextProperties for more information.\n"},
  {"SetTextPropertyMapping", PyvtkLabeledContourMapper_SetTextPropertyMapping, METH_VARARGS,
   "SetTextPropertyMapping(self, mapping:vtkDoubleArray) -> None\nC++: virtual void SetTextPropertyMapping(vtkDoubleArray *mapping)\n\n"},
  {"SetLabelVisibility", PyvtkLabeledContourMapper_SetLabelVisibility, METH_VARARGS,
   "SetLabelVisibility(self, _arg:bool) -> None\nC++: virtual void SetLabelVisibility(bool _arg)\n\nIf true, labels will be placed and drawn during rendering.\nOtherwise, only the mapper returned by GetPolyDataMapper() will\nbe rendered. The default is to draw labels.\n"},
  {"GetLabelVisibility", PyvtkLabeledContourMapper_GetLabelVisibility, METH_VARARGS,
   "GetLabelVisibility(self) -> bool\nC++: virtual bool GetLabelVisibility()\n\n"},
  {"LabelVisibilityOn", PyvtkLabeledContourMapper_LabelVisibilityOn, METH_VARARGS,
   "LabelVisibilityOn(self) -> None\nC++: virtual void LabelVisibilityOn()\n\n"},
  {"LabelVisibilityOff", PyvtkLabeledContourMapper_LabelVisibilityOff, METH_VARARGS,
   "LabelVisibilityOff(self) -> None\nC++: virtual void LabelVisibilityOff()\n\n"},
  {"SetSkipDistance", PyvtkLabeledContourMapper_SetSkipDistance, METH_VARARGS,
   "SetSkipDistance(self, _arg:float) -> None\nC++: virtual void SetSkipDistance(double _arg)\n\nEnsure that there are at least SkipDistance pixels between\nlabels. This is only enforced on labels along the same line. The\ndefault is 0.\n"},
  {"GetSkipDistance", PyvtkLabeledContourMapper_GetSkipDistance, METH_VARARGS,
   "GetSkipDistance(self) -> float\nC++: virtual double GetSkipDistance()\n\n"},
  {"GetPolyDataMapper", PyvtkLabeledContourMapper_GetPolyDataMapper, METH_VARARGS,
   "GetPolyDataMapper(self) -> vtkPolyDataMapper\nC++: virtual vtkPolyDataMapper *GetPolyDataMapper()\n\nThe polydata mapper used to render the contours.\n"},
  {"ReleaseGraphicsResources", PyvtkLabeledContourMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLabeledContourMapper_Doc =
  "vtkLabeledContourMapper - Draw labeled isolines.\n\n"
  "Superclass: vtkMapper\n\n"
  "Draw isolines with 3D inline labels.\n\n"
  "The lines in the input polydata will be drawn with labels displaying\n"
  "the scalar value.\n\n"
  "For this mapper to function properly, stenciling must be enabled in\n"
  "the render window (it is disabled by default). Otherwise the lines\n"
  "will be drawn through the labels.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabeledContourMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkLabeledContourMapper", // tp_name
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
  PyvtkLabeledContourMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabeledContourMapper_StaticNew()
{
  return vtkLabeledContourMapper::New();
}

PyObject *PyvtkLabeledContourMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabeledContourMapper_Type, PyvtkLabeledContourMapper_Methods,
    "vtkLabeledContourMapper",
 &PyvtkLabeledContourMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabeledContourMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabeledContourMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabeledContourMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}


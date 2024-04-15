// python wrapper for vtkPlotStacked
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPlotStacked.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotStacked(PyObject *dict); }
extern "C" { PyObject *PyvtkPlotStacked_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static PyObject *
PyvtkPlotStacked_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotStacked::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotStacked::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotStacked *tempr = vtkPlotStacked::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotStacked *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotStacked::NewInstance());

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
PyvtkPlotStacked_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlotStacked::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlotStacked::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotStacked::SetColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotStacked_SetColor_s2(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetColor."
    " (" "Please use unambiguous SetColorF method instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlotStacked::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotStacked_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPlotStacked_SetColor_s1(self, args);
    case 3:
      return PyvtkPlotStacked_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkPlotStacked_SetColorF_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetColorF(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotStacked::SetColorF(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotStacked_SetColorF_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColorF(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlotStacked::SetColorF(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotStacked_SetColorF(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPlotStacked_SetColorF_s1(self, args);
    case 3:
      return PyvtkPlotStacked_SetColorF_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColorF");
  return nullptr;
}


static PyObject *
PyvtkPlotStacked_GetColorF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColorF(temp0);
    }
    else
    {
      op->vtkPlotStacked::GetColorF(temp0);
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
PyvtkPlotStacked_GetColor(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetColor."
    " (" "Please use unambiguous GetColorF method instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColor(temp0);
    }
    else
    {
      op->vtkPlotStacked::GetColor(temp0);
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
PyvtkPlotStacked_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotStacked::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  vtkContext2D *temp0 = nullptr;
  vtkRectf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintLegend(temp0, *temp1, temp2) :
      op->vtkPlotStacked::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotStacked_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
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
      op->vtkPlotStacked::GetBounds(temp0);
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
PyvtkPlotStacked_GetUnscaledInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetUnscaledInputBounds(temp0);
    }
    else
    {
      op->vtkPlotStacked::GetUnscaledInputBounds(temp0);
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
PyvtkPlotStacked_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputArray(temp0, temp1);
    }
    else
    {
      op->vtkPlotStacked::SetInputArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_SetColorSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  vtkColorSeries *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorSeries"))
  {
    if (ap.IsBound())
    {
      op->SetColorSeries(temp0);
    }
    else
    {
      op->vtkPlotStacked::SetColorSeries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_GetColorSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorSeries *tempr = (ap.IsBound() ?
      op->GetColorSeries() :
      op->vtkPlotStacked::GetColorSeries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkPlotStacked::GetLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotStacked_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPoints(*temp0, *temp1) :
      op->vtkPlotStacked::SelectPoints(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotStacked_UpdateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateCache() :
      op->vtkPlotStacked::UpdateCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotStacked_Methods[] = {
  {"IsTypeOf", PyvtkPlotStacked_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotStacked_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotStacked_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlotStacked\nC++: static vtkPlotStacked *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotStacked_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlotStacked\nC++: vtkPlotStacked *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlotStacked_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlotStacked_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetColor", PyvtkPlotStacked_SetColor, METH_VARARGS,
   "SetColor(self, r:int, g:int, b:int, a:int) -> None\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a) override;\nSetColor(self, r:float, g:float, b:float) -> None\nC++: void SetColor(double r, double g, double b) override;\n\nSet the plot color with integer values (comprised between 0 and\n255)\n"},
  {"SetColorF", PyvtkPlotStacked_SetColorF, METH_VARARGS,
   "SetColorF(self, r:float, g:float, b:float, a:float) -> None\nC++: void SetColorF(double r, double g, double b, double a)\n    override;\nSetColorF(self, r:float, g:float, b:float) -> None\nC++: void SetColorF(double r, double g, double b) override;\n\nSet the plot color with floating values (comprised between 0.0\nand 1.0)\n"},
  {"GetColorF", PyvtkPlotStacked_GetColorF, METH_VARARGS,
   "GetColorF(self, rgb:[float, float, float]) -> None\nC++: void GetColorF(double rgb[3]) override;\n\nGet the plot color as floating rgb values (comprised between 0.0\nand 1.0)\n"},
  {"GetColor", PyvtkPlotStacked_GetColor, METH_VARARGS,
   "GetColor(self, rgb:[float, float, float]) -> None\nC++: void GetColor(double rgb[3]) override;\n\n"},
  {"Paint", PyvtkPlotStacked_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the Stacked plot, called whenever the chart needs\nto be drawn\n"},
  {"PaintLegend", PyvtkPlotStacked_PaintLegend, METH_VARARGS,
   "PaintLegend(self, painter:vtkContext2D, rect:vtkRectf,\n    legendIndex:int) -> bool\nC++: bool PaintLegend(vtkContext2D *painter, const vtkRectf &rect,\n     int legendIndex) override;\n\nPaint legend event for the Stacked plot, called whenever the\nlegend needs the plot items symbol/mark/line drawn. A rect is\nsupplied with the lower left corner of the rect (elements 0 and\n1) and with width x height (elements 2 and 3). The plot can\nchoose how to fill the space supplied.\n"},
  {"GetBounds", PyvtkPlotStacked_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4]) override;\n\nGet the bounds for this mapper as (Xmin,Xmax,Ymin,Ymax).\n"},
  {"GetUnscaledInputBounds", PyvtkPlotStacked_GetUnscaledInputBounds, METH_VARARGS,
   "GetUnscaledInputBounds(self, bounds:[float, float, float, float])\n    -> None\nC++: void GetUnscaledInputBounds(double bounds[4]) override;\n\nGet the unscaled input bounds for this mapper as\n(Xmin,Xmax,Ymin,Ymax). See vtkPlot for more information.\n"},
  {"SetInputArray", PyvtkPlotStacked_SetInputArray, METH_VARARGS,
   "SetInputArray(self, index:int, name:str) -> None\nC++: void SetInputArray(int index, const vtkStdString &name)\n    override;\n\nWhen used to set additional arrays, stacked bars are created.\n"},
  {"SetColorSeries", PyvtkPlotStacked_SetColorSeries, METH_VARARGS,
   "SetColorSeries(self, colorSeries:vtkColorSeries) -> None\nC++: void SetColorSeries(vtkColorSeries *colorSeries)\n\nSet the color series to use if this becomes a stacked bar plot.\n"},
  {"GetColorSeries", PyvtkPlotStacked_GetColorSeries, METH_VARARGS,
   "GetColorSeries(self) -> vtkColorSeries\nC++: vtkColorSeries *GetColorSeries()\n\nGet the color series used if when this is a stacked bar plot.\n"},
  {"GetLabels", PyvtkPlotStacked_GetLabels, METH_VARARGS,
   "GetLabels(self) -> vtkStringArray\nC++: vtkStringArray *GetLabels() override;\n\nGet the plot labels.\n"},
  {"SelectPoints", PyvtkPlotStacked_SelectPoints, METH_VARARGS,
   "SelectPoints(self, min:vtkVector2f, max:vtkVector2f) -> bool\nC++: bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max) override;\n\nSelect all points in the specified rectangle.\n"},
  {"UpdateCache", PyvtkPlotStacked_UpdateCache, METH_VARARGS,
   "UpdateCache(self) -> bool\nC++: bool UpdateCache() override;\n\nUpdate the internal cache. Returns true if cache was successfully\nupdated. Default does nothing. This method is called by Update()\nwhen either the plot's data has changed or CacheRequiresUpdate()\nreturns true. It is not necessary to call this method explicitly.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlotStacked_Doc =
  "vtkPlotStacked - Class for drawing an stacked polygon plot given an\nX, Ybase, Yextent  in a vtkTable.\n\n"
  "Superclass: vtkPlot\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlotStacked_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlotStacked", // tp_name
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
  PyvtkPlotStacked_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotStacked_StaticNew()
{
  return vtkPlotStacked::New();
}

PyObject *PyvtkPlotStacked_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlotStacked_Type, PyvtkPlotStacked_Methods,
    "vtkPlotStacked",
 &PyvtkPlotStacked_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlotStacked(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotStacked_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotStacked", o) != 0)
  {
    Py_DECREF(o);
  }

}


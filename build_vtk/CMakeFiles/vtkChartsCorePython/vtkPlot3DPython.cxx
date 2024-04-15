// python wrapper for vtkPlot3D
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
#include "vtkPlot3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlot3D(PyObject *dict); }
extern "C" { PyObject *PyvtkPlot3D_ClassNew(); }


static PyObject *
PyvtkPlot3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlot3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlot3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlot3D *tempr = vtkPlot3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlot3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlot3D::NewInstance());

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
PyvtkPlot3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlot3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlot3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_SetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->SetPen(temp0);
    }
    else
    {
      op->vtkPlot3D::SetPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkPlot3D::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_SetSelectionPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionPen(temp0);
    }
    else
    {
      op->vtkPlot3D::SetSelectionPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetSelectionPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetSelectionPen() :
      op->vtkPlot3D::GetSelectionPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPlot3D::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot3D_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkTable *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlot3D::SetInputData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot3D_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkTable *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  vtkStdString temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPlot3D::SetInputData(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot3D_SetInputData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkTable *temp0 = nullptr;
  long long temp1;
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlot3D::SetInputData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlot3D_SetInputData_Methods[] = {
  {"SetInputData", PyvtkPlot3D_SetInputData_s2, METH_VARARGS,
   "@Vsss *vtkTable"},
  {"SetInputData", PyvtkPlot3D_SetInputData_s4, METH_VARARGS,
   "@Vkkk *vtkTable"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlot3D_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlot3D_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlot3D_SetInputData_s1(self, args);
    case 5:
      return PyvtkPlot3D_SetInputData_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}


static PyObject *
PyvtkPlot3D_SetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetColors(temp0);
    }
    else
    {
      op->vtkPlot3D::SetColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetVTKPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetVTKPoints() :
      op->vtkPlot3D::GetVTKPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartXYZ *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPlot3D::GetChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_SetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkChartXYZ *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChartXYZ"))
  {
    if (ap.IsBound())
    {
      op->SetChart(temp0);
    }
    else
    {
      op->vtkPlot3D::SetChart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetXAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetXAxisLabel() :
      op->vtkPlot3D::GetXAxisLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetYAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetYAxisLabel() :
      op->vtkPlot3D::GetYAxisLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetZAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetZAxisLabel() :
      op->vtkPlot3D::GetZAxisLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetSelection(temp0);
    }
    else
    {
      op->vtkPlot3D::SetSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3D_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkPlot3D::GetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlot3D_Methods[] = {
  {"IsTypeOf", PyvtkPlot3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlot3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlot3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlot3D\nC++: static vtkPlot3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlot3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlot3D\nC++: vtkPlot3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlot3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlot3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPen", PyvtkPlot3D_SetPen, METH_VARARGS,
   "SetPen(self, pen:vtkPen) -> None\nC++: void SetPen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {"GetPen", PyvtkPlot3D_GetPen, METH_VARARGS,
   "GetPen(self) -> vtkPen\nC++: vtkPen *GetPen()\n\n"},
  {"SetSelectionPen", PyvtkPlot3D_SetSelectionPen, METH_VARARGS,
   "SetSelectionPen(self, pen:vtkPen) -> None\nC++: void SetSelectionPen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {"GetSelectionPen", PyvtkPlot3D_GetSelectionPen, METH_VARARGS,
   "GetSelectionPen(self) -> vtkPen\nC++: vtkPen *GetSelectionPen()\n\n"},
  {"SetInputData", PyvtkPlot3D_SetInputData, METH_VARARGS,
   "SetInputData(self, input:vtkTable) -> None\nC++: virtual void SetInputData(vtkTable *input)\nSetInputData(self, input:vtkTable, xName:str, yName:str,\n    zName:str) -> None\nC++: virtual void SetInputData(vtkTable *input,\n    const vtkStdString &xName, const vtkStdString &yName,\n    const vtkStdString &zName)\nSetInputData(self, input:vtkTable, xName:str, yName:str,\n    zName:str, colorName:str) -> None\nC++: virtual void SetInputData(vtkTable *input,\n    const vtkStdString &xName, const vtkStdString &yName,\n    const vtkStdString &zName, const vtkStdString &colorName)\nSetInputData(self, input:vtkTable, xColumn:int, yColumn:int,\n    zColumn:int) -> None\nC++: virtual void SetInputData(vtkTable *input, vtkIdType xColumn,\n     vtkIdType yColumn, vtkIdType zColumn)\n\nSet the input to the plot.\n"},
  {"SetColors", PyvtkPlot3D_SetColors, METH_VARARGS,
   "SetColors(self, colorArr:vtkDataArray) -> None\nC++: virtual void SetColors(vtkDataArray *colorArr)\n\nSet the color of each point in the plot.  The input is a single\ncomponent scalar array.  The values of this array will be passed\nthrough a lookup table to generate the color for each data point\nin the plot.\n"},
  {"GetVTKPoints", PyvtkPlot3D_GetVTKPoints, METH_VARARGS,
   "GetVTKPoints(self) -> vtkPoints\nC++: vtkPoints *GetVTKPoints()\n\nGet all the data points within this plot.\n"},
  {"GetChart", PyvtkPlot3D_GetChart, METH_VARARGS,
   "GetChart(self) -> vtkChartXYZ\nC++: virtual vtkChartXYZ *GetChart()\n\nGet/set the chart for this plot.\n"},
  {"SetChart", PyvtkPlot3D_SetChart, METH_VARARGS,
   "SetChart(self, chart:vtkChartXYZ) -> None\nC++: virtual void SetChart(vtkChartXYZ *chart)\n\n"},
  {"GetXAxisLabel", PyvtkPlot3D_GetXAxisLabel, METH_VARARGS,
   "GetXAxisLabel(self) -> str\nC++: std::string GetXAxisLabel()\n\nGet the label for the X axis.\n"},
  {"GetYAxisLabel", PyvtkPlot3D_GetYAxisLabel, METH_VARARGS,
   "GetYAxisLabel(self) -> str\nC++: std::string GetYAxisLabel()\n\nGet the label for the Y axis.\n"},
  {"GetZAxisLabel", PyvtkPlot3D_GetZAxisLabel, METH_VARARGS,
   "GetZAxisLabel(self) -> str\nC++: std::string GetZAxisLabel()\n\nGet the label for the Z axis.\n"},
  {"SetSelection", PyvtkPlot3D_SetSelection, METH_VARARGS,
   "SetSelection(self, id:vtkIdTypeArray) -> None\nC++: virtual void SetSelection(vtkIdTypeArray *id)\n\nSet/get the selection array for the plot.\n"},
  {"GetSelection", PyvtkPlot3D_GetSelection, METH_VARARGS,
   "GetSelection(self) -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetSelection()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlot3D_Doc =
  "vtkPlot3D - Abstract class for 3D plots.\n\n"
  "Superclass: vtkContextItem\n\n"
  "The base class for all plot types used in vtkChart derived charts.\n\n"
  "@sa\n"
  "vtkPlot3DPoints vtkPlot3DLine vtkPlot3DBar vtkChart vtkChartXY\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlot3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlot3D", // tp_name
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
  PyvtkPlot3D_Doc, // tp_doc
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

PyObject *PyvtkPlot3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlot3D_Type, PyvtkPlot3D_Methods,
    "vtkPlot3D",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlot3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlot3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlot3D", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkChartPie
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkChartPie.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartPie(PyObject *dict); }
extern "C" { PyObject *PyvtkChartPie_ClassNew(); }

#ifndef DECLARED_PyvtkChart_ClassNew
extern "C" { PyObject *PyvtkChart_ClassNew(); }
#define DECLARED_PyvtkChart_ClassNew
#endif

static PyObject *
PyvtkChartPie_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartPie::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartPie::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartPie *tempr = vtkChartPie::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartPie *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartPie::NewInstance());

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
PyvtkChartPie_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkChartPie::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkChartPie::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartPie::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartPie::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_AddPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartPie::AddPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_SetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkPlotPie *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlotPie"))
  {
    if (ap.IsBound())
    {
      op->SetPlot(temp0);
    }
    else
    {
      op->vtkChartPie::SetPlot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartPie::GetPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChartPie::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowLegend(temp0);
    }
    else
    {
      op->vtkChartPie::SetShowLegend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkChartPie::GetLegend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
  {
    if (ap.IsBound())
    {
      op->SetScene(temp0);
    }
    else
    {
      op->vtkChartPie::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartPie_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartPie::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartPie_MouseEnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseEnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseEnterEvent(*temp0) :
      op->vtkChartPie::MouseEnterEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartPie_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartPie::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartPie_MouseLeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseLeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseLeaveEvent(*temp0) :
      op->vtkChartPie::MouseLeaveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartPie_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartPie::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartPie_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkChartPie::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartPie_MouseWheelEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseWheelEvent(*temp0, temp1) :
      op->vtkChartPie::MouseWheelEvent(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartPie_Methods[] = {
  {"IsTypeOf", PyvtkChartPie_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartPie_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartPie_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkChartPie\nC++: static vtkChartPie *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartPie_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkChartPie\nC++: vtkChartPie *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkChartPie_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkChartPie_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkChartPie_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkChartPie_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {"AddPlot", PyvtkChartPie_AddPlot, METH_VARARGS,
   "AddPlot(self, type:int) -> vtkPlot\nC++: vtkPlot *AddPlot(int type) override;\n\nAdd a plot to the chart.\n"},
  {"SetPlot", PyvtkChartPie_SetPlot, METH_VARARGS,
   "SetPlot(self, plot:vtkPlotPie) -> None\nC++: virtual void SetPlot(vtkPlotPie *plot)\n\nSet plot to use for the chart. Since this type of chart can only\ncontain one plot, this will replace the previous plot.\n"},
  {"GetPlot", PyvtkChartPie_GetPlot, METH_VARARGS,
   "GetPlot(self, index:int) -> vtkPlot\nC++: vtkPlot *GetPlot(vtkIdType index) override;\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {"GetNumberOfPlots", PyvtkChartPie_GetNumberOfPlots, METH_VARARGS,
   "GetNumberOfPlots(self) -> int\nC++: vtkIdType GetNumberOfPlots() override;\n\nGet the number of plots the chart contains.\n"},
  {"SetShowLegend", PyvtkChartPie_SetShowLegend, METH_VARARGS,
   "SetShowLegend(self, visible:bool) -> None\nC++: void SetShowLegend(bool visible) override;\n\nSet whether the chart should draw a legend.\n"},
  {"GetLegend", PyvtkChartPie_GetLegend, METH_VARARGS,
   "GetLegend(self) -> vtkChartLegend\nC++: vtkChartLegend *GetLegend() override;\n\nGet the legend for the chart, if available. Can return nullptr if\nthere is no legend.\n"},
  {"SetScene", PyvtkChartPie_SetScene, METH_VARARGS,
   "SetScene(self, scene:vtkContextScene) -> None\nC++: void SetScene(vtkContextScene *scene) override;\n\nSet the vtkContextScene for the item, always set for an item in a\nscene.\n"},
  {"Hit", PyvtkChartPie_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseEnterEvent", PyvtkChartPie_MouseEnterEvent, METH_VARARGS,
   "MouseEnterEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseEnterEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse enter event.\n"},
  {"MouseMoveEvent", PyvtkChartPie_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseLeaveEvent", PyvtkChartPie_MouseLeaveEvent, METH_VARARGS,
   "MouseLeaveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseLeaveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse leave event.\n"},
  {"MouseButtonPressEvent", PyvtkChartPie_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkChartPie_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"MouseWheelEvent", PyvtkChartPie_MouseWheelEvent, METH_VARARGS,
   "MouseWheelEvent(self, mouse:vtkContextMouseEvent, delta:int)\n    -> bool\nC++: bool MouseWheelEvent(const vtkContextMouseEvent &mouse,\n    int delta) override;\n\nMouse wheel event, positive delta indicates forward movement of\nthe wheel.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkChartPie_Doc =
  "vtkChartPie - Factory class for drawing pie charts\n\n"
  "Superclass: vtkChart\n\n"
  "This class implements an pie chart.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartPie_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartPie", // tp_name
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
  PyvtkChartPie_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartPie_StaticNew()
{
  return vtkChartPie::New();
}

PyObject *PyvtkChartPie_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkChartPie_Type, PyvtkChartPie_Methods,
    "vtkChartPie",
 &PyvtkChartPie_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkChart_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartPie(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartPie_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartPie", o) != 0)
  {
    Py_DECREF(o);
  }

}


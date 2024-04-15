// python wrapper for vtkHeatmapItem
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
#include "vtkVector.h"
#include "vtkHeatmapItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHeatmapItem(PyObject *dict); }
extern "C" { PyObject *PyvtkHeatmapItem_ClassNew(); }


static PyObject *
PyvtkHeatmapItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHeatmapItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHeatmapItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHeatmapItem *tempr = vtkHeatmapItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHeatmapItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHeatmapItem::NewInstance());

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
PyvtkHeatmapItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHeatmapItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHeatmapItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_SetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetTable(temp0);
    }
    else
    {
      op->vtkHeatmapItem::SetTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTable() :
      op->vtkHeatmapItem::GetTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetRowNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetRowNames() :
      op->vtkHeatmapItem::GetRowNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetNameColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNameColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetNameColumn() :
      op->vtkHeatmapItem::GetNameColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_SetNameColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNameColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNameColumn(temp0);
    }
    else
    {
      op->vtkHeatmapItem::SetNameColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkHeatmapItem::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkHeatmapItem::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetTextAngleForOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextAngleForOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextAngleForOrientation(temp0) :
      op->vtkHeatmapItem::GetTextAngleForOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkHeatmapItem::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHeatmapItem_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkHeatmapItem::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHeatmapItem_SetPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPosition(*temp0);
    }
    else
    {
      op->vtkHeatmapItem::SetPosition(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkHeatmapItem_SetPosition_Methods[] = {
  {"SetPosition", PyvtkHeatmapItem_SetPosition_s2, METH_VARARGS,
   "@P *f"},
  {"SetPosition", PyvtkHeatmapItem_SetPosition_s3, METH_VARARGS,
   "@W vtkVector2f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHeatmapItem_SetPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHeatmapItem_SetPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkHeatmapItem_SetPosition_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkHeatmapItem_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkHeatmapItem::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetPositionVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPositionVector() :
      op->vtkHeatmapItem::GetPositionVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetCellHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCellHeight() :
      op->vtkHeatmapItem::GetCellHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_SetCellHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellHeight(temp0);
    }
    else
    {
      op->vtkHeatmapItem::SetCellHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetCellWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCellWidth() :
      op->vtkHeatmapItem::GetCellWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_SetCellWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellWidth(temp0);
    }
    else
    {
      op->vtkHeatmapItem::SetCellWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

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
      op->vtkHeatmapItem::GetBounds(temp0);
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
PyvtkHeatmapItem_MarkRowAsBlank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkRowAsBlank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->MarkRowAsBlank(temp0);
    }
    else
    {
      op->vtkHeatmapItem::MarkRowAsBlank(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkHeatmapItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetRowLabelWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowLabelWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRowLabelWidth() :
      op->vtkHeatmapItem::GetRowLabelWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_GetColumnLabelWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnLabelWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetColumnLabelWidth() :
      op->vtkHeatmapItem::GetColumnLabelWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeatmapItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkHeatmapItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkHeatmapItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkHeatmapItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkHeatmapItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeatmapItem *op = static_cast<vtkHeatmapItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkHeatmapItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkHeatmapItem_Methods[] = {
  {"IsTypeOf", PyvtkHeatmapItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHeatmapItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHeatmapItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHeatmapItem\nC++: static vtkHeatmapItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHeatmapItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHeatmapItem\nC++: vtkHeatmapItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHeatmapItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHeatmapItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTable", PyvtkHeatmapItem_SetTable, METH_VARARGS,
   "SetTable(self, table:vtkTable) -> None\nC++: virtual void SetTable(vtkTable *table)\n\nSet the table that this item draws.  The first column of the\ntable must contain the names of the rows.\n"},
  {"GetTable", PyvtkHeatmapItem_GetTable, METH_VARARGS,
   "GetTable(self) -> vtkTable\nC++: vtkTable *GetTable()\n\nGet the table that this item draws.\n"},
  {"GetRowNames", PyvtkHeatmapItem_GetRowNames, METH_VARARGS,
   "GetRowNames(self) -> vtkStringArray\nC++: vtkStringArray *GetRowNames()\n\nGet the table that this item draws.\n"},
  {"GetNameColumn", PyvtkHeatmapItem_GetNameColumn, METH_VARARGS,
   "GetNameColumn(self) -> str\nC++: virtual vtkStdString GetNameColumn()\n\nGet/Set the name of the column that specifies the name of this\ntable's rows.  By default, we assume this column will be named\n\"name\".  If no such column can be found, we then assume that the\n1st column in the table names the rows.\n"},
  {"SetNameColumn", PyvtkHeatmapItem_SetNameColumn, METH_VARARGS,
   "SetNameColumn(self, _arg:str) -> None\nC++: virtual void SetNameColumn(vtkStdString _arg)\n\n"},
  {"SetOrientation", PyvtkHeatmapItem_SetOrientation, METH_VARARGS,
   "SetOrientation(self, orientation:int) -> None\nC++: void SetOrientation(int orientation)\n\nSet which way the table should face within the visualization.\n"},
  {"GetOrientation", PyvtkHeatmapItem_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: int GetOrientation()\n\nGet the current heatmap orientation.\n"},
  {"GetTextAngleForOrientation", PyvtkHeatmapItem_GetTextAngleForOrientation, METH_VARARGS,
   "GetTextAngleForOrientation(self, orientation:int) -> float\nC++: double GetTextAngleForOrientation(int orientation)\n\nGet the angle that row labels should be rotated for the\ncorresponding heatmap orientation.  For the default orientation\n(LEFT_TO_RIGHT), this is 0 degrees.\n"},
  {"SetPosition", PyvtkHeatmapItem_SetPosition, METH_VARARGS,
   "SetPosition(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetPosition(float _arg1, float _arg2)\nSetPosition(self, _arg:(float, float)) -> None\nC++: void SetPosition(const float _arg[2])\nSetPosition(self, pos:vtkVector2f) -> None\nC++: void SetPosition(const vtkVector2f &pos)\n\nSet the position of the heatmap.\n"},
  {"GetPosition", PyvtkHeatmapItem_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float)\nC++: virtual float *GetPosition()\n\nGet position of the heatmap.\n"},
  {"GetPositionVector", PyvtkHeatmapItem_GetPositionVector, METH_VARARGS,
   "GetPositionVector(self) -> vtkVector2f\nC++: vtkVector2f GetPositionVector()\n\n"},
  {"GetCellHeight", PyvtkHeatmapItem_GetCellHeight, METH_VARARGS,
   "GetCellHeight(self) -> float\nC++: virtual double GetCellHeight()\n\nGet/Set the height of the cells in our heatmap. Default is 18\npixels.\n"},
  {"SetCellHeight", PyvtkHeatmapItem_SetCellHeight, METH_VARARGS,
   "SetCellHeight(self, _arg:float) -> None\nC++: virtual void SetCellHeight(double _arg)\n\n"},
  {"GetCellWidth", PyvtkHeatmapItem_GetCellWidth, METH_VARARGS,
   "GetCellWidth(self) -> float\nC++: virtual double GetCellWidth()\n\nGet/Set the width of the cells in our heatmap. Default is 36\npixels.\n"},
  {"SetCellWidth", PyvtkHeatmapItem_SetCellWidth, METH_VARARGS,
   "SetCellWidth(self, _arg:float) -> None\nC++: virtual void SetCellWidth(double _arg)\n\n"},
  {"GetBounds", PyvtkHeatmapItem_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this item as (Xmin,Xmax,Ymin,Ymax).\n"},
  {"MarkRowAsBlank", PyvtkHeatmapItem_MarkRowAsBlank, METH_VARARGS,
   "MarkRowAsBlank(self, rowName:str) -> None\nC++: void MarkRowAsBlank(const std::string &rowName)\n\nMark a row as blank, meaning that no cells will be drawn for it.\nUsed by vtkTreeHeatmapItem to represent missing data.\n"},
  {"Paint", PyvtkHeatmapItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaints the table as a heatmap.\n"},
  {"GetRowLabelWidth", PyvtkHeatmapItem_GetRowLabelWidth, METH_VARARGS,
   "GetRowLabelWidth(self) -> float\nC++: virtual float GetRowLabelWidth()\n\nGet the width of the largest row or column label drawn by this\nheatmap.\n"},
  {"GetColumnLabelWidth", PyvtkHeatmapItem_GetColumnLabelWidth, METH_VARARGS,
   "GetColumnLabelWidth(self) -> float\nC++: virtual float GetColumnLabelWidth()\n\n"},
  {"Hit", PyvtkHeatmapItem_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the transform is interactive, false otherwise.\n"},
  {"MouseMoveEvent", PyvtkHeatmapItem_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, event:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &event)\n    override;\n\nDisplay a tooltip when the user mouses over a cell in the\nheatmap.\n"},
  {"MouseDoubleClickEvent", PyvtkHeatmapItem_MouseDoubleClickEvent, METH_VARARGS,
   "MouseDoubleClickEvent(self, event:vtkContextMouseEvent) -> bool\nC++: bool MouseDoubleClickEvent(const vtkContextMouseEvent &event)\n     override;\n\nDisplay a legend for a column of data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHeatmapItem_Doc =
  "vtkHeatmapItem - A 2D graphics item for rendering a heatmap\n\n"
  "Superclass: vtkContextItem\n\n"
  "This item draws a heatmap as a part of a vtkContextScene.\n\n"
  ".SEE ALSO vtkTable\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHeatmapItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkHeatmapItem", // tp_name
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
  PyvtkHeatmapItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHeatmapItem_StaticNew()
{
  return vtkHeatmapItem::New();
}

PyObject *PyvtkHeatmapItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHeatmapItem_Type, PyvtkHeatmapItem_Methods,
    "vtkHeatmapItem",
 &PyvtkHeatmapItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "LEFT_TO_RIGHT", vtkHeatmapItem::LEFT_TO_RIGHT },
        { "UP_TO_DOWN", vtkHeatmapItem::UP_TO_DOWN },
        { "RIGHT_TO_LEFT", vtkHeatmapItem::RIGHT_TO_LEFT },
        { "DOWN_TO_UP", vtkHeatmapItem::DOWN_TO_UP },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHeatmapItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHeatmapItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHeatmapItem", o) != 0)
  {
    Py_DECREF(o);
  }

}


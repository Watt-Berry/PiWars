// python wrapper for vtkTreeHeatmapItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeHeatmapItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeHeatmapItem(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeHeatmapItem_ClassNew(); }


static PyObject *
PyvtkTreeHeatmapItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeHeatmapItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeHeatmapItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeHeatmapItem *tempr = vtkTreeHeatmapItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeHeatmapItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeHeatmapItem::NewInstance());

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
PyvtkTreeHeatmapItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeHeatmapItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeHeatmapItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  vtkTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->SetTree(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::SetTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkTreeHeatmapItem::GetTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SetColumnTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  vtkTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->SetColumnTree(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::SetColumnTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetColumnTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetColumnTree() :
      op->vtkTreeHeatmapItem::GetColumnTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

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
      op->vtkTreeHeatmapItem::SetTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTable() :
      op->vtkTreeHeatmapItem::GetTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetDendrogram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDendrogram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDendrogramItem *tempr = (ap.IsBound() ?
      op->GetDendrogram() :
      op->vtkTreeHeatmapItem::GetDendrogram());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SetDendrogram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDendrogram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  vtkDendrogramItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDendrogramItem"))
  {
    if (ap.IsBound())
    {
      op->SetDendrogram(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::SetDendrogram(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetHeatmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeatmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHeatmapItem *tempr = (ap.IsBound() ?
      op->GetHeatmap() :
      op->vtkTreeHeatmapItem::GetHeatmap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SetHeatmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeatmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  vtkHeatmapItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHeatmapItem"))
  {
    if (ap.IsBound())
    {
      op->SetHeatmap(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::SetHeatmap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_ReorderTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorderTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReorderTable();
    }
    else
    {
      op->vtkTreeHeatmapItem::ReorderTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_ReverseTableRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseTableRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseTableRows();
    }
    else
    {
      op->vtkTreeHeatmapItem::ReverseTableRows();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_ReverseTableColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseTableColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseTableColumns();
    }
    else
    {
      op->vtkTreeHeatmapItem::ReverseTableColumns();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

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
      op->vtkTreeHeatmapItem::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkTreeHeatmapItem::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

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
      op->vtkTreeHeatmapItem::GetBounds(temp0);
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
PyvtkTreeHeatmapItem_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::GetCenter(temp0);
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
PyvtkTreeHeatmapItem_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetSize(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::GetSize(temp0);
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
PyvtkTreeHeatmapItem_CollapseToNumberOfLeafNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CollapseToNumberOfLeafNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CollapseToNumberOfLeafNodes(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::CollapseToNumberOfLeafNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetTreeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetTreeLineWidth() :
      op->vtkTreeHeatmapItem::GetTreeLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SetTreeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTreeLineWidth(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::SetTreeLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_GetPrunedTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrunedTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetPrunedTree() :
      op->vtkTreeHeatmapItem::GetPrunedTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_SetTreeColorArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTreeColorArray(temp0);
    }
    else
    {
      op->vtkTreeHeatmapItem::SetTreeColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkTreeHeatmapItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkTreeHeatmapItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeHeatmapItem *op = static_cast<vtkTreeHeatmapItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkTreeHeatmapItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTreeHeatmapItem_Methods[] = {
  {"IsTypeOf", PyvtkTreeHeatmapItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeHeatmapItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeHeatmapItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeHeatmapItem\nC++: static vtkTreeHeatmapItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeHeatmapItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeHeatmapItem\nC++: vtkTreeHeatmapItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeHeatmapItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeHeatmapItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTree", PyvtkTreeHeatmapItem_SetTree, METH_VARARGS,
   "SetTree(self, tree:vtkTree) -> None\nC++: virtual void SetTree(vtkTree *tree)\n\nSet the tree that this item draws.  Note that this tree's vertex\ndata must contain a vtkStringArray called \"node name\". \nAdditionally, this array must contain the same values as the\nfirst column of the input table.  See SetTable for more\ninformation.  The vtkNewickTreeReader automatically creates this\nrequired array for you.\n"},
  {"GetTree", PyvtkTreeHeatmapItem_GetTree, METH_VARARGS,
   "GetTree(self) -> vtkTree\nC++: vtkTree *GetTree()\n\nGet the tree that this item draws.\n"},
  {"SetColumnTree", PyvtkTreeHeatmapItem_SetColumnTree, METH_VARARGS,
   "SetColumnTree(self, tree:vtkTree) -> None\nC++: virtual void SetColumnTree(vtkTree *tree)\n\nSet a tree to be drawn for the columns of the heatmap.  This\ntree's vertex data must contain a vtkStringArray called \"node\nname\" that corresponds to the names of the columns in the\nheatmap.\n"},
  {"GetColumnTree", PyvtkTreeHeatmapItem_GetColumnTree, METH_VARARGS,
   "GetColumnTree(self) -> vtkTree\nC++: vtkTree *GetColumnTree()\n\nGet the tree that represents the columns of the heatmap (if one\nhas been set).\n"},
  {"SetTable", PyvtkTreeHeatmapItem_SetTable, METH_VARARGS,
   "SetTable(self, table:vtkTable) -> None\nC++: virtual void SetTable(vtkTable *table)\n\nSet the table that this item draws.  The first column of the\ntable must contain the names of the rows.  These names, in turn,\nmust correspond with the nodes names in the input tree.  See\nSetTree for more information.\n"},
  {"GetTable", PyvtkTreeHeatmapItem_GetTable, METH_VARARGS,
   "GetTable(self) -> vtkTable\nC++: vtkTable *GetTable()\n\nGet the table that this item draws.\n"},
  {"GetDendrogram", PyvtkTreeHeatmapItem_GetDendrogram, METH_VARARGS,
   "GetDendrogram(self) -> vtkDendrogramItem\nC++: vtkDendrogramItem *GetDendrogram()\n\nGet/Set the dendrogram contained by this item.\n"},
  {"SetDendrogram", PyvtkTreeHeatmapItem_SetDendrogram, METH_VARARGS,
   "SetDendrogram(self, dendrogram:vtkDendrogramItem) -> None\nC++: void SetDendrogram(vtkDendrogramItem *dendrogram)\n\n"},
  {"GetHeatmap", PyvtkTreeHeatmapItem_GetHeatmap, METH_VARARGS,
   "GetHeatmap(self) -> vtkHeatmapItem\nC++: vtkHeatmapItem *GetHeatmap()\n\nGet/Set the heatmap contained by this item.\n"},
  {"SetHeatmap", PyvtkTreeHeatmapItem_SetHeatmap, METH_VARARGS,
   "SetHeatmap(self, heatmap:vtkHeatmapItem) -> None\nC++: void SetHeatmap(vtkHeatmapItem *heatmap)\n\n"},
  {"ReorderTable", PyvtkTreeHeatmapItem_ReorderTable, METH_VARARGS,
   "ReorderTable(self) -> None\nC++: void ReorderTable()\n\nReorder the rows in the table so they match the order of the leaf\nnodes in our tree.\n"},
  {"ReverseTableRows", PyvtkTreeHeatmapItem_ReverseTableRows, METH_VARARGS,
   "ReverseTableRows(self) -> None\nC++: void ReverseTableRows()\n\nReverse the order of the rows in our input table.  This is used\nto simplify the table layout for DOWN_TO_UP and RIGHT_TO_LEFT\norientations.\n"},
  {"ReverseTableColumns", PyvtkTreeHeatmapItem_ReverseTableColumns, METH_VARARGS,
   "ReverseTableColumns(self) -> None\nC++: void ReverseTableColumns()\n\nReverse the order of the rows in our input table.  This is used\nto simplify the table layout for DOWN_TO_UP and UP_TO_DOWN\norientations.\n"},
  {"SetOrientation", PyvtkTreeHeatmapItem_SetOrientation, METH_VARARGS,
   "SetOrientation(self, orientation:int) -> None\nC++: void SetOrientation(int orientation)\n\nSet which way the tree / heatmap should face within the\nvisualization. The default is for both components to be drawn\nleft to right.\n"},
  {"GetOrientation", PyvtkTreeHeatmapItem_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: int GetOrientation()\n\nGet the current orientation.\n"},
  {"GetBounds", PyvtkTreeHeatmapItem_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4])\n\nGet the bounds of this item (xMin, xMax, yMin, Max) in pixel\ncoordinates.\n"},
  {"GetCenter", PyvtkTreeHeatmapItem_GetCenter, METH_VARARGS,
   "GetCenter(self, center:[float, float]) -> None\nC++: void GetCenter(double center[2])\n\nGet the center point of this item in pixel coordinates.\n"},
  {"GetSize", PyvtkTreeHeatmapItem_GetSize, METH_VARARGS,
   "GetSize(self, size:[float, float]) -> None\nC++: void GetSize(double size[2])\n\nGet the size of this item in pixel coordinates.\n"},
  {"CollapseToNumberOfLeafNodes", PyvtkTreeHeatmapItem_CollapseToNumberOfLeafNodes, METH_VARARGS,
   "CollapseToNumberOfLeafNodes(self, n:int) -> None\nC++: void CollapseToNumberOfLeafNodes(unsigned int n)\n\nCollapse subtrees until there are only n leaf nodes left in the\ntree. The leaf nodes that remain are those that are closest to\nthe root. Any subtrees that were collapsed prior to this function\nbeing called may be re-expanded.  Use this function instead of\nthis->GetDendrogram->CollapseToNumberOfLeafNodes(), as this\nfunction also handles the hiding of heatmap rows that correspond\nto newly collapsed subtrees.\n"},
  {"GetTreeLineWidth", PyvtkTreeHeatmapItem_GetTreeLineWidth, METH_VARARGS,
   "GetTreeLineWidth(self) -> float\nC++: float GetTreeLineWidth()\n\nGet/Set how wide the edges of the trees should be.  Default is\none pixel.\n"},
  {"SetTreeLineWidth", PyvtkTreeHeatmapItem_SetTreeLineWidth, METH_VARARGS,
   "SetTreeLineWidth(self, width:float) -> None\nC++: void SetTreeLineWidth(float width)\n\n"},
  {"GetPrunedTree", PyvtkTreeHeatmapItem_GetPrunedTree, METH_VARARGS,
   "GetPrunedTree(self) -> vtkTree\nC++: vtkTree *GetPrunedTree()\n\nDeprecated.  Use this->GetDendrogram()->GetPrunedTree() instead.\n"},
  {"SetTreeColorArray", PyvtkTreeHeatmapItem_SetTreeColorArray, METH_VARARGS,
   "SetTreeColorArray(self, arrayName:str) -> None\nC++: void SetTreeColorArray(const char *arrayName)\n\nDeprecated.  Use this->GetDendrogram()->SetColorArray(const char\n*arrayName) instead.\n"},
  {"Hit", PyvtkTreeHeatmapItem_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the transform is interactive, false otherwise.\n"},
  {"MouseDoubleClickEvent", PyvtkTreeHeatmapItem_MouseDoubleClickEvent, METH_VARARGS,
   "MouseDoubleClickEvent(self, event:vtkContextMouseEvent) -> bool\nC++: bool MouseDoubleClickEvent(const vtkContextMouseEvent &event)\n     override;\n\nPropagate any double click onto the dendrogram to check if any\nsubtrees should be collapsed or expanded.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeHeatmapItem_Doc =
  "vtkTreeHeatmapItem - A 2D graphics item for rendering a tree and an\nassociated heatmap.\n\n"
  "Superclass: vtkContextItem\n\n"
  "This item draws a tree and a heatmap as a part of a vtkContextScene.\n"
  "The input tree's vertex data must contain at least two arrays. The\n"
  "first required array is a vtkStringArray called \"node name\". This\n"
  "array corresponds to the first column of the input table. The second\n"
  "required array is a scalar array called \"node weight\". This array is\n"
  "used by vtkTreeLayoutStrategy to set any particular node's distance\n"
  "from the root of the tree.\n\n"
  "The vtkNewickTreeReader automatically initializes both of these\n"
  "required arrays in its output tree.\n\n"
  ".SEE ALSO vtkDendrogramItem vtkHeatmapItem vtkTree vtkTable\n"
  "vtkNewickTreeReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeHeatmapItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkTreeHeatmapItem", // tp_name
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
  PyvtkTreeHeatmapItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeHeatmapItem_StaticNew()
{
  return vtkTreeHeatmapItem::New();
}

PyObject *PyvtkTreeHeatmapItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeHeatmapItem_Type, PyvtkTreeHeatmapItem_Methods,
    "vtkTreeHeatmapItem",
 &PyvtkTreeHeatmapItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeHeatmapItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeHeatmapItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeHeatmapItem", o) != 0)
  {
    Py_DECREF(o);
  }

}


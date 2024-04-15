// python wrapper for vtkTanglegramItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTanglegramItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTanglegramItem(PyObject *dict); }
extern "C" { PyObject *PyvtkTanglegramItem_ClassNew(); }


static PyObject *
PyvtkTanglegramItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTanglegramItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTanglegramItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTanglegramItem *tempr = vtkTanglegramItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTanglegramItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTanglegramItem::NewInstance());

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
PyvtkTanglegramItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTanglegramItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTanglegramItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetTree1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  vtkTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->SetTree1(temp0);
    }
    else
    {
      op->vtkTanglegramItem::SetTree1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetTree2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  vtkTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->SetTree2(temp0);
    }
    else
    {
      op->vtkTanglegramItem::SetTree2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTable() :
      op->vtkTanglegramItem::GetTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

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
      op->vtkTanglegramItem::SetTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetTree1Label(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree1Label");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTree1Label() :
      op->vtkTanglegramItem::GetTree1Label());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetTree1Label(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree1Label");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTree1Label(temp0);
    }
    else
    {
      op->vtkTanglegramItem::SetTree1Label(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetTree2Label(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree2Label");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTree2Label() :
      op->vtkTanglegramItem::GetTree2Label());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetTree2Label(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree2Label");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTree2Label(temp0);
    }
    else
    {
      op->vtkTanglegramItem::SetTree2Label(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

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
      op->vtkTanglegramItem::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkTanglegramItem::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetMinimumVisibleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumVisibleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumVisibleFontSize() :
      op->vtkTanglegramItem::GetMinimumVisibleFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetMinimumVisibleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumVisibleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumVisibleFontSize(temp0);
    }
    else
    {
      op->vtkTanglegramItem::SetMinimumVisibleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetLabelSizeDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelSizeDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelSizeDifference() :
      op->vtkTanglegramItem::GetLabelSizeDifference());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetLabelSizeDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelSizeDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelSizeDifference(temp0);
    }
    else
    {
      op->vtkTanglegramItem::SetLabelSizeDifference(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetCorrespondenceLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrespondenceLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCorrespondenceLineWidth() :
      op->vtkTanglegramItem::GetCorrespondenceLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetCorrespondenceLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorrespondenceLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCorrespondenceLineWidth(temp0);
    }
    else
    {
      op->vtkTanglegramItem::SetCorrespondenceLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_GetTreeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetTreeLineWidth() :
      op->vtkTanglegramItem::GetTreeLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_SetTreeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

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
      op->vtkTanglegramItem::SetTreeLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTanglegramItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkTanglegramItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkTanglegramItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTanglegramItem *op = static_cast<vtkTanglegramItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkTanglegramItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTanglegramItem_Methods[] = {
  {"IsTypeOf", PyvtkTanglegramItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTanglegramItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTanglegramItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTanglegramItem\nC++: static vtkTanglegramItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTanglegramItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTanglegramItem\nC++: vtkTanglegramItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTanglegramItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTanglegramItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTree1", PyvtkTanglegramItem_SetTree1, METH_VARARGS,
   "SetTree1(self, tree:vtkTree) -> None\nC++: virtual void SetTree1(vtkTree *tree)\n\nSet the first tree\n"},
  {"SetTree2", PyvtkTanglegramItem_SetTree2, METH_VARARGS,
   "SetTree2(self, tree:vtkTree) -> None\nC++: virtual void SetTree2(vtkTree *tree)\n\nSet the second tree\n"},
  {"GetTable", PyvtkTanglegramItem_GetTable, METH_VARARGS,
   "GetTable(self) -> vtkTable\nC++: vtkTable *GetTable()\n\nGet/Set the table that describes the correspondences between the\ntwo trees.  The first column should contain the names of the leaf\nnodes from tree #1.  The columns of this table should be named\nafter the leaf nodes of tree #2.  A non-zero cell should be used\nto create a connection between the two trees.  Different numbers\nin the table will result in connections being drawn in different\ncolors.\n"},
  {"SetTable", PyvtkTanglegramItem_SetTable, METH_VARARGS,
   "SetTable(self, table:vtkTable) -> None\nC++: void SetTable(vtkTable *table)\n\n"},
  {"GetTree1Label", PyvtkTanglegramItem_GetTree1Label, METH_VARARGS,
   "GetTree1Label(self) -> str\nC++: virtual char *GetTree1Label()\n\nGet/Set the label for tree #1.\n"},
  {"SetTree1Label", PyvtkTanglegramItem_SetTree1Label, METH_VARARGS,
   "SetTree1Label(self, _arg:str) -> None\nC++: virtual void SetTree1Label(const char *_arg)\n\n"},
  {"GetTree2Label", PyvtkTanglegramItem_GetTree2Label, METH_VARARGS,
   "GetTree2Label(self) -> str\nC++: virtual char *GetTree2Label()\n\nGet/Set the label for tree #2.\n"},
  {"SetTree2Label", PyvtkTanglegramItem_SetTree2Label, METH_VARARGS,
   "SetTree2Label(self, _arg:str) -> None\nC++: virtual void SetTree2Label(const char *_arg)\n\n"},
  {"SetOrientation", PyvtkTanglegramItem_SetOrientation, METH_VARARGS,
   "SetOrientation(self, orientation:int) -> None\nC++: void SetOrientation(int orientation)\n\nSet which way the tanglegram should face within the\nvisualization. The default is for tree #1 to be drawn left to\nright.\n"},
  {"GetOrientation", PyvtkTanglegramItem_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: int GetOrientation()\n\nGet the current orientation.\n"},
  {"GetMinimumVisibleFontSize", PyvtkTanglegramItem_GetMinimumVisibleFontSize, METH_VARARGS,
   "GetMinimumVisibleFontSize(self) -> int\nC++: virtual int GetMinimumVisibleFontSize()\n\nGet/Set the smallest font size that is still considered legible.\nIf the current zoom level requires our vertex labels to be\nsmaller than this size the labels will not be drawn at all. \nDefault value is 8 pt.\n"},
  {"SetMinimumVisibleFontSize", PyvtkTanglegramItem_SetMinimumVisibleFontSize, METH_VARARGS,
   "SetMinimumVisibleFontSize(self, _arg:int) -> None\nC++: virtual void SetMinimumVisibleFontSize(int _arg)\n\n"},
  {"GetLabelSizeDifference", PyvtkTanglegramItem_GetLabelSizeDifference, METH_VARARGS,
   "GetLabelSizeDifference(self) -> int\nC++: virtual int GetLabelSizeDifference()\n\nGet/Set how much larger the dendrogram labels should be compared\nto the vertex labels.  Because the vertex labels automatically\nresize based on zoom levels, this is a relative (not absolute)\nsize.  Default value is 4 pts larger than the vertex labels.\n"},
  {"SetLabelSizeDifference", PyvtkTanglegramItem_SetLabelSizeDifference, METH_VARARGS,
   "SetLabelSizeDifference(self, _arg:int) -> None\nC++: virtual void SetLabelSizeDifference(int _arg)\n\n"},
  {"GetCorrespondenceLineWidth", PyvtkTanglegramItem_GetCorrespondenceLineWidth, METH_VARARGS,
   "GetCorrespondenceLineWidth(self) -> float\nC++: virtual float GetCorrespondenceLineWidth()\n\nGet/Set how wide the correspondence lines should be.  Default is\ntwo pixels.\n"},
  {"SetCorrespondenceLineWidth", PyvtkTanglegramItem_SetCorrespondenceLineWidth, METH_VARARGS,
   "SetCorrespondenceLineWidth(self, _arg:float) -> None\nC++: virtual void SetCorrespondenceLineWidth(float _arg)\n\n"},
  {"GetTreeLineWidth", PyvtkTanglegramItem_GetTreeLineWidth, METH_VARARGS,
   "GetTreeLineWidth(self) -> float\nC++: float GetTreeLineWidth()\n\nGet/Set how wide the edges of the trees should be.  Default is\none pixel.\n"},
  {"SetTreeLineWidth", PyvtkTanglegramItem_SetTreeLineWidth, METH_VARARGS,
   "SetTreeLineWidth(self, width:float) -> None\nC++: void SetTreeLineWidth(float width)\n\n"},
  {"Hit", PyvtkTanglegramItem_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the transform is interactive, false otherwise.\n"},
  {"MouseDoubleClickEvent", PyvtkTanglegramItem_MouseDoubleClickEvent, METH_VARARGS,
   "MouseDoubleClickEvent(self, event:vtkContextMouseEvent) -> bool\nC++: bool MouseDoubleClickEvent(const vtkContextMouseEvent &event)\n     override;\n\nPropagate any double click onto the dendrograms to check if any\nsubtrees should be collapsed or expanded.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTanglegramItem_Doc =
  "vtkTanglegramItem - Display two related trees\n\n"
  "Superclass: vtkContextItem\n\n"
  "This item draws two trees with connections between their leaf nodes.\n"
  "Use SetTable() to specify what leaf nodes correspond to one another\n"
  "between the two trees.  See the documentation for this function for\n"
  "more details on how this table should be formatted.\n\n"
  ".SEE ALSO vtkTree vtkTable vtkDendrogramItem vtkNewickTreeReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTanglegramItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkTanglegramItem", // tp_name
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
  PyvtkTanglegramItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTanglegramItem_StaticNew()
{
  return vtkTanglegramItem::New();
}

PyObject *PyvtkTanglegramItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTanglegramItem_Type, PyvtkTanglegramItem_Methods,
    "vtkTanglegramItem",
 &PyvtkTanglegramItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTanglegramItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTanglegramItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTanglegramItem", o) != 0)
  {
    Py_DECREF(o);
  }

}


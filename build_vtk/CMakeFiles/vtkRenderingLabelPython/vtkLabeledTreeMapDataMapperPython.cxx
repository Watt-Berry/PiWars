// python wrapper for vtkLabeledTreeMapDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLabeledTreeMapDataMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabeledTreeMapDataMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkLabeledTreeMapDataMapper_ClassNew(); }

#ifndef DECLARED_PyvtkLabeledDataMapper_ClassNew
extern "C" { PyObject *PyvtkLabeledDataMapper_ClassNew(); }
#define DECLARED_PyvtkLabeledDataMapper_ClassNew
#endif

static PyObject *
PyvtkLabeledTreeMapDataMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabeledTreeMapDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabeledTreeMapDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabeledTreeMapDataMapper *tempr = vtkLabeledTreeMapDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabeledTreeMapDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabeledTreeMapDataMapper::NewInstance());

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
PyvtkLabeledTreeMapDataMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabeledTreeMapDataMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabeledTreeMapDataMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOpaqueGeometry(temp0, temp1);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::RenderOpaqueGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetInputTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetInputTree() :
      op->vtkLabeledTreeMapDataMapper::GetInputTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetRectanglesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRectanglesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRectanglesArrayName(temp0);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::SetRectanglesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetClipTextMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipTextMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipTextMode() :
      op->vtkLabeledTreeMapDataMapper::GetClipTextMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetClipTextMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTextMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipTextMode(temp0);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::SetClipTextMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetChildMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChildMotion() :
      op->vtkLabeledTreeMapDataMapper::GetChildMotion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetChildMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChildMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChildMotion(temp0);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::SetChildMotion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetDynamicLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDynamicLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDynamicLevel() :
      op->vtkLabeledTreeMapDataMapper::GetDynamicLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetDynamicLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDynamicLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDynamicLevel(temp0);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::SetDynamicLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

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
      op->vtkLabeledTreeMapDataMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetFontSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  int temp1;
  int temp2 = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetFontSizeRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::SetFontSizeRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetFontSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetFontSizeRange(temp0);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::GetFontSizeRange(temp0);
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
PyvtkLabeledTreeMapDataMapper_SetLevelRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLevelRange(temp0, temp1);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::SetLevelRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetLevelRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetLevelRange(temp0);
    }
    else
    {
      op->vtkLabeledTreeMapDataMapper::GetLevelRange(temp0);
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

static PyMethodDef PyvtkLabeledTreeMapDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkLabeledTreeMapDataMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabeledTreeMapDataMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabeledTreeMapDataMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabeledTreeMapDataMapper\nC++: static vtkLabeledTreeMapDataMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabeledTreeMapDataMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabeledTreeMapDataMapper\nC++: vtkLabeledTreeMapDataMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabeledTreeMapDataMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabeledTreeMapDataMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOpaqueGeometry", PyvtkLabeledTreeMapDataMapper_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport, actor:vtkActor2D)\n     -> None\nC++: void RenderOpaqueGeometry(vtkViewport *viewport,\n    vtkActor2D *actor) override;\n\nDraw the text to the screen at each input point.\n"},
  {"RenderOverlay", PyvtkLabeledTreeMapDataMapper_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport, actor:vtkActor2D)\n    -> None\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n    override;\n\n"},
  {"GetInputTree", PyvtkLabeledTreeMapDataMapper_GetInputTree, METH_VARARGS,
   "GetInputTree(self) -> vtkTree\nC++: virtual vtkTree *GetInputTree()\n\nThe input to this filter.\n"},
  {"SetRectanglesArrayName", PyvtkLabeledTreeMapDataMapper_SetRectanglesArrayName, METH_VARARGS,
   "SetRectanglesArrayName(self, name:str) -> None\nC++: virtual void SetRectanglesArrayName(const char *name)\n\nThe name of the 4-tuple array used for\n"},
  {"GetClipTextMode", PyvtkLabeledTreeMapDataMapper_GetClipTextMode, METH_VARARGS,
   "GetClipTextMode(self) -> int\nC++: virtual int GetClipTextMode()\n\nIndicates if the label can be displayed clipped by the Window\nmode = 0 - ok to clip labels 1 - auto center labels w/r to the\narea of the vertex's clipped region\n"},
  {"SetClipTextMode", PyvtkLabeledTreeMapDataMapper_SetClipTextMode, METH_VARARGS,
   "SetClipTextMode(self, _arg:int) -> None\nC++: virtual void SetClipTextMode(int _arg)\n\n"},
  {"GetChildMotion", PyvtkLabeledTreeMapDataMapper_GetChildMotion, METH_VARARGS,
   "GetChildMotion(self) -> int\nC++: virtual int GetChildMotion()\n\nIndicates if the label can be moved by its ancestors\n"},
  {"SetChildMotion", PyvtkLabeledTreeMapDataMapper_SetChildMotion, METH_VARARGS,
   "SetChildMotion(self, _arg:int) -> None\nC++: virtual void SetChildMotion(int _arg)\n\n"},
  {"GetDynamicLevel", PyvtkLabeledTreeMapDataMapper_GetDynamicLevel, METH_VARARGS,
   "GetDynamicLevel(self) -> int\nC++: virtual int GetDynamicLevel()\n\nIndicates at which level labeling should be dynamic\n"},
  {"SetDynamicLevel", PyvtkLabeledTreeMapDataMapper_SetDynamicLevel, METH_VARARGS,
   "SetDynamicLevel(self, _arg:int) -> None\nC++: virtual void SetDynamicLevel(int _arg)\n\n"},
  {"ReleaseGraphicsResources", PyvtkLabeledTreeMapDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor.\n"},
  {"SetFontSizeRange", PyvtkLabeledTreeMapDataMapper_SetFontSizeRange, METH_VARARGS,
   "SetFontSizeRange(self, maxSize:int, minSize:int, delta:int=4)\n    -> None\nC++: void SetFontSizeRange(int maxSize, int minSize, int delta=4)\n\nThe range of font sizes to use when rendering the labels.\n"},
  {"GetFontSizeRange", PyvtkLabeledTreeMapDataMapper_GetFontSizeRange, METH_VARARGS,
   "GetFontSizeRange(self, range:[int, int, int]) -> None\nC++: void GetFontSizeRange(int range[3])\n\n"},
  {"SetLevelRange", PyvtkLabeledTreeMapDataMapper_SetLevelRange, METH_VARARGS,
   "SetLevelRange(self, startLevel:int, endLevel:int) -> None\nC++: void SetLevelRange(int startLevel, int endLevel)\n\nThe range of levels to attempt to label. The level of a vertex is\nthe length of the path to the root (the root has level 0).\n"},
  {"GetLevelRange", PyvtkLabeledTreeMapDataMapper_GetLevelRange, METH_VARARGS,
   "GetLevelRange(self, range:[int, int]) -> None\nC++: void GetLevelRange(int range[2])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLabeledTreeMapDataMapper_Doc =
  "vtkLabeledTreeMapDataMapper - draw text labels on a tree map\n\n"
  "Superclass: vtkLabeledDataMapper\n\n"
  "vtkLabeledTreeMapDataMapper is a mapper that renders text on a tree\n"
  "map. A tree map is a vtkTree with an associated 4-tuple array used\n"
  "for storing the boundary rectangle for each vertex in the tree. The\n"
  "user must specify the array name used for storing the rectangles.\n\n"
  "The mapper iterates through the tree and attempts and renders a label\n"
  "inside the vertex's rectangle as long as the following conditions\n"
  "hold:\n"
  "1. The vertex level is within the range of levels specified for\n"
  "   labeling.\n"
  "2. The label can fully fit inside its box.\n"
  "3. The label does not overlap an ancestor's label.\n\n"
  "@sa\n"
  "vtkLabeledDataMapper\n\n"
  "@par Thanks: Thanks to Patricia Crossno, Ken Moreland, Andrew Wilson\n"
  "and Brian Wylie from Sandia National Laboratories for their help in\n"
  "developing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabeledTreeMapDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabeledTreeMapDataMapper", // tp_name
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
  PyvtkLabeledTreeMapDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabeledTreeMapDataMapper_StaticNew()
{
  return vtkLabeledTreeMapDataMapper::New();
}

PyObject *PyvtkLabeledTreeMapDataMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabeledTreeMapDataMapper_Type, PyvtkLabeledTreeMapDataMapper_Methods,
    "vtkLabeledTreeMapDataMapper",
 &PyvtkLabeledTreeMapDataMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLabeledDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabeledTreeMapDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabeledTreeMapDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabeledTreeMapDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}


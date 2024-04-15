// python wrapper for vtkInteractorStyleTreeMapHover
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleTreeMapHover.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleTreeMapHover(PyObject *dict); }
extern "C" { PyObject *PyvtkInteractorStyleTreeMapHover_ClassNew(); }


static PyObject *
PyvtkInteractorStyleTreeMapHover_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleTreeMapHover::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleTreeMapHover::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleTreeMapHover *tempr = vtkInteractorStyleTreeMapHover::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleTreeMapHover *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleTreeMapHover::NewInstance());

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
PyvtkInteractorStyleTreeMapHover_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorStyleTreeMapHover::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorStyleTreeMapHover::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkTreeMapLayout *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTreeMapLayout"))
  {
    if (ap.IsBound())
    {
      op->SetLayout(temp0);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::SetLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeMapLayout *tempr = (ap.IsBound() ?
      op->GetLayout() :
      op->vtkInteractorStyleTreeMapHover::GetLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetTreeMapToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeMapToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkTreeMapToPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTreeMapToPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetTreeMapToPolyData(temp0);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::SetTreeMapToPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetTreeMapToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeMapToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeMapToPolyData *tempr = (ap.IsBound() ?
      op->GetTreeMapToPolyData() :
      op->vtkInteractorStyleTreeMapHover::GetTreeMapToPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetLabelField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelField(temp0);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::SetLabelField(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetLabelField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelField() :
      op->vtkInteractorStyleTreeMapHover::GetLabelField());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_HighLightItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighLightItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->HighLightItem(temp0);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::HighLightItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_HighLightCurrentSelectedItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighLightCurrentSelectedItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HighLightCurrentSelectedItem();
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::HighLightCurrentSelectedItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetHighLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      op->SetHighLightColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::SetHighLightColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetSelectionLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      op->SetSelectionLightColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::SetSelectionLightColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetHighLightWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLightWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHighLightWidth(temp0);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::SetHighLightWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetHighLightWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighLightWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighLightWidth() :
      op->vtkInteractorStyleTreeMapHover::GetHighLightWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetSelectionWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionWidth(temp0);
    }
    else
    {
      op->vtkInteractorStyleTreeMapHover::SetSelectionWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetSelectionWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectionWidth() :
      op->vtkInteractorStyleTreeMapHover::GetSelectionWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleTreeMapHover_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleTreeMapHover_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleTreeMapHover_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleTreeMapHover_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorStyleTreeMapHover\nC++: static vtkInteractorStyleTreeMapHover *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleTreeMapHover_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorStyleTreeMapHover\nC++: vtkInteractorStyleTreeMapHover *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorStyleTreeMapHover_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorStyleTreeMapHover_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLayout", PyvtkInteractorStyleTreeMapHover_SetLayout, METH_VARARGS,
   "SetLayout(self, layout:vtkTreeMapLayout) -> None\nC++: void SetLayout(vtkTreeMapLayout *layout)\n\nMust be set to the vtkTreeMapLayout used to compute the bounds of\neach vertex for the tree map.\n"},
  {"GetLayout", PyvtkInteractorStyleTreeMapHover_GetLayout, METH_VARARGS,
   "GetLayout(self) -> vtkTreeMapLayout\nC++: virtual vtkTreeMapLayout *GetLayout()\n\n"},
  {"SetTreeMapToPolyData", PyvtkInteractorStyleTreeMapHover_SetTreeMapToPolyData, METH_VARARGS,
   "SetTreeMapToPolyData(self, filter:vtkTreeMapToPolyData) -> None\nC++: void SetTreeMapToPolyData(vtkTreeMapToPolyData *filter)\n\nMust be set to the vtkTreeMapToPolyData used to convert the tree\nmap into polydata.\n"},
  {"GetTreeMapToPolyData", PyvtkInteractorStyleTreeMapHover_GetTreeMapToPolyData, METH_VARARGS,
   "GetTreeMapToPolyData(self) -> vtkTreeMapToPolyData\nC++: virtual vtkTreeMapToPolyData *GetTreeMapToPolyData()\n\n"},
  {"SetLabelField", PyvtkInteractorStyleTreeMapHover_SetLabelField, METH_VARARGS,
   "SetLabelField(self, _arg:str) -> None\nC++: virtual void SetLabelField(const char *_arg)\n\nThe name of the field to use when displaying text in the hover\nballoon.\n"},
  {"GetLabelField", PyvtkInteractorStyleTreeMapHover_GetLabelField, METH_VARARGS,
   "GetLabelField(self) -> str\nC++: virtual char *GetLabelField()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleTreeMapHover_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: void OnMouseMove() override;\n\nOverridden from vtkInteractorStyleImage to provide the desired\ninteraction behavior.\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleTreeMapHover_OnLeftButtonUp, METH_VARARGS,
   "OnLeftButtonUp(self) -> None\nC++: void OnLeftButtonUp() override;\n\n"},
  {"HighLightItem", PyvtkInteractorStyleTreeMapHover_HighLightItem, METH_VARARGS,
   "HighLightItem(self, id:int) -> None\nC++: void HighLightItem(vtkIdType id)\n\nHighlights a specific vertex.\n"},
  {"HighLightCurrentSelectedItem", PyvtkInteractorStyleTreeMapHover_HighLightCurrentSelectedItem, METH_VARARGS,
   "HighLightCurrentSelectedItem(self) -> None\nC++: void HighLightCurrentSelectedItem()\n\n"},
  {"SetInteractor", PyvtkInteractorStyleTreeMapHover_SetInteractor, METH_VARARGS,
   "SetInteractor(self, rwi:vtkRenderWindowInteractor) -> None\nC++: void SetInteractor(vtkRenderWindowInteractor *rwi) override;\n\nSet/Get the Interactor wrapper being controlled by this object.\n(Satisfy superclass API.)\n"},
  {"SetHighLightColor", PyvtkInteractorStyleTreeMapHover_SetHighLightColor, METH_VARARGS,
   "SetHighLightColor(self, r:float, g:float, b:float) -> None\nC++: void SetHighLightColor(double r, double g, double b)\n\nSet the color used to highlight the hovered vertex.\n"},
  {"SetSelectionLightColor", PyvtkInteractorStyleTreeMapHover_SetSelectionLightColor, METH_VARARGS,
   "SetSelectionLightColor(self, r:float, g:float, b:float) -> None\nC++: void SetSelectionLightColor(double r, double g, double b)\n\nSet the color used to highlight the selected vertex.\n"},
  {"SetHighLightWidth", PyvtkInteractorStyleTreeMapHover_SetHighLightWidth, METH_VARARGS,
   "SetHighLightWidth(self, lw:float) -> None\nC++: void SetHighLightWidth(double lw)\n\nThe width of the line around the hovered vertex.\n"},
  {"GetHighLightWidth", PyvtkInteractorStyleTreeMapHover_GetHighLightWidth, METH_VARARGS,
   "GetHighLightWidth(self) -> float\nC++: double GetHighLightWidth()\n\n"},
  {"SetSelectionWidth", PyvtkInteractorStyleTreeMapHover_SetSelectionWidth, METH_VARARGS,
   "SetSelectionWidth(self, lw:float) -> None\nC++: void SetSelectionWidth(double lw)\n\nThe width of the line around the selected vertex.\n"},
  {"GetSelectionWidth", PyvtkInteractorStyleTreeMapHover_GetSelectionWidth, METH_VARARGS,
   "GetSelectionWidth(self) -> float\nC++: double GetSelectionWidth()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInteractorStyleTreeMapHover_Doc =
  "vtkInteractorStyleTreeMapHover - An interactor style for a tree map\nview\n\n"
  "Superclass: vtkInteractorStyleImage\n\n"
  "The vtkInteractorStyleTreeMapHover specifically works with pipelines\n"
  "that create a tree map.  Such pipelines will have a vtkTreeMapLayout\n"
  "filter and a vtkTreeMapToPolyData filter, both of which must be\n"
  "passed to this interactor style for it to function correctly. This\n"
  "interactor style allows only 2D panning and zooming, and additionally\n"
  "provides a balloon containing the name of the vertex hovered over,\n"
  "and allows the user to highlight a vertex by clicking on it.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorStyleTreeMapHover_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkInteractorStyleTreeMapHover", // tp_name
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
  PyvtkInteractorStyleTreeMapHover_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleTreeMapHover_StaticNew()
{
  return vtkInteractorStyleTreeMapHover::New();
}

PyObject *PyvtkInteractorStyleTreeMapHover_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorStyleTreeMapHover_Type, PyvtkInteractorStyleTreeMapHover_Methods,
    "vtkInteractorStyleTreeMapHover",
 &PyvtkInteractorStyleTreeMapHover_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkInteractorStyleImage");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleTreeMapHover(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleTreeMapHover_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleTreeMapHover", o) != 0)
  {
    Py_DECREF(o);
  }

}


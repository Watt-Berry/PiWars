// python wrapper for vtkImageStack
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageStack.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageStack(PyObject *dict); }
extern "C" { PyObject *PyvtkImageStack_ClassNew(); }


static PyObject *
PyvtkImageStack_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageStack::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageStack::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageStack *tempr = vtkImageStack::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStack *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageStack::NewInstance());

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
PyvtkImageStack_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageStack::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageStack::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_AddImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkImageSlice *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageSlice"))
  {
    if (ap.IsBound())
    {
      op->AddImage(temp0);
    }
    else
    {
      op->vtkImageStack::AddImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_RemoveImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkImageSlice *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageSlice"))
  {
    if (ap.IsBound())
    {
      op->RemoveImage(temp0);
    }
    else
    {
      op->vtkImageStack::RemoveImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_HasImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkImageSlice *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageSlice"))
  {
    int tempr = (ap.IsBound() ?
      op->HasImage(temp0) :
      op->vtkImageStack::HasImage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetImages_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSliceCollection *tempr = (ap.IsBound() ?
      op->GetImages() :
      op->vtkImageStack::GetImages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageStack_GetImages_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetImages(temp0);
    }
    else
    {
      op->vtkImageStack::GetImages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStack_GetImages(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageStack_GetImages_s1(self, args);
    case 1:
      return PyvtkImageStack_GetImages_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetImages");
  return nullptr;
}


static PyObject *
PyvtkImageStack_SetActiveLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveLayer(temp0);
    }
    else
    {
      op->vtkImageStack::SetActiveLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetActiveLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveLayer() :
      op->vtkImageStack::GetActiveLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetActiveImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSlice *tempr = (ap.IsBound() ?
      op->GetActiveImage() :
      op->vtkImageStack::GetActiveImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapper3D *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkImageStack::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkImageStack::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageStack::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageStack_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

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
      op->vtkImageStack::GetBounds(temp0);
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
PyvtkImageStack_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageStack_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageStack_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkImageStack_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageStack::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkImageStack::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkImageStack::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkImageStack::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkImageStack::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkImageStack::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImageStack::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

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
      op->vtkImageStack::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitPathTraversal();
    }
    else
    {
      op->vtkImageStack::InitPathTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetNextPath() :
      op->vtkImageStack::GetNextPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPaths() :
      op->vtkImageStack::GetNumberOfPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStack_BuildPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStack *op = static_cast<vtkImageStack *>(vp);

  vtkAssemblyPaths *temp0 = nullptr;
  vtkAssemblyPath *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPaths") &&
      ap.GetVTKObject(temp1, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->BuildPaths(temp0, temp1);
    }
    else
    {
      op->vtkImageStack::BuildPaths(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStack_Methods[] = {
  {"IsTypeOf", PyvtkImageStack_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageStack_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageStack_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageStack\nC++: static vtkImageStack *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageStack_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageStack\nC++: vtkImageStack *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageStack_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageStack_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddImage", PyvtkImageStack_AddImage, METH_VARARGS,
   "AddImage(self, prop:vtkImageSlice) -> None\nC++: void AddImage(vtkImageSlice *prop)\n\nAdd an image to the stack.  If the image is already present, then\nthis method will do nothing.\n"},
  {"RemoveImage", PyvtkImageStack_RemoveImage, METH_VARARGS,
   "RemoveImage(self, prop:vtkImageSlice) -> None\nC++: void RemoveImage(vtkImageSlice *prop)\n\nRemove an image from the stack.  If the image is not present,\nthen this method will do nothing.\n"},
  {"HasImage", PyvtkImageStack_HasImage, METH_VARARGS,
   "HasImage(self, prop:vtkImageSlice) -> int\nC++: vtkTypeBool HasImage(vtkImageSlice *prop)\n\nCheck if an image is present.  The returned value is one or zero.\n"},
  {"GetImages", PyvtkImageStack_GetImages, METH_VARARGS,
   "GetImages(self) -> vtkImageSliceCollection\nC++: vtkImageSliceCollection *GetImages()\nGetImages(self, __a:vtkPropCollection) -> None\nC++: void GetImages(vtkPropCollection *)\n\nGet the list of images as a vtkImageSliceCollection.\n"},
  {"SetActiveLayer", PyvtkImageStack_SetActiveLayer, METH_VARARGS,
   "SetActiveLayer(self, _arg:int) -> None\nC++: virtual void SetActiveLayer(int _arg)\n\nSet the active layer number.  This is the layer that will be used\nfor picking and interaction.\n"},
  {"GetActiveLayer", PyvtkImageStack_GetActiveLayer, METH_VARARGS,
   "GetActiveLayer(self) -> int\nC++: int GetActiveLayer()\n\n"},
  {"GetActiveImage", PyvtkImageStack_GetActiveImage, METH_VARARGS,
   "GetActiveImage(self) -> vtkImageSlice\nC++: vtkImageSlice *GetActiveImage()\n\nGet the active image.  This will be the topmost image whose\nLayerNumber is the ActiveLayer.  If no image matches, then NULL\nwill be returned.\n"},
  {"GetMapper", PyvtkImageStack_GetMapper, METH_VARARGS,
   "GetMapper(self) -> vtkImageMapper3D\nC++: vtkImageMapper3D *GetMapper() override;\n\nGet the mapper for the currently active image.\n"},
  {"GetProperty", PyvtkImageStack_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkImageProperty\nC++: vtkImageProperty *GetProperty() override;\n\nGet the property for the currently active image.\n"},
  {"GetBounds", PyvtkImageStack_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the combined bounds of all of the images.\n"},
  {"GetMTime", PyvtkImageStack_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the max MTime of all the images.\n"},
  {"GetRedrawMTime", PyvtkImageStack_GetRedrawMTime, METH_VARARGS,
   "GetRedrawMTime(self) -> int\nC++: vtkMTimeType GetRedrawMTime() override;\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\nmappers, etc.\n"},
  {"ShallowCopy", PyvtkImageStack_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this prop. Overloads the virtual vtkProp method.\n"},
  {"RenderOverlay", PyvtkImageStack_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderOpaqueGeometry", PyvtkImageStack_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkImageStack_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImageStack_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkImageStack_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *win) override;\n\nRelease any resources held by this prop.\n"},
  {"InitPathTraversal", PyvtkImageStack_InitPathTraversal, METH_VARARGS,
   "InitPathTraversal(self) -> None\nC++: void InitPathTraversal() override;\n\nMethods for traversing the stack as if it was an assembly. The\ntraversal only gives the view prop for the active layer.\n"},
  {"GetNextPath", PyvtkImageStack_GetNextPath, METH_VARARGS,
   "GetNextPath(self) -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetNextPath() override;\n\n"},
  {"GetNumberOfPaths", PyvtkImageStack_GetNumberOfPaths, METH_VARARGS,
   "GetNumberOfPaths(self) -> int\nC++: int GetNumberOfPaths() override;\n\n"},
  {"BuildPaths", PyvtkImageStack_BuildPaths, METH_VARARGS,
   "BuildPaths(self, paths:vtkAssemblyPaths, path:vtkAssemblyPath)\n    -> None\nC++: void BuildPaths(vtkAssemblyPaths *paths,\n    vtkAssemblyPath *path) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used to\nconstruct assembly paths and perform part traversal.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageStack_Doc =
  "vtkImageStack - manages a stack of composited images\n\n"
  "Superclass: vtkImageSlice\n\n"
  "vtkImageStack manages the compositing of a set of images. Each image\n"
  "is assigned a layer number through its property object, and it is\n"
  "this layer number that determines the compositing order: images with\n"
  "a higher layer number are drawn over top of images with a lower layer\n"
  "number.  The image stack has a SetActiveLayer method for controlling\n"
  "which layer to use for interaction and picking.@par Thanks: Thanks to\n"
  "David Gobbi at the Seaman Family MR Centre and Dept. of Clinical\n"
  "Neurosciences, Foothills Medical Centre, Calgary, for providing this\n"
  "class.\n"
  "@sa\n"
  "vtkImageMapper3D vtkImageProperty vtkProp3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageStack_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingImage.vtkImageStack", // tp_name
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
  PyvtkImageStack_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageStack_StaticNew()
{
  return vtkImageStack::New();
}

PyObject *PyvtkImageStack_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageStack_Type, PyvtkImageStack_Methods,
    "vtkImageStack",
 &PyvtkImageStack_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageSlice");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageStack(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageStack_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageStack", o) != 0)
  {
    Py_DECREF(o);
  }

}


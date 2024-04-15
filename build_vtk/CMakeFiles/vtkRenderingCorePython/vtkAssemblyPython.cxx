// python wrapper for vtkAssembly
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAssembly.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssembly(PyObject *dict); }
extern "C" { PyObject *PyvtkAssembly_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static PyObject *
PyvtkAssembly_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssembly::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssembly::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssembly *tempr = vtkAssembly::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssembly *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssembly::NewInstance());

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
PyvtkAssembly_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAssembly::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAssembly::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_AddPart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->AddPart(temp0);
    }
    else
    {
      op->vtkAssembly::AddPart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_RemovePart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->RemovePart(temp0);
    }
    else
    {
      op->vtkAssembly::RemovePart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_GetParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DCollection *tempr = (ap.IsBound() ?
      op->GetParts() :
      op->vtkAssembly::GetParts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkAssembly::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetVolumes(temp0);
    }
    else
    {
      op->vtkAssembly::GetVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAssembly::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAssembly::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkAssembly::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAssembly::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

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
      op->vtkAssembly::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitPathTraversal();
    }
    else
    {
      op->vtkAssembly::InitPathTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetNextPath() :
      op->vtkAssembly::GetNextPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPaths() :
      op->vtkAssembly::GetNumberOfPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

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
      op->vtkAssembly::GetBounds(temp0);
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
PyvtkAssembly_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAssembly::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAssembly_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAssembly_GetBounds_s1(self, args);
    case 0:
      return PyvtkAssembly_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkAssembly_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssembly::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

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
      op->vtkAssembly::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssembly_BuildPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

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
      op->vtkAssembly::BuildPaths(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAssembly_Methods[] = {
  {"IsTypeOf", PyvtkAssembly_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssembly_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssembly_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAssembly\nC++: static vtkAssembly *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssembly_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAssembly\nC++: vtkAssembly *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAssembly_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAssembly_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddPart", PyvtkAssembly_AddPart, METH_VARARGS,
   "AddPart(self, __a:vtkProp3D) -> None\nC++: void AddPart(vtkProp3D *)\n\nAdd a part to the list of parts.\n"},
  {"RemovePart", PyvtkAssembly_RemovePart, METH_VARARGS,
   "RemovePart(self, __a:vtkProp3D) -> None\nC++: void RemovePart(vtkProp3D *)\n\nRemove a part from the list of parts,\n"},
  {"GetParts", PyvtkAssembly_GetParts, METH_VARARGS,
   "GetParts(self) -> vtkProp3DCollection\nC++: vtkProp3DCollection *GetParts()\n\nReturn the parts (direct descendants) of this assembly.\n"},
  {"GetActors", PyvtkAssembly_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"GetVolumes", PyvtkAssembly_GetVolumes, METH_VARARGS,
   "GetVolumes(self, __a:vtkPropCollection) -> None\nC++: void GetVolumes(vtkPropCollection *) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkAssembly_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, ren:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *ren) override;\n\nRender this assembly and all its parts. The rendering process is\nrecursive. Note that a mapper need not be defined. If not\ndefined, then no geometry will be drawn for this assembly. This\nallows you to create \"logical\" assemblies; that is, assemblies\nthat only serve to group and transform its parts.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAssembly_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, ren:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *ren)\n    override;\n\n"},
  {"RenderVolumetricGeometry", PyvtkAssembly_RenderVolumetricGeometry, METH_VARARGS,
   "RenderVolumetricGeometry(self, ren:vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *ren) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkAssembly_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkAssembly_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"InitPathTraversal", PyvtkAssembly_InitPathTraversal, METH_VARARGS,
   "InitPathTraversal(self) -> None\nC++: void InitPathTraversal() override;\n\nMethods to traverse the parts of an assembly. Each part (starting\nfrom the root) will appear properly transformed and with the\ncorrect properties (depending upon the ApplyProperty and\nApplyTransform ivars). Note that the part appears as an instance\nof vtkProp. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily with the\ncorrect transformation or properties. To use the methods below -\nfirst invoke InitPathTraversal() followed by repeated calls to\nGetNextPath().  GetNextPath() returns a NULL pointer when the\nlist is exhausted.\n"},
  {"GetNextPath", PyvtkAssembly_GetNextPath, METH_VARARGS,
   "GetNextPath(self) -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetNextPath() override;\n\n"},
  {"GetNumberOfPaths", PyvtkAssembly_GetNumberOfPaths, METH_VARARGS,
   "GetNumberOfPaths(self) -> int\nC++: int GetNumberOfPaths() override;\n\n"},
  {"GetBounds", PyvtkAssembly_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\nGetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds for the assembly as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"GetMTime", PyvtkAssembly_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride default GetMTime method to also consider all of the\nassembly's parts.\n"},
  {"ShallowCopy", PyvtkAssembly_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an assembly. Overloads the virtual vtkProp\nmethod.\n"},
  {"BuildPaths", PyvtkAssembly_BuildPaths, METH_VARARGS,
   "BuildPaths(self, paths:vtkAssemblyPaths, path:vtkAssemblyPath)\n    -> None\nC++: void BuildPaths(vtkAssemblyPaths *paths,\n    vtkAssemblyPath *path) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Overload the\nsuperclass' vtkProp BuildPaths() method. Paths consist of an\nordered sequence of actors, with transformations properly\nconcatenated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAssembly_Doc =
  "vtkAssembly - create hierarchies of vtkProp3Ds (transformable props)\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkAssembly is an object that groups vtkProp3Ds, its subclasses, and\n"
  "other assemblies into a tree-like hierarchy. The vtkProp3Ds and\n"
  "assemblies can then be transformed together by transforming just the\n"
  "root assembly of the hierarchy.\n\n"
  "A vtkAssembly object can be used in place of an vtkProp3D since it is\n"
  "a subclass of vtkProp3D. The difference is that vtkAssembly maintains\n"
  "a list of vtkProp3D instances (its \"parts\") that form the assembly.\n"
  "Then, any operation that transforms (i.e., scales, rotates,\n"
  "translates) the parent assembly will transform all its parts.  Note\n"
  "that this process is recursive: you can create groups consisting of\n"
  "assemblies and/or vtkProp3Ds to arbitrary depth.\n\n"
  "To add an assembly to the renderer's list of props, you only need to\n"
  "add the root of the assembly. During rendering, the parts of the\n"
  "assembly are rendered during a hierarchical traversal process.\n\n"
  "@warning\n"
  "Collections of assemblies are slower to render than an equivalent\n"
  "list of actors. This is because to support arbitrary nesting of\n"
  "assemblies, the state of the assemblies (i.e., transformation\n"
  "matrices) must be propagated through the assembly hierarchy.\n\n"
  "@warning\n"
  "Assemblies can consist of hierarchies of assemblies, where one actor\n"
  "or assembly used in one hierarchy is also used in other hierarchies.\n"
  "However, make that there are no cycles (e.g., parent->child->parent),\n"
  "this will cause program failure.\n\n"
  "@warning\n"
  "If you wish to create assemblies without any transformation (using\n"
  "the assembly strictly as a grouping mechanism), then you may wish to\n"
  "consider using vtkPropAssembly.\n\n"
  "@sa\n"
  "vtkActor vtkTransform vtkMapper vtkPolyDataMapper vtkPropAssembly\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAssembly_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkAssembly", // tp_name
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
  PyvtkAssembly_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssembly_StaticNew()
{
  return vtkAssembly::New();
}

PyObject *PyvtkAssembly_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAssembly_Type, PyvtkAssembly_Methods,
    "vtkAssembly",
 &PyvtkAssembly_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAssembly(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssembly_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssembly", o) != 0)
  {
    Py_DECREF(o);
  }

}


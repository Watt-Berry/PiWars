// python wrapper for vtkJSONSceneExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkJSONSceneExporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkJSONSceneExporter(PyObject *dict); }
extern "C" { PyObject *PyvtkJSONSceneExporter_ClassNew(); }

#ifndef DECLARED_PyvtkExporter_ClassNew
extern "C" { PyObject *PyvtkExporter_ClassNew(); }
#define DECLARED_PyvtkExporter_ClassNew
#endif

static PyObject *
PyvtkJSONSceneExporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkJSONSceneExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkJSONSceneExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkJSONSceneExporter *tempr = vtkJSONSceneExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkJSONSceneExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkJSONSceneExporter::NewInstance());

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
PyvtkJSONSceneExporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkJSONSceneExporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkJSONSceneExporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkJSONSceneExporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkJSONSceneExporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SetWriteTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteTextures(temp0);
    }
    else
    {
      op->vtkJSONSceneExporter::SetWriteTextures(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetWriteTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteTextures() :
      op->vtkJSONSceneExporter::GetWriteTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SetWriteTextureLODs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteTextureLODs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteTextureLODs(temp0);
    }
    else
    {
      op->vtkJSONSceneExporter::SetWriteTextureLODs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetWriteTextureLODs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteTextureLODs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteTextureLODs() :
      op->vtkJSONSceneExporter::GetWriteTextureLODs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SetTextureLODsBaseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLODsBaseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureLODsBaseSize(temp0);
    }
    else
    {
      op->vtkJSONSceneExporter::SetTextureLODsBaseSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetTextureLODsBaseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLODsBaseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetTextureLODsBaseSize() :
      op->vtkJSONSceneExporter::GetTextureLODsBaseSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SetTextureLODsBaseUrl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLODsBaseUrl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureLODsBaseUrl(temp0);
    }
    else
    {
      op->vtkJSONSceneExporter::SetTextureLODsBaseUrl(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetTextureLODsBaseUrl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLODsBaseUrl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTextureLODsBaseUrl() :
      op->vtkJSONSceneExporter::GetTextureLODsBaseUrl());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SetWritePolyLODs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWritePolyLODs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWritePolyLODs(temp0);
    }
    else
    {
      op->vtkJSONSceneExporter::SetWritePolyLODs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetWritePolyLODs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWritePolyLODs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWritePolyLODs() :
      op->vtkJSONSceneExporter::GetWritePolyLODs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SetPolyLODsBaseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolyLODsBaseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolyLODsBaseSize(temp0);
    }
    else
    {
      op->vtkJSONSceneExporter::SetPolyLODsBaseSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetPolyLODsBaseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyLODsBaseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetPolyLODsBaseSize() :
      op->vtkJSONSceneExporter::GetPolyLODsBaseSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_SetPolyLODsBaseUrl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolyLODsBaseUrl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolyLODsBaseUrl(temp0);
    }
    else
    {
      op->vtkJSONSceneExporter::SetPolyLODsBaseUrl(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONSceneExporter_GetPolyLODsBaseUrl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyLODsBaseUrl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONSceneExporter *op = static_cast<vtkJSONSceneExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPolyLODsBaseUrl() :
      op->vtkJSONSceneExporter::GetPolyLODsBaseUrl());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkJSONSceneExporter_Methods[] = {
  {"IsTypeOf", PyvtkJSONSceneExporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkJSONSceneExporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkJSONSceneExporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkJSONSceneExporter\nC++: static vtkJSONSceneExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkJSONSceneExporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkJSONSceneExporter\nC++: vtkJSONSceneExporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkJSONSceneExporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkJSONSceneExporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkJSONSceneExporter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk data file to write. This correspond to\nthe root directory of the data to write.\n"},
  {"GetFileName", PyvtkJSONSceneExporter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetWriteTextures", PyvtkJSONSceneExporter_SetWriteTextures, METH_VARARGS,
   "SetWriteTextures(self, _arg:bool) -> None\nC++: virtual void SetWriteTextures(bool _arg)\n\nWhether or not to write textures. Textures will be written in\nJPEG format. Default is false.\n"},
  {"GetWriteTextures", PyvtkJSONSceneExporter_GetWriteTextures, METH_VARARGS,
   "GetWriteTextures(self) -> bool\nC++: virtual bool GetWriteTextures()\n\n"},
  {"SetWriteTextureLODs", PyvtkJSONSceneExporter_SetWriteTextureLODs, METH_VARARGS,
   "SetWriteTextureLODs(self, _arg:bool) -> None\nC++: virtual void SetWriteTextureLODs(bool _arg)\n\nWhether or not to write texture LODs. This will write out the\ntextures in a series of decreasing resolution JPEG files, which\nare intended to be uploaded to the web. Each file will be 1/4 the\nsize of the previous one. The files will stop being written out\nwhen one is smaller than the TextureLODsBaseSize. Default is\nfalse.\n"},
  {"GetWriteTextureLODs", PyvtkJSONSceneExporter_GetWriteTextureLODs, METH_VARARGS,
   "GetWriteTextureLODs(self) -> bool\nC++: virtual bool GetWriteTextureLODs()\n\n"},
  {"SetTextureLODsBaseSize", PyvtkJSONSceneExporter_SetTextureLODsBaseSize, METH_VARARGS,
   "SetTextureLODsBaseSize(self, _arg:int) -> None\nC++: virtual void SetTextureLODsBaseSize(size_t _arg)\n\nThe base size to be used for texture LODs. The texture LODs will\nstop being written out when one is smaller than this size.\nDefault is 100 KB. Units are in bytes.\n"},
  {"GetTextureLODsBaseSize", PyvtkJSONSceneExporter_GetTextureLODsBaseSize, METH_VARARGS,
   "GetTextureLODsBaseSize(self) -> int\nC++: virtual size_t GetTextureLODsBaseSize()\n\n"},
  {"SetTextureLODsBaseUrl", PyvtkJSONSceneExporter_SetTextureLODsBaseUrl, METH_VARARGS,
   "SetTextureLODsBaseUrl(self, _arg:str) -> None\nC++: virtual void SetTextureLODsBaseUrl(const char *_arg)\n\nThe base URL to be used for texture LODs. Default is nullptr.\n"},
  {"GetTextureLODsBaseUrl", PyvtkJSONSceneExporter_GetTextureLODsBaseUrl, METH_VARARGS,
   "GetTextureLODsBaseUrl(self) -> str\nC++: virtual char *GetTextureLODsBaseUrl()\n\n"},
  {"SetWritePolyLODs", PyvtkJSONSceneExporter_SetWritePolyLODs, METH_VARARGS,
   "SetWritePolyLODs(self, _arg:bool) -> None\nC++: virtual void SetWritePolyLODs(bool _arg)\n\nWhether or not to write poly LODs. This will write out the poly\nLOD sources in a series of decreasing resolution data sets, which\nare intended to be uploaded to the web. vtkQuadricCluster is used\nto decrease the resolution of the poly data. Each will be\napproximately 1/4 the size of the previous one (unless certain\nerrors occur, and then the defaults for quadric clustering will\nbe used, which will produce an unknown size). The files will stop\nbeing written out when one is smaller than the PolyLODsBaseSize,\nor if the difference in the sizes of the two most recent LODs is\nless than 5%. The smallest LOD will be written into the vtkjs\nfile, rather than with the rest of the LODs. Default is false.\n"},
  {"GetWritePolyLODs", PyvtkJSONSceneExporter_GetWritePolyLODs, METH_VARARGS,
   "GetWritePolyLODs(self) -> bool\nC++: virtual bool GetWritePolyLODs()\n\n"},
  {"SetPolyLODsBaseSize", PyvtkJSONSceneExporter_SetPolyLODsBaseSize, METH_VARARGS,
   "SetPolyLODsBaseSize(self, _arg:int) -> None\nC++: virtual void SetPolyLODsBaseSize(size_t _arg)\n\nThe base size to be used for poly LODs. The poly LODs will stop\nbeing written out when one is smaller than this size, or if the\ndifference in the sizes of the two most recent LODs is less than\n5%. Default is 100 KB. Units are in bytes.\n"},
  {"GetPolyLODsBaseSize", PyvtkJSONSceneExporter_GetPolyLODsBaseSize, METH_VARARGS,
   "GetPolyLODsBaseSize(self) -> int\nC++: virtual size_t GetPolyLODsBaseSize()\n\n"},
  {"SetPolyLODsBaseUrl", PyvtkJSONSceneExporter_SetPolyLODsBaseUrl, METH_VARARGS,
   "SetPolyLODsBaseUrl(self, _arg:str) -> None\nC++: virtual void SetPolyLODsBaseUrl(const char *_arg)\n\nThe base URL to be used for poly LODs. Default is nullptr.\n"},
  {"GetPolyLODsBaseUrl", PyvtkJSONSceneExporter_GetPolyLODsBaseUrl, METH_VARARGS,
   "GetPolyLODsBaseUrl(self) -> str\nC++: virtual char *GetPolyLODsBaseUrl()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkJSONSceneExporter_Doc =
  "vtkJSONSceneExporter - Export the content of a vtkRenderWindow into a\ndirectory with\n         a JSON meta file describing the scene along with the http\ndatasets\n\n"
  "Superclass: vtkExporter\n\n"
  "@warning\n"
  "This writer assume LittleEndian by default. Additional work should be\n"
  "done to properly handle endianness.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkJSONSceneExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkJSONSceneExporter", // tp_name
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
  PyvtkJSONSceneExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkJSONSceneExporter_StaticNew()
{
  return vtkJSONSceneExporter::New();
}

PyObject *PyvtkJSONSceneExporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkJSONSceneExporter_Type, PyvtkJSONSceneExporter_Methods,
    "vtkJSONSceneExporter",
 &PyvtkJSONSceneExporter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkJSONSceneExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkJSONSceneExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkJSONSceneExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}


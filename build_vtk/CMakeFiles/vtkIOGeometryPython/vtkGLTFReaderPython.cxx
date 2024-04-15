// python wrapper for vtkGLTFReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGLTFReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGLTFReader(PyObject *dict); }
extern "C" { PyObject *PyvtkGLTFReader_ClassNew(); }


static PyObject *
PyvtkGLTFReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGLTFReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGLTFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGLTFReader *tempr = vtkGLTFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGLTFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGLTFReader::NewInstance());

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
PyvtkGLTFReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGLTFReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGLTFReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetNumberOfTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTextures() :
      op->vtkGLTFReader::GetNumberOfTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

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
      op->vtkGLTFReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkGLTFReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_SetStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  vtkResourceStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResourceStream"))
  {
    if (ap.IsBound())
    {
      op->SetStream(temp0);
    }
    else
    {
      op->vtkGLTFReader::SetStream(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResourceStream *tempr = (ap.IsBound() ?
      op->GetStream() :
      op->vtkGLTFReader::GetStream());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_SetURILoader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURILoader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  vtkURILoader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURILoader"))
  {
    if (ap.IsBound())
    {
      op->SetURILoader(temp0);
    }
    else
    {
      op->vtkGLTFReader::SetURILoader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetURILoader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURILoader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkURILoader *tempr = (ap.IsBound() ?
      op->GetURILoader() :
      op->vtkGLTFReader::GetURILoader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_SetApplyDeformationsToGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyDeformationsToGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetApplyDeformationsToGeometry(temp0);
    }
    else
    {
      op->vtkGLTFReader::SetApplyDeformationsToGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetApplyDeformationsToGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyDeformationsToGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetApplyDeformationsToGeometry() :
      op->vtkGLTFReader::GetApplyDeformationsToGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_ApplyDeformationsToGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDeformationsToGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyDeformationsToGeometryOn();
    }
    else
    {
      op->vtkGLTFReader::ApplyDeformationsToGeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_ApplyDeformationsToGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDeformationsToGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyDeformationsToGeometryOff();
    }
    else
    {
      op->vtkGLTFReader::ApplyDeformationsToGeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetNumberOfAnimations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfAnimations() :
      op->vtkGLTFReader::GetNumberOfAnimations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetAnimationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAnimationName(temp0) :
      op->vtkGLTFReader::GetAnimationName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetAnimationDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAnimationDuration(temp0) :
      op->vtkGLTFReader::GetAnimationDuration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_EnableAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableAnimation(temp0);
    }
    else
    {
      op->vtkGLTFReader::EnableAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_DisableAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableAnimation(temp0);
    }
    else
    {
      op->vtkGLTFReader::DisableAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_IsAnimationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnimationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnimationEnabled(temp0) :
      op->vtkGLTFReader::IsAnimationEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetSceneName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSceneName(temp0) :
      op->vtkGLTFReader::GetSceneName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetNumberOfScenes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScenes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfScenes() :
      op->vtkGLTFReader::GetNumberOfScenes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetCurrentScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCurrentScene() :
      op->vtkGLTFReader::GetCurrentScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_SetCurrentScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentScene(temp0);
    }
    else
    {
      op->vtkGLTFReader::SetCurrentScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScene(temp0);
    }
    else
    {
      op->vtkGLTFReader::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrameRate() :
      op->vtkGLTFReader::GetFrameRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_SetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameRate(temp0);
    }
    else
    {
      op->vtkGLTFReader::SetFrameRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetAllSceneNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllSceneNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAllSceneNames() :
      op->vtkGLTFReader::GetAllSceneNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFReader_GetAnimationSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFReader *op = static_cast<vtkGLTFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetAnimationSelection() :
      op->vtkGLTFReader::GetAnimationSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGLTFReader_Methods[] = {
  {"IsTypeOf", PyvtkGLTFReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGLTFReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGLTFReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGLTFReader\nC++: static vtkGLTFReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGLTFReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGLTFReader\nC++: vtkGLTFReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGLTFReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGLTFReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfTextures", PyvtkGLTFReader_GetNumberOfTextures, METH_VARARGS,
   "GetNumberOfTextures(self) -> int\nC++: vtkIdType GetNumberOfTextures()\n\n"},
  {"SetFileName", PyvtkGLTFReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the name of the file from which to read points.\n"},
  {"GetFileName", PyvtkGLTFReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetStream", PyvtkGLTFReader_SetStream, METH_VARARGS,
   "SetStream(self, _arg:vtkResourceStream) -> None\nC++: virtual void SetStream(vtkResourceStream *_arg)\n\nSet/Get the stream from which to read the glTF. If Stream is not\nnullptr, it will have priority against FileName\n"},
  {"GetStream", PyvtkGLTFReader_GetStream, METH_VARARGS,
   "GetStream(self) -> vtkResourceStream\nC++: virtual vtkResourceStream *GetStream()\n\n"},
  {"SetURILoader", PyvtkGLTFReader_SetURILoader, METH_VARARGS,
   "SetURILoader(self, _arg:vtkURILoader) -> None\nC++: virtual void SetURILoader(vtkURILoader *_arg)\n\nSet/Get the URI loader to use when reading from a Stream.\n`URILoader` will be used to locate and load other files\nreferenced in the glTF file. If no URI loader is set when reading\nthrough a stream, only single file glTF can be read.\n"},
  {"GetURILoader", PyvtkGLTFReader_GetURILoader, METH_VARARGS,
   "GetURILoader(self) -> vtkURILoader\nC++: virtual vtkURILoader *GetURILoader()\n\n"},
  {"SetApplyDeformationsToGeometry", PyvtkGLTFReader_SetApplyDeformationsToGeometry, METH_VARARGS,
   "SetApplyDeformationsToGeometry(self, flag:bool) -> None\nC++: void SetApplyDeformationsToGeometry(bool flag)\n\nThe model's skinning transforms are computed and added to the different vtkPolyData\nobjects' field data. If this flag is set to true, the reader will\napply those skinning transforms to the model's geometry.\n"},
  {"GetApplyDeformationsToGeometry", PyvtkGLTFReader_GetApplyDeformationsToGeometry, METH_VARARGS,
   "GetApplyDeformationsToGeometry(self) -> bool\nC++: virtual bool GetApplyDeformationsToGeometry()\n\n"},
  {"ApplyDeformationsToGeometryOn", PyvtkGLTFReader_ApplyDeformationsToGeometryOn, METH_VARARGS,
   "ApplyDeformationsToGeometryOn(self) -> None\nC++: virtual void ApplyDeformationsToGeometryOn()\n\n"},
  {"ApplyDeformationsToGeometryOff", PyvtkGLTFReader_ApplyDeformationsToGeometryOff, METH_VARARGS,
   "ApplyDeformationsToGeometryOff(self) -> None\nC++: virtual void ApplyDeformationsToGeometryOff()\n\n"},
  {"GetNumberOfAnimations", PyvtkGLTFReader_GetNumberOfAnimations, METH_VARARGS,
   "GetNumberOfAnimations(self) -> int\nC++: virtual vtkIdType GetNumberOfAnimations()\n\nglTF models can contain multiple animations, with various names\nand duration. glTF does not specify however any runtime behavior\n(order of playing, auto-start, loops, mapping of timelines, etc),\nwhich is why no animation is enabled by default. These accessors\nexpose metadata information about a model's available animations.\n"},
  {"GetAnimationName", PyvtkGLTFReader_GetAnimationName, METH_VARARGS,
   "GetAnimationName(self, animationIndex:int) -> str\nC++: std::string GetAnimationName(vtkIdType animationIndex)\n\n"},
  {"GetAnimationDuration", PyvtkGLTFReader_GetAnimationDuration, METH_VARARGS,
   "GetAnimationDuration(self, animationIndex:int) -> float\nC++: float GetAnimationDuration(vtkIdType animationIndex)\n\n"},
  {"EnableAnimation", PyvtkGLTFReader_EnableAnimation, METH_VARARGS,
   "EnableAnimation(self, animationIndex:int) -> None\nC++: void EnableAnimation(vtkIdType animationIndex)\n\nEnable/Disable an animation. The reader will apply all enabled\nanimations to the model's transformations, at the specified time\nstep. Use UPDATE_TIME_STEP to select which frame should be\napplied.\n"},
  {"DisableAnimation", PyvtkGLTFReader_DisableAnimation, METH_VARARGS,
   "DisableAnimation(self, animationIndex:int) -> None\nC++: void DisableAnimation(vtkIdType animationIndex)\n\n"},
  {"IsAnimationEnabled", PyvtkGLTFReader_IsAnimationEnabled, METH_VARARGS,
   "IsAnimationEnabled(self, animationIndex:int) -> bool\nC++: bool IsAnimationEnabled(vtkIdType animationIndex)\n\n"},
  {"GetSceneName", PyvtkGLTFReader_GetSceneName, METH_VARARGS,
   "GetSceneName(self, sceneIndex:int) -> str\nC++: std::string GetSceneName(vtkIdType sceneIndex)\n\nglTF models can contain multiple scene descriptions. These\naccessors expose metadata information about a model's available\nscenes.\n"},
  {"GetNumberOfScenes", PyvtkGLTFReader_GetNumberOfScenes, METH_VARARGS,
   "GetNumberOfScenes(self) -> int\nC++: virtual vtkIdType GetNumberOfScenes()\n\n"},
  {"GetCurrentScene", PyvtkGLTFReader_GetCurrentScene, METH_VARARGS,
   "GetCurrentScene(self) -> int\nC++: virtual vtkIdType GetCurrentScene()\n\nGet/Set the scene to be used by the reader\n"},
  {"SetCurrentScene", PyvtkGLTFReader_SetCurrentScene, METH_VARARGS,
   "SetCurrentScene(self, _arg:int) -> None\nC++: virtual void SetCurrentScene(vtkIdType _arg)\n\n"},
  {"SetScene", PyvtkGLTFReader_SetScene, METH_VARARGS,
   "SetScene(self, scene:str) -> None\nC++: void SetScene(const std::string &scene)\n\n"},
  {"GetFrameRate", PyvtkGLTFReader_GetFrameRate, METH_VARARGS,
   "GetFrameRate(self) -> int\nC++: virtual unsigned int GetFrameRate()\n\nGet/Set the rate at which animations will be sampled: the glTF\nformat does not have the concept of static timesteps. TimeSteps\nare generated, during the REQUEST_INFORMATION pass, as linearly\ninterpolated time values between 0s and the animations' maximum\ndurations, sampled at the specified frame rate. Use the\nTIME_STEPS information key to obtain integer indices to each of\nthese steps. Set to 0 to not set any TIME_STEPS and only provide\na TIME_RANGE.\n"},
  {"SetFrameRate", PyvtkGLTFReader_SetFrameRate, METH_VARARGS,
   "SetFrameRate(self, _arg:int) -> None\nC++: virtual void SetFrameRate(unsigned int _arg)\n\n"},
  {"GetAllSceneNames", PyvtkGLTFReader_GetAllSceneNames, METH_VARARGS,
   "GetAllSceneNames(self) -> vtkStringArray\nC++: vtkStringArray *GetAllSceneNames()\n\nGet a list all scenes names as a vtkStringArray, with duplicate\nnames numbered and empty names replaced by a generic name. All\nnames are guaranteed to be unique, and their index in the array\nmatches the glTF document's scene indices.\n"},
  {"GetAnimationSelection", PyvtkGLTFReader_GetAnimationSelection, METH_VARARGS,
   "GetAnimationSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetAnimationSelection()\n\nGet the vtkDataArraySelection object to enable/disable\nanimations.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGLTFReader_Doc =
  "vtkGLTFReader - Read a GLTF file.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkGLTFReader is a concrete subclass of vtkMultiBlockDataSetAlgorithm\n"
  "that reads glTF 2.0 files.\n\n"
  "The GL Transmission Format (glTF) is an API-neutral runtime asset\n"
  "delivery format. A glTF asset is represented by:\n"
  "- A JSON-formatted file (.gltf) containing a full scene description:\n"
  "  node hierarchy, materials, cameras, as well as descriptor\n"
  "  information for meshes, animations, and other constructs\n"
  "- Binary files (.bin) containing geometry and animation data, and\n"
  "  other buffer-based data\n"
  "- Image files (.jpg, .png) for textures\n\n"
  "This reader currently outputs a vtkMultiBlockDataSet containing\n"
  "geometry information for the current selected scene, with animations,\n"
  "skins and morph targets applied, unless configured not to (see\n"
  "ApplyDeformationsToGeometry).\n\n"
  "It is possible to get information about available scenes and\n"
  "animations by using the corresponding accessors. To use animations,\n"
  "first call SetFramerate with a non-zero value, then use\n"
  "EnableAnimation or DisableAnimation to configure which animations you\n"
  "would like to apply to the geometry. Finally, use UPDATE_TIME_STEPS\n"
  "to choose which frame to apply. If ApplyDeformationsToGeometry is set\n"
  "to true, the reader will apply the deformations, otherwise, animation\n"
  "transformation information will be saved to the dataset's FieldData.\n\n"
  "Materials are currently not supported in this reader. If you would\n"
  "like to display materials, please try using vtkGLTFImporter. You\n"
  "could also use vtkGLTFReader::GetGLTFTexture, to access the image\n"
  "data that was loaded from the glTF 2.0 document.\n\n"
  "This reader only supports assets that use the 2.x version of the glTF\n"
  "specification.\n\n"
  "If Stream is not nullptr, it will have priority against FileName.\n\n"
  "For the full glTF specification, see:\n"
  "https://github.com/KhronosGroup/glTF/tree/master/specification/2.0\n\n"
  "Note: array sizes should not exceed INT_MAX\n\n"
  "@sa\n"
  "vtkMultiBlockDataSetAlgorithm vtkGLTFImporter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLTFReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkGLTFReader", // tp_name
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
  PyvtkGLTFReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGLTFReader_StaticNew()
{
  return vtkGLTFReader::New();
}

PyObject *PyvtkGLTFReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGLTFReader_Type, PyvtkGLTFReader_Methods,
    "vtkGLTFReader",
 &PyvtkGLTFReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGLTFReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGLTFReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGLTFReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


// python wrapper for vtkGLTFImporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkGLTFImporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGLTFImporter(PyObject *dict); }
extern "C" { PyObject *PyvtkGLTFImporter_ClassNew(); }

#ifndef DECLARED_PyvtkImporter_ClassNew
extern "C" { PyObject *PyvtkImporter_ClassNew(); }
#define DECLARED_PyvtkImporter_ClassNew
#endif

static PyObject *
PyvtkGLTFImporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGLTFImporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGLTFImporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGLTFImporter *tempr = vtkGLTFImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGLTFImporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGLTFImporter::NewInstance());

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
PyvtkGLTFImporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGLTFImporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGLTFImporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

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
      op->vtkGLTFImporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkGLTFImporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkCamera> tempr = (ap.IsBound() ?
      op->GetCamera(temp0) :
      op->vtkGLTFImporter::GetCamera(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetOutputsDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputsDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputsDescription() :
      op->vtkGLTFImporter::GetOutputsDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_UpdateTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateTimeStep(temp0);
    }
    else
    {
      op->vtkGLTFImporter::UpdateTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetNumberOfAnimations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfAnimations() :
      op->vtkGLTFImporter::GetNumberOfAnimations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetAnimationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAnimationName(temp0) :
      op->vtkGLTFImporter::GetAnimationName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_EnableAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

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
      op->vtkGLTFImporter::EnableAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_DisableAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

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
      op->vtkGLTFImporter::DisableAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_IsAnimationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnimationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnimationEnabled(temp0) :
      op->vtkGLTFImporter::IsAnimationEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetNumberOfCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCameras() :
      op->vtkGLTFImporter::GetNumberOfCameras());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetCameraName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCameraName(temp0) :
      op->vtkGLTFImporter::GetCameraName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkGLTFImporter::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFImporter_GetTemporalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTemporalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFImporter *op = static_cast<vtkGLTFImporter *>(vp);

  long long temp0;
  double temp1;
  int temp2;
  const size_t size3 = 2;
  double temp3[2];
  double save3[2];
  vtkDoubleArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkDoubleArray"))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->GetTemporalInformation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkGLTFImporter::GetTemporalInformation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGLTFImporter_Methods[] = {
  {"IsTypeOf", PyvtkGLTFImporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGLTFImporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGLTFImporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGLTFImporter\nC++: static vtkGLTFImporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGLTFImporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGLTFImporter\nC++: vtkGLTFImporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGLTFImporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGLTFImporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkGLTFImporter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the name of the file to read.\n"},
  {"GetFileName", PyvtkGLTFImporter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetCamera", PyvtkGLTFImporter_GetCamera, METH_VARARGS,
   "GetCamera(self, id:int) -> vtkCamera\nC++: vtkSmartPointer<vtkCamera> GetCamera(unsigned int id)\n\nglTF defines multiple camera objects, but no default behavior for\nwhich camera should be used. The importer will by default apply\nthe asset's first camera. This accessor lets you use the asset's\nother cameras.\n"},
  {"GetOutputsDescription", PyvtkGLTFImporter_GetOutputsDescription, METH_VARARGS,
   "GetOutputsDescription(self) -> str\nC++: std::string GetOutputsDescription() override;\n\nGet a printable string describing all outputs\n"},
  {"UpdateTimeStep", PyvtkGLTFImporter_UpdateTimeStep, METH_VARARGS,
   "UpdateTimeStep(self, timeValue:float) -> None\nC++: void UpdateTimeStep(double timeValue) override;\n\nupdate timestep\n"},
  {"GetNumberOfAnimations", PyvtkGLTFImporter_GetNumberOfAnimations, METH_VARARGS,
   "GetNumberOfAnimations(self) -> int\nC++: vtkIdType GetNumberOfAnimations() override;\n\nGet the number of available animations.\n"},
  {"GetAnimationName", PyvtkGLTFImporter_GetAnimationName, METH_VARARGS,
   "GetAnimationName(self, animationIndex:int) -> str\nC++: std::string GetAnimationName(vtkIdType animationIndex)\n    override;\n\nReturn the name of the animation.\n"},
  {"EnableAnimation", PyvtkGLTFImporter_EnableAnimation, METH_VARARGS,
   "EnableAnimation(self, animationIndex:int) -> None\nC++: void EnableAnimation(vtkIdType animationIndex) override;\n\nEnable/Disable/Get the status of specific animations\n"},
  {"DisableAnimation", PyvtkGLTFImporter_DisableAnimation, METH_VARARGS,
   "DisableAnimation(self, animationIndex:int) -> None\nC++: void DisableAnimation(vtkIdType animationIndex) override;\n\n"},
  {"IsAnimationEnabled", PyvtkGLTFImporter_IsAnimationEnabled, METH_VARARGS,
   "IsAnimationEnabled(self, animationIndex:int) -> bool\nC++: bool IsAnimationEnabled(vtkIdType animationIndex) override;\n\n"},
  {"GetNumberOfCameras", PyvtkGLTFImporter_GetNumberOfCameras, METH_VARARGS,
   "GetNumberOfCameras(self) -> int\nC++: vtkIdType GetNumberOfCameras() override;\n\nGet the number of available cameras.\n"},
  {"GetCameraName", PyvtkGLTFImporter_GetCameraName, METH_VARARGS,
   "GetCameraName(self, camIndex:int) -> str\nC++: std::string GetCameraName(vtkIdType camIndex) override;\n\nGet the name of a camera.\n"},
  {"SetCamera", PyvtkGLTFImporter_SetCamera, METH_VARARGS,
   "SetCamera(self, camIndex:int) -> None\nC++: void SetCamera(vtkIdType camIndex) override;\n\nEnable a specific camera. If a negative index is provided, no\ncamera from the importer is used.\n"},
  {"GetTemporalInformation", PyvtkGLTFImporter_GetTemporalInformation, METH_VARARGS,
   "GetTemporalInformation(self, animationIndex:int, frameRate:float,\n    nbTimeSteps:int, timeRange:[float, float],\n    timeSteps:vtkDoubleArray) -> bool\nC++: bool GetTemporalInformation(vtkIdType animationIndex,\n    double frameRate, int &nbTimeSteps, double timeRange[2],\n    vtkDoubleArray *timeSteps) override;\n\nGet temporal information for the provided animationIndex and\nframeRate. frameRate is used to define the number of frames for\none second of simulation, set to zero if timeSteps are not\nneeded. If animation is present in the dataset, timeRange will be\nset by this method, return true. If animation is present and\nframeRate > 0, nbTimeSteps and timeSteps will also be set, return\ntrue. If animation is not present, return false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGLTFImporter_Doc =
  "vtkGLTFImporter - Import a GLTF file.\n\n"
  "Superclass: vtkImporter\n\n"
  "vtkGLTFImporter is a concrete subclass of vtkImporter that reads glTF\n"
  "2.0 files.\n\n"
  "The GL Transmission Format (glTF) is an API-neutral runtime asset\n"
  "delivery format. A glTF asset is represented by:\n"
  "- A JSON-formatted file (.gltf) containing a full scene description:\n"
  "  node hierarchy, materials, cameras, as well as descriptor\n"
  "  information for meshes, animations, and other constructs\n"
  "- Binary files (.bin) containing geometry and animation data, and\n"
  "  other buffer-based data\n"
  "- Image files (.jpg, .png) for textures\n\n"
  "This importer supports all physically-based rendering material\n"
  "features, with the exception of alpha masking and mirrored texture\n"
  "wrapping, which are not supported.\n\n"
  "This importer does not support materials that use multiple sets of\n"
  "texture coordinates. Only the first set will be used in this case.\n\n"
  "This importer does not support animations, morphing and skinning. If\n"
  "you would like to use animations, morphing or skinning, please\n"
  "consider using vtkGLTFReader.\n\n"
  "This importer only supports assets that use the 2.x version of the\n"
  "glTF specification.\n\n"
  "For the full glTF specification, see:\n"
  "https://github.com/KhronosGroup/glTF/tree/master/specification/2.0\n\n"
  "Note: array sizes should not exceed INT_MAX\n\n"
  "Supported extensions:\n"
  "- KHR_lights_punctual : The importer supports the KHR_lights_punctual\n"
  "extension except for this feature:\n"
  "- VTK does not support changing the falloff of the cone with\n"
  "  innerConeAngle and outerConeAngle. The importer uses outerConeAngle\n"
  "and ignores innerConeAngle as specified for this situation.\n\n"
  "@sa\n"
  "vtkImporter vtkGLTFReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLTFImporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtkGLTFImporter", // tp_name
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
  PyvtkGLTFImporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGLTFImporter_StaticNew()
{
  return vtkGLTFImporter::New();
}

PyObject *PyvtkGLTFImporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGLTFImporter_Type, PyvtkGLTFImporter_Methods,
    "vtkGLTFImporter",
 &PyvtkGLTFImporter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGLTFImporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGLTFImporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGLTFImporter", o) != 0)
  {
    Py_DECREF(o);
  }

}


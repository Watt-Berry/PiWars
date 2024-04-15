// python wrapper for vtkImporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImporter(PyObject *dict); }
extern "C" { PyObject *PyvtkImporter_ClassNew(); }


static PyObject *
PyvtkImporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImporter *tempr = vtkImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImporter::NewInstance());

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
PyvtkImporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkImporter::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkImporter::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkImporter::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Read();
    }
    else
    {
      op->vtkImporter::Read();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkImporter::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetOutputsDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputsDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputsDescription() :
      op->vtkImporter::GetOutputsDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetNumberOfAnimations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfAnimations() :
      op->vtkImporter::GetNumberOfAnimations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetAnimationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAnimationName(temp0) :
      op->vtkImporter::GetAnimationName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_EnableAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

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
      op->vtkImporter::EnableAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_DisableAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

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
      op->vtkImporter::DisableAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_IsAnimationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnimationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnimationEnabled(temp0) :
      op->vtkImporter::IsAnimationEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetNumberOfCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCameras() :
      op->vtkImporter::GetNumberOfCameras());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetCameraName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCameraName(temp0) :
      op->vtkImporter::GetCameraName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

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
      op->vtkImporter::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetTemporalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTemporalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

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
      op->vtkImporter::GetTemporalInformation(temp0, temp1, temp2, temp3, temp4));

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


static PyObject *
PyvtkImporter_UpdateTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

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
      op->vtkImporter::UpdateTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImporter_Methods[] = {
  {"IsTypeOf", PyvtkImporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImporter\nC++: static vtkImporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImporter\nC++: vtkImporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetRenderer", PyvtkImporter_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nGet the renderer that contains the imported actors, cameras and\nlights.\n"},
  {"SetRenderWindow", PyvtkImporter_SetRenderWindow, METH_VARARGS,
   "SetRenderWindow(self, __a:vtkRenderWindow) -> None\nC++: virtual void SetRenderWindow(vtkRenderWindow *)\n\nSet the vtkRenderWindow to contain the imported actors, cameras\nand lights, If no vtkRenderWindow is set, one will be created and\ncan be obtained with the GetRenderWindow method. If the\nvtkRenderWindow has been specified, the first vtkRenderer it has\nwill be used to import the objects. If the vtkRenderWindow has no\nRenderer, one will be created and can be accessed using\nGetRenderer.\n"},
  {"GetRenderWindow", PyvtkImporter_GetRenderWindow, METH_VARARGS,
   "GetRenderWindow(self) -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\n"},
  {"Read", PyvtkImporter_Read, METH_VARARGS,
   "Read(self) -> None\nC++: void Read()\n\nImport the actors, cameras, lights and properties into a\nvtkRenderWindow.\n"},
  {"Update", PyvtkImporter_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update()\n\n"},
  {"GetOutputsDescription", PyvtkImporter_GetOutputsDescription, METH_VARARGS,
   "GetOutputsDescription(self) -> str\nC++: virtual std::string GetOutputsDescription()\n\nRecover a printable string that let importer implementation\nDescribe their outputs.\n"},
  {"GetNumberOfAnimations", PyvtkImporter_GetNumberOfAnimations, METH_VARARGS,
   "GetNumberOfAnimations(self) -> int\nC++: virtual vtkIdType GetNumberOfAnimations()\n\nGet the number of available animations. Return -1 if not provided\nby implementation.\n"},
  {"GetAnimationName", PyvtkImporter_GetAnimationName, METH_VARARGS,
   "GetAnimationName(self, animationIndex:int) -> str\nC++: virtual std::string GetAnimationName(\n    vtkIdType animationIndex)\n\nGet the name of an animation. Return an empty if not provided by\nimplementation.\n"},
  {"EnableAnimation", PyvtkImporter_EnableAnimation, METH_VARARGS,
   "EnableAnimation(self, animationIndex:int) -> None\nC++: virtual void EnableAnimation(vtkIdType animationIndex)\n\nEnable/Disable/Get the status of specific animations\n"},
  {"DisableAnimation", PyvtkImporter_DisableAnimation, METH_VARARGS,
   "DisableAnimation(self, animationIndex:int) -> None\nC++: virtual void DisableAnimation(vtkIdType animationIndex)\n\n"},
  {"IsAnimationEnabled", PyvtkImporter_IsAnimationEnabled, METH_VARARGS,
   "IsAnimationEnabled(self, animationIndex:int) -> bool\nC++: virtual bool IsAnimationEnabled(vtkIdType animationIndex)\n\n"},
  {"GetNumberOfCameras", PyvtkImporter_GetNumberOfCameras, METH_VARARGS,
   "GetNumberOfCameras(self) -> int\nC++: virtual vtkIdType GetNumberOfCameras()\n\nGet the number of available cameras. Return 0 if not provided by\nimplementation.\n"},
  {"GetCameraName", PyvtkImporter_GetCameraName, METH_VARARGS,
   "GetCameraName(self, camIndex:int) -> str\nC++: virtual std::string GetCameraName(vtkIdType camIndex)\n\nGet the name of a camera. Return an empty string if not provided\nby implementation.\n"},
  {"SetCamera", PyvtkImporter_SetCamera, METH_VARARGS,
   "SetCamera(self, camIndex:int) -> None\nC++: virtual void SetCamera(vtkIdType camIndex)\n\nEnable a specific camera. If a negative index is provided, no\ncamera from the importer is used. Does nothing if not provided by\nimplementation.\n"},
  {"GetTemporalInformation", PyvtkImporter_GetTemporalInformation, METH_VARARGS,
   "GetTemporalInformation(self, animationIndex:int, frameRate:float,\n    nbTimeSteps:int, timeRange:[float, float],\n    timeSteps:vtkDoubleArray) -> bool\nC++: virtual bool GetTemporalInformation(vtkIdType animationIndex,\n     double frameRate, int &nbTimeSteps, double timeRange[2],\n    vtkDoubleArray *timeSteps)\n\nGet temporal information for the provided animationIndex and\nframeRate. This implementation return false, but concrete classe\nimplementation behavior is as follows. frameRate is used to\ndefine the number of frames for one second of simulation, set to\nzero if timeSteps are not needed. If animation is present in the\ndataset, timeRange should be set by this method, return true. If\nanimation is present and frameRate > 0, nbTimeSteps and timeSteps\nshould also be set, return true. If animation is not present,\nreturn false.\n"},
  {"UpdateTimeStep", PyvtkImporter_UpdateTimeStep, METH_VARARGS,
   "UpdateTimeStep(self, timeValue:float) -> None\nC++: virtual void UpdateTimeStep(double timeValue)\n\nImport the actors, camera, lights and properties at a specific\ntime value. If not reimplemented, only call Update().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImporter_Doc =
  "vtkImporter - importer abstract class\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImporter is an abstract class that specifies the protocol for\n"
  "importing actors, cameras, lights and properties into a\n"
  "vtkRenderWindow. The following takes place:\n"
  "1) Create a RenderWindow and Renderer if none is provided.\n"
  "2) Call ImportBegin, if ImportBegin returns False, return\n"
  "3) Call ReadData, which calls: a) Import the Actors b) Import the\n"
  "   cameras c) Import the lights d) Import the Properties\n"
  "7) Call ImportEnd\n\n"
  "Subclasses optionally implement the ImportActors, ImportCameras,\n"
  "ImportLights and ImportProperties or ReadData methods. An ImportBegin\n"
  "and ImportEnd can optionally be provided to perform Importer-specific\n"
  "initialization and termination.  The Read method initiates the import\n"
  "process. If a RenderWindow is provided, its Renderer will contained\n"
  "the imported objects. If the RenderWindow has no Renderer, one is\n"
  "created. If no RenderWindow is provided, both a RenderWindow and\n"
  "Renderer will be created. Both the RenderWindow and Renderer can be\n"
  "accessed using Get methods.\n\n"
  "@sa\n"
  "vtk3DSImporter vtkExporter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtkImporter", // tp_name
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
  PyvtkImporter_Doc, // tp_doc
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

PyObject *PyvtkImporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImporter_Type, PyvtkImporter_Methods,
    "vtkImporter",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImporter", o) != 0)
  {
    Py_DECREF(o);
  }

}


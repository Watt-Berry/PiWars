// python wrapper for vtkAnimationScene
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAnimationScene.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnimationScene(PyObject *dict); }
extern "C" { PyObject *PyvtkAnimationScene_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnimationScene_PlayModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAnimationScene.PlayModes", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkAnimationScene_PlayModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAnimationScene_PlayModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAnimationScene_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnimationScene::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnimationScene::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnimationScene *tempr = vtkAnimationScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnimationScene *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnimationScene::NewInstance());

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
PyvtkAnimationScene_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAnimationScene::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAnimationScene::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlayMode(temp0);
    }
    else
    {
      op->vtkAnimationScene::SetPlayMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetModeToSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToSequence();
    }
    else
    {
      op->vtkAnimationScene::SetModeToSequence();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetModeToRealTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToRealTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToRealTime();
    }
    else
    {
      op->vtkAnimationScene::SetModeToRealTime();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlayMode() :
      op->vtkAnimationScene::GetPlayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double temp0;
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
      op->vtkAnimationScene::SetFrameRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFrameRate() :
      op->vtkAnimationScene::GetFrameRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_AddCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationCue *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
  {
    if (ap.IsBound())
    {
      op->AddCue(temp0);
    }
    else
    {
      op->vtkAnimationScene::AddCue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_RemoveCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationCue *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
  {
    if (ap.IsBound())
    {
      op->RemoveCue(temp0);
    }
    else
    {
      op->vtkAnimationScene::RemoveCue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_RemoveAllCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCues();
    }
    else
    {
      op->vtkAnimationScene::RemoveAllCues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetNumberOfCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCues() :
      op->vtkAnimationScene::GetNumberOfCues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Play();
    }
    else
    {
      op->vtkAnimationScene::Play();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkAnimationScene::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoop(temp0);
    }
    else
    {
      op->vtkAnimationScene::SetLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkAnimationScene::GetLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationTime(temp0);
    }
    else
    {
      op->vtkAnimationScene::SetAnimationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeMode(temp0);
    }
    else
    {
      op->vtkAnimationScene::SetTimeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_IsInPlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsInPlay() :
      op->vtkAnimationScene::IsInPlay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnimationScene_Methods[] = {
  {"IsTypeOf", PyvtkAnimationScene_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnimationScene_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnimationScene_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAnimationScene\nC++: static vtkAnimationScene *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnimationScene_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAnimationScene\nC++: vtkAnimationScene *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAnimationScene_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAnimationScene_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPlayMode", PyvtkAnimationScene_SetPlayMode, METH_VARARGS,
   "SetPlayMode(self, _arg:int) -> None\nC++: virtual void SetPlayMode(int _arg)\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {"SetModeToSequence", PyvtkAnimationScene_SetModeToSequence, METH_VARARGS,
   "SetModeToSequence(self) -> None\nC++: void SetModeToSequence()\n\n"},
  {"SetModeToRealTime", PyvtkAnimationScene_SetModeToRealTime, METH_VARARGS,
   "SetModeToRealTime(self) -> None\nC++: void SetModeToRealTime()\n\n"},
  {"GetPlayMode", PyvtkAnimationScene_GetPlayMode, METH_VARARGS,
   "GetPlayMode(self) -> int\nC++: virtual int GetPlayMode()\n\n"},
  {"SetFrameRate", PyvtkAnimationScene_SetFrameRate, METH_VARARGS,
   "SetFrameRate(self, _arg:float) -> None\nC++: virtual void SetFrameRate(double _arg)\n\nGet/Set the frame rate (in frames per second). This parameter\naffects only in the Sequence mode. The time interval indicated to\neach cue on every tick is progressed by 1/frame-rate seconds.\n"},
  {"GetFrameRate", PyvtkAnimationScene_GetFrameRate, METH_VARARGS,
   "GetFrameRate(self) -> float\nC++: virtual double GetFrameRate()\n\n"},
  {"AddCue", PyvtkAnimationScene_AddCue, METH_VARARGS,
   "AddCue(self, cue:vtkAnimationCue) -> None\nC++: void AddCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"RemoveCue", PyvtkAnimationScene_RemoveCue, METH_VARARGS,
   "RemoveCue(self, cue:vtkAnimationCue) -> None\nC++: void RemoveCue(vtkAnimationCue *cue)\n\n"},
  {"RemoveAllCues", PyvtkAnimationScene_RemoveAllCues, METH_VARARGS,
   "RemoveAllCues(self) -> None\nC++: void RemoveAllCues()\n\n"},
  {"GetNumberOfCues", PyvtkAnimationScene_GetNumberOfCues, METH_VARARGS,
   "GetNumberOfCues(self) -> int\nC++: int GetNumberOfCues()\n\n"},
  {"Play", PyvtkAnimationScene_Play, METH_VARARGS,
   "Play(self) -> None\nC++: virtual void Play()\n\nStarts playing the animation scene. Fires a\nvtkCommand::StartEvent before play beings and\nvtkCommand::EndEvent after play ends.\n"},
  {"Stop", PyvtkAnimationScene_Stop, METH_VARARGS,
   "Stop(self) -> None\nC++: void Stop()\n\nStops the animation scene that is running.\n"},
  {"SetLoop", PyvtkAnimationScene_SetLoop, METH_VARARGS,
   "SetLoop(self, _arg:int) -> None\nC++: virtual void SetLoop(int _arg)\n\nEnable/Disable animation loop.\n"},
  {"GetLoop", PyvtkAnimationScene_GetLoop, METH_VARARGS,
   "GetLoop(self) -> int\nC++: virtual int GetLoop()\n\n"},
  {"SetAnimationTime", PyvtkAnimationScene_SetAnimationTime, METH_VARARGS,
   "SetAnimationTime(self, time:float) -> None\nC++: void SetAnimationTime(double time)\n\nMakes the state of the scene same as the given time.\n"},
  {"SetTimeMode", PyvtkAnimationScene_SetTimeMode, METH_VARARGS,
   "SetTimeMode(self, mode:int) -> None\nC++: void SetTimeMode(int mode) override;\n\nOverridden to allow change to Normalized mode only if none of the\nconstituent cues is in Relative time mode.\n"},
  {"IsInPlay", PyvtkAnimationScene_IsInPlay, METH_VARARGS,
   "IsInPlay(self) -> int\nC++: int IsInPlay()\n\nReturns if the animation is being played.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAnimationScene_Doc =
  "vtkAnimationScene - the animation scene manager.\n\n"
  "Superclass: vtkAnimationCue\n\n"
  "vtkAnimationCue and vtkAnimationScene provide the framework to\n"
  "support animations in VTK. vtkAnimationCue represents an entity that\n"
  "changes/ animates with time, while vtkAnimationScene represents scene\n"
  "or setup for the animation, which consists of individual cues or\n"
  "other scenes.\n\n"
  "A scene can be played in real time mode, or as a sequence of frames\n"
  "1/frame rate apart in time.\n"
  "@sa\n"
  "vtkAnimationCue\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnimationScene_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAnimationScene", // tp_name
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
  PyvtkAnimationScene_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnimationScene_StaticNew()
{
  return vtkAnimationScene::New();
}

PyObject *PyvtkAnimationScene_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAnimationScene_Type, PyvtkAnimationScene_Methods,
    "vtkAnimationScene",
 &PyvtkAnimationScene_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAnimationCue");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAnimationScene_PlayModes_Type);
  PyVTKEnum_Add(&PyvtkAnimationScene_PlayModes_Type, "vtkAnimationScene.PlayModes");

  o = (PyObject *)&PyvtkAnimationScene_PlayModes_Type;
  if (PyDict_SetItemString(d, "PlayModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkAnimationScene::PlayModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "PLAYMODE_SEQUENCE", vtkAnimationScene::PLAYMODE_SEQUENCE },
        { "PLAYMODE_REALTIME", vtkAnimationScene::PLAYMODE_REALTIME },
      };

    o = PyvtkAnimationScene_PlayModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnimationScene(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnimationScene_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnimationScene", o) != 0)
  {
    Py_DECREF(o);
  }

}


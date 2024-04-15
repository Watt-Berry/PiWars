// python wrapper for vtkVideoSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVideoSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVideoSource(PyObject *dict); }
extern "C" { PyObject *PyvtkVideoSource_ClassNew(); }


static PyObject *
PyvtkVideoSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVideoSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVideoSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVideoSource *tempr = vtkVideoSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVideoSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVideoSource::NewInstance());

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
PyvtkVideoSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVideoSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVideoSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_Record(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Record");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Record();
    }
    else
    {
      op->vtkVideoSource::Record();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Play();
    }
    else
    {
      op->vtkVideoSource::Play();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkVideoSource::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_Rewind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rewind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Rewind();
    }
    else
    {
      op->vtkVideoSource::Rewind();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_FastForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastForward();
    }
    else
    {
      op->vtkVideoSource::FastForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Seek(temp0);
    }
    else
    {
      op->vtkVideoSource::Seek(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_Grab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Grab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Grab();
    }
    else
    {
      op->vtkVideoSource::Grab();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetRecording(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecording");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecording() :
      op->vtkVideoSource::GetRecording());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetPlaying(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaying");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaying() :
      op->vtkVideoSource::GetPlaying());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetFrameSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetFrameSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVideoSource::SetFrameSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_SetFrameSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

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
      op->SetFrameSize(temp0);
    }
    else
    {
      op->vtkVideoSource::SetFrameSize(temp0);
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
PyvtkVideoSource_SetFrameSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVideoSource_SetFrameSize_s1(self, args);
    case 1:
      return PyvtkVideoSource_SetFrameSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFrameSize");
  return nullptr;
}


static PyObject *
PyvtkVideoSource_GetFrameSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFrameSize() :
      op->vtkVideoSource::GetFrameSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  float temp0;
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
      op->vtkVideoSource::SetFrameRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFrameRate() :
      op->vtkVideoSource::GetFrameRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormat(temp0);
    }
    else
    {
      op->vtkVideoSource::SetOutputFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputFormatToLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToLuminance();
    }
    else
    {
      op->vtkVideoSource::SetOutputFormatToLuminance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputFormatToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToRGB();
    }
    else
    {
      op->vtkVideoSource::SetOutputFormatToRGB();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputFormatToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToRGBA();
    }
    else
    {
      op->vtkVideoSource::SetOutputFormatToRGBA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormat() :
      op->vtkVideoSource::GetOutputFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetFrameBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameBufferSize(temp0);
    }
    else
    {
      op->vtkVideoSource::SetFrameBufferSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameBufferSize() :
      op->vtkVideoSource::GetFrameBufferSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetNumberOfOutputFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfOutputFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfOutputFrames(temp0);
    }
    else
    {
      op->vtkVideoSource::SetNumberOfOutputFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetNumberOfOutputFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputFrames() :
      op->vtkVideoSource::GetNumberOfOutputFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_AutoAdvanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdvanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdvanceOn();
    }
    else
    {
      op->vtkVideoSource::AutoAdvanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_AutoAdvanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdvanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdvanceOff();
    }
    else
    {
      op->vtkVideoSource::AutoAdvanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetAutoAdvance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdvance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdvance(temp0);
    }
    else
    {
      op->vtkVideoSource::SetAutoAdvance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetAutoAdvance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdvance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdvance() :
      op->vtkVideoSource::GetAutoAdvance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetClipRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetClipRegion(temp0);
    }
    else
    {
      op->vtkVideoSource::SetClipRegion(temp0);
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
PyvtkVideoSource_SetClipRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetClipRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkVideoSource::SetClipRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_SetClipRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVideoSource_SetClipRegion_s1(self, args);
    case 6:
      return PyvtkVideoSource_SetClipRegion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClipRegion");
  return nullptr;
}


static PyObject *
PyvtkVideoSource_GetClipRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetClipRegion() :
      op->vtkVideoSource::GetClipRegion());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkVideoSource::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputWholeExtent(temp0);
    }
    else
    {
      op->vtkVideoSource::SetOutputWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkVideoSource_SetOutputWholeExtent_s1(self, args);
    case 1:
      return PyvtkVideoSource_SetOutputWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkVideoSource_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkVideoSource::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

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
      op->SetDataSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVideoSource::SetDataSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataSpacing(temp0);
    }
    else
    {
      op->vtkVideoSource::SetDataSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVideoSource_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkVideoSource_SetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return nullptr;
}


static PyObject *
PyvtkVideoSource_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkVideoSource::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

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
      op->SetDataOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVideoSource::SetDataOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataOrigin(temp0);
    }
    else
    {
      op->vtkVideoSource::SetDataOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVideoSource_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkVideoSource_SetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return nullptr;
}


static PyObject *
PyvtkVideoSource_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkVideoSource::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkVideoSource::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkVideoSource::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameCount() :
      op->vtkVideoSource::GetFrameCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetFrameCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameCount(temp0);
    }
    else
    {
      op->vtkVideoSource::SetFrameCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameIndex() :
      op->vtkVideoSource::GetFrameIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameTimeStamp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFrameTimeStamp(temp0) :
      op->vtkVideoSource::GetFrameTimeStamp(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_GetFrameTimeStamp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFrameTimeStamp() :
      op->vtkVideoSource::GetFrameTimeStamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVideoSource_GetFrameTimeStamp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVideoSource_GetFrameTimeStamp_s1(self, args);
    case 0:
      return PyvtkVideoSource_GetFrameTimeStamp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFrameTimeStamp");
  return nullptr;
}


static PyObject *
PyvtkVideoSource_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkVideoSource::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInitialized() :
      op->vtkVideoSource::GetInitialized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_ReleaseSystemResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseSystemResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseSystemResources();
    }
    else
    {
      op->vtkVideoSource::ReleaseSystemResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_InternalGrab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalGrab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InternalGrab();
    }
    else
    {
      op->vtkVideoSource::InternalGrab();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_SetStartTimeStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartTimeStamp(temp0);
    }
    else
    {
      op->vtkVideoSource::SetStartTimeStamp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVideoSource_GetStartTimeStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartTimeStamp() :
      op->vtkVideoSource::GetStartTimeStamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVideoSource_Methods[] = {
  {"IsTypeOf", PyvtkVideoSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVideoSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVideoSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVideoSource\nC++: static vtkVideoSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVideoSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVideoSource\nC++: vtkVideoSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVideoSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVideoSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Record", PyvtkVideoSource_Record, METH_VARARGS,
   "Record(self) -> None\nC++: virtual void Record()\n\nRecord incoming video at the specified FrameRate.  The recording\ncontinues indefinitely until Stop() is called.\n"},
  {"Play", PyvtkVideoSource_Play, METH_VARARGS,
   "Play(self) -> None\nC++: virtual void Play()\n\nPlay through the 'tape' sequentially at the specified frame rate.\nIf you have just finished Recoding, you should call Rewind()\nfirst.\n"},
  {"Stop", PyvtkVideoSource_Stop, METH_VARARGS,
   "Stop(self) -> None\nC++: virtual void Stop()\n\nStop recording or playing.\n"},
  {"Rewind", PyvtkVideoSource_Rewind, METH_VARARGS,
   "Rewind(self) -> None\nC++: virtual void Rewind()\n\nRewind to the frame with the earliest timestamp.  Record\noperations will start on the following frame, therefore if you\nwant to re-record over this frame you must call Seek(-1) before\ncalling Grab() or Record().\n"},
  {"FastForward", PyvtkVideoSource_FastForward, METH_VARARGS,
   "FastForward(self) -> None\nC++: virtual void FastForward()\n\nFastForward to the last frame that was recorded (i.e. to the\nframe that has the most recent timestamp).\n"},
  {"Seek", PyvtkVideoSource_Seek, METH_VARARGS,
   "Seek(self, n:int) -> None\nC++: virtual void Seek(int n)\n\nSeek forwards or backwards by the specified number of frames\n(positive is forward, negative is backward).\n"},
  {"Grab", PyvtkVideoSource_Grab, METH_VARARGS,
   "Grab(self) -> None\nC++: virtual void Grab()\n\nGrab a single video frame.\n"},
  {"GetRecording", PyvtkVideoSource_GetRecording, METH_VARARGS,
   "GetRecording(self) -> int\nC++: virtual int GetRecording()\n\nAre we in record mode? (record mode and play mode are mutually\nexclusive).\n"},
  {"GetPlaying", PyvtkVideoSource_GetPlaying, METH_VARARGS,
   "GetPlaying(self) -> int\nC++: virtual int GetPlaying()\n\nAre we in play mode? (record mode and play mode are mutually\nexclusive).\n"},
  {"SetFrameSize", PyvtkVideoSource_SetFrameSize, METH_VARARGS,
   "SetFrameSize(self, x:int, y:int, z:int) -> None\nC++: virtual void SetFrameSize(int x, int y, int z)\nSetFrameSize(self, dim:[int, int, int]) -> None\nC++: virtual void SetFrameSize(int dim[3])\n\nSet the full-frame size.  This must be an allowed size for the\ndevice, the device may either refuse a request for an illegal\nframe size or automatically choose a new frame size. The default\nis usually 320x240x1, but can be device specific. The 'depth'\nshould always be 1 (unless you have a device that can handle 3D\nacquisition).\n"},
  {"GetFrameSize", PyvtkVideoSource_GetFrameSize, METH_VARARGS,
   "GetFrameSize(self) -> (int, int, int)\nC++: virtual int *GetFrameSize()\n\n"},
  {"SetFrameRate", PyvtkVideoSource_SetFrameRate, METH_VARARGS,
   "SetFrameRate(self, rate:float) -> None\nC++: virtual void SetFrameRate(float rate)\n\nRequest a particular frame rate (default 30 frames per second).\n"},
  {"GetFrameRate", PyvtkVideoSource_GetFrameRate, METH_VARARGS,
   "GetFrameRate(self) -> float\nC++: virtual float GetFrameRate()\n\n"},
  {"SetOutputFormat", PyvtkVideoSource_SetOutputFormat, METH_VARARGS,
   "SetOutputFormat(self, format:int) -> None\nC++: virtual void SetOutputFormat(int format)\n\nSet the output format.  This must be appropriate for device,\nusually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.\n"},
  {"SetOutputFormatToLuminance", PyvtkVideoSource_SetOutputFormatToLuminance, METH_VARARGS,
   "SetOutputFormatToLuminance(self) -> None\nC++: void SetOutputFormatToLuminance()\n\n"},
  {"SetOutputFormatToRGB", PyvtkVideoSource_SetOutputFormatToRGB, METH_VARARGS,
   "SetOutputFormatToRGB(self) -> None\nC++: void SetOutputFormatToRGB()\n\n"},
  {"SetOutputFormatToRGBA", PyvtkVideoSource_SetOutputFormatToRGBA, METH_VARARGS,
   "SetOutputFormatToRGBA(self) -> None\nC++: void SetOutputFormatToRGBA()\n\n"},
  {"GetOutputFormat", PyvtkVideoSource_GetOutputFormat, METH_VARARGS,
   "GetOutputFormat(self) -> int\nC++: virtual int GetOutputFormat()\n\n"},
  {"SetFrameBufferSize", PyvtkVideoSource_SetFrameBufferSize, METH_VARARGS,
   "SetFrameBufferSize(self, FrameBufferSize:int) -> None\nC++: virtual void SetFrameBufferSize(int FrameBufferSize)\n\nSet size of the frame buffer, i.e. the number of frames that the\n'tape' can store.\n"},
  {"GetFrameBufferSize", PyvtkVideoSource_GetFrameBufferSize, METH_VARARGS,
   "GetFrameBufferSize(self) -> int\nC++: virtual int GetFrameBufferSize()\n\n"},
  {"SetNumberOfOutputFrames", PyvtkVideoSource_SetNumberOfOutputFrames, METH_VARARGS,
   "SetNumberOfOutputFrames(self, _arg:int) -> None\nC++: virtual void SetNumberOfOutputFrames(int _arg)\n\nSet the number of frames to copy to the output on each execute.\nThe frames will be concatenated along the Z dimension, with the\nmost recent frame first. Default: 1\n"},
  {"GetNumberOfOutputFrames", PyvtkVideoSource_GetNumberOfOutputFrames, METH_VARARGS,
   "GetNumberOfOutputFrames(self) -> int\nC++: virtual int GetNumberOfOutputFrames()\n\n"},
  {"AutoAdvanceOn", PyvtkVideoSource_AutoAdvanceOn, METH_VARARGS,
   "AutoAdvanceOn(self) -> None\nC++: virtual void AutoAdvanceOn()\n\nSet whether to automatically advance the buffer before each grab.\nDefault: on\n"},
  {"AutoAdvanceOff", PyvtkVideoSource_AutoAdvanceOff, METH_VARARGS,
   "AutoAdvanceOff(self) -> None\nC++: virtual void AutoAdvanceOff()\n\n"},
  {"SetAutoAdvance", PyvtkVideoSource_SetAutoAdvance, METH_VARARGS,
   "SetAutoAdvance(self, _arg:int) -> None\nC++: virtual void SetAutoAdvance(vtkTypeBool _arg)\n\n"},
  {"GetAutoAdvance", PyvtkVideoSource_GetAutoAdvance, METH_VARARGS,
   "GetAutoAdvance(self) -> int\nC++: virtual vtkTypeBool GetAutoAdvance()\n\n"},
  {"SetClipRegion", PyvtkVideoSource_SetClipRegion, METH_VARARGS,
   "SetClipRegion(self, r:[int, int, int, int, int, int]) -> None\nC++: virtual void SetClipRegion(int r[6])\nSetClipRegion(self, x0:int, x1:int, y0:int, y1:int, z0:int,\n    z1:int) -> None\nC++: virtual void SetClipRegion(int x0, int x1, int y0, int y1,\n    int z0, int z1)\n\nSet the clip rectangle for the frames.  The video will be clipped\nbefore it is copied into the framebuffer.  Changing the\nClipRegion will destroy the current contents of the framebuffer.\nThe default ClipRegion is\n(0,VTK_INT_MAX,0,VTK_INT_MAX,0,VTK_INT_MAX).\n"},
  {"GetClipRegion", PyvtkVideoSource_GetClipRegion, METH_VARARGS,
   "GetClipRegion(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetClipRegion()\n\n"},
  {"SetOutputWholeExtent", PyvtkVideoSource_SetOutputWholeExtent, METH_VARARGS,
   "SetOutputWholeExtent(self, _arg1:int, _arg2:int, _arg3:int,\n    _arg4:int, _arg5:int, _arg6:int) -> None\nC++: virtual void SetOutputWholeExtent(int _arg1, int _arg2,\n    int _arg3, int _arg4, int _arg5, int _arg6)\nSetOutputWholeExtent(self, _arg:(int, int, int, int, int, int))\n    -> None\nC++: virtual void SetOutputWholeExtent(const int _arg[6])\n\nGet/Set the WholeExtent of the output.  This can be used to\neither clip or pad the video frame.  This clipping/padding is\ndone when the frame is copied to the output, and does not change\nthe contents of the framebuffer.  This is useful e.g. for\nexpanding the output size to a power of two for texture mapping. \nThe default is (0,-1,0,-1,0,-1) which causes the entire frame to\nbe copied to the output.\n"},
  {"GetOutputWholeExtent", PyvtkVideoSource_GetOutputWholeExtent, METH_VARARGS,
   "GetOutputWholeExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetOutputWholeExtent()\n\n"},
  {"SetDataSpacing", PyvtkVideoSource_SetDataSpacing, METH_VARARGS,
   "SetDataSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDataSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetDataSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataSpacing(const double _arg[3])\n\nSet/Get the pixel spacing. Default: (1.0,1.0,1.0)\n"},
  {"GetDataSpacing", PyvtkVideoSource_GetDataSpacing, METH_VARARGS,
   "GetDataSpacing(self) -> (float, float, float)\nC++: virtual double *GetDataSpacing()\n\n"},
  {"SetDataOrigin", PyvtkVideoSource_SetDataOrigin, METH_VARARGS,
   "SetDataOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetDataOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetDataOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataOrigin(const double _arg[3])\n\nSet/Get the coordinates of the lower, left corner of the frame.\nDefault: (0.0,0.0,0.0)\n"},
  {"GetDataOrigin", PyvtkVideoSource_GetDataOrigin, METH_VARARGS,
   "GetDataOrigin(self) -> (float, float, float)\nC++: virtual double *GetDataOrigin()\n\n"},
  {"SetOpacity", PyvtkVideoSource_SetOpacity, METH_VARARGS,
   "SetOpacity(self, _arg:float) -> None\nC++: virtual void SetOpacity(float _arg)\n\nFor RGBA output only (4 scalar components), set the opacity. \nThis will not modify the existing contents of the framebuffer,\nonly subsequently grabbed frames.\n"},
  {"GetOpacity", PyvtkVideoSource_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual float GetOpacity()\n\n"},
  {"GetFrameCount", PyvtkVideoSource_GetFrameCount, METH_VARARGS,
   "GetFrameCount(self) -> int\nC++: virtual int GetFrameCount()\n\nThis value is incremented each time a frame is grabbed. reset it\nto zero (or any other value) at any time.\n"},
  {"SetFrameCount", PyvtkVideoSource_SetFrameCount, METH_VARARGS,
   "SetFrameCount(self, _arg:int) -> None\nC++: virtual void SetFrameCount(int _arg)\n\n"},
  {"GetFrameIndex", PyvtkVideoSource_GetFrameIndex, METH_VARARGS,
   "GetFrameIndex(self) -> int\nC++: virtual int GetFrameIndex()\n\nGet the frame index relative to the 'beginning of the tape'. \nThis value wraps back to zero if it increases past the\nFrameBufferSize.\n"},
  {"GetFrameTimeStamp", PyvtkVideoSource_GetFrameTimeStamp, METH_VARARGS,
   "GetFrameTimeStamp(self, frame:int) -> float\nC++: virtual double GetFrameTimeStamp(int frame)\nGetFrameTimeStamp(self) -> float\nC++: double GetFrameTimeStamp()\n\nGet a time stamp in seconds (resolution of milliseconds) for a\nvideo frame.   Time began on Jan 1, 1970.  You can specify a\nnumber (negative or positive) to specify the position of the\nvideo frame relative to the current frame.\n"},
  {"Initialize", PyvtkVideoSource_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nInitialize the hardware.  This is called automatically on the\nfirst Update or Grab.\n"},
  {"GetInitialized", PyvtkVideoSource_GetInitialized, METH_VARARGS,
   "GetInitialized(self) -> int\nC++: virtual int GetInitialized()\n\n"},
  {"ReleaseSystemResources", PyvtkVideoSource_ReleaseSystemResources, METH_VARARGS,
   "ReleaseSystemResources(self) -> None\nC++: virtual void ReleaseSystemResources()\n\nRelease the video driver.  This method must be called before\napplication exit, or else the application might hang during exit.\n"},
  {"InternalGrab", PyvtkVideoSource_InternalGrab, METH_VARARGS,
   "InternalGrab(self) -> None\nC++: virtual void InternalGrab()\n\nThe internal function which actually does the grab.  You will\ndefinitely want to override this if you develop a vtkVideoSource\nsubclass.\n"},
  {"SetStartTimeStamp", PyvtkVideoSource_SetStartTimeStamp, METH_VARARGS,
   "SetStartTimeStamp(self, t:float) -> None\nC++: void SetStartTimeStamp(double t)\n\nAnd internal variable which marks the beginning of a Record\nsession. These methods are for internal use only.\n"},
  {"GetStartTimeStamp", PyvtkVideoSource_GetStartTimeStamp, METH_VARARGS,
   "GetStartTimeStamp(self) -> float\nC++: double GetStartTimeStamp()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVideoSource_Doc =
  "vtkVideoSource - Superclass of video input devices for VTK\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkVideoSource is a superclass for video input interfaces for VTK.\n"
  "The goal is to provide an interface which is very similar to the\n"
  "interface of a VCR, where the 'tape' is an internal frame buffer\n"
  "capable of holding a preset number of video frames.  Specialized\n"
  "versions of this class record input from various video input sources.\n"
  "This base class records input from a noise source.\n"
  "@warning\n"
  "You must call the ReleaseSystemResources() method before the\n"
  "application exits.  Otherwise the application might hang while trying\n"
  "to exit.\n"
  "@sa\n"
  "vtkWin32VideoSource vtkMILVideoSource\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVideoSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOVideo.vtkVideoSource", // tp_name
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
  PyvtkVideoSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVideoSource_StaticNew()
{
  return vtkVideoSource::New();
}

PyObject *PyvtkVideoSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVideoSource_Type, PyvtkVideoSource_Methods,
    "vtkVideoSource",
 &PyvtkVideoSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVideoSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVideoSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVideoSource", o) != 0)
  {
    Py_DECREF(o);
  }

}


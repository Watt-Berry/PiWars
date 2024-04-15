// python wrapper for vtkOpenGLRenderWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderWindow(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLRenderWindow_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLRenderWindow_FrameBlitModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLRenderWindow.FrameBlitModes", // tp_name
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
PyObject *PyvtkOpenGLRenderWindow_FrameBlitModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLRenderWindow_FrameBlitModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLRenderWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRenderWindow *tempr = vtkOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderWindow::NewInstance());

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
PyvtkOpenGLRenderWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLRenderWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLRenderWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkOpenGLRenderWindow::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Frame();
    }
    else
    {
      op->vtkOpenGLRenderWindow::Frame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetRenderingBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderingBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRenderingBackend() :
      op->vtkOpenGLRenderWindow::GetRenderingBackend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetGlobalMaximumNumberOfMultiSamples(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalMaximumNumberOfMultiSamples");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOpenGLRenderWindow::SetGlobalMaximumNumberOfMultiSamples(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetGlobalMaximumNumberOfMultiSamples(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalMaximumNumberOfMultiSamples");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkOpenGLRenderWindow::GetGlobalMaximumNumberOfMultiSamples();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

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
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = nullptr;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray") &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkOpenGLRenderWindow_GetPixelData_s1(self, args);
    case 7:
      return PyvtkOpenGLRenderWindow_GetPixelData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPixelData");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetPixelData_Methods[] = {
  {"SetPixelData", PyvtkOpenGLRenderWindow_SetPixelData_s1, METH_VARARGS,
   "@iiiiPii *B"},
  {"SetPixelData", PyvtkOpenGLRenderWindow_SetPixelData_s2, METH_VARARGS,
   "@iiiiVii *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelData");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkFloatArray *temp5 = nullptr;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkFloatArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = (ap.IsBound() ?
      op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_GetRGBAPixelData_Methods[] = {
  {"GetRGBAPixelData", PyvtkOpenGLRenderWindow_GetRGBAPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {"GetRGBAPixelData", PyvtkOpenGLRenderWindow_GetRGBAPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_GetRGBAPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkOpenGLRenderWindow_GetRGBAPixelData_s1(self, args);
    case 7:
      return PyvtkOpenGLRenderWindow_GetRGBAPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBAPixelData");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    int tempr = (ap.IsBound() ?
      op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetRGBAPixelData_Methods[] = {
  {"SetRGBAPixelData", PyvtkOpenGLRenderWindow_SetRGBAPixelData_s1, METH_VARARGS,
   "@iiiiPi|ii *f"},
  {"SetRGBAPixelData", PyvtkOpenGLRenderWindow_SetRGBAPixelData_s2, METH_VARARGS,
   "@iiiiVi|ii *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetRGBAPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
    case 7:
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRGBAPixelData");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_ReleaseRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ReleaseRGBAPixelData(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::ReleaseRGBAPixelData(temp0);
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
PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = nullptr;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = (ap.IsBound() ?
      op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_GetRGBACharPixelData_Methods[] = {
  {"GetRGBACharPixelData", PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {"GetRGBACharPixelData", PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_GetRGBACharPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s1(self, args);
    case 7:
      return PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBACharPixelData");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    int tempr = (ap.IsBound() ?
      op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOpenGLRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetRGBACharPixelData_Methods[] = {
  {"SetRGBACharPixelData", PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s1, METH_VARARGS,
   "@iiiiPi|ii *B"},
  {"SetRGBACharPixelData", PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s2, METH_VARARGS,
   "@iiiiVi|ii *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetRGBACharPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
    case 7:
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRGBACharPixelData");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    float *tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_GetZbufferData_Methods[] = {
  {"GetZbufferData", PyvtkOpenGLRenderWindow_GetZbufferData_s2, METH_VARARGS,
   "@iiiiP *f"},
  {"GetZbufferData", PyvtkOpenGLRenderWindow_GetZbufferData_s3, METH_VARARGS,
   "@iiiiV *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_GetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkOpenGLRenderWindow_GetZbufferData_s1(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetZbufferData");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetZbufferData_Methods[] = {
  {"SetZbufferData", PyvtkOpenGLRenderWindow_SetZbufferData_s1, METH_VARARGS,
   "@iiiiP *f"},
  {"SetZbufferData", PyvtkOpenGLRenderWindow_SetZbufferData_s2, METH_VARARGS,
   "@iiiiV *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZbufferData");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_ActivateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->ActivateTexture(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::ActivateTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_DeactivateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeactivateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->DeactivateTexture(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::DeactivateTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetTextureUnitForTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnitForTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnitForTexture(temp0) :
      op->vtkOpenGLRenderWindow::GetTextureUnitForTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetDepthBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthBufferSize() :
      op->vtkOpenGLRenderWindow::GetDepthBufferSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetUsingSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsingSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUsingSRGBColorSpace() :
      op->vtkOpenGLRenderWindow::GetUsingSRGBColorSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetColorBufferSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBufferSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetColorBufferSizes(temp0) :
      op->vtkOpenGLRenderWindow::GetColorBufferSizes(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetColorBufferInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBufferInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorBufferInternalFormat(temp0) :
      op->vtkOpenGLRenderWindow::GetColorBufferInternalFormat(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpenGLInit();
    }
    else
    {
      op->vtkOpenGLRenderWindow::OpenGLInit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInitState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInitState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpenGLInitState();
    }
    else
    {
      op->vtkOpenGLRenderWindow::OpenGLInitState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInitContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInitContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpenGLInitContext();
    }
    else
    {
      op->vtkOpenGLRenderWindow::OpenGLInitContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetOpenGLVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetOpenGLVersion(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLRenderWindow::GetOpenGLVersion(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetContextCreationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextCreationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetContextCreationTime() :
      op->vtkOpenGLRenderWindow::GetContextCreationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetShaderCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLShaderCache *tempr = (ap.IsBound() ?
      op->GetShaderCache() :
      op->vtkOpenGLRenderWindow::GetShaderCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetVBOCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVBOCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObjectCache *tempr = (ap.IsBound() ?
      op->GetVBOCache() :
      op->vtkOpenGLRenderWindow::GetVBOCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetRenderFramebuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLFramebufferObject *tempr = (ap.IsBound() ?
      op->GetRenderFramebuffer() :
      op->vtkOpenGLRenderWindow::GetRenderFramebuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetDisplayFramebuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLFramebufferObject *tempr = (ap.IsBound() ?
      op->GetDisplayFramebuffer() :
      op->vtkOpenGLRenderWindow::GetDisplayFramebuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetTextureUnitManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnitManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureUnitManager *tempr = (ap.IsBound() ?
      op->GetTextureUnitManager() :
      op->vtkOpenGLRenderWindow::GetTextureUnitManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_WaitForCompletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForCompletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WaitForCompletion();
    }
    else
    {
      op->vtkOpenGLRenderWindow::WaitForCompletion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_DrawPixels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  void  *temp6 = nullptr;
  Py_buffer pbuf6 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetBuffer(temp6, &pbuf6))
  {
    if (ap.IsBound())
    {
      op->DrawPixels(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkOpenGLRenderWindow::DrawPixels(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf6.obj != nullptr)
  {
    PyBuffer_Release(&pbuf6);
  }
  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_DrawPixels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  int temp8;
  int temp9;
  int temp10;
  int temp11;
  void  *temp12 = nullptr;
  Py_buffer pbuf12 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(13) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.GetValue(temp10) &&
      ap.GetValue(temp11) &&
      ap.GetBuffer(temp12, &pbuf12))
  {
    if (ap.IsBound())
    {
      op->DrawPixels(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12);
    }
    else
    {
      op->vtkOpenGLRenderWindow::DrawPixels(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf12.obj != nullptr)
  {
    PyBuffer_Release(&pbuf12);
  }
  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_DrawPixels_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  void  *temp4 = nullptr;
  Py_buffer pbuf4 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetBuffer(temp4, &pbuf4))
  {
    if (ap.IsBound())
    {
      op->DrawPixels(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLRenderWindow::DrawPixels(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf4.obj != nullptr)
  {
    PyBuffer_Release(&pbuf4);
  }
  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_DrawPixels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkOpenGLRenderWindow_DrawPixels_s1(self, args);
    case 13:
      return PyvtkOpenGLRenderWindow_DrawPixels_s2(self, args);
    case 5:
      return PyvtkOpenGLRenderWindow_DrawPixels_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawPixels");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetMaximumHardwareLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHardwareLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumHardwareLineWidth() :
      op->vtkOpenGLRenderWindow::GetMaximumHardwareLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_IsPointSpriteBugPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointSpriteBugPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPointSpriteBugPresent() :
      op->vtkOpenGLRenderWindow::IsPointSpriteBugPresent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetDefaultTextureInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTextureInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  bool temp3 = false;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultTextureInternalFormat(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetDefaultTextureInternalFormat(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetOpenGLSupportMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLSupportMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOpenGLSupportMessage() :
      op->vtkOpenGLRenderWindow::GetOpenGLSupportMessage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->SupportsOpenGL() :
      op->vtkOpenGLRenderWindow::SupportsOpenGL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->ReportCapabilities() :
      op->vtkOpenGLRenderWindow::ReportCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkOpenGLRenderWindow::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_RegisterGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkGenericOpenGLResourceFreeCallback *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericOpenGLResourceFreeCallback"))
  {
    if (ap.IsBound())
    {
      op->RegisterGraphicsResources(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::RegisterGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_UnregisterGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnregisterGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkGenericOpenGLResourceFreeCallback *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericOpenGLResourceFreeCallback"))
  {
    if (ap.IsBound())
    {
      op->UnregisterGraphicsResources(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::UnregisterGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_PushContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushContext();
    }
    else
    {
      op->vtkOpenGLRenderWindow::PushContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_PopContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopContext();
    }
    else
    {
      op->vtkOpenGLRenderWindow::PopContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_InitializeFromCurrentContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFromCurrentContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeFromCurrentContext() :
      op->vtkOpenGLRenderWindow::InitializeFromCurrentContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetSwapControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSwapControl(temp0) :
      op->vtkOpenGLRenderWindow::SetSwapControl(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLState *tempr = (ap.IsBound() ?
      op->GetState() :
      op->vtkOpenGLRenderWindow::GetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetTQuad2DVBO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTQuad2DVBO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLBufferObject *tempr = (ap.IsBound() ?
      op->GetTQuad2DVBO() :
      op->vtkOpenGLRenderWindow::GetTQuad2DVBO());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetNoiseTextureUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseTextureUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseTextureUnit() :
      op->vtkOpenGLRenderWindow::GetNoiseTextureUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->End();
    }
    else
    {
      op->vtkOpenGLRenderWindow::End();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkOpenGLRenderWindow::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_StereoMidpoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoMidpoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoMidpoint();
    }
    else
    {
      op->vtkOpenGLRenderWindow::StereoMidpoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBufferNeedsResolving(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferNeedsResolving");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBufferNeedsResolving() :
      op->vtkOpenGLRenderWindow::GetBufferNeedsResolving());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

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
      op->vtkOpenGLRenderWindow::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_BlitDisplayFramebuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlitDisplayFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BlitDisplayFramebuffer();
    }
    else
    {
      op->vtkOpenGLRenderWindow::BlitDisplayFramebuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_BlitDisplayFramebuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlitDisplayFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  int temp8;
  int temp9;
  int temp10;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(11) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.GetValue(temp10))
  {
    if (ap.IsBound())
    {
      op->BlitDisplayFramebuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }
    else
    {
      op->vtkOpenGLRenderWindow::BlitDisplayFramebuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_BlitDisplayFramebuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLRenderWindow_BlitDisplayFramebuffer_s1(self, args);
    case 11:
      return PyvtkOpenGLRenderWindow_BlitDisplayFramebuffer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BlitDisplayFramebuffer");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_BlitToRenderFramebuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlitToRenderFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->BlitToRenderFramebuffer(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::BlitToRenderFramebuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_BlitToRenderFramebuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlitToRenderFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  int temp8;
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->BlitToRenderFramebuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkOpenGLRenderWindow::BlitToRenderFramebuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_BlitToRenderFramebuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOpenGLRenderWindow_BlitToRenderFramebuffer_s1(self, args);
    case 10:
      return PyvtkOpenGLRenderWindow_BlitToRenderFramebuffer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BlitToRenderFramebuffer");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetFrameBlitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameBlitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  typedef vtkOpenGLRenderWindow::FrameBlitModes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLRenderWindow.FrameBlitModes"))
  {
    if (ap.IsBound())
    {
      op->SetFrameBlitMode(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::SetFrameBlitMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrameBlitModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameBlitModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLRenderWindow::FrameBlitModes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetFrameBlitModeMinValue() :
      op->vtkOpenGLRenderWindow::GetFrameBlitModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLRenderWindow_FrameBlitModes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrameBlitModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameBlitModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLRenderWindow::FrameBlitModes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetFrameBlitModeMaxValue() :
      op->vtkOpenGLRenderWindow::GetFrameBlitModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLRenderWindow_FrameBlitModes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrameBlitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameBlitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLRenderWindow::FrameBlitModes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetFrameBlitMode() :
      op->vtkOpenGLRenderWindow::GetFrameBlitMode());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLRenderWindow_FrameBlitModes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetFrameBlitModeToBlitToHardware(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameBlitModeToBlitToHardware");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFrameBlitModeToBlitToHardware();
    }
    else
    {
      op->vtkOpenGLRenderWindow::SetFrameBlitModeToBlitToHardware();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetFrameBlitModeToBlitToCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameBlitModeToBlitToCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFrameBlitModeToBlitToCurrent();
    }
    else
    {
      op->vtkOpenGLRenderWindow::SetFrameBlitModeToBlitToCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetFrameBlitModeToNoBlit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameBlitModeToNoBlit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFrameBlitModeToNoBlit();
    }
    else
    {
      op->vtkOpenGLRenderWindow::SetFrameBlitModeToNoBlit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetFramebufferFlipY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFramebufferFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFramebufferFlipY(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::SetFramebufferFlipY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFramebufferFlipY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFramebufferFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFramebufferFlipY() :
      op->vtkOpenGLRenderWindow::GetFramebufferFlipY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_FramebufferFlipYOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FramebufferFlipYOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FramebufferFlipYOn();
    }
    else
    {
      op->vtkOpenGLRenderWindow::FramebufferFlipYOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_FramebufferFlipYOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FramebufferFlipYOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FramebufferFlipYOff();
    }
    else
    {
      op->vtkOpenGLRenderWindow::FramebufferFlipYOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_TextureDepthBlit_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureDepthBlit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->TextureDepthBlit(temp0);
    }
    else
    {
      op->vtkOpenGLRenderWindow::TextureDepthBlit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_TextureDepthBlit_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureDepthBlit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTextureObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->TextureDepthBlit(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLRenderWindow::TextureDepthBlit(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_TextureDepthBlit_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureDepthBlit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureObject *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  int temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkTextureObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    if (ap.IsBound())
    {
      op->TextureDepthBlit(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkOpenGLRenderWindow::TextureDepthBlit(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_TextureDepthBlit(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOpenGLRenderWindow_TextureDepthBlit_s1(self, args);
    case 5:
      return PyvtkOpenGLRenderWindow_TextureDepthBlit_s2(self, args);
    case 9:
      return PyvtkOpenGLRenderWindow_TextureDepthBlit_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TextureDepthBlit");
  return nullptr;
}

static PyMethodDef PyvtkOpenGLRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRenderWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRenderWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRenderWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLRenderWindow\nC++: static vtkOpenGLRenderWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRenderWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLRenderWindow\nC++: vtkOpenGLRenderWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLRenderWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLRenderWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Start", PyvtkOpenGLRenderWindow_Start, METH_VARARGS,
   "Start(self) -> None\nC++: void Start() override;\n\nBegin the rendering process.\n"},
  {"Frame", PyvtkOpenGLRenderWindow_Frame, METH_VARARGS,
   "Frame(self) -> None\nC++: void Frame() override;\n\nA termination method performed at the end of the rendering\nprocess to do things like swapping buffers (if necessary) or\nsimilar actions.\n"},
  {"GetRenderingBackend", PyvtkOpenGLRenderWindow_GetRenderingBackend, METH_VARARGS,
   "GetRenderingBackend(self) -> str\nC++: const char *GetRenderingBackend() override;\n\nWhat rendering backend has the user requested\n"},
  {"SetGlobalMaximumNumberOfMultiSamples", PyvtkOpenGLRenderWindow_SetGlobalMaximumNumberOfMultiSamples, METH_VARARGS,
   "SetGlobalMaximumNumberOfMultiSamples(val:int) -> None\nC++: static void SetGlobalMaximumNumberOfMultiSamples(int val)\n\nSet/Get the maximum number of multisamples\n"},
  {"GetGlobalMaximumNumberOfMultiSamples", PyvtkOpenGLRenderWindow_GetGlobalMaximumNumberOfMultiSamples, METH_VARARGS,
   "GetGlobalMaximumNumberOfMultiSamples() -> int\nC++: static int GetGlobalMaximumNumberOfMultiSamples()\n\n"},
  {"GetPixelData", PyvtkOpenGLRenderWindow_GetPixelData, METH_VARARGS,
   "GetPixelData(self, x:int, y:int, x2:int, y2:int, front:int,\n    right:int) -> Pointer\nC++: unsigned char *GetPixelData(int x, int y, int x2, int y2,\n    int front, int right) override;\nGetPixelData(self, x:int, y:int, x2:int, y2:int, front:int,\n    data:vtkUnsignedCharArray, right:int) -> int\nC++: int GetPixelData(int x, int y, int x2, int y2, int front,\n    vtkUnsignedCharArray *data, int right) override;\n\nSet/Get the pixel data of an image, transmitted as RGBRGB...\nfront in this context indicates that the read should come from\nthe display buffer versus the render buffer\n"},
  {"SetPixelData", PyvtkOpenGLRenderWindow_SetPixelData, METH_VARARGS,
   "SetPixelData(self, x:int, y:int, x2:int, y2:int, data:[int, ...],\n    front:int, right:int) -> int\nC++: int SetPixelData(int x, int y, int x2, int y2,\n    unsigned char *data, int front, int right) override;\nSetPixelData(self, x:int, y:int, x2:int, y2:int,\n    data:vtkUnsignedCharArray, front:int, right:int) -> int\nC++: int SetPixelData(int x, int y, int x2, int y2,\n    vtkUnsignedCharArray *data, int front, int right) override;\n\nSet/Get the pixel data of an image, transmitted as RGBRGBRGB. The\nfront argument indicates if the front buffer should be used or\nthe back buffer. It is the caller's responsibility to delete the\nresulting array. It is very important to realize that the memory\nin this array is organized from the bottom of the window to the\ntop. The origin of the screen is in the lower left corner. The y\naxis increases as you go up the screen. So the storage of pixels\nis from left to right and from bottom to top. (x,y) is any corner\nof the rectangle. (x2,y2) is its opposite corner on the diagonal.\n"},
  {"GetRGBAPixelData", PyvtkOpenGLRenderWindow_GetRGBAPixelData, METH_VARARGS,
   "GetRGBAPixelData(self, x:int, y:int, x2:int, y2:int, front:int,\n    right:int=0) -> Pointer\nC++: float *GetRGBAPixelData(int x, int y, int x2, int y2,\n    int front, int right=0) override;\nGetRGBAPixelData(self, x:int, y:int, x2:int, y2:int, front:int,\n    data:vtkFloatArray, right:int=0) -> int\nC++: int GetRGBAPixelData(int x, int y, int x2, int y2, int front,\n     vtkFloatArray *data, int right=0) override;\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {"SetRGBAPixelData", PyvtkOpenGLRenderWindow_SetRGBAPixelData, METH_VARARGS,
   "SetRGBAPixelData(self, x:int, y:int, x2:int, y2:int, data:[float,\n    ...], front:int, blend:int=0, right:int=0) -> int\nC++: int SetRGBAPixelData(int x, int y, int x2, int y2,\n    float *data, int front, int blend=0, int right=0) override;\nSetRGBAPixelData(self, x:int, y:int, x2:int, y2:int,\n    data:vtkFloatArray, front:int, blend:int=0, right:int=0)\n    -> int\nC++: int SetRGBAPixelData(int x, int y, int x2, int y2,\n    vtkFloatArray *data, int front, int blend=0, int right=0)\n    override;\n\n"},
  {"ReleaseRGBAPixelData", PyvtkOpenGLRenderWindow_ReleaseRGBAPixelData, METH_VARARGS,
   "ReleaseRGBAPixelData(self, data:[float, ...]) -> None\nC++: void ReleaseRGBAPixelData(float *data) override;\n\n"},
  {"GetRGBACharPixelData", PyvtkOpenGLRenderWindow_GetRGBACharPixelData, METH_VARARGS,
   "GetRGBACharPixelData(self, x:int, y:int, x2:int, y2:int,\n    front:int, right:int=0) -> Pointer\nC++: unsigned char *GetRGBACharPixelData(int x, int y, int x2,\n    int y2, int front, int right=0) override;\nGetRGBACharPixelData(self, x:int, y:int, x2:int, y2:int,\n    front:int, data:vtkUnsignedCharArray, right:int=0) -> int\nC++: int GetRGBACharPixelData(int x, int y, int x2, int y2,\n    int front, vtkUnsignedCharArray *data, int right=0) override;\n\n"},
  {"SetRGBACharPixelData", PyvtkOpenGLRenderWindow_SetRGBACharPixelData, METH_VARARGS,
   "SetRGBACharPixelData(self, x:int, y:int, x2:int, y2:int,\n    data:[int, ...], front:int, blend:int=0, right:int=0) -> int\nC++: int SetRGBACharPixelData(int x, int y, int x2, int y2,\n    unsigned char *data, int front, int blend=0, int right=0)\n    override;\nSetRGBACharPixelData(self, x:int, y:int, x2:int, y2:int,\n    data:vtkUnsignedCharArray, front:int, blend:int=0,\n    right:int=0) -> int\nC++: int SetRGBACharPixelData(int x, int y, int x2, int y2,\n    vtkUnsignedCharArray *data, int front, int blend=0,\n    int right=0) override;\n\n"},
  {"GetZbufferData", PyvtkOpenGLRenderWindow_GetZbufferData, METH_VARARGS,
   "GetZbufferData(self, x1:int, y1:int, x2:int, y2:int) -> Pointer\nC++: float *GetZbufferData(int x1, int y1, int x2, int y2)\n    override;\nGetZbufferData(self, x1:int, y1:int, x2:int, y2:int, z:[float,\n    ...]) -> int\nC++: int GetZbufferData(int x1, int y1, int x2, int y2, float *z)\n    override;\nGetZbufferData(self, x1:int, y1:int, x2:int, y2:int,\n    buffer:vtkFloatArray) -> int\nC++: int GetZbufferData(int x1, int y1, int x2, int y2,\n    vtkFloatArray *buffer) override;\n\nSet/Get the zbuffer data from an image\n"},
  {"SetZbufferData", PyvtkOpenGLRenderWindow_SetZbufferData, METH_VARARGS,
   "SetZbufferData(self, x1:int, y1:int, x2:int, y2:int,\n    buffer:[float, ...]) -> int\nC++: int SetZbufferData(int x1, int y1, int x2, int y2,\n    float *buffer) override;\nSetZbufferData(self, x1:int, y1:int, x2:int, y2:int,\n    buffer:vtkFloatArray) -> int\nC++: int SetZbufferData(int x1, int y1, int x2, int y2,\n    vtkFloatArray *buffer) override;\n\n"},
  {"ActivateTexture", PyvtkOpenGLRenderWindow_ActivateTexture, METH_VARARGS,
   "ActivateTexture(self, __a:vtkTextureObject) -> None\nC++: void ActivateTexture(vtkTextureObject *)\n\nActivate a texture unit for this texture\n"},
  {"DeactivateTexture", PyvtkOpenGLRenderWindow_DeactivateTexture, METH_VARARGS,
   "DeactivateTexture(self, __a:vtkTextureObject) -> None\nC++: void DeactivateTexture(vtkTextureObject *)\n\nDeactivate a previously activated texture\n"},
  {"GetTextureUnitForTexture", PyvtkOpenGLRenderWindow_GetTextureUnitForTexture, METH_VARARGS,
   "GetTextureUnitForTexture(self, __a:vtkTextureObject) -> int\nC++: int GetTextureUnitForTexture(vtkTextureObject *)\n\nGet the texture unit for a given texture object\n"},
  {"GetDepthBufferSize", PyvtkOpenGLRenderWindow_GetDepthBufferSize, METH_VARARGS,
   "GetDepthBufferSize(self) -> int\nC++: int GetDepthBufferSize() override;\n\nGet the size of the depth buffer.\n"},
  {"GetUsingSRGBColorSpace", PyvtkOpenGLRenderWindow_GetUsingSRGBColorSpace, METH_VARARGS,
   "GetUsingSRGBColorSpace(self) -> bool\nC++: bool GetUsingSRGBColorSpace()\n\nIs this window/fo in sRGB colorspace\n"},
  {"GetColorBufferSizes", PyvtkOpenGLRenderWindow_GetColorBufferSizes, METH_VARARGS,
   "GetColorBufferSizes(self, rgba:[int, ...]) -> int\nC++: int GetColorBufferSizes(int *rgba) override;\n\nGet the size of the color buffer. Returns 0 if not able to\ndetermine otherwise sets R G B and A into buffer.\n"},
  {"GetColorBufferInternalFormat", PyvtkOpenGLRenderWindow_GetColorBufferInternalFormat, METH_VARARGS,
   "GetColorBufferInternalFormat(self, attachmentPoint:int) -> int\nC++: int GetColorBufferInternalFormat(int attachmentPoint)\n\nGet the internal format of current attached texture or render\nbuffer. attachmentPoint is the index of attachment. Returns 0 if\nnot able to determine.\n"},
  {"OpenGLInit", PyvtkOpenGLRenderWindow_OpenGLInit, METH_VARARGS,
   "OpenGLInit(self) -> None\nC++: virtual void OpenGLInit()\n\nInitialize OpenGL for this window.\n"},
  {"OpenGLInitState", PyvtkOpenGLRenderWindow_OpenGLInitState, METH_VARARGS,
   "OpenGLInitState(self) -> None\nC++: virtual void OpenGLInitState()\n\n"},
  {"OpenGLInitContext", PyvtkOpenGLRenderWindow_OpenGLInitContext, METH_VARARGS,
   "OpenGLInitContext(self) -> None\nC++: virtual void OpenGLInitContext()\n\n"},
  {"GetOpenGLVersion", PyvtkOpenGLRenderWindow_GetOpenGLVersion, METH_VARARGS,
   "GetOpenGLVersion(self, major:int, minor:int) -> None\nC++: void GetOpenGLVersion(int &major, int &minor)\n\nGet the major and minor version numbers of the OpenGL context we\nare using ala 3.2, 3.3, 4.0, etc... returns 0,0 if opengl has not\nbeen initialized yet\n"},
  {"GetContextCreationTime", PyvtkOpenGLRenderWindow_GetContextCreationTime, METH_VARARGS,
   "GetContextCreationTime(self) -> int\nC++: virtual vtkMTimeType GetContextCreationTime()\n\nGet the time when the OpenGL context was created.\n"},
  {"GetShaderCache", PyvtkOpenGLRenderWindow_GetShaderCache, METH_VARARGS,
   "GetShaderCache(self) -> vtkOpenGLShaderCache\nC++: vtkOpenGLShaderCache *GetShaderCache()\n\nReturns an Shader Cache object\n"},
  {"GetVBOCache", PyvtkOpenGLRenderWindow_GetVBOCache, METH_VARARGS,
   "GetVBOCache(self) -> vtkOpenGLVertexBufferObjectCache\nC++: vtkOpenGLVertexBufferObjectCache *GetVBOCache()\n\nReturns the VBO Cache\n"},
  {"GetRenderFramebuffer", PyvtkOpenGLRenderWindow_GetRenderFramebuffer, METH_VARARGS,
   "GetRenderFramebuffer(self) -> vtkOpenGLFramebufferObject\nC++: virtual vtkOpenGLFramebufferObject *GetRenderFramebuffer()\n\nReturns the render framebuffer object.\n"},
  {"GetDisplayFramebuffer", PyvtkOpenGLRenderWindow_GetDisplayFramebuffer, METH_VARARGS,
   "GetDisplayFramebuffer(self) -> vtkOpenGLFramebufferObject\nC++: virtual vtkOpenGLFramebufferObject *GetDisplayFramebuffer()\n\nReturns the display framebuffer object.\n"},
  {"GetTextureUnitManager", PyvtkOpenGLRenderWindow_GetTextureUnitManager, METH_VARARGS,
   "GetTextureUnitManager(self) -> vtkTextureUnitManager\nC++: vtkTextureUnitManager *GetTextureUnitManager()\n\nReturns its texture unit manager object. A new one will be\ncreated if one hasn't already been set up.\n"},
  {"WaitForCompletion", PyvtkOpenGLRenderWindow_WaitForCompletion, METH_VARARGS,
   "WaitForCompletion(self) -> None\nC++: void WaitForCompletion() override;\n\nBlock the thread until the actual rendering is finished(). Useful\nfor measurement only.\n"},
  {"DrawPixels", PyvtkOpenGLRenderWindow_DrawPixels, METH_VARARGS,
   "DrawPixels(self, x1:int, y1:int, x2:int, y2:int,\n    numComponents:int, dataType:int, data:Pointer) -> None\nC++: virtual void DrawPixels(int x1, int y1, int x2, int y2,\n    int numComponents, int dataType, void *data)\nDrawPixels(self, dstXmin:int, dstYmin:int, dstXmax:int,\n    dstYmax:int, srcXmin:int, srcYmin:int, srcXmax:int,\n    srcYmax:int, srcWidth:int, srcHeight:int, numComponents:int,\n    dataType:int, data:Pointer) -> None\nC++: virtual void DrawPixels(int dstXmin, int dstYmin,\n    int dstXmax, int dstYmax, int srcXmin, int srcYmin,\n    int srcXmax, int srcYmax, int srcWidth, int srcHeight,\n    int numComponents, int dataType, void *data)\nDrawPixels(self, srcWidth:int, srcHeight:int, numComponents:int,\n    dataType:int, data:Pointer) -> None\nC++: virtual void DrawPixels(int srcWidth, int srcHeight,\n    int numComponents, int dataType, void *data)\n\nReplacement for the old glDrawPixels function\n"},
  {"GetMaximumHardwareLineWidth", PyvtkOpenGLRenderWindow_GetMaximumHardwareLineWidth, METH_VARARGS,
   "GetMaximumHardwareLineWidth(self) -> float\nC++: virtual float GetMaximumHardwareLineWidth()\n\nReturn the largest line width supported by the hardware\n"},
  {"IsPointSpriteBugPresent", PyvtkOpenGLRenderWindow_IsPointSpriteBugPresent, METH_VARARGS,
   "IsPointSpriteBugPresent(self) -> bool\nC++: virtual bool IsPointSpriteBugPresent()\n\nReturns true if driver has an EGL/OpenGL bug that makes\nvtkChartsCoreCxx-TestChartDoubleColors and other tests to fail\nbecause point sprites don't work correctly (gl_PointCoord is\nundefined) unless glEnable(GL_POINT_SPRITE)\n"},
  {"GetDefaultTextureInternalFormat", PyvtkOpenGLRenderWindow_GetDefaultTextureInternalFormat, METH_VARARGS,
   "GetDefaultTextureInternalFormat(self, vtktype:int,\n    numComponents:int, needInteger:bool, needFloat:bool,\n    needSRGB:bool) -> int\nC++: int GetDefaultTextureInternalFormat(int vtktype,\n    int numComponents, bool needInteger, bool needFloat,\n    bool needSRGB)\n\nGet a mapping of vtk data types to native texture formats for\nthis window we put this on the RenderWindow so that every texture\ndoes not have to build these structures themselves\n"},
  {"GetOpenGLSupportMessage", PyvtkOpenGLRenderWindow_GetOpenGLSupportMessage, METH_VARARGS,
   "GetOpenGLSupportMessage(self) -> str\nC++: std::string GetOpenGLSupportMessage()\n\nReturn a message profiding additional details about the results\nof calling SupportsOpenGL()  This can be used to retrieve more\nspecifics about what failed\n"},
  {"SupportsOpenGL", PyvtkOpenGLRenderWindow_SupportsOpenGL, METH_VARARGS,
   "SupportsOpenGL(self) -> int\nC++: int SupportsOpenGL() override;\n\nDoes this render window support OpenGL? 0-false, 1-true\n"},
  {"ReportCapabilities", PyvtkOpenGLRenderWindow_ReportCapabilities, METH_VARARGS,
   "ReportCapabilities(self) -> str\nC++: const char *ReportCapabilities() override;\n\nGet report of capabilities for the render window\n"},
  {"Initialize", PyvtkOpenGLRenderWindow_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nInitialize the rendering window.  This will setup all\nsystem-specific resources.  This method and Finalize() must be\nsymmetric and it should be possible to call them multiple times,\neven changing WindowId in-between.  This is what WindowRemap\ndoes.\n"},
  {"RegisterGraphicsResources", PyvtkOpenGLRenderWindow_RegisterGraphicsResources, METH_VARARGS,
   "RegisterGraphicsResources(self,\n    cb:vtkGenericOpenGLResourceFreeCallback) -> None\nC++: void RegisterGraphicsResources(\n    vtkGenericOpenGLResourceFreeCallback *cb)\n\n"},
  {"UnregisterGraphicsResources", PyvtkOpenGLRenderWindow_UnregisterGraphicsResources, METH_VARARGS,
   "UnregisterGraphicsResources(self,\n    cb:vtkGenericOpenGLResourceFreeCallback) -> None\nC++: void UnregisterGraphicsResources(\n    vtkGenericOpenGLResourceFreeCallback *cb)\n\n"},
  {"PushContext", PyvtkOpenGLRenderWindow_PushContext, METH_VARARGS,
   "PushContext(self) -> None\nC++: virtual void PushContext()\n\nAbility to push and pop this window's context as the current\ncontext. The idea being to if needed make this window's context\ncurrent and when done releasing resources restore the prior\ncontext.  The default implementation here is only meant as a\nbackup for subclasses that lack a proper implementation.\n"},
  {"PopContext", PyvtkOpenGLRenderWindow_PopContext, METH_VARARGS,
   "PopContext(self) -> None\nC++: virtual void PopContext()\n\n"},
  {"InitializeFromCurrentContext", PyvtkOpenGLRenderWindow_InitializeFromCurrentContext, METH_VARARGS,
   "InitializeFromCurrentContext(self) -> bool\nC++: bool InitializeFromCurrentContext() override;\n\nInitialize the render window from the information associated with\nthe currently activated OpenGL context.\n"},
  {"SetSwapControl", PyvtkOpenGLRenderWindow_SetSwapControl, METH_VARARGS,
   "SetSwapControl(self, __a:int) -> bool\nC++: virtual bool SetSwapControl(int)\n\nSet the number of vertical syncs required between frames. A value\nof 0 means swap buffers as quickly as possible regardless of the\nvertical refresh. A value of 1 means swap buffers in sync with\nthe vertical refresh to eliminate tearing. A value of -1 means\nuse a value of 1 unless we missed a frame in which case swap\nimmediately. Returns true if the call succeeded.\n"},
  {"GetState", PyvtkOpenGLRenderWindow_GetState, METH_VARARGS,
   "GetState(self) -> vtkOpenGLState\nC++: virtual vtkOpenGLState *GetState()\n\n"},
  {"GetTQuad2DVBO", PyvtkOpenGLRenderWindow_GetTQuad2DVBO, METH_VARARGS,
   "GetTQuad2DVBO(self) -> vtkOpenGLBufferObject\nC++: vtkOpenGLBufferObject *GetTQuad2DVBO()\n\n"},
  {"GetNoiseTextureUnit", PyvtkOpenGLRenderWindow_GetNoiseTextureUnit, METH_VARARGS,
   "GetNoiseTextureUnit(self) -> int\nC++: int GetNoiseTextureUnit()\n\n"},
  {"End", PyvtkOpenGLRenderWindow_End, METH_VARARGS,
   "End(self) -> None\nC++: void End() override;\n\nUpdate the system, if needed, at end of render process\n"},
  {"Render", PyvtkOpenGLRenderWindow_Render, METH_VARARGS,
   "Render(self) -> None\nC++: void Render() override;\n\nHandle opengl specific code and calls superclass\n"},
  {"StereoMidpoint", PyvtkOpenGLRenderWindow_StereoMidpoint, METH_VARARGS,
   "StereoMidpoint(self) -> None\nC++: void StereoMidpoint() override;\n\nIntermediate method performs operations required between the\nrendering of the left and right eye.\n"},
  {"GetBufferNeedsResolving", PyvtkOpenGLRenderWindow_GetBufferNeedsResolving, METH_VARARGS,
   "GetBufferNeedsResolving(self) -> bool\nC++: bool GetBufferNeedsResolving()\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLRenderWindow_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nFree up any graphics resources associated with this window a\nvalue of NULL means the context may already be destroyed\n"},
  {"BlitDisplayFramebuffer", PyvtkOpenGLRenderWindow_BlitDisplayFramebuffer, METH_VARARGS,
   "BlitDisplayFramebuffer(self) -> None\nC++: void BlitDisplayFramebuffer()\nBlitDisplayFramebuffer(self, right:int, srcX:int, srcY:int,\n    srcWidth:int, srcHeight:int, destX:int, destY:int,\n    destWidth:int, destHeight:int, bufferMode:int,\n    interpolation:int) -> None\nC++: void BlitDisplayFramebuffer(int right, int srcX, int srcY,\n    int srcWidth, int srcHeight, int destX, int destY,\n    int destWidth, int destHeight, int bufferMode,\n    int interpolation)\n\nBlit a display framebuffer into a currently bound draw\ndestination\n"},
  {"BlitToRenderFramebuffer", PyvtkOpenGLRenderWindow_BlitToRenderFramebuffer, METH_VARARGS,
   "BlitToRenderFramebuffer(self, includeDepth:bool) -> None\nC++: void BlitToRenderFramebuffer(bool includeDepth)\nBlitToRenderFramebuffer(self, srcX:int, srcY:int, srcWidth:int,\n    srcHeight:int, destX:int, destY:int, destWidth:int,\n    destHeight:int, bufferMode:int, interpolation:int) -> None\nC++: void BlitToRenderFramebuffer(int srcX, int srcY,\n    int srcWidth, int srcHeight, int destX, int destY,\n    int destWidth, int destHeight, int bufferMode,\n    int interpolation)\n\nBlit the currently bound read buffer to the renderbuffer. This is\nuseful for taking rendering from an external system and then\nhaving VTK draw on top of it.\n"},
  {"SetFrameBlitMode", PyvtkOpenGLRenderWindow_SetFrameBlitMode, METH_VARARGS,
   "SetFrameBlitMode(self, _arg:FrameBlitModes) -> None\nC++: virtual void SetFrameBlitMode(FrameBlitModes _arg)\n\nSetGet how to handle blits at the end of a Frame() call. Only\nhappens when SwapBuffers is true.\n\nThe \342\200\234blit\342\200\235 operation means copying something (pixels) from\none region in memory to another. This is a common OpenGL\noperation: check out the glBlitFramebuffer OpenGL method. VTK\nOpenGL rasterizes 3D/2D geometry into color/depth attachments of\nan in-memory framebuffer: in the graphics world, this is called\noffscreen rendering.\n\nThe FrameBlitMode tells VTK where to copy the offscreen buffer.\nEither the default hardware framebuffer or the currently bound\nframebuffer. Here are the available modes:\n- BlitToHardware: This mode blits to the default framebuffer\n  managed by platform(Win32/X/Cocoa) render windows. This is the\n  default mode when VTK is used through one of the platform\n  render windows (with vtkRenderWindow).\n- BlitToCurrent: This mode blits to the currently bound\n  framebuffer. It is useful when an external framebuffer is bound\njust before the vtkRenderWindow::Frame() call. You\342\200\231ll need this\nwhen integrating VTK with other UI frameworks because these UI\n  frameworks create/have their own framebuffers.\n- NoBlit: no blit. The GUI or external code will handle the blit.\n"},
  {"GetFrameBlitModeMinValue", PyvtkOpenGLRenderWindow_GetFrameBlitModeMinValue, METH_VARARGS,
   "GetFrameBlitModeMinValue(self) -> FrameBlitModes\nC++: virtual FrameBlitModes GetFrameBlitModeMinValue()\n\n"},
  {"GetFrameBlitModeMaxValue", PyvtkOpenGLRenderWindow_GetFrameBlitModeMaxValue, METH_VARARGS,
   "GetFrameBlitModeMaxValue(self) -> FrameBlitModes\nC++: virtual FrameBlitModes GetFrameBlitModeMaxValue()\n\n"},
  {"GetFrameBlitMode", PyvtkOpenGLRenderWindow_GetFrameBlitMode, METH_VARARGS,
   "GetFrameBlitMode(self) -> FrameBlitModes\nC++: virtual FrameBlitModes GetFrameBlitMode()\n\n"},
  {"SetFrameBlitModeToBlitToHardware", PyvtkOpenGLRenderWindow_SetFrameBlitModeToBlitToHardware, METH_VARARGS,
   "SetFrameBlitModeToBlitToHardware(self) -> None\nC++: void SetFrameBlitModeToBlitToHardware()\n\n"},
  {"SetFrameBlitModeToBlitToCurrent", PyvtkOpenGLRenderWindow_SetFrameBlitModeToBlitToCurrent, METH_VARARGS,
   "SetFrameBlitModeToBlitToCurrent(self) -> None\nC++: void SetFrameBlitModeToBlitToCurrent()\n\n"},
  {"SetFrameBlitModeToNoBlit", PyvtkOpenGLRenderWindow_SetFrameBlitModeToNoBlit, METH_VARARGS,
   "SetFrameBlitModeToNoBlit(self) -> None\nC++: void SetFrameBlitModeToNoBlit()\n\n"},
  {"SetFramebufferFlipY", PyvtkOpenGLRenderWindow_SetFramebufferFlipY, METH_VARARGS,
   "SetFramebufferFlipY(self, _arg:bool) -> None\nC++: virtual void SetFramebufferFlipY(bool _arg)\n\nEnable/Disable flipping the Y axis of the rendered texture.\n"},
  {"GetFramebufferFlipY", PyvtkOpenGLRenderWindow_GetFramebufferFlipY, METH_VARARGS,
   "GetFramebufferFlipY(self) -> bool\nC++: virtual bool GetFramebufferFlipY()\n\n"},
  {"FramebufferFlipYOn", PyvtkOpenGLRenderWindow_FramebufferFlipYOn, METH_VARARGS,
   "FramebufferFlipYOn(self) -> None\nC++: virtual void FramebufferFlipYOn()\n\n"},
  {"FramebufferFlipYOff", PyvtkOpenGLRenderWindow_FramebufferFlipYOff, METH_VARARGS,
   "FramebufferFlipYOff(self) -> None\nC++: virtual void FramebufferFlipYOff()\n\n"},
  {"TextureDepthBlit", PyvtkOpenGLRenderWindow_TextureDepthBlit, METH_VARARGS,
   "TextureDepthBlit(self, source:vtkTextureObject) -> None\nC++: virtual void TextureDepthBlit(vtkTextureObject *source)\nTextureDepthBlit(self, source:vtkTextureObject, srcX:int,\n    srcY:int, srcX2:int, srcY2:int) -> None\nC++: virtual void TextureDepthBlit(vtkTextureObject *source,\n    int srcX, int srcY, int srcX2, int srcY2)\nTextureDepthBlit(self, source:vtkTextureObject, srcX:int,\n    srcY:int, srcX2:int, srcY2:int, destX:int, destY:int,\n    destX2:int, destY2:int) -> None\nC++: virtual void TextureDepthBlit(vtkTextureObject *source,\n    int srcX, int srcY, int srcX2, int srcY2, int destX,\n    int destY, int destX2, int destY2)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLRenderWindow_Doc =
  "vtkOpenGLRenderWindow - OpenGL rendering window\n\n"
  "Superclass: vtkRenderWindow\n\n"
  "vtkOpenGLRenderWindow is a concrete implementation of the abstract\n"
  "class vtkRenderWindow. vtkOpenGLRenderer interfaces to the OpenGL\n"
  "graphics library. Application programmers should normally use\n"
  "vtkRenderWindow instead of the OpenGL specific version.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLRenderWindow", // tp_name
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
  PyvtkOpenGLRenderWindow_Doc, // tp_doc
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

PyObject *PyvtkOpenGLRenderWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLRenderWindow_Type, PyvtkOpenGLRenderWindow_Methods,
    "vtkOpenGLRenderWindow",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRenderWindow");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLRenderWindow_FrameBlitModes_Type);
  PyVTKEnum_Add(&PyvtkOpenGLRenderWindow_FrameBlitModes_Type, "vtkOpenGLRenderWindow.FrameBlitModes");

  o = (PyObject *)&PyvtkOpenGLRenderWindow_FrameBlitModes_Type;
  if (PyDict_SetItemString(d, "FrameBlitModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkOpenGLRenderWindow::FrameBlitModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "BlitToHardware", vtkOpenGLRenderWindow::BlitToHardware },
        { "BlitToCurrent", vtkOpenGLRenderWindow::BlitToCurrent },
        { "NoBlit", vtkOpenGLRenderWindow::NoBlit },
      };

    o = PyvtkOpenGLRenderWindow_FrameBlitModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}


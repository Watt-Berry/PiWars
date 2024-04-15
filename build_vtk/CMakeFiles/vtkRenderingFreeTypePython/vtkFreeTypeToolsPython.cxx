// python wrapper for vtkFreeTypeTools
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkFreeTypeTools.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFreeTypeTools(PyObject *dict); }
static PyMethodDef PyvtkFreeTypeToolsCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkFreeTypeToolsCleanup_vtkFreeTypeToolsCleanup(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFreeTypeToolsCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFreeTypeToolsCleanup *op = new vtkFreeTypeToolsCleanup();

    result = PyVTKSpecialObject_New("vtkFreeTypeToolsCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeToolsCleanup_vtkFreeTypeToolsCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkFreeTypeToolsCleanup_Doc =

  "vtkFreeTypeToolsCleanup() -> vtkFreeTypeToolsCleanup\nC++: vtkFreeTypeToolsCleanup()\n""\n"
  "vtkFreeTypeToolsCleanup - no description provided.\n\n"
;

static PyObject *
PyvtkFreeTypeToolsCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkFreeTypeToolsCleanup_vtkFreeTypeToolsCleanup(nullptr, args);
}

static void PyvtkFreeTypeToolsCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFreeTypeToolsCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFreeTypeToolsCleanup_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFreeTypeToolsCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingFreeType.vtkFreeTypeToolsCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFreeTypeToolsCleanup_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkFreeTypeToolsCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFreeTypeToolsCleanup_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkFreeTypeToolsCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkFreeTypeToolsCleanup_TypeNew
extern "C" { PyObject *PyvtkFreeTypeToolsCleanup_TypeNew(); }
#define DECLARED_PyvtkFreeTypeToolsCleanup_TypeNew
#endif

PyObject *PyvtkFreeTypeToolsCleanup_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkFreeTypeToolsCleanup_Type,
    PyvtkFreeTypeToolsCleanup_Methods,
    PyvtkFreeTypeToolsCleanup_vtkFreeTypeToolsCleanup_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkFreeTypeTools_ClassNew(); }


static PyObject *
PyvtkFreeTypeTools_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFreeTypeTools::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFreeTypeTools::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFreeTypeTools *tempr = vtkFreeTypeTools::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFreeTypeTools *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFreeTypeTools::NewInstance());

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
PyvtkFreeTypeTools_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFreeTypeTools::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFreeTypeTools::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFreeTypeTools *tempr = vtkFreeTypeTools::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkFreeTypeTools *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFreeTypeTools"))
  {
    vtkFreeTypeTools::SetInstance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetDebugTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDebugTextures(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetDebugTextures(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetDebugTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDebugTextures() :
      op->vtkFreeTypeTools::GetDebugTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_DebugTexturesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugTexturesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugTexturesOn();
    }
    else
    {
      op->vtkFreeTypeTools::DebugTexturesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_DebugTexturesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugTexturesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugTexturesOff();
    }
    else
    {
      op->vtkFreeTypeTools::DebugTexturesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetMaximumNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfFaces(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetMaximumNumberOfFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfFacesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfFacesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfFacesMinValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfFacesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfFacesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfFacesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfFacesMaxValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfFacesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfFaces() :
      op->vtkFreeTypeTools::GetMaximumNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetMaximumNumberOfSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSizes(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetMaximumNumberOfSizes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfSizesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSizesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSizesMinValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfSizesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfSizesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSizesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSizesMaxValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfSizesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSizes() :
      op->vtkFreeTypeTools::GetMaximumNumberOfSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetMaximumNumberOfBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfBytes(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetMaximumNumberOfBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfBytesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBytesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBytesMinValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfBytesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfBytesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBytesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBytesMaxValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfBytesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBytes() :
      op->vtkFreeTypeTools::GetMaximumNumberOfBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  const size_t size3 = 4;
  int temp3[4];
  int save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3) :
      op->vtkFreeTypeTools::GetBoundingBox(temp0, temp1, temp2, temp3));

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
PyvtkFreeTypeTools_RenderString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  vtkImageData *temp3 = nullptr;
  size_t size4 = 0;
  int store4[2*2];
  int *temp4 = nullptr;
  int *save4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 2;
    temp4 = store4;
    save4 = store4 + 2;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4) :
      op->vtkFreeTypeTools::RenderString(temp0, temp1, temp2, temp3, temp4));

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
PyvtkFreeTypeTools_StringToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  vtkPath *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPath"))
  {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3) :
      op->vtkFreeTypeTools::StringToPath(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetConstrainedFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkStdString temp0;
  vtkTextProperty *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4) :
      op->vtkFreeTypeTools::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_HashString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HashString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = vtkFreeTypeTools::HashString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_HashBuffer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HashBuffer");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  unsigned int temp2 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    unsigned int tempr = vtkFreeTypeTools::HashBuffer(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkFreeTypeTools_MapTextPropertyToId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapTextPropertyToId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<size_t> store1(2*size1);
  size_t *temp1 = store1.Data();
  size_t *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapTextPropertyToId(temp0, temp1);
    }
    else
    {
      op->vtkFreeTypeTools::MapTextPropertyToId(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_MapIdToTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapIdToTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  size_t temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->MapIdToTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkFreeTypeTools::MapIdToTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetScaleToPowerTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToPowerTwo(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetScaleToPowerTwo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetScaleToPowerTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleToPowerTwo() :
      op->vtkFreeTypeTools::GetScaleToPowerTwo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_ScaleToPowerTwoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleToPowerTwoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleToPowerTwoOn();
    }
    else
    {
      op->vtkFreeTypeTools::ScaleToPowerTwoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_ScaleToPowerTwoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleToPowerTwoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleToPowerTwoOff();
    }
    else
    {
      op->vtkFreeTypeTools::ScaleToPowerTwoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetForceCompiledFonts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceCompiledFonts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceCompiledFonts(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetForceCompiledFonts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetForceCompiledFonts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceCompiledFonts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceCompiledFonts() :
      op->vtkFreeTypeTools::GetForceCompiledFonts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_ForceCompiledFontsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceCompiledFontsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceCompiledFontsOn();
    }
    else
    {
      op->vtkFreeTypeTools::ForceCompiledFontsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_ForceCompiledFontsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceCompiledFontsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceCompiledFontsOff();
    }
    else
    {
      op->vtkFreeTypeTools::ForceCompiledFontsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeTools_Methods[] = {
  {"IsTypeOf", PyvtkFreeTypeTools_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFreeTypeTools_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFreeTypeTools_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFreeTypeTools\nC++: static vtkFreeTypeTools *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFreeTypeTools_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFreeTypeTools\nC++: vtkFreeTypeTools *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFreeTypeTools_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFreeTypeTools_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInstance", PyvtkFreeTypeTools_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkFreeTypeTools\nC++: static vtkFreeTypeTools *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {"SetInstance", PyvtkFreeTypeTools_SetInstance, METH_VARARGS,
   "SetInstance(instance:vtkFreeTypeTools) -> None\nC++: static void SetInstance(vtkFreeTypeTools *instance)\n\nSupply a user defined instance. Call Delete() on the supplied\ninstance after setting it to fix the reference count.\n"},
  {"SetDebugTextures", PyvtkFreeTypeTools_SetDebugTextures, METH_VARARGS,
   "SetDebugTextures(self, _arg:bool) -> None\nC++: virtual void SetDebugTextures(bool _arg)\n\nIf true, images produced by RenderString will have a transparent\ngrey background and set the justification anchor texel to bright\nyellow.\n"},
  {"GetDebugTextures", PyvtkFreeTypeTools_GetDebugTextures, METH_VARARGS,
   "GetDebugTextures(self) -> bool\nC++: virtual bool GetDebugTextures()\n\n"},
  {"DebugTexturesOn", PyvtkFreeTypeTools_DebugTexturesOn, METH_VARARGS,
   "DebugTexturesOn(self) -> None\nC++: virtual void DebugTexturesOn()\n\n"},
  {"DebugTexturesOff", PyvtkFreeTypeTools_DebugTexturesOff, METH_VARARGS,
   "DebugTexturesOff(self) -> None\nC++: virtual void DebugTexturesOff()\n\n"},
  {"SetMaximumNumberOfFaces", PyvtkFreeTypeTools_SetMaximumNumberOfFaces, METH_VARARGS,
   "SetMaximumNumberOfFaces(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfFaces(unsigned int _arg)\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfFacesMinValue", PyvtkFreeTypeTools_GetMaximumNumberOfFacesMinValue, METH_VARARGS,
   "GetMaximumNumberOfFacesMinValue(self) -> int\nC++: virtual unsigned int GetMaximumNumberOfFacesMinValue()\n\n"},
  {"GetMaximumNumberOfFacesMaxValue", PyvtkFreeTypeTools_GetMaximumNumberOfFacesMaxValue, METH_VARARGS,
   "GetMaximumNumberOfFacesMaxValue(self) -> int\nC++: virtual unsigned int GetMaximumNumberOfFacesMaxValue()\n\n"},
  {"GetMaximumNumberOfFaces", PyvtkFreeTypeTools_GetMaximumNumberOfFaces, METH_VARARGS,
   "GetMaximumNumberOfFaces(self) -> int\nC++: virtual unsigned int GetMaximumNumberOfFaces()\n\n"},
  {"SetMaximumNumberOfSizes", PyvtkFreeTypeTools_SetMaximumNumberOfSizes, METH_VARARGS,
   "SetMaximumNumberOfSizes(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfSizes(unsigned int _arg)\n\n"},
  {"GetMaximumNumberOfSizesMinValue", PyvtkFreeTypeTools_GetMaximumNumberOfSizesMinValue, METH_VARARGS,
   "GetMaximumNumberOfSizesMinValue(self) -> int\nC++: virtual unsigned int GetMaximumNumberOfSizesMinValue()\n\n"},
  {"GetMaximumNumberOfSizesMaxValue", PyvtkFreeTypeTools_GetMaximumNumberOfSizesMaxValue, METH_VARARGS,
   "GetMaximumNumberOfSizesMaxValue(self) -> int\nC++: virtual unsigned int GetMaximumNumberOfSizesMaxValue()\n\n"},
  {"GetMaximumNumberOfSizes", PyvtkFreeTypeTools_GetMaximumNumberOfSizes, METH_VARARGS,
   "GetMaximumNumberOfSizes(self) -> int\nC++: virtual unsigned int GetMaximumNumberOfSizes()\n\n"},
  {"SetMaximumNumberOfBytes", PyvtkFreeTypeTools_SetMaximumNumberOfBytes, METH_VARARGS,
   "SetMaximumNumberOfBytes(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfBytes(unsigned long _arg)\n\n"},
  {"GetMaximumNumberOfBytesMinValue", PyvtkFreeTypeTools_GetMaximumNumberOfBytesMinValue, METH_VARARGS,
   "GetMaximumNumberOfBytesMinValue(self) -> int\nC++: virtual unsigned long GetMaximumNumberOfBytesMinValue()\n\n"},
  {"GetMaximumNumberOfBytesMaxValue", PyvtkFreeTypeTools_GetMaximumNumberOfBytesMaxValue, METH_VARARGS,
   "GetMaximumNumberOfBytesMaxValue(self) -> int\nC++: virtual unsigned long GetMaximumNumberOfBytesMaxValue()\n\n"},
  {"GetMaximumNumberOfBytes", PyvtkFreeTypeTools_GetMaximumNumberOfBytes, METH_VARARGS,
   "GetMaximumNumberOfBytes(self) -> int\nC++: virtual unsigned long GetMaximumNumberOfBytes()\n\n"},
  {"GetBoundingBox", PyvtkFreeTypeTools_GetBoundingBox, METH_VARARGS,
   "GetBoundingBox(self, tprop:vtkTextProperty, str:str, dpi:int,\n    bbox:[int, int, int, int]) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop,\n    const vtkStdString &str, int dpi, int bbox[4])\n\nGiven a text property and a string, get the bounding box {xmin,\nxmax, ymin, ymax} of the rendered string in pixels. The origin of\nthe bounding box is the anchor point described by the horizontal\nand vertical justification text property variables. Returns true\non success, false otherwise.\n@sa GetMetrics\n"},
  {"RenderString", PyvtkFreeTypeTools_RenderString, METH_VARARGS,
   "RenderString(self, tprop:vtkTextProperty, str:str, dpi:int,\n    data:vtkImageData, textDims:[int, int]=...) -> bool\nC++: bool RenderString(vtkTextProperty *tprop,\n    const vtkStdString &str, int dpi, vtkImageData *data,\n    int textDims[2]=nullptr)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. textDims, if\nprovided, will be overwritten by the pixel width and height of\nthe rendered string. This is useful when ScaleToPowerOfTwo is\ntrue, and the image dimensions may not match the dimensions of\nthe rendered text. The origin of the image's extents is aligned\nwith the anchor point described by the text property's vertical\nand horizontal justification options.\n"},
  {"StringToPath", PyvtkFreeTypeTools_StringToPath, METH_VARARGS,
   "StringToPath(self, tprop:vtkTextProperty, str:str, dpi:int,\n    path:vtkPath) -> bool\nC++: bool StringToPath(vtkTextProperty *tprop,\n    const vtkStdString &str, int dpi, vtkPath *path)\n\nGiven a text property and a string, this function populates the\nvtkPath path with the outline of the rendered string. The origin\nof the path coordinates is aligned with the anchor point\ndescribed by the text property's horizontal and vertical\njustification options.\n"},
  {"GetConstrainedFontSize", PyvtkFreeTypeTools_GetConstrainedFontSize, METH_VARARGS,
   "GetConstrainedFontSize(self, str:str, tprop:vtkTextProperty,\n    dpi:int, targetWidth:int, targetHeight:int) -> int\nC++: int GetConstrainedFontSize(const vtkStdString &str,\n    vtkTextProperty *tprop, int dpi, int targetWidth,\n    int targetHeight)\n\nThis function returns the font size (in points) required to fit\nthe string in the target rectangle. The font size of tprop is\nupdated to the computed value as well. If an error occurs, -1 is\nreturned.\n"},
  {"HashString", PyvtkFreeTypeTools_HashString, METH_VARARGS,
   "HashString(str:str) -> int\nC++: static vtkTypeUInt16 HashString(const char *str)\n\nTurn a string into a hash. This is not a general purpose hash\nfunction, and is only used to generate identifiers for cached\nfonts.\n"},
  {"HashBuffer", PyvtkFreeTypeTools_HashBuffer, METH_VARARGS,
   "HashBuffer(buffer:Pointer, n:int, hash:int=0) -> int\nC++: static vtkTypeUInt32 HashBuffer(const void *buffer, size_t n,\n     vtkTypeUInt32 hash=0)\n\nHash a buffer of a given length. This function hashes n bytes and\ndoes not depend on a terminating null character.\n"},
  {"MapTextPropertyToId", PyvtkFreeTypeTools_MapTextPropertyToId, METH_VARARGS,
   "MapTextPropertyToId(self, tprop:vtkTextProperty,\n    tprop_cache_id:[int, ...]) -> None\nC++: void MapTextPropertyToId(vtkTextProperty *tprop,\n    size_t *tprop_cache_id)\n\nGiven a text property 'tprop', get its unique ID in our cache\nframework. In the same way, given a unique ID in our cache,\nretrieve the corresponding text property and assign its\nparameters to 'tprop'. Warning: there is no one to one mapping\nbetween a single text property the corresponding ID, and\nvice-versa. The ID is just a fast hash, a binary mask\nconcatenating the attributes of the text property that are\nrelevant to our cache (Color, Opacity, Justification setting are\nnot stored).\n"},
  {"MapIdToTextProperty", PyvtkFreeTypeTools_MapIdToTextProperty, METH_VARARGS,
   "MapIdToTextProperty(self, tprop_cache_id:int,\n    tprop:vtkTextProperty) -> None\nC++: void MapIdToTextProperty(size_t tprop_cache_id,\n    vtkTextProperty *tprop)\n\n"},
  {"SetScaleToPowerTwo", PyvtkFreeTypeTools_SetScaleToPowerTwo, METH_VARARGS,
   "SetScaleToPowerTwo(self, _arg:bool) -> None\nC++: virtual void SetScaleToPowerTwo(bool _arg)\n\nSet whether the image produced should be scaled up to the nearest\npower of\n2. This is normally required for older graphics cards where all\n   textures must be a power of 2. This defaults to false, and\n   should be fine on modern hardware.\n"},
  {"GetScaleToPowerTwo", PyvtkFreeTypeTools_GetScaleToPowerTwo, METH_VARARGS,
   "GetScaleToPowerTwo(self) -> bool\nC++: virtual bool GetScaleToPowerTwo()\n\n"},
  {"ScaleToPowerTwoOn", PyvtkFreeTypeTools_ScaleToPowerTwoOn, METH_VARARGS,
   "ScaleToPowerTwoOn(self) -> None\nC++: virtual void ScaleToPowerTwoOn()\n\n"},
  {"ScaleToPowerTwoOff", PyvtkFreeTypeTools_ScaleToPowerTwoOff, METH_VARARGS,
   "ScaleToPowerTwoOff(self) -> None\nC++: virtual void ScaleToPowerTwoOff()\n\n"},
  {"SetForceCompiledFonts", PyvtkFreeTypeTools_SetForceCompiledFonts, METH_VARARGS,
   "SetForceCompiledFonts(self, _arg:bool) -> None\nC++: virtual void SetForceCompiledFonts(bool _arg)\n\nForce use of the fonts compiled into VTK, ignoring any FontConfig\nor embedded fonts. Useful for generating test images consistently\nacross platforms. This flag is on by default.\n"},
  {"GetForceCompiledFonts", PyvtkFreeTypeTools_GetForceCompiledFonts, METH_VARARGS,
   "GetForceCompiledFonts(self) -> bool\nC++: virtual bool GetForceCompiledFonts()\n\n"},
  {"ForceCompiledFontsOn", PyvtkFreeTypeTools_ForceCompiledFontsOn, METH_VARARGS,
   "ForceCompiledFontsOn(self) -> None\nC++: virtual void ForceCompiledFontsOn()\n\n"},
  {"ForceCompiledFontsOff", PyvtkFreeTypeTools_ForceCompiledFontsOff, METH_VARARGS,
   "ForceCompiledFontsOff(self) -> None\nC++: virtual void ForceCompiledFontsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFreeTypeTools_Doc =
  "vtkFreeTypeTools - FreeType library support\n\n"
  "Superclass: vtkObject\n\n"
  "vtkFreeTypeTools provides a low-level interface to the FreeType2\n"
  "library, including font-cache and rasterization.\n\n"
  "@warning\n"
  "Internal use only.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFreeTypeTools_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingFreeType.vtkFreeTypeTools", // tp_name
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
  PyvtkFreeTypeTools_Doc, // tp_doc
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

PyObject *PyvtkFreeTypeTools_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFreeTypeTools_Type, PyvtkFreeTypeTools_Methods,
    "vtkFreeTypeTools",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFreeTypeTools(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFreeTypeToolsCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFreeTypeToolsCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkFreeTypeTools_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFreeTypeTools", o) != 0)
  {
    Py_DECREF(o);
  }

}


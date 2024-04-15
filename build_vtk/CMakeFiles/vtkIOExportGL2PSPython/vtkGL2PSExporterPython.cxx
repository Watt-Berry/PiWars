// python wrapper for vtkGL2PSExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGL2PSExporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGL2PSExporter(PyObject *dict); }
extern "C" { PyObject *PyvtkGL2PSExporter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGL2PSExporter_OutputFormat_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExportGL2PS.vtkGL2PSExporter.OutputFormat", // tp_name
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
PyObject *PyvtkGL2PSExporter_OutputFormat_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGL2PSExporter_OutputFormat_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGL2PSExporter_SortScheme_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExportGL2PS.vtkGL2PSExporter.SortScheme", // tp_name
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
PyObject *PyvtkGL2PSExporter_SortScheme_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGL2PSExporter_SortScheme_Type, static_cast<int>(val));
}


static PyObject *
PyvtkGL2PSExporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGL2PSExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGL2PSExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGL2PSExporter *tempr = vtkGL2PSExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGL2PSExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGL2PSExporter::NewInstance());

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
PyvtkGL2PSExporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGL2PSExporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGL2PSExporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePrefix(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetFilePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkGL2PSExporter::GetFilePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBufferSize(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetBufferSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBufferSize() :
      op->vtkGL2PSExporter::GetBufferSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkGL2PSExporter::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_UsePainterSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsePainterSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UsePainterSettings();
    }
    else
    {
      op->vtkGL2PSExporter::UsePainterSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileFormat(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetFileFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFileFormatMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormatMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileFormatMinValue() :
      op->vtkGL2PSExporter::GetFileFormatMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFileFormatMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormatMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileFormatMaxValue() :
      op->vtkGL2PSExporter::GetFileFormatMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFileFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileFormat() :
      op->vtkGL2PSExporter::GetFileFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToPS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToPS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileFormatToPS();
    }
    else
    {
      op->vtkGL2PSExporter::SetFileFormatToPS();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToEPS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToEPS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileFormatToEPS();
    }
    else
    {
      op->vtkGL2PSExporter::SetFileFormatToEPS();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToPDF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToPDF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileFormatToPDF();
    }
    else
    {
      op->vtkGL2PSExporter::SetFileFormatToPDF();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToTeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToTeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileFormatToTeX();
    }
    else
    {
      op->vtkGL2PSExporter::SetFileFormatToTeX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToSVG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToSVG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileFormatToSVG();
    }
    else
    {
      op->vtkGL2PSExporter::SetFileFormatToSVG();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFileFormatAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormatAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileFormatAsString() :
      op->vtkGL2PSExporter::GetFileFormatAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSort(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetSort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSortMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortMinValue() :
      op->vtkGL2PSExporter::GetSortMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSortMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortMaxValue() :
      op->vtkGL2PSExporter::GetSortMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSort() :
      op->vtkGL2PSExporter::GetSort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSortToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortToOff();
    }
    else
    {
      op->vtkGL2PSExporter::SetSortToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSortToSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortToSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortToSimple();
    }
    else
    {
      op->vtkGL2PSExporter::SetSortToSimple();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSortToBSP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortToBSP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortToBSP();
    }
    else
    {
      op->vtkGL2PSExporter::SetSortToBSP();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSortAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSortAsString() :
      op->vtkGL2PSExporter::GetSortAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetCompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompress(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetCompress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetCompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompress() :
      op->vtkGL2PSExporter::GetCompress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_CompressOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompressOn();
    }
    else
    {
      op->vtkGL2PSExporter::CompressOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_CompressOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompressOff();
    }
    else
    {
      op->vtkGL2PSExporter::CompressOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBackground(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetDrawBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawBackground() :
      op->vtkGL2PSExporter::GetDrawBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_DrawBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOn();
    }
    else
    {
      op->vtkGL2PSExporter::DrawBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_DrawBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOff();
    }
    else
    {
      op->vtkGL2PSExporter::DrawBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSimpleLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSimpleLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSimpleLineOffset(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetSimpleLineOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSimpleLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSimpleLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSimpleLineOffset() :
      op->vtkGL2PSExporter::GetSimpleLineOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SimpleLineOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SimpleLineOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SimpleLineOffsetOn();
    }
    else
    {
      op->vtkGL2PSExporter::SimpleLineOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SimpleLineOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SimpleLineOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SimpleLineOffsetOff();
    }
    else
    {
      op->vtkGL2PSExporter::SimpleLineOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSilent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSilent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSilent(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetSilent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSilent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSilent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSilent() :
      op->vtkGL2PSExporter::GetSilent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SilentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SilentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SilentOn();
    }
    else
    {
      op->vtkGL2PSExporter::SilentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SilentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SilentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SilentOff();
    }
    else
    {
      op->vtkGL2PSExporter::SilentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetBestRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBestRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBestRoot(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetBestRoot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetBestRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBestRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBestRoot() :
      op->vtkGL2PSExporter::GetBestRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_BestRootOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BestRootOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BestRootOn();
    }
    else
    {
      op->vtkGL2PSExporter::BestRootOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_BestRootOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BestRootOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BestRootOff();
    }
    else
    {
      op->vtkGL2PSExporter::BestRootOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetText(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetText() :
      op->vtkGL2PSExporter::GetText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_TextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextOn();
    }
    else
    {
      op->vtkGL2PSExporter::TextOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_TextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextOff();
    }
    else
    {
      op->vtkGL2PSExporter::TextOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetLandscape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLandscape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLandscape(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetLandscape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetLandscape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLandscape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLandscape() :
      op->vtkGL2PSExporter::GetLandscape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_LandscapeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LandscapeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LandscapeOn();
    }
    else
    {
      op->vtkGL2PSExporter::LandscapeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_LandscapeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LandscapeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LandscapeOff();
    }
    else
    {
      op->vtkGL2PSExporter::LandscapeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetPS3Shading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPS3Shading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPS3Shading(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetPS3Shading(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetPS3Shading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPS3Shading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPS3Shading() :
      op->vtkGL2PSExporter::GetPS3Shading());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_PS3ShadingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PS3ShadingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PS3ShadingOn();
    }
    else
    {
      op->vtkGL2PSExporter::PS3ShadingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_PS3ShadingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PS3ShadingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PS3ShadingOff();
    }
    else
    {
      op->vtkGL2PSExporter::PS3ShadingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetOcclusionCull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOcclusionCull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOcclusionCull(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetOcclusionCull(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetOcclusionCull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionCull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOcclusionCull() :
      op->vtkGL2PSExporter::GetOcclusionCull());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_OcclusionCullOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OcclusionCullOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OcclusionCullOn();
    }
    else
    {
      op->vtkGL2PSExporter::OcclusionCullOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_OcclusionCullOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OcclusionCullOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OcclusionCullOff();
    }
    else
    {
      op->vtkGL2PSExporter::OcclusionCullOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetWrite3DPropsAsRasterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrite3DPropsAsRasterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWrite3DPropsAsRasterImage(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetWrite3DPropsAsRasterImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetWrite3DPropsAsRasterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrite3DPropsAsRasterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrite3DPropsAsRasterImage() :
      op->vtkGL2PSExporter::GetWrite3DPropsAsRasterImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_Write3DPropsAsRasterImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write3DPropsAsRasterImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write3DPropsAsRasterImageOn();
    }
    else
    {
      op->vtkGL2PSExporter::Write3DPropsAsRasterImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_Write3DPropsAsRasterImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write3DPropsAsRasterImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write3DPropsAsRasterImageOff();
    }
    else
    {
      op->vtkGL2PSExporter::Write3DPropsAsRasterImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetTextAsPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextAsPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextAsPath(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetTextAsPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetTextAsPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextAsPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTextAsPath() :
      op->vtkGL2PSExporter::GetTextAsPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_TextAsPathOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextAsPathOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextAsPathOn();
    }
    else
    {
      op->vtkGL2PSExporter::TextAsPathOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_TextAsPathOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextAsPathOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextAsPathOff();
    }
    else
    {
      op->vtkGL2PSExporter::TextAsPathOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetRasterExclusions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRasterExclusions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->SetRasterExclusions(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetRasterExclusions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetRasterExclusions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRasterExclusions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropCollection *tempr = (ap.IsBound() ?
      op->GetRasterExclusions() :
      op->vtkGL2PSExporter::GetRasterExclusions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetPointSizeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSizeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSizeFactor(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetPointSizeFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetPointSizeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeFactor() :
      op->vtkGL2PSExporter::GetPointSizeFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetLineWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidthFactor(temp0);
    }
    else
    {
      op->vtkGL2PSExporter::SetLineWidthFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetLineWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthFactor() :
      op->vtkGL2PSExporter::GetLineWidthFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGL2PSExporter_Methods[] = {
  {"IsTypeOf", PyvtkGL2PSExporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGL2PSExporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGL2PSExporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGL2PSExporter\nC++: static vtkGL2PSExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGL2PSExporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGL2PSExporter\nC++: vtkGL2PSExporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGL2PSExporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGL2PSExporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFilePrefix", PyvtkGL2PSExporter_SetFilePrefix, METH_VARARGS,
   "SetFilePrefix(self, _arg:str) -> None\nC++: virtual void SetFilePrefix(const char *_arg)\n\nSpecify the prefix of the files to write out. The resulting\nfilenames will have .ps or .eps or .tex appended to them\ndepending on the other options chosen.\n"},
  {"GetFilePrefix", PyvtkGL2PSExporter_GetFilePrefix, METH_VARARGS,
   "GetFilePrefix(self) -> str\nC++: virtual char *GetFilePrefix()\n\n"},
  {"SetBufferSize", PyvtkGL2PSExporter_SetBufferSize, METH_VARARGS,
   "SetBufferSize(self, _arg:int) -> None\nC++: virtual void SetBufferSize(int _arg)\n\nThe initial size of the GL2PS export buffer in bytes. The buffer\nis used to store the exported image prior to writing to file. If\nthe buffer is too small, the exporter will enlarge the buffer and\nrerender until the export is successful. Setting a larger value\nhere can reduce the time needed to export a complex scene by\nreducing the number of iterations required. The default initial\nsize is 4 MB.\n"},
  {"GetBufferSize", PyvtkGL2PSExporter_GetBufferSize, METH_VARARGS,
   "GetBufferSize(self) -> int\nC++: virtual int GetBufferSize()\n\n"},
  {"SetTitle", PyvtkGL2PSExporter_SetTitle, METH_VARARGS,
   "SetTitle(self, _arg:str) -> None\nC++: virtual void SetTitle(const char *_arg)\n\nSet the title for the output, if supported. If nullptr, \"VTK GL2PS\nExport\" is used.\n"},
  {"GetTitle", PyvtkGL2PSExporter_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual char *GetTitle()\n\n"},
  {"UsePainterSettings", PyvtkGL2PSExporter_UsePainterSettings, METH_VARARGS,
   "UsePainterSettings(self) -> None\nC++: void UsePainterSettings()\n\nConfigure the exporter to expect a painter-ordered 2D rendering,\nthat is, a rendering at a fixed depth where primitives are drawn\nfrom the bottom up. This disables sorting, which will break the\npainter ordering, and turns off the simple line offset, which can\ncause line primitives to be drawn on top of all other geometry.\n"},
  {"SetFileFormat", PyvtkGL2PSExporter_SetFileFormat, METH_VARARGS,
   "SetFileFormat(self, _arg:int) -> None\nC++: virtual void SetFileFormat(int _arg)\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {"GetFileFormatMinValue", PyvtkGL2PSExporter_GetFileFormatMinValue, METH_VARARGS,
   "GetFileFormatMinValue(self) -> int\nC++: virtual int GetFileFormatMinValue()\n\n"},
  {"GetFileFormatMaxValue", PyvtkGL2PSExporter_GetFileFormatMaxValue, METH_VARARGS,
   "GetFileFormatMaxValue(self) -> int\nC++: virtual int GetFileFormatMaxValue()\n\n"},
  {"GetFileFormat", PyvtkGL2PSExporter_GetFileFormat, METH_VARARGS,
   "GetFileFormat(self) -> int\nC++: virtual int GetFileFormat()\n\n"},
  {"SetFileFormatToPS", PyvtkGL2PSExporter_SetFileFormatToPS, METH_VARARGS,
   "SetFileFormatToPS(self) -> None\nC++: void SetFileFormatToPS()\n\n"},
  {"SetFileFormatToEPS", PyvtkGL2PSExporter_SetFileFormatToEPS, METH_VARARGS,
   "SetFileFormatToEPS(self) -> None\nC++: void SetFileFormatToEPS()\n\n"},
  {"SetFileFormatToPDF", PyvtkGL2PSExporter_SetFileFormatToPDF, METH_VARARGS,
   "SetFileFormatToPDF(self) -> None\nC++: void SetFileFormatToPDF()\n\n"},
  {"SetFileFormatToTeX", PyvtkGL2PSExporter_SetFileFormatToTeX, METH_VARARGS,
   "SetFileFormatToTeX(self) -> None\nC++: void SetFileFormatToTeX()\n\n"},
  {"SetFileFormatToSVG", PyvtkGL2PSExporter_SetFileFormatToSVG, METH_VARARGS,
   "SetFileFormatToSVG(self) -> None\nC++: void SetFileFormatToSVG()\n\n"},
  {"GetFileFormatAsString", PyvtkGL2PSExporter_GetFileFormatAsString, METH_VARARGS,
   "GetFileFormatAsString(self) -> str\nC++: const char *GetFileFormatAsString()\n\n"},
  {"SetSort", PyvtkGL2PSExporter_SetSort, METH_VARARGS,
   "SetSort(self, _arg:int) -> None\nC++: virtual void SetSort(int _arg)\n\nSet the type of sorting algorithm to order primitives from back\nto front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {"GetSortMinValue", PyvtkGL2PSExporter_GetSortMinValue, METH_VARARGS,
   "GetSortMinValue(self) -> int\nC++: virtual int GetSortMinValue()\n\n"},
  {"GetSortMaxValue", PyvtkGL2PSExporter_GetSortMaxValue, METH_VARARGS,
   "GetSortMaxValue(self) -> int\nC++: virtual int GetSortMaxValue()\n\n"},
  {"GetSort", PyvtkGL2PSExporter_GetSort, METH_VARARGS,
   "GetSort(self) -> int\nC++: virtual int GetSort()\n\n"},
  {"SetSortToOff", PyvtkGL2PSExporter_SetSortToOff, METH_VARARGS,
   "SetSortToOff(self) -> None\nC++: void SetSortToOff()\n\n"},
  {"SetSortToSimple", PyvtkGL2PSExporter_SetSortToSimple, METH_VARARGS,
   "SetSortToSimple(self) -> None\nC++: void SetSortToSimple()\n\n"},
  {"SetSortToBSP", PyvtkGL2PSExporter_SetSortToBSP, METH_VARARGS,
   "SetSortToBSP(self) -> None\nC++: void SetSortToBSP()\n\n"},
  {"GetSortAsString", PyvtkGL2PSExporter_GetSortAsString, METH_VARARGS,
   "GetSortAsString(self) -> str\nC++: const char *GetSortAsString()\n\n"},
  {"SetCompress", PyvtkGL2PSExporter_SetCompress, METH_VARARGS,
   "SetCompress(self, _arg:int) -> None\nC++: virtual void SetCompress(vtkTypeBool _arg)\n\nTurn on/off compression when generating PostScript or PDF output.\nBy default compression is on.\n"},
  {"GetCompress", PyvtkGL2PSExporter_GetCompress, METH_VARARGS,
   "GetCompress(self) -> int\nC++: virtual vtkTypeBool GetCompress()\n\n"},
  {"CompressOn", PyvtkGL2PSExporter_CompressOn, METH_VARARGS,
   "CompressOn(self) -> None\nC++: virtual void CompressOn()\n\n"},
  {"CompressOff", PyvtkGL2PSExporter_CompressOff, METH_VARARGS,
   "CompressOff(self) -> None\nC++: virtual void CompressOff()\n\n"},
  {"SetDrawBackground", PyvtkGL2PSExporter_SetDrawBackground, METH_VARARGS,
   "SetDrawBackground(self, _arg:int) -> None\nC++: virtual void SetDrawBackground(vtkTypeBool _arg)\n\nTurn on/off drawing the background frame.  If off the background\nis treated as white.  By default the background is drawn. On the\nOpenGL2 backend, the background is always drawn.\n"},
  {"GetDrawBackground", PyvtkGL2PSExporter_GetDrawBackground, METH_VARARGS,
   "GetDrawBackground(self) -> int\nC++: virtual vtkTypeBool GetDrawBackground()\n\n"},
  {"DrawBackgroundOn", PyvtkGL2PSExporter_DrawBackgroundOn, METH_VARARGS,
   "DrawBackgroundOn(self) -> None\nC++: virtual void DrawBackgroundOn()\n\n"},
  {"DrawBackgroundOff", PyvtkGL2PSExporter_DrawBackgroundOff, METH_VARARGS,
   "DrawBackgroundOff(self) -> None\nC++: virtual void DrawBackgroundOff()\n\n"},
  {"SetSimpleLineOffset", PyvtkGL2PSExporter_SetSimpleLineOffset, METH_VARARGS,
   "SetSimpleLineOffset(self, _arg:int) -> None\nC++: virtual void SetSimpleLineOffset(vtkTypeBool _arg)\n\nTurn on/off the GL2PS_SIMPLE_LINE_OFFSET option.  When enabled a\nsmall offset is added in the z-buffer to all the lines in the\nplot.  This results in an anti-aliasing like solution.  Defaults\nto on.\n"},
  {"GetSimpleLineOffset", PyvtkGL2PSExporter_GetSimpleLineOffset, METH_VARARGS,
   "GetSimpleLineOffset(self) -> int\nC++: virtual vtkTypeBool GetSimpleLineOffset()\n\n"},
  {"SimpleLineOffsetOn", PyvtkGL2PSExporter_SimpleLineOffsetOn, METH_VARARGS,
   "SimpleLineOffsetOn(self) -> None\nC++: virtual void SimpleLineOffsetOn()\n\n"},
  {"SimpleLineOffsetOff", PyvtkGL2PSExporter_SimpleLineOffsetOff, METH_VARARGS,
   "SimpleLineOffsetOff(self) -> None\nC++: virtual void SimpleLineOffsetOff()\n\n"},
  {"SetSilent", PyvtkGL2PSExporter_SetSilent, METH_VARARGS,
   "SetSilent(self, _arg:int) -> None\nC++: virtual void SetSilent(vtkTypeBool _arg)\n\nTurn on/off GL2PS messages sent to stderr (GL2PS_SILENT).  When\nenabled GL2PS messages are suppressed.  Defaults to off.\n"},
  {"GetSilent", PyvtkGL2PSExporter_GetSilent, METH_VARARGS,
   "GetSilent(self) -> int\nC++: virtual vtkTypeBool GetSilent()\n\n"},
  {"SilentOn", PyvtkGL2PSExporter_SilentOn, METH_VARARGS,
   "SilentOn(self) -> None\nC++: virtual void SilentOn()\n\n"},
  {"SilentOff", PyvtkGL2PSExporter_SilentOff, METH_VARARGS,
   "SilentOff(self) -> None\nC++: virtual void SilentOff()\n\n"},
  {"SetBestRoot", PyvtkGL2PSExporter_SetBestRoot, METH_VARARGS,
   "SetBestRoot(self, _arg:int) -> None\nC++: virtual void SetBestRoot(vtkTypeBool _arg)\n\nTurn on/off the GL2PS_BEST_ROOT option.  When enabled the\nconstruction of the BSP tree is optimized by choosing the root\nprimitives leading to the minimum number of splits.  Defaults to\non.\n"},
  {"GetBestRoot", PyvtkGL2PSExporter_GetBestRoot, METH_VARARGS,
   "GetBestRoot(self) -> int\nC++: virtual vtkTypeBool GetBestRoot()\n\n"},
  {"BestRootOn", PyvtkGL2PSExporter_BestRootOn, METH_VARARGS,
   "BestRootOn(self) -> None\nC++: virtual void BestRootOn()\n\n"},
  {"BestRootOff", PyvtkGL2PSExporter_BestRootOff, METH_VARARGS,
   "BestRootOff(self) -> None\nC++: virtual void BestRootOff()\n\n"},
  {"SetText", PyvtkGL2PSExporter_SetText, METH_VARARGS,
   "SetText(self, _arg:int) -> None\nC++: virtual void SetText(vtkTypeBool _arg)\n\nTurn on/off drawing the text.  If on (default) the text is drawn.\nIf the FileFormat is set to TeX output then a LaTeX picture is\ngenerated with the text strings.  If off text output is\nsuppressed.\n"},
  {"GetText", PyvtkGL2PSExporter_GetText, METH_VARARGS,
   "GetText(self) -> int\nC++: virtual vtkTypeBool GetText()\n\n"},
  {"TextOn", PyvtkGL2PSExporter_TextOn, METH_VARARGS,
   "TextOn(self) -> None\nC++: virtual void TextOn()\n\n"},
  {"TextOff", PyvtkGL2PSExporter_TextOff, METH_VARARGS,
   "TextOff(self) -> None\nC++: virtual void TextOff()\n\n"},
  {"SetLandscape", PyvtkGL2PSExporter_SetLandscape, METH_VARARGS,
   "SetLandscape(self, _arg:int) -> None\nC++: virtual void SetLandscape(vtkTypeBool _arg)\n\nTurn on/off landscape orientation.  If off (default) the\norientation is set to portrait.\n"},
  {"GetLandscape", PyvtkGL2PSExporter_GetLandscape, METH_VARARGS,
   "GetLandscape(self) -> int\nC++: virtual vtkTypeBool GetLandscape()\n\n"},
  {"LandscapeOn", PyvtkGL2PSExporter_LandscapeOn, METH_VARARGS,
   "LandscapeOn(self) -> None\nC++: virtual void LandscapeOn()\n\n"},
  {"LandscapeOff", PyvtkGL2PSExporter_LandscapeOff, METH_VARARGS,
   "LandscapeOff(self) -> None\nC++: virtual void LandscapeOff()\n\n"},
  {"SetPS3Shading", PyvtkGL2PSExporter_SetPS3Shading, METH_VARARGS,
   "SetPS3Shading(self, _arg:int) -> None\nC++: virtual void SetPS3Shading(vtkTypeBool _arg)\n\nTurn on/off the GL2PS_PS3_SHADING option.  When enabled the\nshfill PostScript level 3 operator is used.  Read the GL2PS\ndocumentation for more details.  Defaults to on.\n"},
  {"GetPS3Shading", PyvtkGL2PSExporter_GetPS3Shading, METH_VARARGS,
   "GetPS3Shading(self) -> int\nC++: virtual vtkTypeBool GetPS3Shading()\n\n"},
  {"PS3ShadingOn", PyvtkGL2PSExporter_PS3ShadingOn, METH_VARARGS,
   "PS3ShadingOn(self) -> None\nC++: virtual void PS3ShadingOn()\n\n"},
  {"PS3ShadingOff", PyvtkGL2PSExporter_PS3ShadingOff, METH_VARARGS,
   "PS3ShadingOff(self) -> None\nC++: virtual void PS3ShadingOff()\n\n"},
  {"SetOcclusionCull", PyvtkGL2PSExporter_SetOcclusionCull, METH_VARARGS,
   "SetOcclusionCull(self, _arg:int) -> None\nC++: virtual void SetOcclusionCull(vtkTypeBool _arg)\n\nTurn on/off culling of occluded polygons (GL2PS_OCCLUSION_CULL).\nWhen enabled hidden polygons are removed.  This reduces file size\nconsiderably.  Defaults to on.\n"},
  {"GetOcclusionCull", PyvtkGL2PSExporter_GetOcclusionCull, METH_VARARGS,
   "GetOcclusionCull(self) -> int\nC++: virtual vtkTypeBool GetOcclusionCull()\n\n"},
  {"OcclusionCullOn", PyvtkGL2PSExporter_OcclusionCullOn, METH_VARARGS,
   "OcclusionCullOn(self) -> None\nC++: virtual void OcclusionCullOn()\n\n"},
  {"OcclusionCullOff", PyvtkGL2PSExporter_OcclusionCullOff, METH_VARARGS,
   "OcclusionCullOff(self) -> None\nC++: virtual void OcclusionCullOff()\n\n"},
  {"SetWrite3DPropsAsRasterImage", PyvtkGL2PSExporter_SetWrite3DPropsAsRasterImage, METH_VARARGS,
   "SetWrite3DPropsAsRasterImage(self, _arg:int) -> None\nC++: virtual void SetWrite3DPropsAsRasterImage(vtkTypeBool _arg)\n\nTurn on/off writing 3D props as raster images.  2D props are\nrendered using vector graphics primitives.  If you have hi-res\nactors and are using transparency you probably need to turn this\non.  Defaults to Off. This option has no effect when the OpenGL2\nbackend is in use, as all 3D props (excluding vtkTextActor3D) are\nrasterized into the background.\n"},
  {"GetWrite3DPropsAsRasterImage", PyvtkGL2PSExporter_GetWrite3DPropsAsRasterImage, METH_VARARGS,
   "GetWrite3DPropsAsRasterImage(self) -> int\nC++: virtual vtkTypeBool GetWrite3DPropsAsRasterImage()\n\n"},
  {"Write3DPropsAsRasterImageOn", PyvtkGL2PSExporter_Write3DPropsAsRasterImageOn, METH_VARARGS,
   "Write3DPropsAsRasterImageOn(self) -> None\nC++: virtual void Write3DPropsAsRasterImageOn()\n\n"},
  {"Write3DPropsAsRasterImageOff", PyvtkGL2PSExporter_Write3DPropsAsRasterImageOff, METH_VARARGS,
   "Write3DPropsAsRasterImageOff(self) -> None\nC++: virtual void Write3DPropsAsRasterImageOff()\n\n"},
  {"SetTextAsPath", PyvtkGL2PSExporter_SetTextAsPath, METH_VARARGS,
   "SetTextAsPath(self, _arg:bool) -> None\nC++: virtual void SetTextAsPath(bool _arg)\n\nTurn on/off exporting text as path information, rather than\ncharacter data. This is useful for the PDF backend, which does\nnot properly support aligned text otherwise. Defaults to Off.\n"},
  {"GetTextAsPath", PyvtkGL2PSExporter_GetTextAsPath, METH_VARARGS,
   "GetTextAsPath(self) -> bool\nC++: virtual bool GetTextAsPath()\n\n"},
  {"TextAsPathOn", PyvtkGL2PSExporter_TextAsPathOn, METH_VARARGS,
   "TextAsPathOn(self) -> None\nC++: virtual void TextAsPathOn()\n\n"},
  {"TextAsPathOff", PyvtkGL2PSExporter_TextAsPathOff, METH_VARARGS,
   "TextAsPathOff(self) -> None\nC++: virtual void TextAsPathOff()\n\n"},
  {"SetRasterExclusions", PyvtkGL2PSExporter_SetRasterExclusions, METH_VARARGS,
   "SetRasterExclusions(self, __a:vtkPropCollection) -> None\nC++: void SetRasterExclusions(vtkPropCollection *)\n\nCollection of props to exclude from rasterization. These will be\nrendered as 2D vector primitives in the output. This setting is\nignored if Write3DPropsAsRasterImage is false. Behind the scenes,\nthese props are treated as 2D props during the vector output\ngeneration.\n"},
  {"GetRasterExclusions", PyvtkGL2PSExporter_GetRasterExclusions, METH_VARARGS,
   "GetRasterExclusions(self) -> vtkPropCollection\nC++: virtual vtkPropCollection *GetRasterExclusions()\n\n"},
  {"SetPointSizeFactor", PyvtkGL2PSExporter_SetPointSizeFactor, METH_VARARGS,
   "SetPointSizeFactor(self, _arg:float) -> None\nC++: virtual void SetPointSizeFactor(float _arg)\n\nSet the ratio between the OpenGL PointSize and that used by GL2PS\nto generate PostScript.  Defaults to a ratio of 5/7.\n"},
  {"GetPointSizeFactor", PyvtkGL2PSExporter_GetPointSizeFactor, METH_VARARGS,
   "GetPointSizeFactor(self) -> float\nC++: virtual float GetPointSizeFactor()\n\n"},
  {"SetLineWidthFactor", PyvtkGL2PSExporter_SetLineWidthFactor, METH_VARARGS,
   "SetLineWidthFactor(self, _arg:float) -> None\nC++: virtual void SetLineWidthFactor(float _arg)\n\nSet the ratio between the OpenGL LineWidth and that used by GL2PS\nto generate PostScript.  Defaults to a ratio of 5/7.\n"},
  {"GetLineWidthFactor", PyvtkGL2PSExporter_GetLineWidthFactor, METH_VARARGS,
   "GetLineWidthFactor(self) -> float\nC++: virtual float GetLineWidthFactor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGL2PSExporter_Doc =
  "vtkGL2PSExporter - export a scene as a PostScript file using GL2PS.\n\n"
  "Superclass: vtkExporter\n\n"
  "vtkGL2PSExporter is a concrete subclass of vtkExporter that writes\n"
  "high quality vector PostScript (PS/EPS), PDF or SVG files by using\n"
  "GL2PS.  GL2PS can be obtained at: http://www.geuz.org/gl2ps/.  This\n"
  "can be very useful when one requires publication quality pictures.\n"
  "This class works best with simple 3D scenes and most 2D plots. Please\n"
  "note that GL2PS has its limitations since PostScript is not an ideal\n"
  "language to represent complex 3D scenes.  However, this class does\n"
  "allow one to write mixed vector/raster files by using the\n"
  "Write3DPropsAsRasterImage ivar.  Please do read the caveats section\n"
  "of this documentation.\n\n"
  "By default vtkGL2PSExporter generates Encapsulated PostScript (EPS)\n"
  "output along with the text in portrait orientation with the\n"
  "background color of the window being drawn.  The generated output is\n"
  "also compressed using zlib. The various other options are set to\n"
  "sensible defaults.\n\n"
  "The output file format (FileFormat) can be either PostScript (PS),\n"
  "Encapsulated PostScript (EPS), PDF, SVG or TeX.  The file extension\n"
  "is generated automatically depending on the FileFormat.  The default\n"
  "is EPS.  When TeX output is chosen, only the text strings in the plot\n"
  "are generated and put into a picture environment.  One can turn on\n"
  "and off the text when generating PS/EPS/PDF/SVG files by using the\n"
  "Text boolean variable.  By default the text is drawn. The background\n"
  "color of the renderwindow is drawn by default.  To make the\n"
  "background white instead use the DrawBackgroundOff function. \n"
  "Landscape figures can be generated by using the LandscapeOn function.\n"
  " Portrait orientation is used by default. Several of the GL2PS\n"
  "options can be set.  The names of the ivars for these options are\n"
  "similar to the ones that GL2PS provides. Compress, SimpleLineOffset,\n"
  "Silent, BestRoot, PS3Shading and OcclusionCull are similar to the\n"
  "options provided by GL2PS.  Please read the function documentation or\n"
  "the GL2PS documentation for more details.  The ivar\n"
  "Write3DPropsAsRasterImage allows one to generate mixed vector/raster\n"
  "images.  All the 3D props in the scene will be written as a raster\n"
  "image and all 2D actors will be written as vector graphic primitives.\n"
  " This makes it possible to handle transparency and complex 3D scenes.\n"
  " This ivar is set to Off by default.  Specific 3D props can be\n"
  "excluded from the rasterization process by adding them to the\n"
  "RasterExclusions ivar.  Props in this collection will be rendered as\n"
  "2D vector primitives instead.\n\n"
  "@warning\n"
  "By default (with Write3DPropsAsRasterImage set to Off) exporting\n"
  "complex 3D scenes can take a long while and result in huge output\n"
  "files.  Generating correct vector graphics output for scenes with\n"
  "transparency is almost impossible.  However, one can set\n"
  "Write3DPropsAsRasterImageOn and generate mixed vector/raster files.\n"
  "This should work fine with complex scenes along with transparent\n"
  "actors.\n\n"
  "@sa\n"
  "vtkExporter\n\n"
  "@par Thanks: Thanks to Goodwin Lawlor and Prabhu Ramachandran for\n"
  "this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGL2PSExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExportGL2PS.vtkGL2PSExporter", // tp_name
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
  PyvtkGL2PSExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGL2PSExporter_StaticNew()
{
  return vtkGL2PSExporter::New();
}

PyObject *PyvtkGL2PSExporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGL2PSExporter_Type, PyvtkGL2PSExporter_Methods,
    "vtkGL2PSExporter",
 &PyvtkGL2PSExporter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkExporter");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGL2PSExporter_OutputFormat_Type);
  PyVTKEnum_Add(&PyvtkGL2PSExporter_OutputFormat_Type, "vtkGL2PSExporter.OutputFormat");

  o = (PyObject *)&PyvtkGL2PSExporter_OutputFormat_Type;
  if (PyDict_SetItemString(d, "OutputFormat", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGL2PSExporter_SortScheme_Type);
  PyVTKEnum_Add(&PyvtkGL2PSExporter_SortScheme_Type, "vtkGL2PSExporter.SortScheme");

  o = (PyObject *)&PyvtkGL2PSExporter_SortScheme_Type;
  if (PyDict_SetItemString(d, "SortScheme", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkGL2PSExporter::OutputFormat cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "PS_FILE", vtkGL2PSExporter::PS_FILE },
        { "EPS_FILE", vtkGL2PSExporter::EPS_FILE },
        { "PDF_FILE", vtkGL2PSExporter::PDF_FILE },
        { "TEX_FILE", vtkGL2PSExporter::TEX_FILE },
        { "SVG_FILE", vtkGL2PSExporter::SVG_FILE },
      };

    o = PyvtkGL2PSExporter_OutputFormat_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkGL2PSExporter::SortScheme cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NO_SORT", vtkGL2PSExporter::NO_SORT },
        { "SIMPLE_SORT", vtkGL2PSExporter::SIMPLE_SORT },
        { "BSP_SORT", vtkGL2PSExporter::BSP_SORT },
      };

    o = PyvtkGL2PSExporter_SortScheme_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGL2PSExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGL2PSExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGL2PSExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}


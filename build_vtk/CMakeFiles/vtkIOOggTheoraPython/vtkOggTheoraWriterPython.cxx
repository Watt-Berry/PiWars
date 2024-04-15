// python wrapper for vtkOggTheoraWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOggTheoraWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOggTheoraWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkOggTheoraWriter_ClassNew(); }


static PyObject *
PyvtkOggTheoraWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOggTheoraWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOggTheoraWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOggTheoraWriter *tempr = vtkOggTheoraWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOggTheoraWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOggTheoraWriter::NewInstance());

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
PyvtkOggTheoraWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOggTheoraWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOggTheoraWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkOggTheoraWriter::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkOggTheoraWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->End();
    }
    else
    {
      op->vtkOggTheoraWriter::End();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuality(temp0);
    }
    else
    {
      op->vtkOggTheoraWriter::SetQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQualityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMinValue() :
      op->vtkOggTheoraWriter::GetQualityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQualityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMaxValue() :
      op->vtkOggTheoraWriter::GetQualityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuality() :
      op->vtkOggTheoraWriter::GetQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRate(temp0);
    }
    else
    {
      op->vtkOggTheoraWriter::SetRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRateMinValue() :
      op->vtkOggTheoraWriter::GetRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRateMaxValue() :
      op->vtkOggTheoraWriter::GetRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRate() :
      op->vtkOggTheoraWriter::GetRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetSubsampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubsampling(temp0);
    }
    else
    {
      op->vtkOggTheoraWriter::SetSubsampling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetSubsampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubsampling() :
      op->vtkOggTheoraWriter::GetSubsampling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SubsamplingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsamplingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SubsamplingOn();
    }
    else
    {
      op->vtkOggTheoraWriter::SubsamplingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SubsamplingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsamplingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SubsamplingOff();
    }
    else
    {
      op->vtkOggTheoraWriter::SubsamplingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOggTheoraWriter_Methods[] = {
  {"IsTypeOf", PyvtkOggTheoraWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOggTheoraWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOggTheoraWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOggTheoraWriter\nC++: static vtkOggTheoraWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOggTheoraWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOggTheoraWriter\nC++: vtkOggTheoraWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOggTheoraWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOggTheoraWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Start", PyvtkOggTheoraWriter_Start, METH_VARARGS,
   "Start(self) -> None\nC++: void Start() override;\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {"Write", PyvtkOggTheoraWriter_Write, METH_VARARGS,
   "Write(self) -> None\nC++: void Write() override;\n\n"},
  {"End", PyvtkOggTheoraWriter_End, METH_VARARGS,
   "End(self) -> None\nC++: void End() override;\n\n"},
  {"SetQuality", PyvtkOggTheoraWriter_SetQuality, METH_VARARGS,
   "SetQuality(self, _arg:int) -> None\nC++: virtual void SetQuality(int _arg)\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {"GetQualityMinValue", PyvtkOggTheoraWriter_GetQualityMinValue, METH_VARARGS,
   "GetQualityMinValue(self) -> int\nC++: virtual int GetQualityMinValue()\n\n"},
  {"GetQualityMaxValue", PyvtkOggTheoraWriter_GetQualityMaxValue, METH_VARARGS,
   "GetQualityMaxValue(self) -> int\nC++: virtual int GetQualityMaxValue()\n\n"},
  {"GetQuality", PyvtkOggTheoraWriter_GetQuality, METH_VARARGS,
   "GetQuality(self) -> int\nC++: virtual int GetQuality()\n\n"},
  {"SetRate", PyvtkOggTheoraWriter_SetRate, METH_VARARGS,
   "SetRate(self, _arg:int) -> None\nC++: virtual void SetRate(int _arg)\n\nSet/Get the frame rate, in frame/s.\n"},
  {"GetRateMinValue", PyvtkOggTheoraWriter_GetRateMinValue, METH_VARARGS,
   "GetRateMinValue(self) -> int\nC++: virtual int GetRateMinValue()\n\n"},
  {"GetRateMaxValue", PyvtkOggTheoraWriter_GetRateMaxValue, METH_VARARGS,
   "GetRateMaxValue(self) -> int\nC++: virtual int GetRateMaxValue()\n\n"},
  {"GetRate", PyvtkOggTheoraWriter_GetRate, METH_VARARGS,
   "GetRate(self) -> int\nC++: virtual int GetRate()\n\n"},
  {"SetSubsampling", PyvtkOggTheoraWriter_SetSubsampling, METH_VARARGS,
   "SetSubsampling(self, _arg:int) -> None\nC++: virtual void SetSubsampling(vtkTypeBool _arg)\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {"GetSubsampling", PyvtkOggTheoraWriter_GetSubsampling, METH_VARARGS,
   "GetSubsampling(self) -> int\nC++: virtual vtkTypeBool GetSubsampling()\n\n"},
  {"SubsamplingOn", PyvtkOggTheoraWriter_SubsamplingOn, METH_VARARGS,
   "SubsamplingOn(self) -> None\nC++: virtual void SubsamplingOn()\n\n"},
  {"SubsamplingOff", PyvtkOggTheoraWriter_SubsamplingOff, METH_VARARGS,
   "SubsamplingOff(self) -> None\nC++: virtual void SubsamplingOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOggTheoraWriter_Doc =
  "vtkOggTheoraWriter - Uses the ogg and theora libraries to write video\nfiles.\n\n"
  "Superclass: vtkGenericMovieWriter\n\n"
  "vtkOggTheoraWriter is an adapter that allows VTK to use the ogg and\n"
  "theora libraries to write movie files.  This class creates .ogv files\n"
  "containing theora encoded video without audio.\n\n"
  "This implementation is based on vtkFFMPEGWriter and uses some code\n"
  "derived from the encoder example distributed with libtheora.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOggTheoraWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOOggTheora.vtkOggTheoraWriter", // tp_name
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
  PyvtkOggTheoraWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOggTheoraWriter_StaticNew()
{
  return vtkOggTheoraWriter::New();
}

PyObject *PyvtkOggTheoraWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOggTheoraWriter_Type, PyvtkOggTheoraWriter_Methods,
    "vtkOggTheoraWriter",
 &PyvtkOggTheoraWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGenericMovieWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOggTheoraWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOggTheoraWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOggTheoraWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}


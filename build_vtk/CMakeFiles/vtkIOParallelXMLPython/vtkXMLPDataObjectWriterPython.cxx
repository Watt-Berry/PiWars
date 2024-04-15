// python wrapper for vtkXMLPDataObjectWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLPDataObjectWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPDataObjectWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkXMLPDataObjectWriter_ClassNew(); }


static PyObject *
PyvtkXMLPDataObjectWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPDataObjectWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPDataObjectWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPDataObjectWriter *tempr = vtkXMLPDataObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPDataObjectWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPDataObjectWriter::NewInstance());

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
PyvtkXMLPDataObjectWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLPDataObjectWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLPDataObjectWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkXMLPDataObjectWriter::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkXMLPDataObjectWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_SetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartPiece(temp0);
    }
    else
    {
      op->vtkXMLPDataObjectWriter::SetStartPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_GetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStartPiece() :
      op->vtkXMLPDataObjectWriter::GetStartPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_SetEndPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndPiece(temp0);
    }
    else
    {
      op->vtkXMLPDataObjectWriter::SetEndPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_GetEndPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndPiece() :
      op->vtkXMLPDataObjectWriter::GetEndPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevel(temp0);
    }
    else
    {
      op->vtkXMLPDataObjectWriter::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkXMLPDataObjectWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_SetUseSubdirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSubdirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSubdirectory(temp0);
    }
    else
    {
      op->vtkXMLPDataObjectWriter::SetUseSubdirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_GetUseSubdirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSubdirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSubdirectory() :
      op->vtkXMLPDataObjectWriter::GetUseSubdirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_SetWriteSummaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteSummaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteSummaryFile(temp0);
    }
    else
    {
      op->vtkXMLPDataObjectWriter::SetWriteSummaryFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_GetWriteSummaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteSummaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteSummaryFile() :
      op->vtkXMLPDataObjectWriter::GetWriteSummaryFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_WriteSummaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSummaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteSummaryFileOn();
    }
    else
    {
      op->vtkXMLPDataObjectWriter::WriteSummaryFileOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_WriteSummaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSummaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteSummaryFileOff();
    }
    else
    {
      op->vtkXMLPDataObjectWriter::WriteSummaryFileOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkXMLPDataObjectWriter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPDataObjectWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataObjectWriter *op = static_cast<vtkXMLPDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkXMLPDataObjectWriter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLPDataObjectWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLPDataObjectWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPDataObjectWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPDataObjectWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLPDataObjectWriter\nC++: static vtkXMLPDataObjectWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPDataObjectWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLPDataObjectWriter\nC++: vtkXMLPDataObjectWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLPDataObjectWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLPDataObjectWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfPieces", PyvtkXMLPDataObjectWriter_SetNumberOfPieces, METH_VARARGS,
   "SetNumberOfPieces(self, _arg:int) -> None\nC++: virtual void SetNumberOfPieces(int _arg)\n\nGet/Set the number of pieces that are being written in parallel.\n"},
  {"GetNumberOfPieces", PyvtkXMLPDataObjectWriter_GetNumberOfPieces, METH_VARARGS,
   "GetNumberOfPieces(self) -> int\nC++: virtual int GetNumberOfPieces()\n\n"},
  {"SetStartPiece", PyvtkXMLPDataObjectWriter_SetStartPiece, METH_VARARGS,
   "SetStartPiece(self, _arg:int) -> None\nC++: virtual void SetStartPiece(int _arg)\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {"GetStartPiece", PyvtkXMLPDataObjectWriter_GetStartPiece, METH_VARARGS,
   "GetStartPiece(self) -> int\nC++: virtual int GetStartPiece()\n\n"},
  {"SetEndPiece", PyvtkXMLPDataObjectWriter_SetEndPiece, METH_VARARGS,
   "SetEndPiece(self, _arg:int) -> None\nC++: virtual void SetEndPiece(int _arg)\n\n"},
  {"GetEndPiece", PyvtkXMLPDataObjectWriter_GetEndPiece, METH_VARARGS,
   "GetEndPiece(self) -> int\nC++: virtual int GetEndPiece()\n\n"},
  {"SetGhostLevel", PyvtkXMLPDataObjectWriter_SetGhostLevel, METH_VARARGS,
   "SetGhostLevel(self, _arg:int) -> None\nC++: virtual void SetGhostLevel(int _arg)\n\nGet/Set the ghost level used for this writer's piece.\n"},
  {"GetGhostLevel", PyvtkXMLPDataObjectWriter_GetGhostLevel, METH_VARARGS,
   "GetGhostLevel(self) -> int\nC++: virtual int GetGhostLevel()\n\n"},
  {"SetUseSubdirectory", PyvtkXMLPDataObjectWriter_SetUseSubdirectory, METH_VARARGS,
   "SetUseSubdirectory(self, _arg:bool) -> None\nC++: virtual void SetUseSubdirectory(bool _arg)\n\nGet/Set whether to use a subdirectory to store the pieces\n"},
  {"GetUseSubdirectory", PyvtkXMLPDataObjectWriter_GetUseSubdirectory, METH_VARARGS,
   "GetUseSubdirectory(self) -> bool\nC++: virtual bool GetUseSubdirectory()\n\n"},
  {"SetWriteSummaryFile", PyvtkXMLPDataObjectWriter_SetWriteSummaryFile, METH_VARARGS,
   "SetWriteSummaryFile(self, flag:int) -> None\nC++: virtual void SetWriteSummaryFile(int flag)\n\nGet/Set whether the writer should write the summary file that\nrefers to all of the pieces' individual files. This is on by\ndefault. Note that only the first process writes the summary\nfile.\n"},
  {"GetWriteSummaryFile", PyvtkXMLPDataObjectWriter_GetWriteSummaryFile, METH_VARARGS,
   "GetWriteSummaryFile(self) -> int\nC++: virtual int GetWriteSummaryFile()\n\n"},
  {"WriteSummaryFileOn", PyvtkXMLPDataObjectWriter_WriteSummaryFileOn, METH_VARARGS,
   "WriteSummaryFileOn(self) -> None\nC++: virtual void WriteSummaryFileOn()\n\n"},
  {"WriteSummaryFileOff", PyvtkXMLPDataObjectWriter_WriteSummaryFileOff, METH_VARARGS,
   "WriteSummaryFileOff(self) -> None\nC++: virtual void WriteSummaryFileOff()\n\n"},
  {"SetController", PyvtkXMLPDataObjectWriter_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this.\n"},
  {"GetController", PyvtkXMLPDataObjectWriter_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXMLPDataObjectWriter_Doc =
  "vtkXMLPDataObjectWriter - Write data in a parallel XML format.\n\n"
  "Superclass: vtkXMLWriter\n\n"
  "vtkXMLPDataWriter is the superclass for all XML parallel data object\n"
  "writers.  It provides functionality needed for writing parallel\n"
  "formats, such as the selection of which writer writes the summary\n"
  "file and what range of pieces are assigned to each serial writer.\n\n"
  "@sa\n"
  "vtkXMLDataObjectWriter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLPDataObjectWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOParallelXML.vtkXMLPDataObjectWriter", // tp_name
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
  PyvtkXMLPDataObjectWriter_Doc, // tp_doc
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

PyObject *PyvtkXMLPDataObjectWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLPDataObjectWriter_Type, PyvtkXMLPDataObjectWriter_Methods,
    "vtkXMLPDataObjectWriter",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkXMLWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPDataObjectWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPDataObjectWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPDataObjectWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}


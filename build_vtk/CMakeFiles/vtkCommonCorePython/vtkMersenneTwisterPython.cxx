// python wrapper for vtkMersenneTwister
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMersenneTwister.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMersenneTwister(PyObject *dict); }
extern "C" { PyObject *PyvtkMersenneTwister_ClassNew(); }

#ifndef DECLARED_PyvtkRandomSequence_ClassNew
extern "C" { PyObject *PyvtkRandomSequence_ClassNew(); }
#define DECLARED_PyvtkRandomSequence_ClassNew
#endif

static PyObject *
PyvtkMersenneTwister_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMersenneTwister::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMersenneTwister::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMersenneTwister *tempr = vtkMersenneTwister::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMersenneTwister *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMersenneTwister::NewInstance());

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
PyvtkMersenneTwister_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMersenneTwister::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMersenneTwister::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkMersenneTwister::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_InitializeNewSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNewSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  int temp1 = 521;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->InitializeNewSequence(temp0, temp1) :
      op->vtkMersenneTwister::InitializeNewSequence(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_InitializeSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2 = 521;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeSequence(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMersenneTwister::InitializeSequence(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkMersenneTwister::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMersenneTwister_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkMersenneTwister::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMersenneTwister_GetValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMersenneTwister_GetValue_s1(self, args);
    case 0:
      return PyvtkMersenneTwister_GetValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}


static PyObject *
PyvtkMersenneTwister_Next_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Next(temp0);
    }
    else
    {
      op->vtkMersenneTwister::Next(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMersenneTwister_Next_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkMersenneTwister::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMersenneTwister_Next(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMersenneTwister_Next_s1(self, args);
    case 0:
      return PyvtkMersenneTwister_Next_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Next");
  return nullptr;
}

static PyMethodDef PyvtkMersenneTwister_Methods[] = {
  {"IsTypeOf", PyvtkMersenneTwister_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMersenneTwister_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMersenneTwister_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMersenneTwister\nC++: static vtkMersenneTwister *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMersenneTwister_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMersenneTwister\nC++: vtkMersenneTwister *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMersenneTwister_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMersenneTwister_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkMersenneTwister_Initialize, METH_VARARGS,
   "Initialize(self, seed:int) -> None\nC++: void Initialize(vtkTypeUInt32 seed) override;\n\nSatisfy general API of vtkRandomSequence superclass. Initialize\nthe sequence with a seed.\n"},
  {"InitializeNewSequence", PyvtkMersenneTwister_InitializeNewSequence, METH_VARARGS,
   "InitializeNewSequence(self, seed:int, p:int=521) -> int\nC++: SequenceId InitializeNewSequence(vtkTypeUInt32 seed,\n    int p=521)\n\nInitialize a new Mersenne Twister sequence, given a) a seed and\nb) a Mersenne exponent (p s.t. 2^p-1 is a Mersenne prime). If p\nis not a usable Mersenne exponent, its value is used to pick one\nfrom a list. The return value is the id for the generated\nsequence, which is used as a key to access values of the\nsequence.\n"},
  {"InitializeSequence", PyvtkMersenneTwister_InitializeSequence, METH_VARARGS,
   "InitializeSequence(self, id:int, seed:int, p:int=521) -> None\nC++: void InitializeSequence(SequenceId id, vtkTypeUInt32 seed,\n    int p=521)\n\nInitialize a sequence as in InitializeNewSequence(), but\nadditionally pass an id to associate with the new sequence. If a\nsequence is already associated with this id, a warning is given\nand the sequence is reset using the given parameters.\n"},
  {"GetValue", PyvtkMersenneTwister_GetValue, METH_VARARGS,
   "GetValue(self, id:int) -> float\nC++: virtual double GetValue(SequenceId id)\nGetValue(self) -> float\nC++: double GetValue() override;\n\nCurrent value\n\\post unit_range: result>=0.0 && result<=1.0\n"},
  {"Next", PyvtkMersenneTwister_Next, METH_VARARGS,
   "Next(self, id:int) -> None\nC++: virtual void Next(SequenceId id)\nNext(self) -> None\nC++: void Next() override;\n\nMove to the next number in random sequence id. If no sequence is\nassociated with this id, a warning is given and a sequence is\ngenerated with default values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMersenneTwister_Doc =
  "vtkMersenneTwister - Generator for Mersenne Twister pseudorandom\nnumbers\n\n"
  "Superclass: vtkRandomSequence\n\n"
  "vtkMersenneTwister is an implementation of the Mersenne Twister\n"
  "pseudorandom number generator. The VTK class is simply a wrapper\n"
  "around an implementation written by M. Matsumoto, T. Nishimura and M.\n"
  "Saito, whose source code can be found at\n"
  "http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/DC/dc.html.\n\n"
  "This implementation of the Mersenne Twister facilitates the\n"
  "generation and query from multiple independent pseudorandom\n"
  "sequences. Independent sequences are identified by a unique\n"
  "vtkMersenneTwister::SequenceId, which is either generated upon\n"
  "request or passed into the initialization method. This id is factored\n"
  "into the initialization of the Mersenne Twister's initial state, so\n"
  "two sequences with the same seed and different sequence ids will\n"
  "produce different results. Once a sequence is initialized with an\n"
  "associated sequence id, this id is used to obtain values from the\n"
  "sequence.\n\n"
  "This class, besides generating random sequences in sequential order,\n"
  "can also populate a double array of specified size with a random\n"
  "sequence. It will do so using one or more threads depending on the\n"
  "number of values requested to generate.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMersenneTwister_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkMersenneTwister", // tp_name
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
  PyvtkMersenneTwister_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMersenneTwister_StaticNew()
{
  return vtkMersenneTwister::New();
}

PyObject *PyvtkMersenneTwister_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMersenneTwister_Type, PyvtkMersenneTwister_Methods,
    "vtkMersenneTwister",
 &PyvtkMersenneTwister_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRandomSequence_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMersenneTwister(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMersenneTwister_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMersenneTwister", o) != 0)
  {
    Py_DECREF(o);
  }

}


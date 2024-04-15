// python wrapper for vtkXMLHyperTreeGridReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLHyperTreeGridReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLHyperTreeGridReader(PyObject *dict); }
extern "C" { PyObject *PyvtkXMLHyperTreeGridReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLReader_ClassNew
extern "C" { PyObject *PyvtkXMLReader_ClassNew(); }
#define DECLARED_PyvtkXMLReader_ClassNew
#endif

static PyObject *
PyvtkXMLHyperTreeGridReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLHyperTreeGridReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHyperTreeGridReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLHyperTreeGridReader *tempr = vtkXMLHyperTreeGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLHyperTreeGridReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHyperTreeGridReader::NewInstance());

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
PyvtkXMLHyperTreeGridReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLHyperTreeGridReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLHyperTreeGridReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLHyperTreeGridReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLHyperTreeGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLHyperTreeGridReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLHyperTreeGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLHyperTreeGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLHyperTreeGridReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_SetFixedLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedLevel(temp0);
    }
    else
    {
      op->vtkXMLHyperTreeGridReader::SetFixedLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_GetFixedLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFixedLevel() :
      op->vtkXMLHyperTreeGridReader::GetFixedLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_SetCoordinatesBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinatesBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetCoordinatesBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkXMLHyperTreeGridReader::SetCoordinatesBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_SetIndicesBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndicesBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  unsigned int temp4;
  unsigned int temp5;
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
      op->SetIndicesBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkXMLHyperTreeGridReader::SetIndicesBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_ClearAndAddSelectedHT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAndAddSelectedHT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  unsigned int temp0;
  unsigned int temp1 = UINT_MAX;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->ClearAndAddSelectedHT(temp0, temp1);
    }
    else
    {
      op->vtkXMLHyperTreeGridReader::ClearAndAddSelectedHT(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_AddSelectedHT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSelectedHT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  unsigned int temp0;
  unsigned int temp1 = UINT_MAX;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->AddSelectedHT(temp0, temp1);
    }
    else
    {
      op->vtkXMLHyperTreeGridReader::AddSelectedHT(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkXMLHyperTreeGridReader::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkXMLHyperTreeGridReader::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_SetupUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetupUpdateExtent(temp0, temp1);
    }
    else
    {
      op->vtkXMLHyperTreeGridReader::SetupUpdateExtent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyOutputInformation(temp0, temp1);
    }
    else
    {
      op->vtkXMLHyperTreeGridReader::CopyOutputInformation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHyperTreeGridReader_ReadXMLData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadXMLData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperTreeGridReader *op = static_cast<vtkXMLHyperTreeGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadXMLData();
    }
    else
    {
      op->vtkXMLHyperTreeGridReader::ReadXMLData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLHyperTreeGridReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLHyperTreeGridReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLHyperTreeGridReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLHyperTreeGridReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLHyperTreeGridReader\nC++: static vtkXMLHyperTreeGridReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLHyperTreeGridReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLHyperTreeGridReader\nC++: vtkXMLHyperTreeGridReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLHyperTreeGridReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLHyperTreeGridReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOutput", PyvtkXMLHyperTreeGridReader_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetOutput()\nGetOutput(self, idx:int) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {"SetFixedLevel", PyvtkXMLHyperTreeGridReader_SetFixedLevel, METH_VARARGS,
   "SetFixedLevel(self, _arg:int) -> None\nC++: virtual void SetFixedLevel(unsigned int _arg)\n\nSet/Get the fixed level to read. Option available in 1.0\n"},
  {"GetFixedLevel", PyvtkXMLHyperTreeGridReader_GetFixedLevel, METH_VARARGS,
   "GetFixedLevel(self) -> int\nC++: virtual unsigned int GetFixedLevel()\n\n"},
  {"SetCoordinatesBoundingBox", PyvtkXMLHyperTreeGridReader_SetCoordinatesBoundingBox, METH_VARARGS,
   "SetCoordinatesBoundingBox(self, xmin:float, xmax:float,\n    ymin:float, ymax:float, zmin:float, zmax:float) -> None\nC++: void SetCoordinatesBoundingBox(double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nSet/Get the selected HyperTrees (HTs) to read : by default, all\nHts, or by set coordinates bounding box, exclusive or by set\nindices coordinates bounding box, exclusive or by set indices HTs\n(ClearAndAdd and more Add). Only available for files whose major\nversion > 1 Option available in 1.0\n"},
  {"SetIndicesBoundingBox", PyvtkXMLHyperTreeGridReader_SetIndicesBoundingBox, METH_VARARGS,
   "SetIndicesBoundingBox(self, imin:int, imax:int, jmin:int,\n    jmax:int, kmin:int, kmax:int) -> None\nC++: void SetIndicesBoundingBox(unsigned int imin,\n    unsigned int imax, unsigned int jmin, unsigned int jmax,\n    unsigned int kmin, unsigned int kmax)\n\n"},
  {"ClearAndAddSelectedHT", PyvtkXMLHyperTreeGridReader_ClearAndAddSelectedHT, METH_VARARGS,
   "ClearAndAddSelectedHT(self, idg:int, fixedLevel:int=...) -> None\nC++: void ClearAndAddSelectedHT(unsigned int idg,\n    unsigned int fixedLevel=UINT_MAX)\n\n"},
  {"AddSelectedHT", PyvtkXMLHyperTreeGridReader_AddSelectedHT, METH_VARARGS,
   "AddSelectedHT(self, idg:int, fixedLevel:int=...) -> None\nC++: void AddSelectedHT(unsigned int idg,\n    unsigned int fixedLevel=UINT_MAX)\n\n"},
  {"GetNumberOfPoints", PyvtkXMLHyperTreeGridReader_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: vtkIdType GetNumberOfPoints()\n\n"},
  {"GetNumberOfPieces", PyvtkXMLHyperTreeGridReader_GetNumberOfPieces, METH_VARARGS,
   "GetNumberOfPieces(self) -> int\nC++: vtkIdType GetNumberOfPieces()\n\n"},
  {"SetupUpdateExtent", PyvtkXMLHyperTreeGridReader_SetupUpdateExtent, METH_VARARGS,
   "SetupUpdateExtent(self, piece:int, numberOfPieces:int) -> None\nC++: void SetupUpdateExtent(int piece, int numberOfPieces)\n\n"},
  {"CopyOutputInformation", PyvtkXMLHyperTreeGridReader_CopyOutputInformation, METH_VARARGS,
   "CopyOutputInformation(self, outInfo:vtkInformation, port:int)\n    -> None\nC++: void CopyOutputInformation(vtkInformation *outInfo, int port)\n     override;\n\n"},
  {"ReadXMLData", PyvtkXMLHyperTreeGridReader_ReadXMLData, METH_VARARGS,
   "ReadXMLData(self) -> None\nC++: void ReadXMLData() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXMLHyperTreeGridReader_Doc =
  "vtkXMLHyperTreeGridReader - Read VTK XML HyperTreeGrid files.\n\n"
  "Superclass: vtkXMLReader\n\n"
  "vtkXMLHyperTreeGridReader reads the VTK XML HyperTreeGrid file\n"
  "format. The standard extension for this reader's file format is\n"
  "\"htg\".\n\n"
  "NOTE: HyperTree exists as separate units with all data within htg\n"
  "      But each htg file is considered one piece for the parallel\n"
  "reader\n"
  "      Later may want to treat individual HyperTrees as separate\n"
  "pieces.\n\n"
  "For developers: To ensure the durability of this storage format over\n"
  "time, at least, the drive must continue to support playback of\n"
  "previous format.\n\n"
  "Understand:\n"
  "- version 0.0 (P. Fasel and D. DeMarle Kitware US)\n"
  "- version 1.0 (J-B Lekien CEA, DAM, DIF, F-91297 Arpajon, France)\n"
  "  This version of the format offers extensive loading options. With\n"
  "  these options, regardless of the size of the backed-up mesh, it is\n"
  "  possible to view a \"reduced\" version either by setting the maximum\n"
  "  level (by SetFixedLevel) or/and setting the HyperTrees to load (by\n"
  "  SetCoordinatesBoundingBox, SetIndicesBoundingBox,\n"
  "  ClearAndAddSelectedHT and AddSelectedHT.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLHyperTreeGridReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLHyperTreeGridReader", // tp_name
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
  PyvtkXMLHyperTreeGridReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLHyperTreeGridReader_StaticNew()
{
  return vtkXMLHyperTreeGridReader::New();
}

PyObject *PyvtkXMLHyperTreeGridReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLHyperTreeGridReader_Type, PyvtkXMLHyperTreeGridReader_Methods,
    "vtkXMLHyperTreeGridReader",
 &PyvtkXMLHyperTreeGridReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkXMLReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLHyperTreeGridReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLHyperTreeGridReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLHyperTreeGridReader", o) != 0)
  {
    Py_DECREF(o);
  }

}


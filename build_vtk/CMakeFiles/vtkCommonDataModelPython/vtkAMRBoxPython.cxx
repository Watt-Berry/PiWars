// python wrapper for vtkAMRBox
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkAMRBox.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRBox(PyObject *dict); }

static PyObject *
PyvtkAMRBox_Invalidate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invalidate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Invalidate();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_EmptyDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EmptyDimension");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->EmptyDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6 = VTK_XYZ_GRID;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    op->SetDimensions(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRBox_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  const size_t size1 = 3;
  int temp1[3];
  int temp2 = VTK_XYZ_GRID;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    op->SetDimensions(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRBox_SetDimensions_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int temp1 = VTK_XYZ_GRID;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    op->SetDimensions(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRBox_SetDimensions_Methods[] = {
  {"SetDimensions", PyvtkAMRBox_SetDimensions_s2, METH_VARARGS,
   "@PP|i *i *i"},
  {"SetDimensions", PyvtkAMRBox_SetDimensions_s3, METH_VARARGS,
   "@P|i *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRBox_SetDimensions(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRBox_SetDimensions_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 6:
    case 7:
      return PyvtkAMRBox_SetDimensions_s1(self, args);
    case 3:
      return PyvtkAMRBox_SetDimensions_s2(self, args);
    case 1:
      return PyvtkAMRBox_SetDimensions_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkAMRBox_GetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetDimensions(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkAMRBox_GetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetDimensions(temp0);

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
PyvtkAMRBox_GetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkAMRBox_GetDimensions_s1(self, args);
    case 1:
      return PyvtkAMRBox_GetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDimensions");
  return nullptr;
}


static PyObject *
PyvtkAMRBox_GetNumberOfCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfCells();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRBox_GetNumberOfCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetNumberOfCells(temp0);

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
PyvtkAMRBox_GetNumberOfCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkAMRBox_GetNumberOfCells_s1(self, args);
    case 1:
      return PyvtkAMRBox_GetNumberOfCells_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfCells");
  return nullptr;
}


static PyObject *
PyvtkAMRBox_GetNumberOfNodes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetNumberOfNodes(temp0);

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
PyvtkAMRBox_GetNumberOfNodes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfNodes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRBox_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkAMRBox_GetNumberOfNodes_s1(self, args);
    case 0:
      return PyvtkAMRBox_GetNumberOfNodes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfNodes");
  return nullptr;
}


static PyObject *
PyvtkAMRBox_ComputeDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDimension");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->ComputeDimension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_GetLoCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoCorner");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = op->GetLoCorner();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_GetHiCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHiCorner");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = op->GetHiCorner();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_GetValidHiCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidHiCorner");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetValidHiCorner(temp0);

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
PyvtkAMRBox_Empty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Empty");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->Empty();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_IsInvalid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInvalid");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsInvalid();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_Serialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Serialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->Serialize(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0, size0);
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
PyvtkAMRBox_Serialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Serialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->Serialize(temp0);

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
PyvtkAMRBox_Serialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkAMRBox_Serialize_s1(self, args);
    case 1:
      return PyvtkAMRBox_Serialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Serialize");
  return nullptr;
}


static PyObject *
PyvtkAMRBox_Deserialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deserialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->Deserialize(temp0, temp1);

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
PyvtkAMRBox_DoesBoxIntersectAlongDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoesBoxIntersectAlongDimension");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->DoesBoxIntersectAlongDimension(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAMRBox_DoesIntersect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoesIntersect");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox"))
  {
    bool tempr = op->DoesIntersect(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAMRBox_Coarsen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Coarsen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Coarsen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_Refine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Refine");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Refine(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_Grow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Grow");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Grow(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_Shrink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shrink");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Shrink(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_Shift_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shift");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Shift(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRBox_Shift_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shift");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->Shift(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRBox_Shift(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRBox_Shift_s1(self, args);
    case 1:
      return PyvtkAMRBox_Shift_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Shift");
  return nullptr;
}


static PyObject *
PyvtkAMRBox_Intersect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Intersect");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox"))
  {
    bool tempr = op->Intersect(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAMRBox_Contains_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = op->Contains(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRBox_Contains_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    bool tempr = op->Contains(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRBox_Contains_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox"))
  {
    bool tempr = op->Contains(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAMRBox_Contains_Methods[] = {
  {"Contains", PyvtkAMRBox_Contains_s2, METH_VARARGS,
   "@P *i"},
  {"Contains", PyvtkAMRBox_Contains_s3, METH_VARARGS,
   "@W vtkAMRBox"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRBox_Contains(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRBox_Contains_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRBox_Contains_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Contains");
  return nullptr;
}


static PyObject *
PyvtkAMRBox_GetGhostVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostVector");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetGhostVector(temp0, temp1);

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
PyvtkAMRBox_RemoveGhosts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhosts");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRBox *op = static_cast<vtkAMRBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->RemoveGhosts(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_GetBytesize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBytesize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    long long tempr = vtkAMRBox::GetBytesize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBox_GetCellLinearIndex(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellLinearIndex");

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  const size_t size4 = 3;
  int temp4[3];
  int save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = vtkAMRBox::GetCellLinearIndex(*temp0, temp1, temp2, temp3, temp4);

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

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAMRBox_GetBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBounds");

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkAMRBox::GetBounds(*temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAMRBox_GetBoxOrigin(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBoxOrigin");

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkAMRBox::GetBoxOrigin(*temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAMRBox_HasPoint(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HasPoint");

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    bool tempr = vtkAMRBox::HasPoint(*temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAMRBox_ComputeStructuredCoordinates(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeStructuredCoordinates");

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  const size_t size3 = 3;
  double temp3[3];
  const size_t size4 = 3;
  int temp4[3];
  int save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = vtkAMRBox::ComputeStructuredCoordinates(*temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAMRBox_Methods[] = {
  {"Invalidate", PyvtkAMRBox_Invalidate, METH_VARARGS,
   "Invalidate(self) -> None\nC++: void Invalidate()\n\nSet the box to be invalid;\n"},
  {"EmptyDimension", PyvtkAMRBox_EmptyDimension, METH_VARARGS,
   "EmptyDimension(self, i:int) -> bool\nC++: bool EmptyDimension(int i)\n\nWhether dimension i is empty, e.g. if the data set is type\nVTK_XY_PLANE\n"},
  {"SetDimensions", PyvtkAMRBox_SetDimensions, METH_VARARGS,
   "SetDimensions(self, ilo:int, jlo:int, klo:int, ihi:int, jhi:int,\n    khi:int, desc:int=...) -> None\nC++: void SetDimensions(int ilo, int jlo, int klo, int ihi,\n    int jhi, int khi, int desc=VTK_XYZ_GRID)\nSetDimensions(self, lo:(int, int, int), hi:(int, int, int),\n    desc:int=...) -> None\nC++: void SetDimensions(const int lo[3], const int hi[3],\n    int desc=VTK_XYZ_GRID)\nSetDimensions(self, dims:(int, int, int, int, int, int),\n    desc:int=...) -> None\nC++: void SetDimensions(const int dims[6], int desc=VTK_XYZ_GRID)\n\nSet the dimensions of the box. ilo,jlo,klo,ihi,jhi,khi\n"},
  {"GetDimensions", PyvtkAMRBox_GetDimensions, METH_VARARGS,
   "GetDimensions(self, lo:[int, int, int], hi:[int, int, int])\n    -> None\nC++: void GetDimensions(int lo[3], int hi[3])\nGetDimensions(self, dims:[int, int, int, int, int, int]) -> None\nC++: void GetDimensions(int dims[6])\n\nGet the dimensions of this box. (ilo,jlo,jhi),(ihi,jhi,khi)\n"},
  {"GetNumberOfCells", PyvtkAMRBox_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells()\nGetNumberOfCells(self, num:[int, int, int]) -> None\nC++: void GetNumberOfCells(int num[3])\n\nGets the number of cells enclosed by the box.\n"},
  {"GetNumberOfNodes", PyvtkAMRBox_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self, ext:[int, int, int]) -> None\nC++: void GetNumberOfNodes(int ext[3])\nGetNumberOfNodes(self) -> int\nC++: vtkIdType GetNumberOfNodes()\n\nGets the number of nodes required to construct a physical\nrepresentation of the box.\n"},
  {"ComputeDimension", PyvtkAMRBox_ComputeDimension, METH_VARARGS,
   "ComputeDimension(self) -> int\nC++: int ComputeDimension()\n\nDetermines the dimension of the AMR box given the box indices.\nNote, the AMR box can be on an arbitrary axis-aligned plane,\ni.e., XZ or YZ.\n"},
  {"GetLoCorner", PyvtkAMRBox_GetLoCorner, METH_VARARGS,
   "GetLoCorner(self) -> Pointer\nC++: const int *GetLoCorner()\n\nGet the low corner index.\n"},
  {"GetHiCorner", PyvtkAMRBox_GetHiCorner, METH_VARARGS,
   "GetHiCorner(self) -> Pointer\nC++: const int *GetHiCorner()\n\n"},
  {"GetValidHiCorner", PyvtkAMRBox_GetValidHiCorner, METH_VARARGS,
   "GetValidHiCorner(self, hi:[int, int, int]) -> None\nC++: void GetValidHiCorner(int hi[3])\n\nReturn a high corner. If dimension j is empty, then hi[j] is set\nfrom lo[j]. This is convenient For algorithm that must iterate\nover all cells\n"},
  {"Empty", PyvtkAMRBox_Empty, METH_VARARGS,
   "Empty(self) -> bool\nC++: bool Empty()\n\n"},
  {"IsInvalid", PyvtkAMRBox_IsInvalid, METH_VARARGS,
   "IsInvalid(self) -> bool\nC++: bool IsInvalid()\n\nCheck to see if the AMR box instance is invalid.\n"},
  {"Serialize", PyvtkAMRBox_Serialize, METH_VARARGS,
   "Serialize(self, buffer:[int, ...], bytesize:int) -> None\nC++: void Serialize(unsigned char *&buffer, vtkIdType &bytesize)\nSerialize(self, buffer:[int, ...]) -> None\nC++: void Serialize(int *buffer)\n\nSerializes this object instance into a byte-stream. buffer   --\nuser-supplied pointer where the serialized object is stored.\nbytesize -- number of bytes, i.e., the size of the buffer. NOTE:\nbuffer is allocated internally by this method. Pre-conditions:\nbuffer == nullptr Post-conditions: buffer   != nullptr bytesize\n!= 0\n"},
  {"Deserialize", PyvtkAMRBox_Deserialize, METH_VARARGS,
   "Deserialize(self, buffer:[int, ...], bytesize:int) -> None\nC++: void Deserialize(unsigned char *buffer,\n    const vtkIdType &bytesize)\n\nDeserializes this object instance from the given byte-stream.\nPre-conditions: buffer != nullptr bytesize != 0\n"},
  {"DoesBoxIntersectAlongDimension", PyvtkAMRBox_DoesBoxIntersectAlongDimension, METH_VARARGS,
   "DoesBoxIntersectAlongDimension(self, other:vtkAMRBox, q:int)\n    -> bool\nC++: bool DoesBoxIntersectAlongDimension(const vtkAMRBox &other,\n    int q)\n\nChecks if this instance of vtkAMRBox intersects with the box\npassed through the argument list along the given dimension q.\nTrue is returned iff the box intersects successfully. Otherwise,\nthere is no intersection along the given dimension and false is\nreturned.\n"},
  {"DoesIntersect", PyvtkAMRBox_DoesIntersect, METH_VARARGS,
   "DoesIntersect(self, other:vtkAMRBox) -> bool\nC++: bool DoesIntersect(const vtkAMRBox &other)\n\n"},
  {"Coarsen", PyvtkAMRBox_Coarsen, METH_VARARGS,
   "Coarsen(self, r:int) -> None\nC++: void Coarsen(int r)\n\nCoarsen the box.\n"},
  {"Refine", PyvtkAMRBox_Refine, METH_VARARGS,
   "Refine(self, r:int) -> None\nC++: void Refine(int r)\n\nRefine the box.\n"},
  {"Grow", PyvtkAMRBox_Grow, METH_VARARGS,
   "Grow(self, byN:int) -> None\nC++: void Grow(int byN)\n\nGrows the box in all directions.\n"},
  {"Shrink", PyvtkAMRBox_Shrink, METH_VARARGS,
   "Shrink(self, byN:int) -> None\nC++: void Shrink(int byN)\n\n"},
  {"Shift", PyvtkAMRBox_Shift, METH_VARARGS,
   "Shift(self, i:int, j:int, k:int) -> None\nC++: void Shift(int i, int j, int k)\nShift(self, I:(int, int, int)) -> None\nC++: void Shift(const int I[3])\n\nShifts the box in index space\n"},
  {"Intersect", PyvtkAMRBox_Intersect, METH_VARARGS,
   "Intersect(self, other:vtkAMRBox) -> bool\nC++: bool Intersect(const vtkAMRBox &other)\n\nIntersect this box with another box in place.  Returns true if\nthe boxes do intersect.  Note that the box is modified to be the\nintersection or is made invalid.\n"},
  {"Contains", PyvtkAMRBox_Contains, METH_VARARGS,
   "Contains(self, i:int, j:int, k:int) -> bool\nC++: bool Contains(int i, int j, int k)\nContains(self, I:(int, int, int)) -> bool\nC++: bool Contains(const int I[3])\nContains(self, __a:vtkAMRBox) -> bool\nC++: bool Contains(const vtkAMRBox &)\n\nTest to see if a given cell index is inside this box.\n"},
  {"GetGhostVector", PyvtkAMRBox_GetGhostVector, METH_VARARGS,
   "GetGhostVector(self, r:int, nghost:[int, int, int, int, int, int])\n     -> None\nC++: void GetGhostVector(int r, int nghost[6])\n\nGiven an AMR box and the refinement ratio, r, this method\ncomputes the number of ghost layers in each of the 6 directions,\ni.e., [imin,imax,jmin,jmax,kmin,kmax]\n"},
  {"RemoveGhosts", PyvtkAMRBox_RemoveGhosts, METH_VARARGS,
   "RemoveGhosts(self, r:int) -> None\nC++: void RemoveGhosts(int r)\n\nGiven an AMR box and the refinement ratio, r, this shrinks the\nAMRBox\n"},
  {"GetBytesize", PyvtkAMRBox_GetBytesize, METH_VARARGS,
   "GetBytesize() -> int\nC++: static vtkIdType GetBytesize()\n\nReturns the number of bytes allocated by this instance. In\naddition, this number of bytes corresponds to the buffer size\nrequired to serialize any vtkAMRBox instance.\n"},
  {"GetCellLinearIndex", PyvtkAMRBox_GetCellLinearIndex, METH_VARARGS,
   "GetCellLinearIndex(box:vtkAMRBox, i:int, j:int, k:int,\n    imageDimension:[int, int, int]) -> int\nC++: static int GetCellLinearIndex(const vtkAMRBox &box, int i,\n    int j, int k, int imageDimension[3])\n\nReturns the linear index of the given cell structured coordinates\n"},
  {"GetBounds", PyvtkAMRBox_GetBounds, METH_VARARGS,
   "GetBounds(box:vtkAMRBox, origin:(float, float, float), spacing:(\n    float, float, float), bounds:[float, float, float, float,\n    float, float]) -> None\nC++: static void GetBounds(const vtkAMRBox &box,\n    const double origin[3], const double spacing[3],\n    double bounds[6])\n\nGet the bounds of this box.\n"},
  {"GetBoxOrigin", PyvtkAMRBox_GetBoxOrigin, METH_VARARGS,
   "GetBoxOrigin(box:vtkAMRBox, X0:(float, float, float), spacing:(\n    float, float, float), x0:[float, float, float]) -> None\nC++: static void GetBoxOrigin(const vtkAMRBox &box,\n    const double X0[3], const double spacing[3], double x0[3])\n\nGet the world space origin of this box. The origin is the\nlocation of the lower corner cell's lower corner node,\n"},
  {"HasPoint", PyvtkAMRBox_HasPoint, METH_VARARGS,
   "HasPoint(box:vtkAMRBox, origin:(float, float, float), spacing:(\n    float, float, float), x:float, y:float, z:float) -> bool\nC++: static bool HasPoint(const vtkAMRBox &box,\n    const double origin[3], const double spacing[3], double x,\n    double y, double z)\n\nChecks if the point is inside this AMRBox instance. x,y,z the\nworld point\n"},
  {"ComputeStructuredCoordinates", PyvtkAMRBox_ComputeStructuredCoordinates, METH_VARARGS,
   "ComputeStructuredCoordinates(box:vtkAMRBox, dataOrigin:(float,\n    float, float), h:(float, float, float), x:(float, float,\n    float), ijk:[int, int, int], pcoords:[float, float, float])\n    -> int\nC++: static int ComputeStructuredCoordinates(const vtkAMRBox &box,\n     const double dataOrigin[3], const double h[3],\n    const double x[3], int ijk[3], double pcoords[3])\n\nCompute structured coordinates\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkAMRBox_vtkAMRBox_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRBox");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkAMRBox *op = new vtkAMRBox();

    result = PyVTKSpecialObject_New("vtkAMRBox", op);
  }

  return result;
}

static PyObject *
PyvtkAMRBox_vtkAMRBox_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRBox");

  vtkAMRBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRBox"))
  {
    vtkAMRBox *op = new vtkAMRBox(*temp0);

    result = PyVTKSpecialObject_New("vtkAMRBox", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAMRBox_vtkAMRBox_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRBox");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkAMRBox *op = new vtkAMRBox(temp0, temp1, temp2, temp3, temp4, temp5);

    result = PyVTKSpecialObject_New("vtkAMRBox", op);
  }

  return result;
}

static PyObject *
PyvtkAMRBox_vtkAMRBox_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRBox");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  int temp4 = VTK_XYZ_GRID;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkAMRBox *op = new vtkAMRBox(temp0, temp1, temp2, temp3, temp4);

    result = PyVTKSpecialObject_New("vtkAMRBox", op);
  }

  return result;
}

static PyObject *
PyvtkAMRBox_vtkAMRBox_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRBox");

  const size_t size0 = 3;
  int temp0[3];
  const size_t size1 = 3;
  int temp1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkAMRBox *op = new vtkAMRBox(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkAMRBox", op);
  }

  return result;
}

static PyObject *
PyvtkAMRBox_vtkAMRBox_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRBox");

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkAMRBox *op = new vtkAMRBox(temp0);

    result = PyVTKSpecialObject_New("vtkAMRBox", op);
  }

  return result;
}

static PyMethodDef PyvtkAMRBox_vtkAMRBox_Methods[] = {
  {"vtkAMRBox", PyvtkAMRBox_vtkAMRBox_s2, METH_VARARGS,
   "@W vtkAMRBox"},
  {"vtkAMRBox", PyvtkAMRBox_vtkAMRBox_s6, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRBox_vtkAMRBox(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRBox_vtkAMRBox_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkAMRBox_vtkAMRBox_s1(self, args);
    case 6:
      return PyvtkAMRBox_vtkAMRBox_s3(self, args);
    case 4:
    case 5:
      return PyvtkAMRBox_vtkAMRBox_s4(self, args);
    case 2:
      return PyvtkAMRBox_vtkAMRBox_s5(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkAMRBox");
  return nullptr;
}


static const char *PyvtkAMRBox_Doc =

  "vtkAMRBox() -> vtkAMRBox\nC++: vtkAMRBox()\nvtkAMRBox(other:vtkAMRBox) -> vtkAMRBox\nC++: vtkAMRBox(const vtkAMRBox &other)\nvtkAMRBox(ilo:int, jlo:int, klo:int, ihi:int, jhi:int, khi:int)\n    -> vtkAMRBox\nC++: vtkAMRBox(int ilo, int jlo, int klo, int ihi, int jhi, int khi)\nvtkAMRBox(origin:(float, ...), dimensions:(int, ...), spacing:(float,\n    ...), globalOrigin:(float, ...), gridDescription:int=...)\n    -> vtkAMRBox\nC++: vtkAMRBox(const double *origin, const int *dimensions,\n    const double *spacing, const double *globalOrigin,\n    int gridDescription=VTK_XYZ_GRID)\nvtkAMRBox(lo:(int, int, int), hi:(int, int, int)) -> vtkAMRBox\nC++: vtkAMRBox(const int lo[3], const int hi[3])\nvtkAMRBox(dims:(int, int, int, int, int, int)) -> vtkAMRBox\nC++: vtkAMRBox(const int dims[6])\n""\n"
  "vtkAMRBox - Encloses a rectangular region of voxel like cells.\n\n"
  "vtkAMRBox stores information for an AMR block\n\n"
  "@sa\n"
  "vtkAMRInformation\n\n";

static PyObject *
PyvtkAMRBox_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkAMRBox_vtkAMRBox(nullptr, args);
}

static void PyvtkAMRBox_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkAMRBox *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkAMRBox_CheckExact(PyObject *ob);

static PyObject *PyvtkAMRBox_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkAMRBox *so1 = nullptr;
  const vtkAMRBox *so2 = nullptr;
  int result = -1;

  if (PyvtkAMRBox_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkAMRBox *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkAMRBox *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkAMRBox", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkAMRBox_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkAMRBox *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkAMRBox *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkAMRBox", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkAMRBox_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRBox_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAMRBox", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkAMRBox_Delete, // tp_dealloc
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
  PyvtkAMRBox_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkAMRBox_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkAMRBox_RichCompare, // tp_richcompare
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
  PyvtkAMRBox_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkAMRBox_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkAMRBox_Type);
}

static void *PyvtkAMRBox_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkAMRBox(*static_cast<const vtkAMRBox*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkAMRBox_TypeNew
extern "C" { PyObject *PyvtkAMRBox_TypeNew(); }
#define DECLARED_PyvtkAMRBox_TypeNew
#endif

PyObject *PyvtkAMRBox_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkAMRBox_Type,
    PyvtkAMRBox_Methods,
    PyvtkAMRBox_vtkAMRBox_Methods,
    &PyvtkAMRBox_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRBox(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRBox_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRBox", o) != 0)
  {
    Py_DECREF(o);
  }

}


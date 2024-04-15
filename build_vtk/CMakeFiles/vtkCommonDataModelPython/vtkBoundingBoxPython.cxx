// python wrapper for vtkBoundingBox
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkBoundingBox.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoundingBox(PyObject *dict); }

static PyObject *
PyvtkBoundingBox_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->SetBounds(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

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
    op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_SetBounds_s1(self, args);
    case 6:
      return PyvtkBoundingBox_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_ComputeBounds_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeBounds");

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkBoundingBox::ComputeBounds(temp0, temp1);

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
PyvtkBoundingBox_ComputeBounds_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeBounds");

  vtkPoints *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(size1);
  unsigned char *temp1 = store1.Data();
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkBoundingBox::ComputeBounds(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_ComputeBounds_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeBounds");

  vtkPoints *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  long long temp2;
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkBoundingBox::ComputeBounds(temp0, temp1, temp2, temp3);

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

  return result;
}

static PyObject *
PyvtkBoundingBox_ComputeBounds_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeBounds");

  vtkPoints *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(size1);
  long *temp1 = store1.Data();
  long temp2;
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkBoundingBox::ComputeBounds(temp0, temp1, temp2, temp3);

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

  return result;
}

static PyObject *
PyvtkBoundingBox_ComputeBounds_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeBounds");

  vtkPoints *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  int temp2;
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkBoundingBox::ComputeBounds(temp0, temp1, temp2, temp3);

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

  return result;
}

static PyObject *
PyvtkBoundingBox_ComputeBounds_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    op->ComputeBounds(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_ComputeBounds_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkPoints *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->ComputeBounds(temp0, temp1);

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

static PyMethodDef PyvtkBoundingBox_ComputeBounds_Methods[] = {
  {"ComputeBounds", PyvtkBoundingBox_ComputeBounds_s1, METH_VARARGS | METH_STATIC,
   "VP *vtkPoints *d"},
  {"ComputeBounds", PyvtkBoundingBox_ComputeBounds_s3, METH_VARARGS | METH_STATIC,
   "VPkP *vtkPoints *k *d"},
  {"ComputeBounds", PyvtkBoundingBox_ComputeBounds_s4, METH_VARARGS | METH_STATIC,
   "VPlP *vtkPoints *l *d"},
  {"ComputeBounds", PyvtkBoundingBox_ComputeBounds_s5, METH_VARARGS | METH_STATIC,
   "VPiP *vtkPoints *i *d"},
  {"ComputeBounds", PyvtkBoundingBox_ComputeBounds_s7, METH_VARARGS,
   "@VP *vtkPoints *B"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundingBox_ComputeBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundingBox_ComputeBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundingBox_ComputeBounds_s2(self, args);
    case 1:
      return PyvtkBoundingBox_ComputeBounds_s6(self, args);
    case 2:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeBounds");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_ComputeLocalBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeLocalBounds");

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 6;
  double temp4[6];
  double save4[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkBoundingBox::ComputeLocalBounds(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_SetMinPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetMinPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_SetMinPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->SetMinPoint(temp0);

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
PyvtkBoundingBox_SetMinPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundingBox_SetMinPoint_s1(self, args);
    case 1:
      return PyvtkBoundingBox_SetMinPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinPoint");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_SetMaxPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetMaxPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_SetMaxPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->SetMaxPoint(temp0);

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
PyvtkBoundingBox_SetMaxPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundingBox_SetMaxPoint_s1(self, args);
    case 1:
      return PyvtkBoundingBox_SetMaxPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxPoint");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_IsValid_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->IsValid();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_IsValid_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsValid");

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = vtkBoundingBox::IsValid(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_IsValid(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBoundingBox_IsValid_s1(self, args);
    case 1:
      return PyvtkBoundingBox_IsValid_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsValid");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->AddPoint(temp0);

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
PyvtkBoundingBox_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->AddPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_AddPoint_s1(self, args);
    case 3:
      return PyvtkBoundingBox_AddPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_AddBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBox");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    op->AddBox(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_AddBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->AddBounds(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_IsSubsetOf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSubsetOf");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    bool tempr = op->IsSubsetOf(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_IntersectBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectBox");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    int tempr = op->IntersectBox(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_Intersects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Intersects");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    int tempr = op->Intersects(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_IntersectPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectPlane");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->IntersectPlane(temp0, temp1);

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_IntersectsSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = op->IntersectsSphere(temp0, temp1);

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
PyvtkBoundingBox_IntersectsLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsLine");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = op->IntersectsLine(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_ComputeInnerDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInnerDimension");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->ComputeInnerDimension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_Contains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    int tempr = op->Contains(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBoundingBox_ContainsLine(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ContainsLine");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    bool tempr = vtkBoundingBox::ContainsLine(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetBounds(temp0);

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
PyvtkBoundingBox_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

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
    op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_GetBounds_s1(self, args);
    case 6:
      return PyvtkBoundingBox_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_GetBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBound");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->GetBound(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_GetMinPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = op->GetMinPoint();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetMinPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->GetMinPoint(temp0, temp1, temp2);

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetMinPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetMinPoint(temp0);

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
PyvtkBoundingBox_GetMinPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBoundingBox_GetMinPoint_s1(self, args);
    case 3:
      return PyvtkBoundingBox_GetMinPoint_s2(self, args);
    case 1:
      return PyvtkBoundingBox_GetMinPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMinPoint");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_GetMaxPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = op->GetMaxPoint();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetMaxPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->GetMaxPoint(temp0, temp1, temp2);

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_GetMaxPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetMaxPoint(temp0);

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
PyvtkBoundingBox_GetMaxPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBoundingBox_GetMaxPoint_s1(self, args);
    case 3:
      return PyvtkBoundingBox_GetMaxPoint_s2(self, args);
    case 1:
      return PyvtkBoundingBox_GetMaxPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMaxPoint");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_GetCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorner");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetCorner(temp0, temp1);

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
PyvtkBoundingBox_ContainsPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = op->ContainsPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_ContainsPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = op->ContainsPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_ContainsPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_ContainsPoint_s1(self, args);
    case 3:
      return PyvtkBoundingBox_ContainsPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ContainsPoint");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetCenter(temp0);

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
PyvtkBoundingBox_GetLengths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengths");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetLengths(temp0);

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
PyvtkBoundingBox_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->GetLength(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_GetMaxLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLength");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetMaxLength();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_GetDiagonalLength2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalLength2");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetDiagonalLength2();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_GetDiagonalLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalLength");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetDiagonalLength();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_Inflate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inflate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Inflate(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_Inflate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inflate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Inflate(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_Inflate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inflate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Inflate();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_Inflate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_Inflate_s1(self, args);
    case 3:
      return PyvtkBoundingBox_Inflate_s2(self, args);
    case 0:
      return PyvtkBoundingBox_Inflate_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Inflate");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_InflateSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InflateSlice");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->InflateSlice(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->Scale(temp0);

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
PyvtkBoundingBox_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Scale(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundingBox_Scale_s1(self, args);
    case 3:
      return PyvtkBoundingBox_Scale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_ScaleAboutCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleAboutCenter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->ScaleAboutCenter(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_ScaleAboutCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleAboutCenter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->ScaleAboutCenter(temp0);

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
PyvtkBoundingBox_ScaleAboutCenter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleAboutCenter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->ScaleAboutCenter(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundingBox_ScaleAboutCenter_Methods[] = {
  {"ScaleAboutCenter", PyvtkBoundingBox_ScaleAboutCenter_s1, METH_VARARGS,
   "@d"},
  {"ScaleAboutCenter", PyvtkBoundingBox_ScaleAboutCenter_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundingBox_ScaleAboutCenter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundingBox_ScaleAboutCenter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundingBox_ScaleAboutCenter_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ScaleAboutCenter");
  return nullptr;
}


static PyObject *
PyvtkBoundingBox_ComputeDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDivisions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  long long temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    long long tempr = op->ComputeDivisions(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundingBox_ClampDivisions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampDivisions");

  long long temp0;
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkBoundingBox::ClampDivisions(temp0, temp1);

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
PyvtkBoundingBox_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBoundingBox *op = static_cast<vtkBoundingBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Reset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundingBox_Methods[] = {
  {"SetBounds", PyvtkBoundingBox_SetBounds, METH_VARARGS,
   "SetBounds(self, bounds:(float, float, float, float, float, float))\n     -> None\nC++: void SetBounds(const double bounds[6])\nSetBounds(self, xMin:float, xMax:float, yMin:float, yMax:float,\n    zMin:float, zMax:float) -> None\nC++: void SetBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\n\nSet the bounds explicitly of the box (using the VTK convention\nfor representing a bounding box).  Returns 1 if the box was\nchanged else 0.\n"},
  {"ComputeBounds", PyvtkBoundingBox_ComputeBounds, METH_VARARGS,
   "ComputeBounds(pts:vtkPoints, bounds:[float, float, float, float,\n    float, float]) -> None\nC++: static void ComputeBounds(vtkPoints *pts, double bounds[6])\nComputeBounds(pts:vtkPoints, ptUses:(int, ...), bounds:[float,\n    float, float, float, float, float]) -> None\nC++: static void ComputeBounds(vtkPoints *pts,\n    const unsigned char *ptUses, double bounds[6])\nComputeBounds(pts:vtkPoints, ptIds:(int, ...), numPointIds:int,\n    bounds:[float, float, float, float, float, float]) -> None\nC++: static void ComputeBounds(vtkPoints *pts,\n    const long long *ptIds, long long numPointIds,\n    double bounds[6])\nComputeBounds(pts:vtkPoints, ptIds:(int, ...), numPointIds:int,\n    bounds:[float, float, float, float, float, float]) -> None\nC++: static void ComputeBounds(vtkPoints *pts, const long *ptIds,\n    long numPointIds, double bounds[6])\nComputeBounds(pts:vtkPoints, ptIds:(int, ...), numPointIds:int,\n    bounds:[float, float, float, float, float, float]) -> None\nC++: static void ComputeBounds(vtkPoints *pts, const int *ptIds,\n    int numPointIds, double bounds[6])\nComputeBounds(self, pts:vtkPoints) -> None\nC++: void ComputeBounds(vtkPoints *pts)\nComputeBounds(self, pts:vtkPoints, ptUses:[int, ...]) -> None\nC++: void ComputeBounds(vtkPoints *pts, unsigned char *ptUses)\n\nCompute the bounding box from an array of vtkPoints. It uses a\nfast (i.e., threaded) path when possible. The second signature\n(with point uses) only considers points with ptUses[i] != 0 in\nthe bounds calculation. The third signature uses point ids. The\nnon-static ComputeBounds() methods update the current bounds of\nan instance of this class.\n"},
  {"ComputeLocalBounds", PyvtkBoundingBox_ComputeLocalBounds, METH_VARARGS,
   "ComputeLocalBounds(points:vtkPoints, u:[float, float, float],\n    v:[float, float, float], w:[float, float, float],\n    outputBounds:[float, float, float, float, float, float])\n    -> None\nC++: static void ComputeLocalBounds(vtkPoints *points,\n    double u[3], double v[3], double w[3], double outputBounds[6])\n\nCompute local bounds. Not as fast as vtkPoints.getBounds() if u,\nv, w form a natural basis.\n"},
  {"SetMinPoint", PyvtkBoundingBox_SetMinPoint, METH_VARARGS,
   "SetMinPoint(self, x:float, y:float, z:float) -> None\nC++: void SetMinPoint(double x, double y, double z)\nSetMinPoint(self, p:[float, float, float]) -> None\nC++: void SetMinPoint(double p[3])\n\nSet the minimum point of the bounding box - if the min point is\ngreater than the max point then the max point will also be\nchanged.\n"},
  {"SetMaxPoint", PyvtkBoundingBox_SetMaxPoint, METH_VARARGS,
   "SetMaxPoint(self, x:float, y:float, z:float) -> None\nC++: void SetMaxPoint(double x, double y, double z)\nSetMaxPoint(self, p:[float, float, float]) -> None\nC++: void SetMaxPoint(double p[3])\n\nSet the maximum point of the bounding box - if the max point is\nless than the min point then the min point will also be changed.\n"},
  {"IsValid", PyvtkBoundingBox_IsValid, METH_VARARGS,
   "IsValid(self) -> int\nC++: int IsValid()\nIsValid(bounds:(float, float, float, float, float, float)) -> int\nC++: static int IsValid(const double bounds[6])\n\nReturns 1 if the bounds have been set and 0 if the box is in its\ninitialized state which is an inverted state.\n"},
  {"AddPoint", PyvtkBoundingBox_AddPoint, METH_VARARGS,
   "AddPoint(self, p:[float, float, float]) -> None\nC++: void AddPoint(double p[3])\nAddPoint(self, px:float, py:float, pz:float) -> None\nC++: void AddPoint(double px, double py, double pz)\n\nChange bounding box so it includes the point p.  Note that the\nbounding box may have 0 volume if its bounds were just\ninitialized.\n"},
  {"AddBox", PyvtkBoundingBox_AddBox, METH_VARARGS,
   "AddBox(self, bbox:vtkBoundingBox) -> None\nC++: void AddBox(const vtkBoundingBox &bbox)\n\nChange the bounding box to be the union of itself and the\nspecified bbox.\n"},
  {"AddBounds", PyvtkBoundingBox_AddBounds, METH_VARARGS,
   "AddBounds(self, bounds:(float, float, float, float, float, float))\n     -> None\nC++: void AddBounds(const double bounds[6])\n\nAdjust the bounding box so it contains the specified bounds\n(defined by the VTK representation (xmin,xmax, ymin,ymax,\nzmin,zmax).\n"},
  {"IsSubsetOf", PyvtkBoundingBox_IsSubsetOf, METH_VARARGS,
   "IsSubsetOf(self, bbox:vtkBoundingBox) -> bool\nC++: bool IsSubsetOf(const vtkBoundingBox &bbox)\n\nReturns true if this instance is entirely contained by bbox.\n"},
  {"IntersectBox", PyvtkBoundingBox_IntersectBox, METH_VARARGS,
   "IntersectBox(self, bbox:vtkBoundingBox) -> int\nC++: int IntersectBox(const vtkBoundingBox &bbox)\n\nIntersect this box with bbox. The method returns 1 if both boxes\nare valid and they do have overlap else it will return 0.  If 0\nis returned the box has not been modified.\n"},
  {"Intersects", PyvtkBoundingBox_Intersects, METH_VARARGS,
   "Intersects(self, bbox:vtkBoundingBox) -> int\nC++: int Intersects(const vtkBoundingBox &bbox)\n\nReturns 1 if the boxes intersect else returns 0.\n"},
  {"IntersectPlane", PyvtkBoundingBox_IntersectPlane, METH_VARARGS,
   "IntersectPlane(self, origin:[float, float, float], normal:[float,\n    float, float]) -> bool\nC++: bool IntersectPlane(double origin[3], double normal[3])\n\nIntersect this box with the half space defined by plane.  Returns\ntrue if there is intersection---which implies that the box has\nbeen modified Returns false otherwise.\n"},
  {"IntersectsSphere", PyvtkBoundingBox_IntersectsSphere, METH_VARARGS,
   "IntersectsSphere(self, center:[float, float, float],\n    squaredRadius:float) -> bool\nC++: bool IntersectsSphere(double center[3], double squaredRadius)\n\nIntersect this box with a sphere. Parameters involve the center\nof the sphere and the squared radius.\n"},
  {"IntersectsLine", PyvtkBoundingBox_IntersectsLine, METH_VARARGS,
   "IntersectsLine(self, p1:(float, float, float), p2:(float, float,\n    float)) -> bool\nC++: bool IntersectsLine(const double p1[3], const double p2[3])\n\nReturns true if any part of segment [p1,p2] lies inside the\nbounding box, as well as on its boundaries. It returns false\notherwise.\n"},
  {"ComputeInnerDimension", PyvtkBoundingBox_ComputeInnerDimension, METH_VARARGS,
   "ComputeInnerDimension(self) -> int\nC++: int ComputeInnerDimension()\n\nReturns the inner dimension of the bounding box.\n"},
  {"Contains", PyvtkBoundingBox_Contains, METH_VARARGS,
   "Contains(self, bbox:vtkBoundingBox) -> int\nC++: int Contains(const vtkBoundingBox &bbox)\n\nReturns 1 if the min and max points of bbox are contained within\nthe bounds of the specified box, else returns 0.\n"},
  {"ContainsLine", PyvtkBoundingBox_ContainsLine, METH_VARARGS,
   "ContainsLine(x:(float, float, float), s:(float, float, float),\n    lineEnd:(float, float, float), t:float, xInt:[float, float,\n    float], plane:int) -> bool\nC++: static bool ContainsLine(const double x[3],\n    const double s[3], const double lineEnd[3], double &t,\n    double xInt[3], int &plane)\n\nA specialized, performant method to compute the containment of a\nfinite line emanating from the center of a bounding box. The\nmethod returns true if the box contains the line defined by\n(x,lineEnd); and false if the line intersects the box (i.e., the\nline passes through the boundary of the box). The box is defined\nby specifying a point at the center of the box x[3] with sides\nlengths s[3] (in the x-y-z directions). If an intersection occurs\n(i.e., the containment return value is false), then the function\nreturns the parametric coordinate of intersection t, the position\nof intersection xInt[3], and the plane of intersection where\nintegers (0, 1, 2, 3, 4, 5) stand for the (xmin, xmax, ymin,\nymax, zmin, zmax) box planes respectively.  (If no intersection\noccurs, i.e., the line is contained, then the line (x,lineEnd) is\ncontained within the box with x-y-z lengths s[3] centered around\nthe point x, and the values of t, xInt, and plane are undefined.)\n"},
  {"GetBounds", PyvtkBoundingBox_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\nGetBounds(self, xMin:float, xMax:float, yMin:float, yMax:float,\n    zMin:float, zMax:float) -> None\nC++: void GetBounds(double &xMin, double &xMax, double &yMin,\n    double &yMax, double &zMin, double &zMax)\n\nGet the bounds of the box (defined by VTK style).\n"},
  {"GetBound", PyvtkBoundingBox_GetBound, METH_VARARGS,
   "GetBound(self, i:int) -> float\nC++: double GetBound(int i)\n\nReturn the ith bounds of the box (defined by VTK style).\n"},
  {"GetMinPoint", PyvtkBoundingBox_GetMinPoint, METH_VARARGS,
   "GetMinPoint(self) -> (float, float, float)\nC++: const double *GetMinPoint()\nGetMinPoint(self, x:float, y:float, z:float) -> None\nC++: void GetMinPoint(double &x, double &y, double &z)\nGetMinPoint(self, x:[float, float, float]) -> None\nC++: void GetMinPoint(double x[3])\n\nGet the minimum point of the bounding box.\n"},
  {"GetMaxPoint", PyvtkBoundingBox_GetMaxPoint, METH_VARARGS,
   "GetMaxPoint(self) -> (float, float, float)\nC++: const double *GetMaxPoint()\nGetMaxPoint(self, x:float, y:float, z:float) -> None\nC++: void GetMaxPoint(double &x, double &y, double &z)\nGetMaxPoint(self, x:[float, float, float]) -> None\nC++: void GetMaxPoint(double x[3])\n\nGet the maximum point of the bounding box.\n"},
  {"GetCorner", PyvtkBoundingBox_GetCorner, METH_VARARGS,
   "GetCorner(self, corner:int, p:[float, float, float]) -> None\nC++: void GetCorner(int corner, double p[3])\n\nGet the ith corner of the bounding box. The points are ordered\nwith i, then j, then k increasing.\n"},
  {"ContainsPoint", PyvtkBoundingBox_ContainsPoint, METH_VARARGS,
   "ContainsPoint(self, p:(float, float, float)) -> int\nC++: vtkTypeBool ContainsPoint(const double p[3])\nContainsPoint(self, px:float, py:float, pz:float) -> int\nC++: vtkTypeBool ContainsPoint(double px, double py, double pz)\n\nReturns 1 if the point is contained in the box else 0.\n"},
  {"GetCenter", PyvtkBoundingBox_GetCenter, METH_VARARGS,
   "GetCenter(self, center:[float, float, float]) -> None\nC++: void GetCenter(double center[3])\n\nGet the center of the bounding box.\n"},
  {"GetLengths", PyvtkBoundingBox_GetLengths, METH_VARARGS,
   "GetLengths(self, lengths:[float, float, float]) -> None\nC++: void GetLengths(double lengths[3])\n\nGet the length of each side of the box.\n"},
  {"GetLength", PyvtkBoundingBox_GetLength, METH_VARARGS,
   "GetLength(self, i:int) -> float\nC++: double GetLength(int i)\n\nReturn the length of the bounding box in the ith direction.\n"},
  {"GetMaxLength", PyvtkBoundingBox_GetMaxLength, METH_VARARGS,
   "GetMaxLength(self) -> float\nC++: double GetMaxLength()\n\nReturn the maximum length of the box.\n"},
  {"GetDiagonalLength2", PyvtkBoundingBox_GetDiagonalLength2, METH_VARARGS,
   "GetDiagonalLength2(self) -> float\nC++: double GetDiagonalLength2()\n\nReturn the length of the diagonal.\n\\pre not_empty: this->IsValid()\n"},
  {"GetDiagonalLength", PyvtkBoundingBox_GetDiagonalLength, METH_VARARGS,
   "GetDiagonalLength(self) -> float\nC++: double GetDiagonalLength()\n\n"},
  {"Inflate", PyvtkBoundingBox_Inflate, METH_VARARGS,
   "Inflate(self, delta:float) -> None\nC++: void Inflate(double delta)\nInflate(self, deltaX:float, deltaY:float, deltaZ:float) -> None\nC++: void Inflate(double deltaX, double deltaY, double deltaZ)\nInflate(self) -> None\nC++: void Inflate()\n\nExpand the bounding box. Inflate(delta) expands by delta on each\nside, the box will grow by 2*delta in x, y, and z.\nInflate(dx,dy,dz) expands by the given amounts in each of the x,\ny, z directions.  Inflate() expands the bounds so that it has\nnon-zero volume. Sides that are inflated are adjusted by 1% of\nthe longest edge. Or if an edge is zero length, the bounding box\nis inflated by 1 unit in that direction. Finally,\nInflateSlice(delta) will expand any side of the bounding box by\n+/- delta if that side has length <2*delta (i.e., it is a slice\nas measured by the user-specified delta)).\n"},
  {"InflateSlice", PyvtkBoundingBox_InflateSlice, METH_VARARGS,
   "InflateSlice(self, delta:float) -> None\nC++: void InflateSlice(double delta)\n\n"},
  {"Scale", PyvtkBoundingBox_Scale, METH_VARARGS,
   "Scale(self, s:[float, float, float]) -> None\nC++: void Scale(double s[3])\nScale(self, sx:float, sy:float, sz:float) -> None\nC++: void Scale(double sx, double sy, double sz)\n\nScale each dimension of the box by some given factor. If the box\nis not valid, it stays unchanged. If the scalar factor is\nnegative, bounds are flipped: for example, if (xMin,xMax)=(-2,4)\nand sx=-3, (xMin,xMax) becomes (-12,6).\n"},
  {"ScaleAboutCenter", PyvtkBoundingBox_ScaleAboutCenter, METH_VARARGS,
   "ScaleAboutCenter(self, s:float) -> None\nC++: void ScaleAboutCenter(double s)\nScaleAboutCenter(self, s:[float, float, float]) -> None\nC++: void ScaleAboutCenter(double s[3])\nScaleAboutCenter(self, sx:float, sy:float, sz:float) -> None\nC++: void ScaleAboutCenter(double sx, double sy, double sz)\n\nScale each dimension of the box by some given factor, with the\norigin of the bounding box the center of the scaling. If the box\nis not valid, it is not changed.\n"},
  {"ComputeDivisions", PyvtkBoundingBox_ComputeDivisions, METH_VARARGS,
   "ComputeDivisions(self, totalBins:int, bounds:[float, float, float,\n     float, float, float], divs:[int, int, int]) -> int\nC++: vtkIdType ComputeDivisions(vtkIdType totalBins,\n    double bounds[6], int divs[3])\n\nCompute the number of divisions in the x-y-z directions given a\npsoitive, target number of total bins (i.e., product of divisions\nin the x-y-z directions). The computation is done in such a way\nas to create near cuboid bins. Also note that the returned bounds\nmay be different than the bounds defined in this class, as the\nbounds in the x-y-z directions can never be <= 0. Note that the\ntotal number of divisions (divs[0]*divs[1]*divs[2]) will be less\nthan or equal to the target number of bins (as long as\ntotalBins>=1).\n"},
  {"ClampDivisions", PyvtkBoundingBox_ClampDivisions, METH_VARARGS,
   "ClampDivisions(targetBins:int, divs:[int, int, int]) -> None\nC++: static void ClampDivisions(vtkIdType targetBins, int divs[3])\n\nClamp the number of divisions to be less than or equal to a\ntarget number of bins, and the divs[i] >= 1.\n"},
  {"Reset", PyvtkBoundingBox_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReturns the box to its initialized state.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkBoundingBox_vtkBoundingBox_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBoundingBox");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkBoundingBox *op = new vtkBoundingBox();

    result = PyVTKSpecialObject_New("vtkBoundingBox", op);
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_vtkBoundingBox_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBoundingBox");

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkBoundingBox *op = new vtkBoundingBox(temp0);

    result = PyVTKSpecialObject_New("vtkBoundingBox", op);
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_vtkBoundingBox_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBoundingBox");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkBoundingBox *op = new vtkBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);

    result = PyVTKSpecialObject_New("vtkBoundingBox", op);
  }

  return result;
}

static PyObject *
PyvtkBoundingBox_vtkBoundingBox_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBoundingBox");

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox"))
  {
    vtkBoundingBox *op = new vtkBoundingBox(*temp0);

    result = PyVTKSpecialObject_New("vtkBoundingBox", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBoundingBox_vtkBoundingBox_Methods[] = {
  {"vtkBoundingBox", PyvtkBoundingBox_vtkBoundingBox_s2, METH_VARARGS,
   "@P *d"},
  {"vtkBoundingBox", PyvtkBoundingBox_vtkBoundingBox_s4, METH_VARARGS,
   "@W vtkBoundingBox"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundingBox_vtkBoundingBox(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundingBox_vtkBoundingBox_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBoundingBox_vtkBoundingBox_s1(self, args);
    case 6:
      return PyvtkBoundingBox_vtkBoundingBox_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkBoundingBox");
  return nullptr;
}


static const char *PyvtkBoundingBox_Doc =

  "vtkBoundingBox() -> vtkBoundingBox\nC++: vtkBoundingBox()\nvtkBoundingBox(bounds:(float, float, float, float, float, float))\n    -> vtkBoundingBox\nC++: vtkBoundingBox(const double bounds[6])\nvtkBoundingBox(xMin:float, xMax:float, yMin:float, yMax:float,\n    zMin:float, zMax:float) -> vtkBoundingBox\nC++: vtkBoundingBox(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nvtkBoundingBox(bbox:vtkBoundingBox) -> vtkBoundingBox\nC++: vtkBoundingBox(const vtkBoundingBox &bbox)\n""\n"
  "vtkBoundingBox - Fast, simple class for representing and operating on\n3D bounds\n\n"
  "vtkBoundingBox maintains and performs operations on a 3D axis aligned\n"
  "bounding box. It is very light weight and many of the member\n"
  "functions are in-lined so it is very fast. It is not derived from\n"
  "vtkObject so it can be allocated on the stack.\n\n"
  "@sa\n"
  "vtkBox\n\n";

static PyObject *
PyvtkBoundingBox_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkBoundingBox_vtkBoundingBox(nullptr, args);
}

static void PyvtkBoundingBox_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkBoundingBox *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkBoundingBox_CheckExact(PyObject *ob);

static PyObject *PyvtkBoundingBox_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkBoundingBox *so1 = nullptr;
  const vtkBoundingBox *so2 = nullptr;
  int result = -1;

  if (PyvtkBoundingBox_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkBoundingBox *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkBoundingBox *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkBoundingBox", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkBoundingBox_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkBoundingBox *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkBoundingBox *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkBoundingBox", &n2));
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

static Py_hash_t PyvtkBoundingBox_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBoundingBox_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkBoundingBox", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkBoundingBox_Delete, // tp_dealloc
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
  PyvtkBoundingBox_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkBoundingBox_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkBoundingBox_RichCompare, // tp_richcompare
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
  PyvtkBoundingBox_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkBoundingBox_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkBoundingBox_Type);
}

static void *PyvtkBoundingBox_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkBoundingBox(*static_cast<const vtkBoundingBox*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkBoundingBox_TypeNew
extern "C" { PyObject *PyvtkBoundingBox_TypeNew(); }
#define DECLARED_PyvtkBoundingBox_TypeNew
#endif

PyObject *PyvtkBoundingBox_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkBoundingBox_Type,
    PyvtkBoundingBox_Methods,
    PyvtkBoundingBox_vtkBoundingBox_Methods,
    &PyvtkBoundingBox_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoundingBox(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundingBox_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundingBox", o) != 0)
  {
    Py_DECREF(o);
  }

}


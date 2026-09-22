#include <pybind11/pybind11.h>
#include <absl/synchronization/mutex.h>

namespace py = pybind11;
using namespace pybind11::literals;

namespace abslutilspy {
	void SetMutexDeadlockDetectionMode(int mode){
		absl::SetMutexDeadlockDetectionMode((absl::OnDeadlockCycle)mode);
		// (absl::OnDeadlockCycle::kIgnore);
	}
}

PYBIND11_MODULE(abslutils, m){
    m.def("SetMutexDeadlockDetectionMode",abslutilspy::SetMutexDeadlockDetectionMode, py::arg("mode"));
}

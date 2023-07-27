
import debugpy

debugpy.log_to("c:/tmp")
debugpy.configure({"python": "c:/Python/Python39/python.exe"})
debugpy.listen(5678)

print("Waiting for debugger to attach")
debugpy.wait_for_client()
print('Debugger attached')

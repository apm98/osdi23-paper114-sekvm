#ifndef __KVM_PVOPS_H__
#define __KVM_PVOPS_H__

extern u64 __kvm_call_hyp(void *hypfn, ...);
#define kvm_pvops(call_num, ...) __kvm_call_hyp(call_num, ##__VA_ARGS__)

#define KVM_SET_DESC_PFN 0x81000
#define KVM_UNSET_DESC_PFN 0x82000
#define KVM_SET_BALLOON_PFN 0x83000

//Hypercall by quest to start QoS ensuring services for the VM
#define HVC_QOS_SET_START 0x84000

#endif /* __KVM_PVOPS_H__ */

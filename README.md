# P4SC-DPDK

A modified fork of DPDK for measuring P4SC performance benchmarking.

## Documentations

We provide the documentations of running these DPDK-based examples on [OpenP4SC/docs/DPDK/readme.md](https://github.com/Emil-501/OpenP4SC/blob/master/docs/DPDK/readme.md).

## Modifications

2017.9.30:
- Create DPDK branch;
- Add iperf tools for testing the performance of DPDK examples;
- Update README for documenting.

2017.10.6:
- Update `examples/l3fwd/l3fwd_lpm.c`: modify [L72](https://github.com/Wasdns/p4sc-dpdk/blob/master/examples/l3fwd/l3fwd_lpm.c#L72) to add two additional entries of LPM matches, in order to enable iperf traffic(from 10.0.0.1/24 to 10.0.0.2/24).
- Mark [main.c L866](https://github.com/Wasdns/p4sc-dpdk/blob/master/examples/l3fwd/main.c#L866) as todo.
- Add useful tool: [mactranslator](https://github.com/Wasdns/p4sc-dpdk/tree/master/mactranslator#simple-tool-mac-translator) for translating MAC(string) to MAC(hexadecimal), used in Modified l3fwd.

2017.10.7:
- Remove the mark of 6/10 todo(main.c L866);
- Update `examples/qos_meter`: 
  - (1)[main.h L44](https://github.com/Wasdns/p4sc-dpdk/blob/master/examples/qos_meter/main.h#L44), modifying the QoS policies for enabling examination targets; 
  - (2)[main.c L57](https://github.com/Wasdns/p4sc-dpdk/blob/master/examples/qos_meter/main.c#L57), modifying the mode of QoS Metering(trTCM-aware); 
  - (3)[main.c L174](https://github.com/Wasdns/p4sc-dpdk/blob/master/examples/qos_meter/main.c#L174), disabling the QoS modifications of packets.

## DPDK

DPDK is a set of libraries and drivers for fast packet processing.
It supports many processor architectures and both FreeBSD and Linux.

The DPDK uses the Open Source BSD license for the core libraries and
drivers. The kernel components are GPLv2 licensed.

Please check the doc directory for release notes,
API documentation, and sample application information.

For questions and usage discussions, subscribe to: users@dpdk.org
Report bugs and issues to the development mailing list: dev@dpdk.org

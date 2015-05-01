#ifndef IPROUTE_MPLS_H
#define IPROUTE_MPLS_H

#ifndef AF_MPLS
#define AF_MPLS 28
#endif
#ifndef PF_MPLS
#define PF_MPLS AF_MPLS
#endif

extern int print_ilm(int cmd, const struct nlmsghdr *n, void *arg, struct rtattr **tb);
extern int print_nhlfe(int cmd, const struct nlmsghdr *n, void *arg, struct rtattr **tb);
extern int print_xc(int cmd, const struct nlmsghdr *n, void *arg, struct rtattr **tb);
extern int print_labelspace(int cmd, const struct nlmsghdr *n, void *arg, struct rtattr **tb);

#endif


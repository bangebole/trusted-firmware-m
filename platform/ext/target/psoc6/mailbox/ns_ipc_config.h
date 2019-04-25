/*
 * Copyright (c) 2019 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _IPC_CONFIG_H_
#define _IPC_CONFIG_H_

#include "platform_mailbox.h"

#define IPC_RX_CHAN                            IPC_PSA_CLIENT_REPLY_CHAN
#define IPC_RX_INTR_STRUCT                     IPC_PSA_CLIENT_REPLY_INTR_STRUCT
#define IPC_RX_INT_MASK                        IPC_PSA_CLIENT_REPLY_INTR_MASK

#define IPC_TX_CHAN                            IPC_PSA_CLIENT_CALL_CHAN
#define IPC_TX_NOTIFY_MASK                     IPC_PSA_CLIENT_CALL_NOTIFY_MASK

#endif

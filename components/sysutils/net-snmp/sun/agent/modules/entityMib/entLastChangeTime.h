/*
 * Copyright (c) 2003, 2011, Oracle and/or its affiliates. All rights reserved.
 *
 * U.S. Government Rights - Commercial software. Government users are subject
 * to the Sun Microsystems, Inc. standard license agreement and applicable
 * provisions of the FAR and its supplements.
 *
 *
 * This distribution may include materials developed by third parties. Sun,
 * Sun Microsystems, the Sun logo and Solaris are trademarks or registered
 * trademarks of Sun Microsystems, Inc. in the U.S. and other countries.
 *
 */
#pragma ident   "@(#)entLastChangeTime.h 1.1     03/02/24 SMI"
/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.scalar.conf,v 1.5 2002/07/18 14:18:52 dts12 Exp $
 */
#ifndef ENTLASTCHANGETIME_H
#define ENTLASTCHANGETIME_H

/*
 * function declarations
 */
void	init_entLastChangeTime(void);
Netsnmp_Node_Handler get_entLastChangeTime;

/**
 * Call this whenever entLastChangeTime should be changed, as specified in RFC
 * 2737.
 */
extern void configChanged();

#endif                          /* ENTLASTCHANGETIME_H */
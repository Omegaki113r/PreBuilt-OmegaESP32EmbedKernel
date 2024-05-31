/**
 * @file OmegaEmbedKernel.h
 * @author Omegaki113r
 * @date Friday, 31st May 2024 11:44:39 pm
 * @copyright Copyright 2024 - 2024 0m3g4ki113r, Xtronic
 * */
/*
 * Project: OmegaESP32EmbedKernel
 * File Name: OmegaEmbedKernel.h
 * File Created: Friday, 31st May 2024 11:44:39 pm
 * Author: Omegaki113r (omegaki113r@gmail.com)
 * -----
 * Last Modified: Saturday, 1st June 2024 1:33:30 am
 * Modified By: Omegaki113r (omegaki113r@gmail.com)
 * -----
 * Copyright 2024 - 2024 0m3g4ki113r, Xtronic
 * -----
 * HISTORY:
 * Date      	By	Comments
 * ----------	---	---------------------------------------------------------
 */

#ifndef __OMEGA_EMBED_KERNEL_H__
#define __OMEGA_EMBED_KERNEL_H__

#ifdef __cplusplus
extern "C"
{
#endif

    typedef enum
    {
        KERNEL_SUCCESS,
        KERNEL_FAILED,
    } EmbedKernelStatus;

    EmbedKernelStatus OmegaEmbedKernel_config();

#ifdef __cplusplus
}
#endif

#endif
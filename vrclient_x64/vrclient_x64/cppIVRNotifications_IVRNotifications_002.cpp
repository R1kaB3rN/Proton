/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRNotifications_IVRNotifications_002.h"
void cppIVRNotifications_IVRNotifications_002_CreateNotification( struct cppIVRNotifications_IVRNotifications_002_CreateNotification_params *params )
{
    struct u_IVRNotifications_IVRNotifications_002 *iface = (struct u_IVRNotifications_IVRNotifications_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateNotification( params->ulOverlayHandle, params->ulUserValue, params->type, params->pchText, params->style, params->pImage, params->pNotificationId );
}

void cppIVRNotifications_IVRNotifications_002_RemoveNotification( struct cppIVRNotifications_IVRNotifications_002_RemoveNotification_params *params )
{
    struct u_IVRNotifications_IVRNotifications_002 *iface = (struct u_IVRNotifications_IVRNotifications_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->RemoveNotification( params->notificationId );
}


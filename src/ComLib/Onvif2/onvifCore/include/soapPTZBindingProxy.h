/* soapPTZBindingProxy.h
   Generated by gSOAP 2.8.37 for onvif.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapPTZBindingProxy_H
#define soapPTZBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC PTZBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        bool soap_own; ///< flag indicating that this context is owned by this proxy when context is shared
        /// Endpoint URL of service 'PTZBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in onvif.h, if any
        /// Construct a proxy with new managing context
        PTZBindingProxy();
        /// Copy constructor
        PTZBindingProxy(const PTZBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        PTZBindingProxy(struct soap*);
        /// Constructor taking an endpoint URL
        PTZBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        PTZBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        PTZBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        PTZBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes non-shared managing context only (use destroy() to delete deserialized data)
        virtual ~PTZBindingProxy();
        /// Initializer used by constructors
        virtual void PTZBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual PTZBindingProxy *copy() SOAP_PURE_VIRTUAL;
        /// Copy assignment
        PTZBindingProxy& operator=(const PTZBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault string (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail as string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Web service operation 'GetServiceCapabilities' (returns SOAP_OK or error code)
        virtual int GetServiceCapabilities(_tptz__GetServiceCapabilities *tptz__GetServiceCapabilities, _tptz__GetServiceCapabilitiesResponse &tptz__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, tptz__GetServiceCapabilities, tptz__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _tptz__GetServiceCapabilities *tptz__GetServiceCapabilities, _tptz__GetServiceCapabilitiesResponse &tptz__GetServiceCapabilitiesResponse);
        /// Web service operation 'GetConfigurations' (returns SOAP_OK or error code)
        virtual int GetConfigurations(_tptz__GetConfigurations *tptz__GetConfigurations, _tptz__GetConfigurationsResponse &tptz__GetConfigurationsResponse)
        { return this->GetConfigurations(NULL, NULL, tptz__GetConfigurations, tptz__GetConfigurationsResponse); }
        virtual int GetConfigurations(const char *soap_endpoint, const char *soap_action, _tptz__GetConfigurations *tptz__GetConfigurations, _tptz__GetConfigurationsResponse &tptz__GetConfigurationsResponse);
        /// Web service operation 'GetPresets' (returns SOAP_OK or error code)
        virtual int GetPresets(_tptz__GetPresets *tptz__GetPresets, _tptz__GetPresetsResponse &tptz__GetPresetsResponse)
        { return this->GetPresets(NULL, NULL, tptz__GetPresets, tptz__GetPresetsResponse); }
        virtual int GetPresets(const char *soap_endpoint, const char *soap_action, _tptz__GetPresets *tptz__GetPresets, _tptz__GetPresetsResponse &tptz__GetPresetsResponse);
        /// Web service operation 'SetPreset' (returns SOAP_OK or error code)
        virtual int SetPreset(_tptz__SetPreset *tptz__SetPreset, _tptz__SetPresetResponse &tptz__SetPresetResponse)
        { return this->SetPreset(NULL, NULL, tptz__SetPreset, tptz__SetPresetResponse); }
        virtual int SetPreset(const char *soap_endpoint, const char *soap_action, _tptz__SetPreset *tptz__SetPreset, _tptz__SetPresetResponse &tptz__SetPresetResponse);
        /// Web service operation 'RemovePreset' (returns SOAP_OK or error code)
        virtual int RemovePreset(_tptz__RemovePreset *tptz__RemovePreset, _tptz__RemovePresetResponse &tptz__RemovePresetResponse)
        { return this->RemovePreset(NULL, NULL, tptz__RemovePreset, tptz__RemovePresetResponse); }
        virtual int RemovePreset(const char *soap_endpoint, const char *soap_action, _tptz__RemovePreset *tptz__RemovePreset, _tptz__RemovePresetResponse &tptz__RemovePresetResponse);
        /// Web service operation 'GotoPreset' (returns SOAP_OK or error code)
        virtual int GotoPreset(_tptz__GotoPreset *tptz__GotoPreset, _tptz__GotoPresetResponse &tptz__GotoPresetResponse)
        { return this->GotoPreset(NULL, NULL, tptz__GotoPreset, tptz__GotoPresetResponse); }
        virtual int GotoPreset(const char *soap_endpoint, const char *soap_action, _tptz__GotoPreset *tptz__GotoPreset, _tptz__GotoPresetResponse &tptz__GotoPresetResponse);
        /// Web service operation 'GetStatus' (returns SOAP_OK or error code)
        virtual int GetStatus(_tptz__GetStatus *tptz__GetStatus, _tptz__GetStatusResponse &tptz__GetStatusResponse)
        { return this->GetStatus(NULL, NULL, tptz__GetStatus, tptz__GetStatusResponse); }
        virtual int GetStatus(const char *soap_endpoint, const char *soap_action, _tptz__GetStatus *tptz__GetStatus, _tptz__GetStatusResponse &tptz__GetStatusResponse);
        /// Web service operation 'GetConfiguration' (returns SOAP_OK or error code)
        virtual int GetConfiguration(_tptz__GetConfiguration *tptz__GetConfiguration, _tptz__GetConfigurationResponse &tptz__GetConfigurationResponse)
        { return this->GetConfiguration(NULL, NULL, tptz__GetConfiguration, tptz__GetConfigurationResponse); }
        virtual int GetConfiguration(const char *soap_endpoint, const char *soap_action, _tptz__GetConfiguration *tptz__GetConfiguration, _tptz__GetConfigurationResponse &tptz__GetConfigurationResponse);
        /// Web service operation 'GetNodes' (returns SOAP_OK or error code)
        virtual int GetNodes(_tptz__GetNodes *tptz__GetNodes, _tptz__GetNodesResponse &tptz__GetNodesResponse)
        { return this->GetNodes(NULL, NULL, tptz__GetNodes, tptz__GetNodesResponse); }
        virtual int GetNodes(const char *soap_endpoint, const char *soap_action, _tptz__GetNodes *tptz__GetNodes, _tptz__GetNodesResponse &tptz__GetNodesResponse);
        /// Web service operation 'GetNode' (returns SOAP_OK or error code)
        virtual int GetNode(_tptz__GetNode *tptz__GetNode, _tptz__GetNodeResponse &tptz__GetNodeResponse)
        { return this->GetNode(NULL, NULL, tptz__GetNode, tptz__GetNodeResponse); }
        virtual int GetNode(const char *soap_endpoint, const char *soap_action, _tptz__GetNode *tptz__GetNode, _tptz__GetNodeResponse &tptz__GetNodeResponse);
        /// Web service operation 'SetConfiguration' (returns SOAP_OK or error code)
        virtual int SetConfiguration(_tptz__SetConfiguration *tptz__SetConfiguration, _tptz__SetConfigurationResponse &tptz__SetConfigurationResponse)
        { return this->SetConfiguration(NULL, NULL, tptz__SetConfiguration, tptz__SetConfigurationResponse); }
        virtual int SetConfiguration(const char *soap_endpoint, const char *soap_action, _tptz__SetConfiguration *tptz__SetConfiguration, _tptz__SetConfigurationResponse &tptz__SetConfigurationResponse);
        /// Web service operation 'GetConfigurationOptions' (returns SOAP_OK or error code)
        virtual int GetConfigurationOptions(_tptz__GetConfigurationOptions *tptz__GetConfigurationOptions, _tptz__GetConfigurationOptionsResponse &tptz__GetConfigurationOptionsResponse)
        { return this->GetConfigurationOptions(NULL, NULL, tptz__GetConfigurationOptions, tptz__GetConfigurationOptionsResponse); }
        virtual int GetConfigurationOptions(const char *soap_endpoint, const char *soap_action, _tptz__GetConfigurationOptions *tptz__GetConfigurationOptions, _tptz__GetConfigurationOptionsResponse &tptz__GetConfigurationOptionsResponse);
        /// Web service operation 'GotoHomePosition' (returns SOAP_OK or error code)
        virtual int GotoHomePosition(_tptz__GotoHomePosition *tptz__GotoHomePosition, _tptz__GotoHomePositionResponse &tptz__GotoHomePositionResponse)
        { return this->GotoHomePosition(NULL, NULL, tptz__GotoHomePosition, tptz__GotoHomePositionResponse); }
        virtual int GotoHomePosition(const char *soap_endpoint, const char *soap_action, _tptz__GotoHomePosition *tptz__GotoHomePosition, _tptz__GotoHomePositionResponse &tptz__GotoHomePositionResponse);
        /// Web service operation 'SetHomePosition' (returns SOAP_OK or error code)
        virtual int SetHomePosition(_tptz__SetHomePosition *tptz__SetHomePosition, _tptz__SetHomePositionResponse &tptz__SetHomePositionResponse)
        { return this->SetHomePosition(NULL, NULL, tptz__SetHomePosition, tptz__SetHomePositionResponse); }
        virtual int SetHomePosition(const char *soap_endpoint, const char *soap_action, _tptz__SetHomePosition *tptz__SetHomePosition, _tptz__SetHomePositionResponse &tptz__SetHomePositionResponse);
        /// Web service operation 'ContinuousMove' (returns SOAP_OK or error code)
        virtual int ContinuousMove(_tptz__ContinuousMove *tptz__ContinuousMove, _tptz__ContinuousMoveResponse &tptz__ContinuousMoveResponse)
        { return this->ContinuousMove(NULL, NULL, tptz__ContinuousMove, tptz__ContinuousMoveResponse); }
        virtual int ContinuousMove(const char *soap_endpoint, const char *soap_action, _tptz__ContinuousMove *tptz__ContinuousMove, _tptz__ContinuousMoveResponse &tptz__ContinuousMoveResponse);
        /// Web service operation 'RelativeMove' (returns SOAP_OK or error code)
        virtual int RelativeMove(_tptz__RelativeMove *tptz__RelativeMove, _tptz__RelativeMoveResponse &tptz__RelativeMoveResponse)
        { return this->RelativeMove(NULL, NULL, tptz__RelativeMove, tptz__RelativeMoveResponse); }
        virtual int RelativeMove(const char *soap_endpoint, const char *soap_action, _tptz__RelativeMove *tptz__RelativeMove, _tptz__RelativeMoveResponse &tptz__RelativeMoveResponse);
        /// Web service operation 'SendAuxiliaryCommand' (returns SOAP_OK or error code)
        virtual int SendAuxiliaryCommand(_tptz__SendAuxiliaryCommand *tptz__SendAuxiliaryCommand, _tptz__SendAuxiliaryCommandResponse &tptz__SendAuxiliaryCommandResponse)
        { return this->SendAuxiliaryCommand(NULL, NULL, tptz__SendAuxiliaryCommand, tptz__SendAuxiliaryCommandResponse); }
        virtual int SendAuxiliaryCommand(const char *soap_endpoint, const char *soap_action, _tptz__SendAuxiliaryCommand *tptz__SendAuxiliaryCommand, _tptz__SendAuxiliaryCommandResponse &tptz__SendAuxiliaryCommandResponse);
        /// Web service operation 'AbsoluteMove' (returns SOAP_OK or error code)
        virtual int AbsoluteMove(_tptz__AbsoluteMove *tptz__AbsoluteMove, _tptz__AbsoluteMoveResponse &tptz__AbsoluteMoveResponse)
        { return this->AbsoluteMove(NULL, NULL, tptz__AbsoluteMove, tptz__AbsoluteMoveResponse); }
        virtual int AbsoluteMove(const char *soap_endpoint, const char *soap_action, _tptz__AbsoluteMove *tptz__AbsoluteMove, _tptz__AbsoluteMoveResponse &tptz__AbsoluteMoveResponse);
        /// Web service operation 'Stop' (returns SOAP_OK or error code)
        virtual int Stop(_tptz__Stop *tptz__Stop, _tptz__StopResponse &tptz__StopResponse)
        { return this->Stop(NULL, NULL, tptz__Stop, tptz__StopResponse); }
        virtual int Stop(const char *soap_endpoint, const char *soap_action, _tptz__Stop *tptz__Stop, _tptz__StopResponse &tptz__StopResponse);
        /// Web service operation 'GetPresetTours' (returns SOAP_OK or error code)
        virtual int GetPresetTours(_tptz__GetPresetTours *tptz__GetPresetTours, _tptz__GetPresetToursResponse &tptz__GetPresetToursResponse)
        { return this->GetPresetTours(NULL, NULL, tptz__GetPresetTours, tptz__GetPresetToursResponse); }
        virtual int GetPresetTours(const char *soap_endpoint, const char *soap_action, _tptz__GetPresetTours *tptz__GetPresetTours, _tptz__GetPresetToursResponse &tptz__GetPresetToursResponse);
        /// Web service operation 'GetPresetTour' (returns SOAP_OK or error code)
        virtual int GetPresetTour(_tptz__GetPresetTour *tptz__GetPresetTour, _tptz__GetPresetTourResponse &tptz__GetPresetTourResponse)
        { return this->GetPresetTour(NULL, NULL, tptz__GetPresetTour, tptz__GetPresetTourResponse); }
        virtual int GetPresetTour(const char *soap_endpoint, const char *soap_action, _tptz__GetPresetTour *tptz__GetPresetTour, _tptz__GetPresetTourResponse &tptz__GetPresetTourResponse);
        /// Web service operation 'GetPresetTourOptions' (returns SOAP_OK or error code)
        virtual int GetPresetTourOptions(_tptz__GetPresetTourOptions *tptz__GetPresetTourOptions, _tptz__GetPresetTourOptionsResponse &tptz__GetPresetTourOptionsResponse)
        { return this->GetPresetTourOptions(NULL, NULL, tptz__GetPresetTourOptions, tptz__GetPresetTourOptionsResponse); }
        virtual int GetPresetTourOptions(const char *soap_endpoint, const char *soap_action, _tptz__GetPresetTourOptions *tptz__GetPresetTourOptions, _tptz__GetPresetTourOptionsResponse &tptz__GetPresetTourOptionsResponse);
        /// Web service operation 'CreatePresetTour' (returns SOAP_OK or error code)
        virtual int CreatePresetTour(_tptz__CreatePresetTour *tptz__CreatePresetTour, _tptz__CreatePresetTourResponse &tptz__CreatePresetTourResponse)
        { return this->CreatePresetTour(NULL, NULL, tptz__CreatePresetTour, tptz__CreatePresetTourResponse); }
        virtual int CreatePresetTour(const char *soap_endpoint, const char *soap_action, _tptz__CreatePresetTour *tptz__CreatePresetTour, _tptz__CreatePresetTourResponse &tptz__CreatePresetTourResponse);
        /// Web service operation 'ModifyPresetTour' (returns SOAP_OK or error code)
        virtual int ModifyPresetTour(_tptz__ModifyPresetTour *tptz__ModifyPresetTour, _tptz__ModifyPresetTourResponse &tptz__ModifyPresetTourResponse)
        { return this->ModifyPresetTour(NULL, NULL, tptz__ModifyPresetTour, tptz__ModifyPresetTourResponse); }
        virtual int ModifyPresetTour(const char *soap_endpoint, const char *soap_action, _tptz__ModifyPresetTour *tptz__ModifyPresetTour, _tptz__ModifyPresetTourResponse &tptz__ModifyPresetTourResponse);
        /// Web service operation 'OperatePresetTour' (returns SOAP_OK or error code)
        virtual int OperatePresetTour(_tptz__OperatePresetTour *tptz__OperatePresetTour, _tptz__OperatePresetTourResponse &tptz__OperatePresetTourResponse)
        { return this->OperatePresetTour(NULL, NULL, tptz__OperatePresetTour, tptz__OperatePresetTourResponse); }
        virtual int OperatePresetTour(const char *soap_endpoint, const char *soap_action, _tptz__OperatePresetTour *tptz__OperatePresetTour, _tptz__OperatePresetTourResponse &tptz__OperatePresetTourResponse);
        /// Web service operation 'RemovePresetTour' (returns SOAP_OK or error code)
        virtual int RemovePresetTour(_tptz__RemovePresetTour *tptz__RemovePresetTour, _tptz__RemovePresetTourResponse &tptz__RemovePresetTourResponse)
        { return this->RemovePresetTour(NULL, NULL, tptz__RemovePresetTour, tptz__RemovePresetTourResponse); }
        virtual int RemovePresetTour(const char *soap_endpoint, const char *soap_action, _tptz__RemovePresetTour *tptz__RemovePresetTour, _tptz__RemovePresetTourResponse &tptz__RemovePresetTourResponse);
        /// Web service operation 'GetCompatibleConfigurations' (returns SOAP_OK or error code)
        virtual int GetCompatibleConfigurations(_tptz__GetCompatibleConfigurations *tptz__GetCompatibleConfigurations, _tptz__GetCompatibleConfigurationsResponse &tptz__GetCompatibleConfigurationsResponse)
        { return this->GetCompatibleConfigurations(NULL, NULL, tptz__GetCompatibleConfigurations, tptz__GetCompatibleConfigurationsResponse); }
        virtual int GetCompatibleConfigurations(const char *soap_endpoint, const char *soap_action, _tptz__GetCompatibleConfigurations *tptz__GetCompatibleConfigurations, _tptz__GetCompatibleConfigurationsResponse &tptz__GetCompatibleConfigurationsResponse);
    };
#endif

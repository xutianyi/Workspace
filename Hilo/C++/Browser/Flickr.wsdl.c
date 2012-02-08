﻿
// File generated by Wsutil Compiler version 1.0092 
#include <WebServices.h>
#include "Flickr.wsdl.h"

typedef struct _Flickr_wsdlLocalDefinitions 
{
    struct  // global elements
    {
    char unused;
        struct // _FlickrRequest
        {
            WS_FIELD_DESCRIPTION method;
            WS_FIELD_DESCRIPTION api_key;
            WS_FIELD_DESCRIPTION api_sig;
            WS_FIELD_DESCRIPTION frob;
            WS_FIELD_DESCRIPTION* _FlickrRequestFields [4]; 
        } _FlickrRequestdescs; // end of _FlickrRequest
    } globalElements;  // end of global elements
    struct // messages
    {
        WS_MESSAGE_DESCRIPTION FlickrRequestMessage;
        WS_MESSAGE_DESCRIPTION FlickrResponseMessage;
        WS_MESSAGE_DESCRIPTION FlickrRequestMessage0;
        WS_MESSAGE_DESCRIPTION FlickrResponseMessage0;
    } messages; // end of messages
    struct // faults
    {
        WS_FAULT_DETAIL_DESCRIPTION FlickrFaultMessage;
        WS_FAULT_DETAIL_DESCRIPTION FlickrFaultMessage0;
    } faults; // end of faults
    struct // contracts
    {
        struct // FlickrFrobRequestPortBinding
        {
            struct // FlickrFrobRequestPortBinding_flickr_auth_getFrob
            {
                WS_PARAMETER_DESCRIPTION params[2];
                WS_OPERATION_DESCRIPTION FlickrFrobRequestPortBinding_flickr_auth_getFrob;
            } FlickrFrobRequestPortBinding_flickr_auth_getFrob;
            WS_OPERATION_DESCRIPTION* operations[1];
            WS_CONTRACT_DESCRIPTION contractDesc;
        } FlickrFrobRequestPortBinding;
        struct // FlickrTokenRequestPortBinding
        {
            struct // FlickrTokenRequestPortBinding_flickr_auth_getToken
            {
                WS_PARAMETER_DESCRIPTION params[2];
                WS_OPERATION_DESCRIPTION FlickrTokenRequestPortBinding_flickr_auth_getToken;
            } FlickrTokenRequestPortBinding_flickr_auth_getToken;
            WS_OPERATION_DESCRIPTION* operations[1];
            WS_CONTRACT_DESCRIPTION contractDesc;
        } FlickrTokenRequestPortBinding;
    } contracts;  // endof contracts 
    struct // policies
    {
        struct // FlickrFrobRequestPortBinding
        {
            WS_ENCODING encoding;
            WS_ADDRESSING_VERSION addressingVersion;
            WS_ENVELOPE_VERSION envelopeVersion;
            WS_CHANNEL_PROPERTY channelPropertiesArray[3];
        } FlickrFrobRequestPortBinding;
        struct // FlickrTokenRequestPortBinding
        {
            WS_ENCODING encoding;
            WS_ADDRESSING_VERSION addressingVersion;
            WS_ENVELOPE_VERSION envelopeVersion;
            WS_CHANNEL_PROPERTY channelPropertiesArray[3];
        } FlickrTokenRequestPortBinding;
    } policies;
    struct // XML dictionary
    {
        struct // XML string list
        {
            WS_XML_STRING _FlickrRequestTypeName;  // FlickrRequest
            WS_XML_STRING _FlickrRequestTypeNamespace;  // urn:flickr
            WS_XML_STRING _FlickrRequestmethodLocalName;  // method
            WS_XML_STRING _FlickrRequestmethodNamespace;  // 
            WS_XML_STRING _FlickrRequestapi_keyLocalName;  // api_key
            WS_XML_STRING _FlickrRequestapi_sigLocalName;  // api_sig
            WS_XML_STRING _FlickrRequestfrobLocalName;  // frob
            WS_XML_STRING FlickrResponseTypeName;  // FlickrResponse
            WS_XML_STRING FlickrFaultTypeName;  // FlickrFault
            WS_XML_STRING FlickrRequestMessageactionName;  // flickr
        } xmlStrings; // end of XML string list
        WS_XML_DICTIONARY dict;  
    } dictionary;  // end of XML dictionary
} _Flickr_wsdlLocalDefinitions;


typedef struct FlickrFrobRequestPortBinding_flickr_auth_getFrobParamStruct 
{
    _FlickrRequest** parameters;
    WCHAR** outparameters;
} FlickrFrobRequestPortBinding_flickr_auth_getFrobParamStruct;

#if (_MSC_VER >=1400) 
#pragma warning(push)
#endif
#pragma warning(disable: 4055) // conversion from data pointer to function pointer
HRESULT CALLBACK FlickrFrobRequestPortBinding_flickr_auth_getFrobOperationStub(
    __in const WS_OPERATION_CONTEXT* _context,
    __in void* _stackStruct,
    __in const void* _callback,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error)
{
    FlickrFrobRequestPortBinding_flickr_auth_getFrobCallback _operation = (FlickrFrobRequestPortBinding_flickr_auth_getFrobCallback)_callback;
    FlickrFrobRequestPortBinding_flickr_auth_getFrobParamStruct *_stack =(FlickrFrobRequestPortBinding_flickr_auth_getFrobParamStruct*)_stackStruct;
    return _operation( 
        _context,
        *(_stack->parameters),
        (_stack->outparameters),
        (WS_ASYNC_CONTEXT*)_asyncContext,
        _error);
}
#pragma warning(default: 4055)  // conversion from data pointer to function pointer
#if (_MSC_VER >=1400) 
#pragma warning(pop)
#endif

typedef struct FlickrTokenRequestPortBinding_flickr_auth_getTokenParamStruct 
{
    _FlickrRequest** parameters;
    WCHAR** outparameters;
} FlickrTokenRequestPortBinding_flickr_auth_getTokenParamStruct;

#if (_MSC_VER >=1400) 
#pragma warning(push)
#endif
#pragma warning(disable: 4055) // conversion from data pointer to function pointer
HRESULT CALLBACK FlickrTokenRequestPortBinding_flickr_auth_getTokenOperationStub(
    __in const WS_OPERATION_CONTEXT* _context,
    __in void* _stackStruct,
    __in const void* _callback,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error)
{
    FlickrTokenRequestPortBinding_flickr_auth_getTokenCallback _operation = (FlickrTokenRequestPortBinding_flickr_auth_getTokenCallback)_callback;
    FlickrTokenRequestPortBinding_flickr_auth_getTokenParamStruct *_stack =(FlickrTokenRequestPortBinding_flickr_auth_getTokenParamStruct*)_stackStruct;
    return _operation( 
        _context,
        *(_stack->parameters),
        (_stack->outparameters),
        (WS_ASYNC_CONTEXT*)_asyncContext,
        _error);
}
#pragma warning(default: 4055)  // conversion from data pointer to function pointer
#if (_MSC_VER >=1400) 
#pragma warning(pop)
#endif
const static _Flickr_wsdlLocalDefinitions Flickr_wsdlLocalDefinitions =
{
    {  // global elements
        0,
        {   // _FlickrRequest
            { // field description for method
            WS_ELEMENT_FIELD_MAPPING,
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodLocalName, // method
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodNamespace, // 
            WS_WSZ_TYPE,
            0,
            WsOffsetOf(_FlickrRequest, method),
            0,
            0,
            0xffffffff
            },    // end of field description for method
            { // field description for api_key
            WS_ELEMENT_FIELD_MAPPING,
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestapi_keyLocalName, // api_key
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodNamespace, // 
            WS_WSZ_TYPE,
            0,
            WsOffsetOf(_FlickrRequest, api_key),
            0,
            0,
            0xffffffff
            },    // end of field description for api_key
            { // field description for api_sig
            WS_ELEMENT_FIELD_MAPPING,
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestapi_sigLocalName, // api_sig
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodNamespace, // 
            WS_WSZ_TYPE,
            0,
            WsOffsetOf(_FlickrRequest, api_sig),
            0,
            0,
            0xffffffff
            },    // end of field description for api_sig
            { // field description for frob
            WS_ELEMENT_FIELD_MAPPING,
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestfrobLocalName, // frob
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodNamespace, // 
            WS_WSZ_TYPE,
            0,
            WsOffsetOf(_FlickrRequest, frob),
             WS_FIELD_OPTIONAL| WS_FIELD_NILLABLE,
            0,
            0xffffffff
            },    // end of field description for frob
            {    // fields description for _FlickrRequest
            (WS_FIELD_DESCRIPTION*)&Flickr_wsdlLocalDefinitions.globalElements._FlickrRequestdescs.method,
            (WS_FIELD_DESCRIPTION*)&Flickr_wsdlLocalDefinitions.globalElements._FlickrRequestdescs.api_key,
            (WS_FIELD_DESCRIPTION*)&Flickr_wsdlLocalDefinitions.globalElements._FlickrRequestdescs.api_sig,
            (WS_FIELD_DESCRIPTION*)&Flickr_wsdlLocalDefinitions.globalElements._FlickrRequestdescs.frob,
            },
        },    // _FlickrRequest
    }, // end of global elements
    { // messages
        {    // message description for FlickrRequestMessage
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings.FlickrRequestMessageactionName, // flickr
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrRequest, 
        },    // message description for FlickrRequestMessage
        {    // message description for FlickrResponseMessage
            0,
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrResponse, 
        },    // message description for FlickrResponseMessage
        {    // message description for FlickrRequestMessage
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings.FlickrRequestMessageactionName, // flickr
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrRequest, 
        },    // message description for FlickrRequestMessage
        {    // message description for FlickrResponseMessage
            0,
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrResponse, 
        },    // message description for FlickrResponseMessage
    }, // end of messages 
    { // faults
        {    // fault detailed description for FlickrFaultMessage
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodNamespace, // 
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrFault, 
        },    // fault detailed description for FlickrFaultMessage
        {    // fault detailed description for FlickrFaultMessage
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodNamespace, // 
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrFault, 
        },    // fault detailed description for FlickrFaultMessage
    }, // end of faults 
    { // contracts
        {    // FlickrFrobRequestPortBinding,
            { // FlickrFrobRequestPortBinding_flickr_auth_getFrob
                { // parameter descriptions for FlickrFrobRequestPortBinding_flickr_auth_getFrob
                    { WS_PARAMETER_TYPE_MESSAGES, (USHORT)0, (USHORT)-1 },
                    { WS_PARAMETER_TYPE_MESSAGES, (USHORT)-1, (USHORT)0 },
                },    // parameter descriptions for FlickrFrobRequestPortBinding_flickr_auth_getFrob
                {    // operation description for FlickrFrobRequestPortBinding_flickr_auth_getFrob
                    1,
                    (WS_MESSAGE_DESCRIPTION*)&Flickr_wsdl.messages.FlickrRequestMessage, 
                    (WS_MESSAGE_DESCRIPTION*)&Flickr_wsdl.messages.FlickrResponseMessage, 
                    0,
                    0,
                    2,
                    (WS_PARAMETER_DESCRIPTION*)Flickr_wsdlLocalDefinitions.contracts.FlickrFrobRequestPortBinding.FlickrFrobRequestPortBinding_flickr_auth_getFrob.params,
                    FlickrFrobRequestPortBinding_flickr_auth_getFrobOperationStub,
                    WS_NON_RPC_LITERAL_OPERATION
                }, //operation description for FlickrFrobRequestPortBinding_flickr_auth_getFrob
            },  // FlickrFrobRequestPortBinding_flickr_auth_getFrob
            {    // array of operations for FlickrFrobRequestPortBinding
                (WS_OPERATION_DESCRIPTION*)&Flickr_wsdlLocalDefinitions.contracts.FlickrFrobRequestPortBinding.FlickrFrobRequestPortBinding_flickr_auth_getFrob.FlickrFrobRequestPortBinding_flickr_auth_getFrob,
            },    // array of operations for FlickrFrobRequestPortBinding
            {    // contract description for FlickrFrobRequestPortBinding
            1,
            (WS_OPERATION_DESCRIPTION**)Flickr_wsdlLocalDefinitions.contracts.FlickrFrobRequestPortBinding.operations,
            },  // end of contract description for FlickrFrobRequestPortBinding
        },    // FlickrFrobRequestPortBinding
        {    // FlickrTokenRequestPortBinding,
            { // FlickrTokenRequestPortBinding_flickr_auth_getToken
                { // parameter descriptions for FlickrTokenRequestPortBinding_flickr_auth_getToken
                    { WS_PARAMETER_TYPE_MESSAGES, (USHORT)0, (USHORT)-1 },
                    { WS_PARAMETER_TYPE_MESSAGES, (USHORT)-1, (USHORT)0 },
                },    // parameter descriptions for FlickrTokenRequestPortBinding_flickr_auth_getToken
                {    // operation description for FlickrTokenRequestPortBinding_flickr_auth_getToken
                    1,
                    (WS_MESSAGE_DESCRIPTION*)&Flickr_wsdl.messages.FlickrRequestMessage0, 
                    (WS_MESSAGE_DESCRIPTION*)&Flickr_wsdl.messages.FlickrResponseMessage0, 
                    0,
                    0,
                    2,
                    (WS_PARAMETER_DESCRIPTION*)Flickr_wsdlLocalDefinitions.contracts.FlickrTokenRequestPortBinding.FlickrTokenRequestPortBinding_flickr_auth_getToken.params,
                    FlickrTokenRequestPortBinding_flickr_auth_getTokenOperationStub,
                    WS_NON_RPC_LITERAL_OPERATION
                }, //operation description for FlickrTokenRequestPortBinding_flickr_auth_getToken
            },  // FlickrTokenRequestPortBinding_flickr_auth_getToken
            {    // array of operations for FlickrTokenRequestPortBinding
                (WS_OPERATION_DESCRIPTION*)&Flickr_wsdlLocalDefinitions.contracts.FlickrTokenRequestPortBinding.FlickrTokenRequestPortBinding_flickr_auth_getToken.FlickrTokenRequestPortBinding_flickr_auth_getToken,
            },    // array of operations for FlickrTokenRequestPortBinding
            {    // contract description for FlickrTokenRequestPortBinding
            1,
            (WS_OPERATION_DESCRIPTION**)Flickr_wsdlLocalDefinitions.contracts.FlickrTokenRequestPortBinding.operations,
            },  // end of contract description for FlickrTokenRequestPortBinding
        },    // FlickrTokenRequestPortBinding
    }, //  end of contracts 
    {// policies
        {
            WS_ENCODING_XML_UTF8,
            WS_ADDRESSING_VERSION_TRANSPORT,
            WS_ENVELOPE_VERSION_SOAP_1_1,
            { // channelPropertiesArray
                {
                    WS_CHANNEL_PROPERTY_ENCODING,
                    (void*)&Flickr_wsdlLocalDefinitions.policies.FlickrFrobRequestPortBinding.encoding,
                    sizeof(Flickr_wsdlLocalDefinitions.policies.FlickrFrobRequestPortBinding.encoding),
                },
                {
                    WS_CHANNEL_PROPERTY_ADDRESSING_VERSION,
                    (void*)&Flickr_wsdlLocalDefinitions.policies.FlickrFrobRequestPortBinding.addressingVersion,
                    sizeof(Flickr_wsdlLocalDefinitions.policies.FlickrFrobRequestPortBinding.addressingVersion),
                },
                {
                    WS_CHANNEL_PROPERTY_ENVELOPE_VERSION,
                    (void*)&Flickr_wsdlLocalDefinitions.policies.FlickrFrobRequestPortBinding.envelopeVersion,
                    sizeof(Flickr_wsdlLocalDefinitions.policies.FlickrFrobRequestPortBinding.envelopeVersion),
                },
            },
        },   // end of FlickrFrobRequestPortBinding,
        {
            WS_ENCODING_XML_UTF8,
            WS_ADDRESSING_VERSION_TRANSPORT,
            WS_ENVELOPE_VERSION_SOAP_1_1,
            { // channelPropertiesArray
                {
                    WS_CHANNEL_PROPERTY_ENCODING,
                    (void*)&Flickr_wsdlLocalDefinitions.policies.FlickrTokenRequestPortBinding.encoding,
                    sizeof(Flickr_wsdlLocalDefinitions.policies.FlickrTokenRequestPortBinding.encoding),
                },
                {
                    WS_CHANNEL_PROPERTY_ADDRESSING_VERSION,
                    (void*)&Flickr_wsdlLocalDefinitions.policies.FlickrTokenRequestPortBinding.addressingVersion,
                    sizeof(Flickr_wsdlLocalDefinitions.policies.FlickrTokenRequestPortBinding.addressingVersion),
                },
                {
                    WS_CHANNEL_PROPERTY_ENVELOPE_VERSION,
                    (void*)&Flickr_wsdlLocalDefinitions.policies.FlickrTokenRequestPortBinding.envelopeVersion,
                    sizeof(Flickr_wsdlLocalDefinitions.policies.FlickrTokenRequestPortBinding.envelopeVersion),
                },
            },
        },   // end of FlickrTokenRequestPortBinding,
    }, // policies
    {    // dictionary 
        { // xmlStrings
            WS_XML_STRING_DICTIONARY_VALUE("FlickrRequest",&Flickr_wsdlLocalDefinitions.dictionary.dict, 0),
            WS_XML_STRING_DICTIONARY_VALUE("urn:flickr",&Flickr_wsdlLocalDefinitions.dictionary.dict, 1),
            WS_XML_STRING_DICTIONARY_VALUE("method",&Flickr_wsdlLocalDefinitions.dictionary.dict, 2),
            WS_XML_STRING_DICTIONARY_VALUE("",&Flickr_wsdlLocalDefinitions.dictionary.dict, 3),
            WS_XML_STRING_DICTIONARY_VALUE("api_key",&Flickr_wsdlLocalDefinitions.dictionary.dict, 4),
            WS_XML_STRING_DICTIONARY_VALUE("api_sig",&Flickr_wsdlLocalDefinitions.dictionary.dict, 5),
            WS_XML_STRING_DICTIONARY_VALUE("frob",&Flickr_wsdlLocalDefinitions.dictionary.dict, 6),
            WS_XML_STRING_DICTIONARY_VALUE("FlickrResponse",&Flickr_wsdlLocalDefinitions.dictionary.dict, 7),
            WS_XML_STRING_DICTIONARY_VALUE("FlickrFault",&Flickr_wsdlLocalDefinitions.dictionary.dict, 8),
            WS_XML_STRING_DICTIONARY_VALUE("flickr",&Flickr_wsdlLocalDefinitions.dictionary.dict, 9),
        },  // end of xmlStrings
        
        {   // Flickr_wsdldictionary
        // 91ce3da4-d061-42f3-a5d7-071ed4294e0d 
        { 0x91ce3da4, 0xd061, 0x42f3, { 0xa5, 0xd7, 0x07,0x1e, 0xd4, 0x29, 0x4e, 0x0d } },
        (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings,
        10,
        TRUE,
        },
    },   //  end of dictionary
}; //  end of Flickr_wsdlLocalDefinitions


// Fault Message Flickr_wsdl.faults.FlickrFaultMessage,
    // Fault Action 
    // fault message FlickrFault
// operation: FlickrFrobRequestPortBinding_flickr_auth_getFrob
HRESULT WINAPI FlickrFrobRequestPortBinding_flickr_auth_getFrob(
    __in WS_SERVICE_PROXY* _serviceProxy,
    __in _FlickrRequest* parameters, 
    __out __deref __nullterminated WCHAR** outparameters, 
    __in WS_HEAP* _heap,
    __in_ecount_opt(_callPropertyCount) const WS_CALL_PROPERTY* _callProperties,
    __in const ULONG _callPropertyCount,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error)
{
    void* _argList[2]; 
    _argList[0] = &parameters;
    _argList[1] = &outparameters;
    return WsCall(_serviceProxy,
        (WS_OPERATION_DESCRIPTION*)&Flickr_wsdlLocalDefinitions.contracts.FlickrFrobRequestPortBinding.FlickrFrobRequestPortBinding_flickr_auth_getFrob.FlickrFrobRequestPortBinding_flickr_auth_getFrob,
        (const void **)&_argList,
        _heap,
        _callProperties,
        _callPropertyCount,
        _asyncContext,
        _error);
}

// Fault Message Flickr_wsdl.faults.FlickrFaultMessage0,
    // Fault Action 
    // fault message FlickrFault
// operation: FlickrTokenRequestPortBinding_flickr_auth_getToken
HRESULT WINAPI FlickrTokenRequestPortBinding_flickr_auth_getToken(
    __in WS_SERVICE_PROXY* _serviceProxy,
    __in _FlickrRequest* parameters, 
    __out __deref __nullterminated WCHAR** outparameters, 
    __in WS_HEAP* _heap,
    __in_ecount_opt(_callPropertyCount) const WS_CALL_PROPERTY* _callProperties,
    __in const ULONG _callPropertyCount,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error)
{
    void* _argList[2]; 
    _argList[0] = &parameters;
    _argList[1] = &outparameters;
    return WsCall(_serviceProxy,
        (WS_OPERATION_DESCRIPTION*)&Flickr_wsdlLocalDefinitions.contracts.FlickrTokenRequestPortBinding.FlickrTokenRequestPortBinding_flickr_auth_getToken.FlickrTokenRequestPortBinding_flickr_auth_getToken,
        (const void **)&_argList,
        _heap,
        _callProperties,
        _callPropertyCount,
        _asyncContext,
        _error);
}
const _Flickr_wsdl Flickr_wsdl =
{
    {// globalElements
        {
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestTypeName, // FlickrRequest
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestTypeNamespace, // urn:flickr
            WS_STRUCT_TYPE,
            (void*)&Flickr_wsdl.externallyReferencedTypes.FlickrRequest,
        },
        {
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings.FlickrResponseTypeName, // FlickrResponse
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestTypeNamespace, // urn:flickr
            WS_WSZ_TYPE,
        },
        {
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings.FlickrFaultTypeName, // FlickrFault
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestTypeNamespace, // urn:flickr
            WS_WSZ_TYPE,
        },
    }, // globalElements
    {  // begin of externallyReferencedTypes
        {
        sizeof(_FlickrRequest),
        __alignof(_FlickrRequest),
        (WS_FIELD_DESCRIPTION**)&Flickr_wsdlLocalDefinitions.globalElements._FlickrRequestdescs._FlickrRequestFields,
        WsCountOf(Flickr_wsdlLocalDefinitions.globalElements._FlickrRequestdescs._FlickrRequestFields),
        (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestTypeName, // FlickrRequest
        (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestTypeNamespace, // urn:flickr
        0,
        0,
        0,
        },   // end of struct description for _FlickrRequest
    }, // end of externallyReferencedTypes;
    {// messages
        {    // message description for FlickrRequestMessage
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings.FlickrRequestMessageactionName, // flickr
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrRequest, 
        },    // message description for FlickrRequestMessage
        {    // message description for FlickrResponseMessage
            0,
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrResponse, 
        },    // message description for FlickrResponseMessage
        {    // message description for FlickrRequestMessage
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings.FlickrRequestMessageactionName, // flickr
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrRequest, 
        },    // message description for FlickrRequestMessage
        {    // message description for FlickrResponseMessage
            0,
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrResponse, 
        },    // message description for FlickrResponseMessage
    }, // messages
    {// faults
        {    // fault detail description for FlickrFaultMessage
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodNamespace, // 
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrFault, 
        },    // fault detail description for FlickrFaultMessage
        {    // fault detail description for FlickrFaultMessage
            (WS_XML_STRING*)&Flickr_wsdlLocalDefinitions.dictionary.xmlStrings._FlickrRequestmethodNamespace, // 
            (WS_ELEMENT_DESCRIPTION*)&Flickr_wsdl.globalElements.FlickrFault, 
        },    // fault detail description for FlickrFaultMessage
    }, // faults
    {// contracts
        {   // FlickrFrobRequestPortBinding
            1,
            (WS_OPERATION_DESCRIPTION**)Flickr_wsdlLocalDefinitions.contracts.FlickrFrobRequestPortBinding.operations,
        },    // end of FlickrFrobRequestPortBinding
        {   // FlickrTokenRequestPortBinding
            1,
            (WS_OPERATION_DESCRIPTION**)Flickr_wsdlLocalDefinitions.contracts.FlickrTokenRequestPortBinding.operations,
        },    // end of FlickrTokenRequestPortBinding
    }, // contracts
    { // policies
        {  // template description for FlickrFrobRequestPortBinding
            {  // channel properties
                (WS_CHANNEL_PROPERTY*)&Flickr_wsdlLocalDefinitions.policies.FlickrFrobRequestPortBinding.channelPropertiesArray,
                3,
            },
        },  // end of template description
        {  // template description for FlickrTokenRequestPortBinding
            {  // channel properties
                (WS_CHANNEL_PROPERTY*)&Flickr_wsdlLocalDefinitions.policies.FlickrTokenRequestPortBinding.channelPropertiesArray,
                3,
            },
        },  // end of template description
    },  // policies
}; // end of _Flickr_wsdl

HRESULT FlickrFrobRequestPortBinding_CreateServiceProxy(
    __in_opt WS_HTTP_BINDING_TEMPLATE* templateValue,
    __in_ecount_opt(proxyPropertyCount) const WS_PROXY_PROPERTY* proxyProperties,
    __in const ULONG proxyPropertyCount,
    __deref_out_opt WS_SERVICE_PROXY** _serviceProxy,
    __in_opt WS_ERROR* error)
{
    return WsCreateServiceProxyFromTemplate(
        WS_CHANNEL_TYPE_REQUEST,
        proxyProperties,
        proxyPropertyCount,
        WS_HTTP_BINDING_TEMPLATE_TYPE,
        templateValue,
        templateValue == NULL ? 0 : sizeof(WS_HTTP_BINDING_TEMPLATE),
        &Flickr_wsdl.policies.FlickrFrobRequestPortBinding,
        sizeof(Flickr_wsdl.policies.FlickrFrobRequestPortBinding),
        _serviceProxy,
        error);
}

HRESULT FlickrFrobRequestPortBinding_CreateServiceEndpoint(
    __in_opt WS_HTTP_BINDING_TEMPLATE* templateValue,
    __in_opt CONST WS_STRING* address,
    __in_opt struct FlickrFrobRequestPortBindingFunctionTable* functionTable,
    __in_opt WS_SERVICE_SECURITY_CALLBACK authorizationCallback,
    __in_ecount_opt(endpointPropertyCount) WS_SERVICE_ENDPOINT_PROPERTY* endpointProperties,
    __in const ULONG endpointPropertyCount,
    __in WS_HEAP* heap,
    __deref_out_opt WS_SERVICE_ENDPOINT** serviceEndpoint,
    __in_opt WS_ERROR* error)
{
    WS_SERVICE_CONTRACT serviceContract;
    serviceContract.contractDescription = &Flickr_wsdl.contracts.FlickrFrobRequestPortBinding;
    serviceContract.defaultMessageHandlerCallback = 0;
    serviceContract.methodTable = (const void*)functionTable;
    
    return WsCreateServiceEndpointFromTemplate(
        WS_CHANNEL_TYPE_REPLY,
        endpointProperties,
        endpointPropertyCount,
        address,
        &serviceContract,
        authorizationCallback,
        heap,
        WS_HTTP_BINDING_TEMPLATE_TYPE,
        templateValue,
        templateValue == NULL ? 0 : sizeof(WS_HTTP_BINDING_TEMPLATE),
        &Flickr_wsdl.policies.FlickrFrobRequestPortBinding,
        sizeof(Flickr_wsdl.policies.FlickrFrobRequestPortBinding),
        serviceEndpoint,
        error);
}

HRESULT FlickrTokenRequestPortBinding_CreateServiceProxy(
    __in_opt WS_HTTP_BINDING_TEMPLATE* templateValue,
    __in_ecount_opt(proxyPropertyCount) const WS_PROXY_PROPERTY* proxyProperties,
    __in const ULONG proxyPropertyCount,
    __deref_out_opt WS_SERVICE_PROXY** _serviceProxy,
    __in_opt WS_ERROR* error)
{
    return WsCreateServiceProxyFromTemplate(
        WS_CHANNEL_TYPE_REQUEST,
        proxyProperties,
        proxyPropertyCount,
        WS_HTTP_BINDING_TEMPLATE_TYPE,
        templateValue,
        templateValue == NULL ? 0 : sizeof(WS_HTTP_BINDING_TEMPLATE),
        &Flickr_wsdl.policies.FlickrTokenRequestPortBinding,
        sizeof(Flickr_wsdl.policies.FlickrTokenRequestPortBinding),
        _serviceProxy,
        error);
}

HRESULT FlickrTokenRequestPortBinding_CreateServiceEndpoint(
    __in_opt WS_HTTP_BINDING_TEMPLATE* templateValue,
    __in_opt CONST WS_STRING* address,
    __in_opt struct FlickrTokenRequestPortBindingFunctionTable* functionTable,
    __in_opt WS_SERVICE_SECURITY_CALLBACK authorizationCallback,
    __in_ecount_opt(endpointPropertyCount) WS_SERVICE_ENDPOINT_PROPERTY* endpointProperties,
    __in const ULONG endpointPropertyCount,
    __in WS_HEAP* heap,
    __deref_out_opt WS_SERVICE_ENDPOINT** serviceEndpoint,
    __in_opt WS_ERROR* error)
{
    WS_SERVICE_CONTRACT serviceContract;
    serviceContract.contractDescription = &Flickr_wsdl.contracts.FlickrTokenRequestPortBinding;
    serviceContract.defaultMessageHandlerCallback = 0;
    serviceContract.methodTable = (const void*)functionTable;
    
    return WsCreateServiceEndpointFromTemplate(
        WS_CHANNEL_TYPE_REPLY,
        endpointProperties,
        endpointPropertyCount,
        address,
        &serviceContract,
        authorizationCallback,
        heap,
        WS_HTTP_BINDING_TEMPLATE_TYPE,
        templateValue,
        templateValue == NULL ? 0 : sizeof(WS_HTTP_BINDING_TEMPLATE),
        &Flickr_wsdl.policies.FlickrTokenRequestPortBinding,
        sizeof(Flickr_wsdl.policies.FlickrTokenRequestPortBinding),
        serviceEndpoint,
        error);
}

#ifndef CODA_EXPAT_MANGLE_H
#define CODA_EXPAT_MANGLE_H

/*
 * This header file mangles all symbols exported from the expat library.
 * This is needed on some platforms because of nameresolving conflicts when
 * CODA is used as a module in an application that has its own version of expat.
 * (this problem was seen with the CODA Python interface on Linux).
 * Even though name mangling is not needed for every platform or CODA
 * interface, we always perform the mangling for consitency reasons.
 *
 * The following command was used to obtain the symbol list:
 * nm .libs/libexpat.a | grep " [TR] "
 *
 */

#ifdef CODA_EXPAT_NAME_MANGLE

#define XML_DefaultCurrent coda_XML_DefaultCurrent
#define XML_ErrorString coda_XML_ErrorString
#define XML_ExpatVersion coda_XML_ExpatVersion
#define XML_ExpatVersionInfo coda_XML_ExpatVersionInfo
#define XML_ExternalEntityParserCreate coda_XML_ExternalEntityParserCreate
#define XML_FreeContentModel coda_XML_FreeContentModel
#define XML_GetBase coda_XML_GetBase
#define XML_GetBuffer coda_XML_GetBuffer
#define XML_GetCurrentByteCount coda_XML_GetCurrentByteCount
#define XML_GetCurrentByteIndex coda_XML_GetCurrentByteIndex
#define XML_GetCurrentColumnNumber coda_XML_GetCurrentColumnNumber
#define XML_GetCurrentLineNumber coda_XML_GetCurrentLineNumber
#define XML_GetErrorCode coda_XML_GetErrorCode
#define XML_GetFeatureList coda_XML_GetFeatureList
#define XML_GetIdAttributeIndex coda_XML_GetIdAttributeIndex
#define XML_GetInputContext coda_XML_GetInputContext
#define XML_GetParsingStatus coda_XML_GetParsingStatus
#define XML_GetSpecifiedAttributeCount coda_XML_GetSpecifiedAttributeCount
#define XML_MemFree coda_XML_MemFree
#define XML_MemMalloc coda_XML_MemMalloc
#define XML_MemRealloc coda_XML_MemRealloc
#define XML_Parse coda_XML_Parse
#define XML_ParseBuffer coda_XML_ParseBuffer
#define XML_ParserCreate coda_XML_ParserCreate
#define XML_ParserCreateNS coda_XML_ParserCreateNS
#define XML_ParserCreate_MM coda_XML_ParserCreate_MM
#define XML_ParserFree coda_XML_ParserFree
#define XML_ParserReset coda_XML_ParserReset
#define XML_ResumeParser coda_XML_ResumeParser
#define XML_SetAttlistDeclHandler coda_XML_SetAttlistDeclHandler
#define XML_SetBase coda_XML_SetBase
#define XML_SetCdataSectionHandler coda_XML_SetCdataSectionHandler
#define XML_SetCharacterDataHandler coda_XML_SetCharacterDataHandler
#define XML_SetCommentHandler coda_XML_SetCommentHandler
#define XML_SetDefaultHandler coda_XML_SetDefaultHandler
#define XML_SetDefaultHandlerExpand coda_XML_SetDefaultHandlerExpand
#define XML_SetDoctypeDeclHandler coda_XML_SetDoctypeDeclHandler
#define XML_SetElementDeclHandler coda_XML_SetElementDeclHandler
#define XML_SetElementHandler coda_XML_SetElementHandler
#define XML_SetEncoding coda_XML_SetEncoding
#define XML_SetEndCdataSectionHandler coda_XML_SetEndCdataSectionHandler
#define XML_SetEndDoctypeDeclHandler coda_XML_SetEndDoctypeDeclHandler
#define XML_SetEndElementHandler coda_XML_SetEndElementHandler
#define XML_SetEndNamespaceDeclHandler coda_XML_SetEndNamespaceDeclHandler
#define XML_SetEntityDeclHandler coda_XML_SetEntityDeclHandler
#define XML_SetExternalEntityRefHandler coda_XML_SetExternalEntityRefHandler
#define XML_SetExternalEntityRefHandlerArg coda_XML_SetExternalEntityRefHandlerArg
#define XML_SetHashSalt coda_XML_SetHashSalt
#define XML_SetNamespaceDeclHandler coda_XML_SetNamespaceDeclHandler
#define XML_SetNotStandaloneHandler coda_XML_SetNotStandaloneHandler
#define XML_SetNotationDeclHandler coda_XML_SetNotationDeclHandler
#define XML_SetParamEntityParsing coda_XML_SetParamEntityParsing
#define XML_SetProcessingInstructionHandler coda_XML_SetProcessingInstructionHandler
#define XML_SetReturnNSTriplet coda_XML_SetReturnNSTriplet
#define XML_SetSkippedEntityHandler coda_XML_SetSkippedEntityHandler
#define XML_SetStartCdataSectionHandler coda_XML_SetStartCdataSectionHandler
#define XML_SetStartDoctypeDeclHandler coda_XML_SetStartDoctypeDeclHandler
#define XML_SetStartElementHandler coda_XML_SetStartElementHandler
#define XML_SetStartNamespaceDeclHandler coda_XML_SetStartNamespaceDeclHandler
#define XML_SetUnknownEncodingHandler coda_XML_SetUnknownEncodingHandler
#define XML_SetUnparsedEntityDeclHandler coda_XML_SetUnparsedEntityDeclHandler
#define XML_SetUserData coda_XML_SetUserData
#define XML_SetXmlDeclHandler coda_XML_SetXmlDeclHandler
#define XML_StopParser coda_XML_StopParser
#define XML_UseForeignDTD coda_XML_UseForeignDTD
#define XML_UseParserAsHandlerArg coda_XML_UseParserAsHandlerArg
#define XmlPrologStateInit coda_XmlPrologStateInit
#define XmlPrologStateInitExternalEntity coda_XmlPrologStateInitExternalEntity
#define XmlGetUtf16InternalEncoding coda_XmlGetUtf16InternalEncoding
#define XmlGetUtf16InternalEncodingNS coda_XmlGetUtf16InternalEncodingNS
#define XmlGetUtf8InternalEncoding coda_XmlGetUtf8InternalEncoding
#define XmlGetUtf8InternalEncodingNS coda_XmlGetUtf8InternalEncodingNS
#define XmlInitEncoding coda_XmlInitEncoding
#define XmlInitEncodingNS coda_XmlInitEncodingNS
#define XmlInitUnknownEncoding coda_XmlInitUnknownEncoding
#define XmlInitUnknownEncodingNS coda_XmlInitUnknownEncodingNS
#define XmlParseXmlDecl coda_XmlParseXmlDecl
#define XmlParseXmlDeclNS coda_XmlParseXmlDeclNS
#define XmlSizeOfUnknownEncoding coda_XmlSizeOfUnknownEncoding
#define XmlUtf16Encode coda_XmlUtf16Encode
#define XmlUtf8Encode coda_XmlUtf8Encode

#endif

#endif

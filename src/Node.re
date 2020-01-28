// https://sourcegraph.com/github.com/microsoft/TypeScript@v3.7.5/-/blob/lib/typescript.d.ts#L67

[@bs.deriving jsConverter]
type syntaxKind =
  | [@bs.as 0] Unknown
  | [@bs.as 1] EndOfFileToken
  | [@bs.as 2] SingleLineCommentTrivia
  | [@bs.as 3] MultiLineCommentTrivia
  | [@bs.as 4] NewLineTrivia
  | [@bs.as 5] WhitespaceTrivia
  | [@bs.as 6] ShebangTrivia
  | [@bs.as 7] ConflictMarkerTrivia
  | [@bs.as 8] NumericLiteral
  | [@bs.as 9] BigIntLiteral
  | [@bs.as 10] StringLiteral
  | [@bs.as 11] JsxText
  | [@bs.as 12] JsxTextAllWhiteSpaces
  | [@bs.as 13] RegularExpressionLiteral
  | [@bs.as 14] NoSubstitutionTemplateLiteral
  | [@bs.as 15] TemplateHead
  | [@bs.as 16] TemplateMiddle
  | [@bs.as 17] TemplateTail
  | [@bs.as 18] OpenBraceToken
  | [@bs.as 19] CloseBraceToken
  | [@bs.as 20] OpenParenToken
  | [@bs.as 21] CloseParenToken
  | [@bs.as 22] OpenBracketToken
  | [@bs.as 23] CloseBracketToken
  | [@bs.as 24] DotToken
  | [@bs.as 25] DotDotDotToken
  | [@bs.as 26] SemicolonToken
  | [@bs.as 27] CommaToken
  | [@bs.as 28] QuestionDotToken
  | [@bs.as 29] LessThanToken
  | [@bs.as 30] LessThanSlashToken
  | [@bs.as 31] GreaterThanToken
  | [@bs.as 32] LessThanEqualsToken
  | [@bs.as 33] GreaterThanEqualsToken
  | [@bs.as 34] EqualsEqualsToken
  | [@bs.as 35] ExclamationEqualsToken
  | [@bs.as 36] EqualsEqualsEqualsToken
  | [@bs.as 37] ExclamationEqualsEqualsToken
  | [@bs.as 38] EqualsGreaterThanToken
  | [@bs.as 39] PlusToken
  | [@bs.as 40] MinusToken
  | [@bs.as 41] AsteriskToken
  | [@bs.as 42] AsteriskAsteriskToken
  | [@bs.as 43] SlashToken
  | [@bs.as 44] PercentToken
  | [@bs.as 45] PlusPlusToken
  | [@bs.as 46] MinusMinusToken
  | [@bs.as 47] LessThanLessThanToken
  | [@bs.as 48] GreaterThanGreaterThanToken
  | [@bs.as 49] GreaterThanGreaterThanGreaterThanToken
  | [@bs.as 50] AmpersandToken
  | [@bs.as 51] BarToken
  | [@bs.as 52] CaretToken
  | [@bs.as 53] ExclamationToken
  | [@bs.as 54] TildeToken
  | [@bs.as 55] AmpersandAmpersandToken
  | [@bs.as 56] BarBarToken
  | [@bs.as 57] QuestionToken
  | [@bs.as 58] ColonToken
  | [@bs.as 59] AtToken
  | [@bs.as 60] QuestionQuestionToken
  | [@bs.as 61] BacktickToken
  | [@bs.as 62] EqualsToken
  | [@bs.as 63] PlusEqualsToken
  | [@bs.as 64] MinusEqualsToken
  | [@bs.as 65] AsteriskEqualsToken
  | [@bs.as 66] AsteriskAsteriskEqualsToken
  | [@bs.as 67] SlashEqualsToken
  | [@bs.as 68] PercentEqualsToken
  | [@bs.as 69] LessThanLessThanEqualsToken
  | [@bs.as 70] GreaterThanGreaterThanEqualsToken
  | [@bs.as 71] GreaterThanGreaterThanGreaterThanEqualsToken
  | [@bs.as 72] AmpersandEqualsToken
  | [@bs.as 73] BarEqualsToken
  | [@bs.as 74] CaretEqualsToken
  | [@bs.as 75] Identifier
  | [@bs.as 76] BreakKeyword
  | [@bs.as 77] CaseKeyword
  | [@bs.as 78] CatchKeyword
  | [@bs.as 79] ClassKeyword
  | [@bs.as 80] ConstKeyword
  | [@bs.as 81] ContinueKeyword
  | [@bs.as 82] DebuggerKeyword
  | [@bs.as 83] DefaultKeyword
  | [@bs.as 84] DeleteKeyword
  | [@bs.as 85] DoKeyword
  | [@bs.as 86] ElseKeyword
  | [@bs.as 87] EnumKeyword
  | [@bs.as 88] ExportKeyword
  | [@bs.as 89] ExtendsKeyword
  | [@bs.as 90] FalseKeyword
  | [@bs.as 91] FinallyKeyword
  | [@bs.as 92] ForKeyword
  | [@bs.as 93] FunctionKeyword
  | [@bs.as 94] IfKeyword
  | [@bs.as 95] ImportKeyword
  | [@bs.as 96] InKeyword
  | [@bs.as 97] InstanceOfKeyword
  | [@bs.as 98] NewKeyword
  | [@bs.as 99] NullKeyword
  | [@bs.as 100] ReturnKeyword
  | [@bs.as 101] SuperKeyword
  | [@bs.as 102] SwitchKeyword
  | [@bs.as 103] ThisKeyword
  | [@bs.as 104] ThrowKeyword
  | [@bs.as 105] TrueKeyword
  | [@bs.as 106] TryKeyword
  | [@bs.as 107] TypeOfKeyword
  | [@bs.as 108] VarKeyword
  | [@bs.as 109] VoidKeyword
  | [@bs.as 110] WhileKeyword
  | [@bs.as 111] WithKeyword
  | [@bs.as 112] ImplementsKeyword
  | [@bs.as 113] InterfaceKeyword
  | [@bs.as 114] LetKeyword
  | [@bs.as 115] PackageKeyword
  | [@bs.as 116] PrivateKeyword
  | [@bs.as 117] ProtectedKeyword
  | [@bs.as 118] PublicKeyword
  | [@bs.as 119] StaticKeyword
  | [@bs.as 120] YieldKeyword
  | [@bs.as 121] AbstractKeyword
  | [@bs.as 122] AsKeyword
  | [@bs.as 123] AssertsKeyword
  | [@bs.as 124] AnyKeyword
  | [@bs.as 125] AsyncKeyword
  | [@bs.as 126] AwaitKeyword
  | [@bs.as 127] BooleanKeyword
  | [@bs.as 128] ConstructorKeyword
  | [@bs.as 129] DeclareKeyword
  | [@bs.as 130] GetKeyword
  | [@bs.as 131] InferKeyword
  | [@bs.as 132] IsKeyword
  | [@bs.as 133] KeyOfKeyword
  | [@bs.as 134] ModuleKeyword
  | [@bs.as 135] NamespaceKeyword
  | [@bs.as 136] NeverKeyword
  | [@bs.as 137] ReadonlyKeyword
  | [@bs.as 138] RequireKeyword
  | [@bs.as 139] NumberKeyword
  | [@bs.as 140] ObjectKeyword
  | [@bs.as 141] SetKeyword
  | [@bs.as 142] StringKeyword
  | [@bs.as 143] SymbolKeyword
  | [@bs.as 144] TypeKeyword
  | [@bs.as 145] UndefinedKeyword
  | [@bs.as 146] UniqueKeyword
  | [@bs.as 147] UnknownKeyword
  | [@bs.as 148] FromKeyword
  | [@bs.as 149] GlobalKeyword
  | [@bs.as 150] BigIntKeyword
  | [@bs.as 151] OfKeyword
  | [@bs.as 152] QualifiedName
  | [@bs.as 153] ComputedPropertyName
  | [@bs.as 154] TypeParameter
  | [@bs.as 155] Parameter
  | [@bs.as 156] Decorator
  | [@bs.as 157] PropertySignature
  | [@bs.as 158] PropertyDeclaration
  | [@bs.as 159] MethodSignature
  | [@bs.as 160] MethodDeclaration
  | [@bs.as 161] Constructor
  | [@bs.as 162] GetAccessor
  | [@bs.as 163] SetAccessor
  | [@bs.as 164] CallSignature
  | [@bs.as 165] ConstructSignature
  | [@bs.as 166] IndexSignature
  | [@bs.as 167] TypePredicate
  | [@bs.as 168] TypeReference
  | [@bs.as 169] FunctionType
  | [@bs.as 170] ConstructorType
  | [@bs.as 171] TypeQuery
  | [@bs.as 172] TypeLiteral
  | [@bs.as 173] ArrayType
  | [@bs.as 174] TupleType
  | [@bs.as 175] OptionalType
  | [@bs.as 176] RestType
  | [@bs.as 177] UnionType
  | [@bs.as 178] IntersectionType
  | [@bs.as 179] ConditionalType
  | [@bs.as 180] InferType
  | [@bs.as 181] ParenthesizedType
  | [@bs.as 182] ThisType
  | [@bs.as 183] TypeOperator
  | [@bs.as 184] IndexedAccessType
  | [@bs.as 185] MappedType
  | [@bs.as 186] LiteralType
  | [@bs.as 187] ImportType
  | [@bs.as 188] ObjectBindingPattern
  | [@bs.as 189] ArrayBindingPattern
  | [@bs.as 190] BindingElement
  | [@bs.as 191] ArrayLiteralExpression
  | [@bs.as 192] ObjectLiteralExpression
  | [@bs.as 193] PropertyAccessExpression
  | [@bs.as 194] ElementAccessExpression
  | [@bs.as 195] CallExpression
  | [@bs.as 196] NewExpression
  | [@bs.as 197] TaggedTemplateExpression
  | [@bs.as 198] TypeAssertionExpression
  | [@bs.as 199] ParenthesizedExpression
  | [@bs.as 200] FunctionExpression
  | [@bs.as 201] ArrowFunction
  | [@bs.as 202] DeleteExpression
  | [@bs.as 203] TypeOfExpression
  | [@bs.as 204] VoidExpression
  | [@bs.as 205] AwaitExpression
  | [@bs.as 206] PrefixUnaryExpression
  | [@bs.as 207] PostfixUnaryExpression
  | [@bs.as 208] BinaryExpression
  | [@bs.as 209] ConditionalExpression
  | [@bs.as 210] TemplateExpression
  | [@bs.as 211] YieldExpression
  | [@bs.as 212] SpreadElement
  | [@bs.as 213] ClassExpression
  | [@bs.as 214] OmittedExpression
  | [@bs.as 215] ExpressionWithTypeArguments
  | [@bs.as 216] AsExpression
  | [@bs.as 217] NonNullExpression
  | [@bs.as 218] MetaProperty
  | [@bs.as 219] SyntheticExpression
  | [@bs.as 220] TemplateSpan
  | [@bs.as 221] SemicolonClassElement
  | [@bs.as 222] Block
  | [@bs.as 223] EmptyStatement
  | [@bs.as 224] VariableStatement
  | [@bs.as 225] ExpressionStatement
  | [@bs.as 226] IfStatement
  | [@bs.as 227] DoStatement
  | [@bs.as 228] WhileStatement
  | [@bs.as 229] ForStatement
  | [@bs.as 230] ForInStatement
  | [@bs.as 231] ForOfStatement
  | [@bs.as 232] ContinueStatement
  | [@bs.as 233] BreakStatement
  | [@bs.as 234] ReturnStatement
  | [@bs.as 235] WithStatement
  | [@bs.as 236] SwitchStatement
  | [@bs.as 237] LabeledStatement
  | [@bs.as 238] ThrowStatement
  | [@bs.as 239] TryStatement
  | [@bs.as 240] DebuggerStatement
  | [@bs.as 241] VariableDeclaration
  | [@bs.as 242] VariableDeclarationList
  | [@bs.as 243] FunctionDeclaration
  | [@bs.as 244] ClassDeclaration
  | [@bs.as 245] InterfaceDeclaration
  | [@bs.as 246] TypeAliasDeclaration
  | [@bs.as 247] EnumDeclaration
  | [@bs.as 248] ModuleDeclaration
  | [@bs.as 249] ModuleBlock
  | [@bs.as 250] CaseBlock
  | [@bs.as 251] NamespaceExportDeclaration
  | [@bs.as 252] ImportEqualsDeclaration
  | [@bs.as 253] ImportDeclaration
  | [@bs.as 254] ImportClause
  | [@bs.as 255] NamespaceImport
  | [@bs.as 256] NamedImports
  | [@bs.as 257] ImportSpecifier
  | [@bs.as 258] ExportAssignment
  | [@bs.as 259] ExportDeclaration
  | [@bs.as 260] NamedExports
  | [@bs.as 261] ExportSpecifier
  | [@bs.as 262] MissingDeclaration
  | [@bs.as 263] ExternalModuleReference
  | [@bs.as 264] JsxElement
  | [@bs.as 265] JsxSelfClosingElement
  | [@bs.as 266] JsxOpeningElement
  | [@bs.as 267] JsxClosingElement
  | [@bs.as 268] JsxFragment
  | [@bs.as 269] JsxOpeningFragment
  | [@bs.as 270] JsxClosingFragment
  | [@bs.as 271] JsxAttribute
  | [@bs.as 272] JsxAttributes
  | [@bs.as 273] JsxSpreadAttribute
  | [@bs.as 274] JsxExpression
  | [@bs.as 275] CaseClause
  | [@bs.as 276] DefaultClause
  | [@bs.as 277] HeritageClause
  | [@bs.as 278] CatchClause
  | [@bs.as 279] PropertyAssignment
  | [@bs.as 280] ShorthandPropertyAssignment
  | [@bs.as 281] SpreadAssignment
  | [@bs.as 282] EnumMember
  | [@bs.as 283] UnparsedPrologue
  | [@bs.as 284] UnparsedPrepend
  | [@bs.as 285] UnparsedText
  | [@bs.as 286] UnparsedInternalText
  | [@bs.as 287] UnparsedSyntheticReference
  | [@bs.as 288] SourceFile
  | [@bs.as 289] Bundle
  | [@bs.as 290] UnparsedSource
  | [@bs.as 291] InputFiles
  | [@bs.as 292] JSDocTypeExpression
  | [@bs.as 293] JSDocAllType
  | [@bs.as 294] JSDocUnknownType
  | [@bs.as 295] JSDocNullableType
  | [@bs.as 296] JSDocNonNullableType
  | [@bs.as 297] JSDocOptionalType
  | [@bs.as 298] JSDocFunctionType
  | [@bs.as 299] JSDocVariadicType
  | [@bs.as 300] JSDocNamepathType
  | [@bs.as 301] JSDocComment
  | [@bs.as 302] JSDocTypeLiteral
  | [@bs.as 303] JSDocSignature
  | [@bs.as 304] JSDocTag
  | [@bs.as 305] JSDocAugmentsTag
  | [@bs.as 306] JSDocAuthorTag
  | [@bs.as 307] JSDocClassTag
  | [@bs.as 308] JSDocCallbackTag
  | [@bs.as 309] JSDocEnumTag
  | [@bs.as 310] JSDocParameterTag
  | [@bs.as 311] JSDocReturnTag
  | [@bs.as 312] JSDocThisTag
  | [@bs.as 313] JSDocTypeTag
  | [@bs.as 314] JSDocTemplateTag
  | [@bs.as 315] JSDocTypedefTag
  | [@bs.as 316] JSDocPropertyTag
  | [@bs.as 317] SyntaxList
  | [@bs.as 318] NotEmittedStatement
  | [@bs.as 319] PartiallyEmittedExpression
  | [@bs.as 320] CommaListExpression
  | [@bs.as 321] MergeDeclarationMarker
  | [@bs.as 322] EndOfDeclarationMarker
  | [@bs.as 323] SyntheticReferenceExpression
  | [@bs.as 324] Count;
//         | [@bs.as 62] FirstAssignment
//         | [@bs.as 74] LastAssignment
//         | [@bs.as 63] FirstCompoundAssignment
//         | [@bs.as 74] LastCompoundAssignment
//         | [@bs.as 76] FirstReservedWord
//         | [@bs.as 111] LastReservedWord
//         | [@bs.as 76] FirstKeyword
//         | [@bs.as 151] LastKeyword
//         | [@bs.as 112] FirstFutureReservedWord
//         | [@bs.as 120] LastFutureReservedWord
//         | [@bs.as 167] FirstTypeNode
//         | [@bs.as 187] LastTypeNode
//         | [@bs.as 18] FirstPunctuation
//         | [@bs.as 74] LastPunctuation
//         | [@bs.as 0] FirstToken
//         | [@bs.as 151] LastToken
//         | [@bs.as 2] FirstTriviaToken
//         | [@bs.as 7] LastTriviaToken
//         | [@bs.as 8] FirstLiteralToken
//         | [@bs.as 14] LastLiteralToken
//         | [@bs.as 14] FirstTemplateToken
//         | [@bs.as 17] LastTemplateToken
//         | [@bs.as 29] FirstBinaryOperator
//         | [@bs.as 74] LastBinaryOperator
//         | [@bs.as 224] FirstStatement
//         | [@bs.as 240] LastStatement
//         | [@bs.as 152] FirstNode
//         | [@bs.as 292] FirstJSDocNode
//         | [@bs.as 316] LastJSDocNode
//         | [@bs.as 304] FirstJSDocTagNode
//         | [@bs.as 316] LastJSDocTagNode

[@bs.deriving jsConverter]
type nodeFlags =
  | [@bs.as 0] None
  | [@bs.as 1] Let
  | [@bs.as 2] Const
  | [@bs.as 4] NestedNamespace
  | [@bs.as 8] Synthesized
  | [@bs.as 16] Namespace
  | [@bs.as 32] OptionalChain
  | [@bs.as 64] ExportContext
  | [@bs.as 128] ContainsThis
  | [@bs.as 256] HasImplicitReturn
  | [@bs.as 512] HasExplicitReturn
  | [@bs.as 1024] GlobalAugmentation
  | [@bs.as 2048] HasAsyncFunctions
  | [@bs.as 4096] DisallowInContext
  | [@bs.as 8192] YieldContext
  | [@bs.as 16384] DecoratorContext
  | [@bs.as 32768] AwaitContext
  | [@bs.as 65536] ThisNodeHasError
  | [@bs.as 131072] JavaScriptFile
  | [@bs.as 262144] ThisNodeOrAnySubNodesHasError
  | [@bs.as 524288] HasAggregatedChildData
  | [@bs.as 4194304] JSDoc
  | [@bs.as 33554432] JsonFile
  | [@bs.as 3] BlockScoped
  | [@bs.as 768] ReachabilityCheckFlags
  | [@bs.as 2816] ReachabilityAndEmitFlags
  | [@bs.as 25358336] ContextFlags
  | [@bs.as 40960] TypeExcludesFlags;

[@bs.deriving jsConverter]
type modifierFlags =
  | [@bs.as 0] None
  | [@bs.as 1] Export
  | [@bs.as 2] Ambient
  | [@bs.as 4] Public
  | [@bs.as 8] Private
  | [@bs.as 16] Protected
  | [@bs.as 32] Static
  | [@bs.as 64] Readonly
  | [@bs.as 128] Abstract
  | [@bs.as 256] Async
  | [@bs.as 512] Default
  | [@bs.as 2048] Const
  | [@bs.as 536870912] HasComputedFlags
  | [@bs.as 28] AccessibilityModifier
  | [@bs.as 92] ParameterPropertyModifier
  | [@bs.as 24] NonPublicAccessibilityModifier
  | [@bs.as 2270] TypeScriptModifier
  | [@bs.as 513] ExportDefault
  | [@bs.as 3071] All;

[@bs.deriving jsConverter]
type jsxFlags =
  | [@bs.as 0] None
  | [@bs.as 1] IntrinsicNamedElement
  | [@bs.as 2] IntrinsicIndexedElement
  | [@bs.as 3] IntrinsicElement;

module TextRange = {
  type t = {
    pos: int,
    [@bs.as "end"]
    end_: int,
  };
};

type t = {
  kind: syntaxKind,
  flags: nodeFlags,
  name: option(t),
  parent: t,
  pos: int,
  [@bs.as "end"]
  end_: int,
};
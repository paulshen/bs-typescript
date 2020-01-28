type program;
type typechecker;
type declaration = Node.t;
type symbol = {
  declarations: array(declaration),
  valueDeclaration: option(declaration),
};
// https://github.com/microsoft/TypeScript/blob/a87512d21bbcd97e9a637b9722c7f485013a6c25/lib/typescript.d.ts#L2369
// type type_ =
//   | StringLiteralType({value: string})
//   | NumberLiteralType({value: float})
//   | BigIntLiteralType({value: int64});
type type_ = Js.Json.t;
type sourceFile = {
  fileName: string,
  isDeclarationFile: bool,
};

[@bs.module "typescript"]
external createProgram: (array(string), Js.Dict.t(string)) => program =
  "createProgram";

module Program = {
  [@bs.send]
  external getTypeChecker: program => typechecker = "getTypeChecker";

  [@bs.send]
  external getSourceFiles: program => array(sourceFile) = "getSourceFiles";
};

module SourceFile = {
  [@bs.module "typescript"]
  external forEachChild: (sourceFile, Node.t => unit) => unit = "forEachChild";
};

module TypeChecker = {
  [@bs.send]
  external getSymbolAtLocation: (typechecker, Node.t) => option(symbol) =
    "getSymbolAtLocation";

  [@bs.send]
  external getTypeAtLocation: (typechecker, Node.t) => type_ =
    "getTypeAtLocation";

  [@bs.send]
  external getTypeOfSymbolAtLocation: (typechecker, symbol, Node.t) => type_ =
    "getTypeOfSymbolAtLocation";

  [@bs.send]
  external typeToString: (typechecker, type_) => string = "typeToString";
};

module Symbol = {
  [@bs.send] external getName: symbol => string = "getName";
};

module Type = {};
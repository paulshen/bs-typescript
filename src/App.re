open Compiler;
let program = createProgram([|"./sample.ts"|], Js.Dict.empty());

let checker = program->Program.getTypeChecker;

let sourceFiles = program->Program.getSourceFiles;

sourceFiles
|> Js.Array.forEach(sourceFile =>
     if (!sourceFile.isDeclarationFile) {
       sourceFile->SourceFile.forEachChild(node => {
         switch (node.name) {
         | Some(name) =>
           switch (checker->TypeChecker.getSymbolAtLocation(name)) {
           | Some(symbol) =>
             let type_ =
               checker->TypeChecker.getTypeOfSymbolAtLocation(
                 symbol,
                 Belt.Option.getExn(symbol.valueDeclaration),
               );
             Js.log(checker->TypeChecker.typeToString(type_));
           | None => ()
           }
         | None => ()
         }
       });
     }
   );
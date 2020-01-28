open Compiler;
let program =
  createProgram([|"./sample.tsx"|], Js.Dict.fromList([("jsx", "react")]));

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
             switch (symbol.valueDeclaration) {
             | Some(valueDeclaration) =>
               let type_ =
                 checker->TypeChecker.getTypeOfSymbolAtLocation(
                   symbol,
                   valueDeclaration,
                 );
               Js.log(checker->TypeChecker.typeToString(type_));
             | None => ()
             }
           | None => ()
           }
         | None => ()
         }
       });
     }
   );
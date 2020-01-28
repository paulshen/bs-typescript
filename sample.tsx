class Foo {
  x: number;
  y: string;
}

type MyComponentProps = {
  x: number;
};

function MyComponent(props: MyComponentProps) {
  return <div className="tummy" />;
}

const f = new Foo();
console.log(f);

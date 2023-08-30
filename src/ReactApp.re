module App = {
  [@react.component]
  let make = () =>
    <Text> "Hello from RN!" -> React.string </Text>;
};

ReactDOM.querySelector("#root")
->(
    fun
    | Some(root) => ReactDOM.render(<App />, root)
    | None =>
      Js.Console.error(
        "Failed to start React: couldn't find the #root element",
      )
  );

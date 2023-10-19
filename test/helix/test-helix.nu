let file_pwd = $env.FILE_PWD;
let root_dir = ([$file_pwd, '..', '..'] | path join);
let example_ecsact_file = ([$root_dir, 'examples', 'example.ecsact'] | path join)
let test_helix_runtime_dir = ([$file_pwd, 'runtime'] | path join);

let highlights_path = ([$root_dir, 'queries', 'highlights.scm'] | path join);
let test_highlights_path = ([$file_pwd, 'runtime', 'queries', 'ecsact', 'highlights.scm'] | path join);
let test_helix_config = ([$file_pwd, 'config.toml'] | path join);

with-env [HELIX_RUNTIME $test_helix_runtime_dir] {
  mkdir ($test_highlights_path | path dirname);
  cp $highlights_path $test_highlights_path;
  npm run generate;
  hx -c $test_helix_config -g fetch;
  hx -c $test_helix_config -g build;
  hx -c $test_helix_config --health ecsact;
  hx -c $test_helix_config $example_ecsact_file;
}

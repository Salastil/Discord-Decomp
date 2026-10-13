# Rust crates embedded in the native libraries

Extracted from cargo registry paths (`registry/src/.../<crate>-<version>/`) in panic/assert strings of the stripped
binaries. This lists crates that **panic-capable code from them is linked in**; crates without such strings are not listed,
so the lists are a lower bound. All of these are open-source crates.io crates: study them at the exact version given.

## `liblibdiscore-rn-jsi-module.so`

Toolchain: `rustc version 1.99.0-nightly (73dc9167f 2026-08-01)`

| crate | version | crates.io |
|---|---|---|
| android-tzdata | 0.1.1 | https://crates.io/crates/android-tzdata/0.1.1 |
| android_system_properties | 0.1.5 | https://crates.io/crates/android_system_properties/0.1.5 |
| anyhow | 1.0.98 | https://crates.io/crates/anyhow/1.0.98 |
| base64 | 0.22.1 | https://crates.io/crates/base64/0.22.1 |
| bytes | 1.10.1 | https://crates.io/crates/bytes/1.10.1 |
| chrono | 0.4.40 | https://crates.io/crates/chrono/0.4.40 |
| cxx | 1.0.194 | https://crates.io/crates/cxx/1.0.194 |
| foldhash | 0.1.5 | https://crates.io/crates/foldhash/0.1.5 |
| form_urlencoded | 1.2.1 | https://crates.io/crates/form_urlencoded/1.2.1 |
| futures-channel | 0.3.31 | https://crates.io/crates/futures-channel/0.3.31 |
| futures-core | 0.3.31 | https://crates.io/crates/futures-core/0.3.31 |
| futures-util | 0.3.31 | https://crates.io/crates/futures-util/0.3.31 |
| hashbrown | 0.15.5 | https://crates.io/crates/hashbrown/0.15.5 |
| hex | 0.4.3 | https://crates.io/crates/hex/0.4.3 |
| http | 1.3.1 | https://crates.io/crates/http/1.3.1 |
| http-body-util | 0.1.3 | https://crates.io/crates/http-body-util/0.1.3 |
| httparse | 1.10.1 | https://crates.io/crates/httparse/1.10.1 |
| hyper | 1.6.0 | https://crates.io/crates/hyper/1.6.0 |
| hyper-rustls | 0.27.5 | https://crates.io/crates/hyper-rustls/0.27.5 |
| hyper-util | 0.1.10 | https://crates.io/crates/hyper-util/0.1.10 |
| iana-time-zone | 0.1.62 | https://crates.io/crates/iana-time-zone/0.1.62 |
| icu_collections | 1.5.0 | https://crates.io/crates/icu_collections/1.5.0 |
| icu_locid | 1.5.0 | https://crates.io/crates/icu_locid/1.5.0 |
| icu_normalizer | 1.5.0 | https://crates.io/crates/icu_normalizer/1.5.0 |
| icu_provider | 1.5.0 | https://crates.io/crates/icu_provider/1.5.0 |
| idna | 1.0.3 | https://crates.io/crates/idna/1.0.3 |
| ipnet | 2.11.0 | https://crates.io/crates/ipnet/2.11.0 |
| litemap | 0.7.5 | https://crates.io/crates/litemap/0.7.5 |
| log | 0.4.27 | https://crates.io/crates/log/0.4.27 |
| mio | 1.0.3 | https://crates.io/crates/mio/1.0.3 |
| once_cell | 1.21.1 | https://crates.io/crates/once_cell/1.21.1 |
| parking_lot | 0.12.3 | https://crates.io/crates/parking_lot/0.12.3 |
| parking_lot_core | 0.9.10 | https://crates.io/crates/parking_lot_core/0.9.10 |
| percent-encoding | 2.3.1 | https://crates.io/crates/percent-encoding/2.3.1 |
| reqwest | 0.12.15 | https://crates.io/crates/reqwest/0.12.15 |
| ring | 0.17.14 | https://crates.io/crates/ring/0.17.14 |
| rusqlite | 0.37.0 | https://crates.io/crates/rusqlite/0.37.0 |
| rustls | 0.23.25 | https://crates.io/crates/rustls/0.23.25 |
| rustls-pki-types | 1.11.0 | https://crates.io/crates/rustls-pki-types/1.11.0 |
| rustls-webpki | 0.103.1 | https://crates.io/crates/rustls-webpki/0.103.1 |
| serde | 1.0.219 | https://crates.io/crates/serde/1.0.219 |
| serde_json | 1.0.140 | https://crates.io/crates/serde_json/1.0.140 |
| signal-hook-registry | 1.4.2 | https://crates.io/crates/signal-hook-registry/1.4.2 |
| slab | 0.4.9 | https://crates.io/crates/slab/0.4.9 |
| smallvec | 1.14.0 | https://crates.io/crates/smallvec/1.14.0 |
| smol_str | 0.3.2 | https://crates.io/crates/smol_str/0.3.2 |
| socket2 | 0.5.8 | https://crates.io/crates/socket2/0.5.8 |
| tinystr | 0.7.6 | https://crates.io/crates/tinystr/0.7.6 |
| tokio | 1.44.1 | https://crates.io/crates/tokio/1.44.1 |
| tokio-rustls | 0.26.2 | https://crates.io/crates/tokio-rustls/0.26.2 |
| tokio-util | 0.7.16 | https://crates.io/crates/tokio-util/0.7.16 |
| tower | 0.5.2 | https://crates.io/crates/tower/0.5.2 |
| tracing-core | 0.1.33 | https://crates.io/crates/tracing-core/0.1.33 |
| untrusted | 0.9.0 | https://crates.io/crates/untrusted/0.9.0 |
| url | 2.5.4 | https://crates.io/crates/url/2.5.4 |
| utf8_iter | 1.0.4 | https://crates.io/crates/utf8_iter/1.0.4 |
| want | 0.3.1 | https://crates.io/crates/want/0.3.1 |
| zerovec | 0.10.4 | https://crates.io/crates/zerovec/0.10.4 |

Discord-authored code in this library is not on crates.io; see the decompiled C under `native/liblibdiscore-rn-jsi-module/`.


## `libappmodules.so`

Toolchain: `rustc version 1.98.1 (48a229cea 2026-09-01)`

| crate | version | crates.io |
|---|---|---|
| aho-corasick | 1.1.5 | https://crates.io/crates/aho-corasick/1.1.5 |
| anyhow | 1.0.87 | https://crates.io/crates/anyhow/1.0.87 |
| form_urlencoded | 1.2.1 | https://crates.io/crates/form_urlencoded/1.2.1 |
| icu_collections | 2.2.0 | https://crates.io/crates/icu_collections/2.2.0 |
| icu_locale_core | 2.2.0 | https://crates.io/crates/icu_locale_core/2.2.0 |
| icu_normalizer | 2.2.0 | https://crates.io/crates/icu_normalizer/2.2.0 |
| icu_provider | 2.2.0 | https://crates.io/crates/icu_provider/2.2.0 |
| idna | 0.5.0 | https://crates.io/crates/idna/0.5.0 |
| memchr | 2.7.4 | https://crates.io/crates/memchr/2.7.4 |
| nom | 8.0.0 | https://crates.io/crates/nom/8.0.0 |
| once_cell | 1.19.0 | https://crates.io/crates/once_cell/1.19.0 |
| percent-encoding | 2.3.1 | https://crates.io/crates/percent-encoding/2.3.1 |
| phf | 0.12.1 | https://crates.io/crates/phf/0.12.1 |
| phf_shared | 0.12.1 | https://crates.io/crates/phf_shared/0.12.1 |
| serde | 1.0.229 | https://crates.io/crates/serde/1.0.229 |
| serde_core | 1.0.229 | https://crates.io/crates/serde_core/1.0.229 |
| serde_json | 1.0.151 | https://crates.io/crates/serde_json/1.0.151 |
| smallvec | 1.13.2 | https://crates.io/crates/smallvec/1.13.2 |
| tinyvec | 1.8.0 | https://crates.io/crates/tinyvec/1.8.0 |
| tracing-core | 0.1.33 | https://crates.io/crates/tracing-core/0.1.33 |
| unicode-bidi | 0.3.18 | https://crates.io/crates/unicode-bidi/0.3.18 |
| unicode-normalization | 0.1.23 | https://crates.io/crates/unicode-normalization/0.1.23 |
| url | 2.5.2 | https://crates.io/crates/url/2.5.2 |
| utf8_iter | 1.0.4 | https://crates.io/crates/utf8_iter/1.0.4 |
| zerotrie | 0.2.4 | https://crates.io/crates/zerotrie/0.2.4 |
| zerovec | 0.11.6 | https://crates.io/crates/zerovec/0.11.6 |

Discord-authored (not on crates.io): the `discord_markdown` crate is linked in (modules `inline::link`, `inline::emoji`, `grammar`, `context::overrides` appear in its panic strings).



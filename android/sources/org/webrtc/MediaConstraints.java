package org.webrtc;

import java.util.ArrayList;
import java.util.List;

/* loaded from: classes4.dex */
public class MediaConstraints {
    public final List<KeyValuePair> mandatory = new ArrayList();
    public final List<KeyValuePair> optional = new ArrayList();

    public static class KeyValuePair {
        private final String key;
        private final String value;

        public KeyValuePair(String str, String str2) {
            this.key = str;
            this.value = str2;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (!(obj instanceof KeyValuePair)) {
                return false;
            }
            KeyValuePair keyValuePair = (KeyValuePair) obj;
            return this.key.equals(keyValuePair.key) && this.value.equals(keyValuePair.value);
        }

        @CalledByNative("KeyValuePair")
        public String getKey() {
            return this.key;
        }

        @CalledByNative("KeyValuePair")
        public String getValue() {
            return this.value;
        }

        public int hashCode() {
            return this.value.hashCode() + this.key.hashCode();
        }

        public String toString() {
            return k0.d.l(this.key, ": ", this.value);
        }
    }

    private static String stringifyKeyValuePairList(List<KeyValuePair> list) {
        StringBuilder sb2 = new StringBuilder("[");
        for (KeyValuePair keyValuePair : list) {
            if (sb2.length() > 1) {
                sb2.append(", ");
            }
            sb2.append(keyValuePair.toString());
        }
        sb2.append("]");
        return sb2.toString();
    }

    @CalledByNative
    public List<KeyValuePair> getMandatory() {
        return this.mandatory;
    }

    @CalledByNative
    public List<KeyValuePair> getOptional() {
        return this.optional;
    }

    public String toString() {
        return a3.e.l("mandatory: ", stringifyKeyValuePairList(this.mandatory), ", optional: ", stringifyKeyValuePairList(this.optional));
    }
}

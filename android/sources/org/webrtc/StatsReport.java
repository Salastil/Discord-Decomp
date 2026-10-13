package org.webrtc;

/* loaded from: classes4.dex */
public class StatsReport {

    /* renamed from: id, reason: collision with root package name */
    public final String f16194id;
    public final double timestamp;
    public final String type;
    public final Value[] values;

    public static class Value {
        public final String name;
        public final String value;

        @CalledByNative("Value")
        public Value(String str, String str2) {
            this.name = str;
            this.value = str2;
        }

        public String toString() {
            StringBuilder sb2 = new StringBuilder("[");
            sb2.append(this.name);
            sb2.append(": ");
            return com.discord.chat.bridge.botuikit.a.j(sb2, this.value, "]");
        }
    }

    @CalledByNative
    public StatsReport(String str, String str2, double d6, Value[] valueArr) {
        this.f16194id = str;
        this.type = str2;
        this.timestamp = d6;
        this.values = valueArr;
    }

    public String toString() {
        StringBuilder sb2 = new StringBuilder("id: ");
        sb2.append(this.f16194id);
        sb2.append(", type: ");
        sb2.append(this.type);
        sb2.append(", timestamp: ");
        sb2.append(this.timestamp);
        sb2.append(", values: ");
        int i5 = 0;
        while (true) {
            Value[] valueArr = this.values;
            if (i5 >= valueArr.length) {
                return sb2.toString();
            }
            sb2.append(valueArr[i5].toString());
            sb2.append(", ");
            i5++;
        }
    }
}

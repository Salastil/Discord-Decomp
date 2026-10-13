package org.webrtc;

import java.util.Map;

/* loaded from: classes4.dex */
public class RTCStats {

    /* renamed from: id, reason: collision with root package name */
    private final String f16192id;
    private final Map<String, Object> members;
    private final long timestampUs;
    private final String type;

    public RTCStats(long j, String str, String str2, Map<String, Object> map) {
        this.timestampUs = j;
        this.type = str;
        this.f16192id = str2;
        this.members = map;
    }

    private static void appendValue(StringBuilder sb2, Object obj) {
        if (!(obj instanceof Object[])) {
            if (!(obj instanceof String)) {
                sb2.append(obj);
                return;
            }
            sb2.append('\"');
            sb2.append(obj);
            sb2.append('\"');
            return;
        }
        Object[] objArr = (Object[]) obj;
        sb2.append('[');
        for (int i5 = 0; i5 < objArr.length; i5++) {
            if (i5 != 0) {
                sb2.append(", ");
            }
            appendValue(sb2, objArr[i5]);
        }
        sb2.append(']');
    }

    @CalledByNative
    public static RTCStats create(long j, String str, String str2, Map map) {
        return new RTCStats(j, str, str2, map);
    }

    public String getId() {
        return this.f16192id;
    }

    public Map<String, Object> getMembers() {
        return this.members;
    }

    public double getTimestampUs() {
        return this.timestampUs;
    }

    public String getType() {
        return this.type;
    }

    public String toString() {
        StringBuilder o6 = k0.d.o("{ timestampUs: ");
        o6.append(this.timestampUs);
        o6.append(", type: ");
        o6.append(this.type);
        o6.append(", id: ");
        o6.append(this.f16192id);
        for (Map.Entry<String, Object> entry : this.members.entrySet()) {
            o6.append(", ");
            o6.append(entry.getKey());
            o6.append(": ");
            appendValue(o6, entry.getValue());
        }
        o6.append(" }");
        return o6.toString();
    }
}

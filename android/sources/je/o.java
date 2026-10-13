package je;

import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* loaded from: classes3.dex */
public final class o implements n {

    /* renamed from: c, reason: collision with root package name */
    public static final o f12749c = new o(Collections.EMPTY_MAP);
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f12750b;

    public o(Map map) {
        this.f12750b = Collections.unmodifiableMap(map);
    }

    public static boolean c(Map map, Map map2) {
        if (map.size() != map2.size()) {
            return false;
        }
        for (Map.Entry entry : map.entrySet()) {
            if (!Arrays.equals((byte[]) entry.getValue(), (byte[]) map2.get(entry.getKey()))) {
                return false;
            }
        }
        return true;
    }

    public final o b(g gVar) {
        byte[] bArr;
        Map map = this.f12750b;
        HashMap hashMap = new HashMap(map);
        List unmodifiableList = Collections.unmodifiableList(new ArrayList((ArrayList) gVar.f12733b));
        for (int i5 = 0; i5 < unmodifiableList.size(); i5++) {
            hashMap.remove(unmodifiableList.get(i5));
        }
        HashMap hashMap2 = new HashMap((HashMap) gVar.a);
        for (Map.Entry entry : hashMap2.entrySet()) {
            Object value = entry.getValue();
            if (value instanceof byte[]) {
                byte[] bArr2 = (byte[]) value;
                entry.setValue(Arrays.copyOf(bArr2, bArr2.length));
            }
        }
        for (Map.Entry entry2 : Collections.unmodifiableMap(hashMap2).entrySet()) {
            String str = (String) entry2.getKey();
            Object value2 = entry2.getValue();
            if (value2 instanceof Long) {
                bArr = ByteBuffer.allocate(8).putLong(((Long) value2).longValue()).array();
            } else if (value2 instanceof String) {
                bArr = ((String) value2).getBytes(ei.d.f8100c);
            } else {
                if (!(value2 instanceof byte[])) {
                    throw new IllegalArgumentException();
                }
                bArr = (byte[]) value2;
            }
            hashMap.put(str, bArr);
        }
        return c(map, hashMap) ? this : new o(hashMap);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || o.class != obj.getClass()) {
            return false;
        }
        return c(this.f12750b, ((o) obj).f12750b);
    }

    public final int hashCode() {
        if (this.a == 0) {
            int i5 = 0;
            for (Map.Entry entry : this.f12750b.entrySet()) {
                i5 += Arrays.hashCode((byte[]) entry.getValue()) ^ ((String) entry.getKey()).hashCode();
            }
            this.a = i5;
        }
        return this.a;
    }
}

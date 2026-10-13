package bg;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.io.IOException;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class e1 extends h1 {

    /* renamed from: d, reason: collision with root package name */
    public final int f2946d;

    /* renamed from: e, reason: collision with root package name */
    public final v f2947e;

    public e1(v vVar) {
        vVar.getClass();
        this.f2947e = vVar;
        h0 e9 = vVar.entrySet().e();
        int i5 = 0;
        while (e9.hasNext()) {
            Map.Entry entry = (Map.Entry) e9.next();
            int b10 = ((h1) entry.getKey()).b();
            i5 = i5 < b10 ? b10 : i5;
            int b11 = ((h1) entry.getValue()).b();
            if (i5 < b11) {
                i5 = b11;
            }
        }
        int i6 = i5 + 1;
        this.f2946d = i6;
        if (i6 > 8) {
            throw new y0("Exceeded cutoff limit for max depth of cbor value");
        }
    }

    @Override // bg.h1
    public final int a() {
        return h1.d((byte) -96);
    }

    @Override // bg.h1
    public final int b() {
        return this.f2946d;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        int compareTo;
        h1 h1Var = (h1) obj;
        int a = h1Var.a();
        int d6 = h1.d((byte) -96);
        if (d6 != a) {
            return d6 - h1Var.a();
        }
        v vVar = ((e1) h1Var).f2947e;
        v vVar2 = this.f2947e;
        if (vVar2.f2997v.size() != vVar.f2997v.size()) {
            return vVar2.f2997v.size() - vVar.f2997v.size();
        }
        h0 e9 = vVar2.entrySet().e();
        h0 e10 = vVar.entrySet().e();
        do {
            if (!e9.hasNext() && !e10.hasNext()) {
                return 0;
            }
            Map.Entry entry = (Map.Entry) e9.next();
            Map.Entry entry2 = (Map.Entry) e10.next();
            int compareTo2 = ((h1) entry.getKey()).compareTo((h1) entry2.getKey());
            if (compareTo2 != 0) {
                return compareTo2;
            }
            compareTo = ((h1) entry.getValue()).compareTo((h1) entry2.getValue());
        } while (compareTo == 0);
        return compareTo;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && e1.class == obj.getClass()) {
            return this.f2947e.equals(((e1) obj).f2947e);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(h1.d((byte) -96)), this.f2947e});
    }

    public final String toString() {
        v vVar = this.f2947e;
        if (vVar.isEmpty()) {
            return "{}";
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        h0 e9 = vVar.entrySet().e();
        while (e9.hasNext()) {
            Map.Entry entry = (Map.Entry) e9.next();
            linkedHashMap.put(((h1) entry.getKey()).toString().replace(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, "\n  "), ((h1) entry.getValue()).toString().replace(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, "\n  "));
        }
        j8.b bVar = new j8.b(3, (byte) 0);
        StringBuilder sb2 = new StringBuilder("{\n  ");
        try {
            b.g(sb2, linkedHashMap.entrySet().iterator(), bVar);
            sb2.append("\n}");
            return sb2.toString();
        } catch (IOException e10) {
            throw new AssertionError(e10);
        }
    }
}

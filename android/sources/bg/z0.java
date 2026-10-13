package bg;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class z0 extends h1 {

    /* renamed from: d, reason: collision with root package name */
    public final p f3011d;

    /* renamed from: e, reason: collision with root package name */
    public final int f3012e;

    public z0(b0 b0Var) {
        b0Var.getClass();
        this.f3011d = b0Var;
        int i5 = 0;
        for (int i6 = 0; i6 < this.f3011d.size(); i6++) {
            int b10 = ((h1) this.f3011d.get(i6)).b();
            if (i5 < b10) {
                i5 = b10;
            }
        }
        int i10 = i5 + 1;
        this.f3012e = i10;
        if (i10 > 8) {
            throw new y0("Exceeded cutoff limit for max depth of cbor value");
        }
    }

    @Override // bg.h1
    public final int a() {
        return h1.d(ByteCompanionObject.MIN_VALUE);
    }

    @Override // bg.h1
    public final int b() {
        return this.f3012e;
    }

    @Override // java.lang.Comparable
    public final /* bridge */ /* synthetic */ int compareTo(Object obj) {
        h1 h1Var = (h1) obj;
        int a = h1Var.a();
        int d6 = h1.d(ByteCompanionObject.MIN_VALUE);
        if (d6 != a) {
            return d6 - h1Var.a();
        }
        p pVar = ((z0) h1Var).f3011d;
        p pVar2 = this.f3011d;
        if (pVar2.size() != pVar.size()) {
            return pVar2.size() - pVar.size();
        }
        for (int i5 = 0; i5 < pVar2.size(); i5++) {
            int compareTo = ((h1) pVar2.get(i5)).compareTo((h1) pVar.get(i5));
            if (compareTo != 0) {
                return compareTo;
            }
        }
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && z0.class == obj.getClass()) {
            return this.f3011d.equals(((z0) obj).f3011d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(h1.d(ByteCompanionObject.MIN_VALUE)), this.f3011d});
    }

    public final String toString() {
        p pVar = this.f3011d;
        if (pVar.isEmpty()) {
            return "[]";
        }
        ArrayList arrayList = new ArrayList();
        int size = pVar.size();
        for (int i5 = 0; i5 < size; i5++) {
            arrayList.add(((h1) pVar.get(i5)).toString().replace(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, "\n  "));
        }
        StringBuilder sb2 = new StringBuilder("[\n  ");
        Iterator it = arrayList.iterator();
        try {
            if (it.hasNext()) {
                sb2.append(j8.b.m(it.next()));
                while (it.hasNext()) {
                    sb2.append((CharSequence) ",\n  ");
                    sb2.append(j8.b.m(it.next()));
                }
            }
            sb2.append("\n]");
            return sb2.toString();
        } catch (IOException e9) {
            throw new AssertionError(e9);
        }
    }
}

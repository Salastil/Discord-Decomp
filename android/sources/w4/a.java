package w4;

import ai.k;
import bg.y0;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import e4.e;
import java.io.Closeable;
import java.util.Arrays;
import k0.d;

/* loaded from: classes.dex */
public abstract class a implements Closeable {

    /* renamed from: w, reason: collision with root package name */
    public static final String[] f19679w = new String[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];

    /* renamed from: d, reason: collision with root package name */
    public int f19680d;

    /* renamed from: e, reason: collision with root package name */
    public int[] f19681e;

    /* renamed from: i, reason: collision with root package name */
    public String[] f19682i;

    /* renamed from: v, reason: collision with root package name */
    public int[] f19683v;

    static {
        for (int i5 = 0; i5 <= 31; i5++) {
            f19679w[i5] = String.format("\\u%04x", Integer.valueOf(i5));
        }
        String[] strArr = f19679w;
        strArr[34] = "\\\"";
        strArr[92] = "\\\\";
        strArr[9] = "\\t";
        strArr[8] = "\\b";
        strArr[10] = "\\n";
        strArr[13] = "\\r";
        strArr[12] = "\\f";
    }

    public abstract int A();

    public final void C(int i5) {
        int i6 = this.f19680d;
        int[] iArr = this.f19681e;
        if (i6 == iArr.length) {
            if (i6 == 256) {
                throw new k("Nesting too deep at " + l());
            }
            this.f19681e = Arrays.copyOf(iArr, iArr.length * 2);
            String[] strArr = this.f19682i;
            this.f19682i = (String[]) Arrays.copyOf(strArr, strArr.length * 2);
            int[] iArr2 = this.f19683v;
            this.f19683v = Arrays.copyOf(iArr2, iArr2.length * 2);
        }
        int[] iArr3 = this.f19681e;
        int i10 = this.f19680d;
        this.f19680d = i10 + 1;
        iArr3[i10] = i5;
    }

    public abstract int P(e eVar);

    public abstract void Q();

    public abstract void R();

    public final void U(String str) {
        StringBuilder p3 = d.p(str, " at path ");
        p3.append(l());
        throw new y0(p3.toString());
    }

    public abstract void c();

    public abstract void f();

    public abstract void g();

    public abstract void i();

    public final String l() {
        int i5 = this.f19680d;
        int[] iArr = this.f19681e;
        String[] strArr = this.f19682i;
        int[] iArr2 = this.f19683v;
        StringBuilder sb2 = new StringBuilder("$");
        for (int i6 = 0; i6 < i5; i6++) {
            int i10 = iArr[i6];
            if (i10 == 1 || i10 == 2) {
                sb2.append('[');
                sb2.append(iArr2[i6]);
                sb2.append(']');
            } else if (i10 == 3 || i10 == 4 || i10 == 5) {
                sb2.append('.');
                String str = strArr[i6];
                if (str != null) {
                    sb2.append(str);
                }
            }
        }
        return sb2.toString();
    }

    public abstract boolean o();

    public abstract boolean q();

    public abstract double r();

    public abstract int t();

    public abstract String x();
}

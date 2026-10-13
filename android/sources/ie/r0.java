package ie;

import java.util.ArrayList;
import java.util.Collections;

/* loaded from: classes3.dex */
public final class r0 {

    /* renamed from: h, reason: collision with root package name */
    public static final com.facebook.react.uimanager.a f10729h = new com.facebook.react.uimanager.a(17);

    /* renamed from: i, reason: collision with root package name */
    public static final com.facebook.react.uimanager.a f10730i = new com.facebook.react.uimanager.a(18);
    public final int a;

    /* renamed from: e, reason: collision with root package name */
    public int f10734e;

    /* renamed from: f, reason: collision with root package name */
    public int f10735f;

    /* renamed from: g, reason: collision with root package name */
    public int f10736g;

    /* renamed from: c, reason: collision with root package name */
    public final q0[] f10732c = new q0[5];

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f10731b = new ArrayList();

    /* renamed from: d, reason: collision with root package name */
    public int f10733d = -1;

    public r0(int i5) {
        this.a = i5;
    }

    public final void a(float f2, int i5) {
        q0 q0Var;
        int i6 = this.f10733d;
        ArrayList arrayList = this.f10731b;
        if (i6 != 1) {
            Collections.sort(arrayList, f10729h);
            this.f10733d = 1;
        }
        int i10 = this.f10736g;
        q0[] q0VarArr = this.f10732c;
        if (i10 > 0) {
            int i11 = i10 - 1;
            this.f10736g = i11;
            q0Var = q0VarArr[i11];
        } else {
            q0Var = new q0();
        }
        int i12 = this.f10734e;
        this.f10734e = i12 + 1;
        q0Var.a = i12;
        q0Var.f10727b = i5;
        q0Var.f10728c = f2;
        arrayList.add(q0Var);
        this.f10735f += i5;
        while (true) {
            int i13 = this.f10735f;
            int i14 = this.a;
            if (i13 <= i14) {
                return;
            }
            int i15 = i13 - i14;
            q0 q0Var2 = (q0) arrayList.get(0);
            int i16 = q0Var2.f10727b;
            if (i16 <= i15) {
                this.f10735f -= i16;
                arrayList.remove(0);
                int i17 = this.f10736g;
                if (i17 < 5) {
                    this.f10736g = i17 + 1;
                    q0VarArr[i17] = q0Var2;
                }
            } else {
                q0Var2.f10727b = i16 - i15;
                this.f10735f -= i15;
            }
        }
    }

    public final float b() {
        int i5 = this.f10733d;
        ArrayList arrayList = this.f10731b;
        if (i5 != 0) {
            Collections.sort(arrayList, f10730i);
            this.f10733d = 0;
        }
        float f2 = 0.5f * this.f10735f;
        int i6 = 0;
        for (int i10 = 0; i10 < arrayList.size(); i10++) {
            q0 q0Var = (q0) arrayList.get(i10);
            i6 += q0Var.f10727b;
            if (i6 >= f2) {
                return q0Var.f10728c;
            }
        }
        if (arrayList.isEmpty()) {
            return Float.NaN;
        }
        return ((q0) k0.d.f(1, arrayList)).f10728c;
    }
}

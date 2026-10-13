package le;

import hc.g1;
import java.util.Collections;
import java.util.List;
import ke.w;

/* loaded from: classes3.dex */
public final class e {
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public final int f13871b;

    /* renamed from: c, reason: collision with root package name */
    public final int f13872c;

    /* renamed from: d, reason: collision with root package name */
    public final int f13873d;

    /* renamed from: e, reason: collision with root package name */
    public final int f13874e;

    /* renamed from: f, reason: collision with root package name */
    public final float f13875f;

    /* renamed from: g, reason: collision with root package name */
    public final String f13876g;

    public e(List list, int i5, int i6, int i10, int i11, float f2, String str) {
        this.a = list;
        this.f13871b = i5;
        this.f13872c = i6;
        this.f13873d = i10;
        this.f13874e = i11;
        this.f13875f = f2;
        this.f13876g = str;
    }

    public static e a(w wVar) {
        boolean z5;
        int i5;
        try {
            wVar.G(21);
            int u5 = wVar.u() & 3;
            int u6 = wVar.u();
            int i6 = wVar.f13363b;
            int i10 = 0;
            int i11 = 0;
            int i12 = 0;
            while (true) {
                z5 = true;
                if (i11 >= u6) {
                    break;
                }
                wVar.G(1);
                int z6 = wVar.z();
                for (int i13 = 0; i13 < z6; i13++) {
                    int z7 = wVar.z();
                    i12 += z7 + 4;
                    wVar.G(z7);
                }
                i11++;
            }
            wVar.F(i6);
            byte[] bArr = new byte[i12];
            int i14 = -1;
            int i15 = -1;
            int i16 = -1;
            float f2 = 1.0f;
            String str = null;
            int i17 = 0;
            int i18 = 0;
            while (i17 < u6) {
                int u10 = wVar.u() & 63;
                int z8 = wVar.z();
                int i19 = i10;
                while (i19 < z8) {
                    int z10 = wVar.z();
                    boolean z11 = z5;
                    int i20 = u5;
                    System.arraycopy(ke.b.f13278d, i10, bArr, i18, 4);
                    int i21 = i18 + 4;
                    System.arraycopy(wVar.a, wVar.f13363b, bArr, i21, z10);
                    if (u10 == 33 && i19 == 0) {
                        ke.p E = ke.b.E(bArr, i21, i21 + z10);
                        i14 = E.j;
                        i15 = E.k;
                        i16 = E.f13334l;
                        float f10 = E.f13333i;
                        i5 = u6;
                        str = ke.b.e(E.a, E.f13326b, E.f13327c, E.f13328d, E.f13329e, E.f13330f);
                        f2 = f10;
                    } else {
                        i5 = u6;
                    }
                    i18 = i21 + z10;
                    wVar.G(z10);
                    i19++;
                    z5 = z11;
                    u5 = i20;
                    u6 = i5;
                    i10 = 0;
                }
                i17++;
                i10 = 0;
            }
            return new e(i12 == 0 ? Collections.EMPTY_LIST : Collections.singletonList(bArr), u5 + 1, i14, i15, i16, f2, str);
        } catch (ArrayIndexOutOfBoundsException e9) {
            throw g1.a("Error parsing HEVC config", e9);
        }
    }
}

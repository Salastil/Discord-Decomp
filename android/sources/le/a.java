package le;

import hc.g1;
import java.util.ArrayList;
import ke.w;

/* loaded from: classes3.dex */
public final class a {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public final int f13845b;

    /* renamed from: c, reason: collision with root package name */
    public final int f13846c;

    /* renamed from: d, reason: collision with root package name */
    public final int f13847d;

    /* renamed from: e, reason: collision with root package name */
    public final int f13848e;

    /* renamed from: f, reason: collision with root package name */
    public final int f13849f;

    /* renamed from: g, reason: collision with root package name */
    public final int f13850g;

    /* renamed from: h, reason: collision with root package name */
    public final float f13851h;

    /* renamed from: i, reason: collision with root package name */
    public final String f13852i;

    public a(ArrayList arrayList, int i5, int i6, int i10, int i11, int i12, int i13, float f2, String str) {
        this.a = arrayList;
        this.f13845b = i5;
        this.f13846c = i6;
        this.f13847d = i10;
        this.f13848e = i11;
        this.f13849f = i12;
        this.f13850g = i13;
        this.f13851h = f2;
        this.f13852i = str;
    }

    public static a a(w wVar) {
        String str;
        int i5;
        int i6;
        int i10;
        int i11;
        float f2;
        int i12;
        byte[] bArr = ke.b.a;
        try {
            wVar.G(4);
            int u5 = (wVar.u() & 3) + 1;
            if (u5 == 3) {
                throw new IllegalStateException();
            }
            ArrayList arrayList = new ArrayList();
            int u6 = wVar.u() & 31;
            for (int i13 = 0; i13 < u6; i13++) {
                int z5 = wVar.z();
                int i14 = wVar.f13363b;
                wVar.G(z5);
                byte[] bArr2 = wVar.a;
                byte[] bArr3 = new byte[z5 + 4];
                System.arraycopy(bArr, 0, bArr3, 0, 4);
                System.arraycopy(bArr2, i14, bArr3, 4, z5);
                arrayList.add(bArr3);
            }
            int u10 = wVar.u();
            for (int i15 = 0; i15 < u10; i15++) {
                int z6 = wVar.z();
                int i16 = wVar.f13363b;
                wVar.G(z6);
                byte[] bArr4 = wVar.a;
                byte[] bArr5 = new byte[z6 + 4];
                System.arraycopy(bArr, 0, bArr5, 0, 4);
                System.arraycopy(bArr4, i16, bArr5, 4, z6);
                arrayList.add(bArr5);
            }
            if (u6 > 0) {
                ke.r F = ke.b.F((byte[]) arrayList.get(0), u5, ((byte[]) arrayList.get(0)).length);
                int i17 = F.f13339e;
                int i18 = F.f13340f;
                int i19 = F.f13346n;
                int i20 = F.f13347o;
                int i21 = F.f13348p;
                float f10 = F.f13341g;
                str = String.format("avc1.%02X%02X%02X", Integer.valueOf(F.a), Integer.valueOf(F.f13336b), Integer.valueOf(F.f13337c));
                i5 = i18;
                i6 = i19;
                i10 = i20;
                i11 = i21;
                f2 = f10;
                i12 = i17;
            } else {
                str = null;
                i5 = -1;
                i6 = -1;
                i10 = -1;
                i11 = -1;
                f2 = 1.0f;
                i12 = -1;
            }
            return new a(arrayList, u5, i12, i5, i6, i10, i11, f2, str);
        } catch (ArrayIndexOutOfBoundsException e9) {
            throw g1.a("Error parsing AVC config", e9);
        }
    }
}

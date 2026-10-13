package yc;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ke.d0;
import ke.w;
import qc.v;

/* loaded from: classes3.dex */
public final class h {
    public final v a;

    /* renamed from: d, reason: collision with root package name */
    public r f20778d;

    /* renamed from: e, reason: collision with root package name */
    public f f20779e;

    /* renamed from: f, reason: collision with root package name */
    public int f20780f;

    /* renamed from: g, reason: collision with root package name */
    public int f20781g;

    /* renamed from: h, reason: collision with root package name */
    public int f20782h;

    /* renamed from: i, reason: collision with root package name */
    public int f20783i;

    /* renamed from: l, reason: collision with root package name */
    public boolean f20784l;

    /* renamed from: b, reason: collision with root package name */
    public final q f20776b = new q();

    /* renamed from: c, reason: collision with root package name */
    public final w f20777c = new w();
    public final w j = new w(1);
    public final w k = new w();

    public h(v vVar, r rVar, f fVar) {
        this.a = vVar;
        this.f20778d = rVar;
        this.f20779e = fVar;
        this.f20778d = rVar;
        this.f20779e = fVar;
        vVar.e(rVar.a.f20841f);
        d();
    }

    public final p a() {
        if (this.f20784l) {
            q qVar = this.f20776b;
            f fVar = qVar.a;
            int i5 = d0.a;
            int i6 = fVar.a;
            p pVar = qVar.f20858m;
            if (pVar == null) {
                p[] pVarArr = this.f20778d.a.k;
                pVar = pVarArr == null ? null : pVarArr[i6];
            }
            if (pVar != null && pVar.a) {
                return pVar;
            }
        }
        return null;
    }

    public final boolean b() {
        this.f20780f++;
        if (!this.f20784l) {
            return false;
        }
        int i5 = this.f20781g + 1;
        this.f20781g = i5;
        int[] iArr = this.f20776b.f20854g;
        int i6 = this.f20782h;
        if (i5 != iArr[i6]) {
            return true;
        }
        this.f20782h = i6 + 1;
        this.f20781g = 0;
        return false;
    }

    public final int c(int i5, int i6) {
        w wVar;
        p a = a();
        if (a == null) {
            return 0;
        }
        int i10 = a.f20847d;
        q qVar = this.f20776b;
        if (i10 != 0) {
            wVar = qVar.f20859n;
        } else {
            byte[] bArr = a.f20848e;
            int i11 = d0.a;
            int length = bArr.length;
            w wVar2 = this.k;
            wVar2.D(bArr, length);
            i10 = bArr.length;
            wVar = wVar2;
        }
        boolean z5 = qVar.k && qVar.f20857l[this.f20780f];
        boolean z6 = z5 || i6 != 0;
        w wVar3 = this.j;
        wVar3.a[0] = (byte) ((z6 ? IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT : 0) | i10);
        wVar3.F(0);
        v vVar = this.a;
        vVar.d(1, wVar3);
        vVar.d(i10, wVar);
        if (!z6) {
            return i10 + 1;
        }
        w wVar4 = this.f20777c;
        if (!z5) {
            wVar4.C(8);
            byte[] bArr2 = wVar4.a;
            bArr2[0] = 0;
            bArr2[1] = 1;
            bArr2[2] = (byte) 0;
            bArr2[3] = (byte) (i6 & 255);
            bArr2[4] = (byte) ((i5 >> 24) & 255);
            bArr2[5] = (byte) ((i5 >> 16) & 255);
            bArr2[6] = (byte) ((i5 >> 8) & 255);
            bArr2[7] = (byte) (i5 & 255);
            vVar.d(8, wVar4);
            return i10 + 9;
        }
        w wVar5 = qVar.f20859n;
        int z7 = wVar5.z();
        wVar5.G(-2);
        int i12 = (z7 * 6) + 2;
        if (i6 != 0) {
            wVar4.C(i12);
            byte[] bArr3 = wVar4.a;
            wVar5.e(bArr3, 0, i12);
            int i13 = (((bArr3[2] & 255) << 8) | (bArr3[3] & 255)) + i6;
            bArr3[2] = (byte) ((i13 >> 8) & 255);
            bArr3[3] = (byte) (i13 & 255);
        } else {
            wVar4 = wVar5;
        }
        vVar.d(i12, wVar4);
        return i10 + 1 + i12;
    }

    public final void d() {
        q qVar = this.f20776b;
        qVar.f20851d = 0;
        qVar.f20861p = 0L;
        qVar.f20862q = false;
        qVar.k = false;
        qVar.f20860o = false;
        qVar.f20858m = null;
        this.f20780f = 0;
        this.f20782h = 0;
        this.f20781g = 0;
        this.f20783i = 0;
        this.f20784l = false;
    }
}

package zc;

import com.google.android.exoplayer2.Format;
import e4.l;
import java.util.Arrays;
import ke.w;
import kotlin.jvm.internal.ByteCompanionObject;
import nd.k0;
import qc.o;

/* loaded from: classes3.dex */
public final class c extends h {

    /* renamed from: n, reason: collision with root package name */
    public o f21157n;

    /* renamed from: o, reason: collision with root package name */
    public k0 f21158o;

    @Override // zc.h
    public final long b(w wVar) {
        byte[] bArr = wVar.a;
        if (bArr[0] != -1) {
            return -1L;
        }
        int i5 = (bArr[2] & 255) >> 4;
        if (i5 == 6 || i5 == 7) {
            wVar.G(4);
            wVar.A();
        }
        int U = ys.d.U(i5, wVar);
        wVar.F(0);
        return U;
    }

    @Override // zc.h
    public final boolean c(w wVar, long j, e4.c cVar) {
        byte[] bArr = wVar.a;
        o oVar = this.f21157n;
        if (oVar == null) {
            o oVar2 = new o(bArr, 17);
            this.f21157n = oVar2;
            cVar.f7939e = oVar2.c(Arrays.copyOfRange(bArr, 9, wVar.f13364c), null);
            return true;
        }
        byte b10 = bArr[0];
        if ((b10 & ByteCompanionObject.MAX_VALUE) != 3) {
            if (b10 != -1) {
                return true;
            }
            k0 k0Var = this.f21158o;
            if (k0Var != null) {
                k0Var.f15120d = j;
                cVar.f7940i = k0Var;
            }
            ((Format) cVar.f7939e).getClass();
            return false;
        }
        l v5 = ys.l.v(wVar);
        o oVar3 = new o(oVar.a, oVar.f16783b, oVar.f16784c, oVar.f16785d, oVar.f16786e, oVar.f16788g, oVar.f16789h, oVar.j, v5, oVar.f16791l);
        this.f21157n = oVar3;
        k0 k0Var2 = new k0();
        k0Var2.f15122i = oVar3;
        k0Var2.f15123v = v5;
        k0Var2.f15120d = -1L;
        k0Var2.f15121e = -1L;
        this.f21158o = k0Var2;
        return true;
    }

    @Override // zc.h
    public final void d(boolean z5) {
        super.d(z5);
        if (z5) {
            this.f21157n = null;
            this.f21158o = null;
        }
    }
}

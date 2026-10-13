package le;

import android.os.Handler;
import android.os.Message;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class h implements Handler.Callback {

    /* renamed from: d, reason: collision with root package name */
    public final Handler f13877d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ i f13878e;

    public h(i iVar, cd.l lVar) {
        this.f13878e = iVar;
        Handler m5 = d0.m(this);
        this.f13877d = m5;
        lVar.F(this, m5);
    }

    public final void a(long j) {
        i iVar = this.f13878e;
        if (this != iVar.I1 || iVar.f3462g0 == null) {
            return;
        }
        if (j == LongCompanionObject.MAX_VALUE) {
            iVar.V0 = true;
            return;
        }
        try {
            iVar.q0(j);
            iVar.y0(iVar.E1);
            iVar.X0.f5381e++;
            iVar.x0();
            iVar.Y(j);
        } catch (com.google.android.exoplayer2.c e9) {
            iVar.W0 = e9;
        }
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        if (message.what != 0) {
            return false;
        }
        int i5 = message.arg1;
        int i6 = message.arg2;
        int i10 = d0.a;
        a(((i5 & 4294967295L) << 32) | (4294967295L & i6));
        return true;
    }
}

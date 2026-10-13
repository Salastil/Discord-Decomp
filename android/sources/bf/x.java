package bf;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.util.Log;

/* loaded from: classes3.dex */
public final class x extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public e f2922g;

    /* renamed from: h, reason: collision with root package name */
    public final int f2923h;

    public x(e eVar, int i5) {
        super("com.google.android.gms.common.internal.IGmsCallbacks", 9);
        this.f2922g = eVar;
        this.f2923h = i5;
    }

    @Override // ag.a
    public final boolean y(int i5, Parcel parcel, Parcel parcel2) {
        if (i5 == 1) {
            int readInt = parcel.readInt();
            IBinder readStrongBinder = parcel.readStrongBinder();
            Bundle bundle = (Bundle) zf.g.a(parcel, Bundle.CREATOR);
            zf.g.c(parcel);
            t.h(this.f2922g, "onPostInitComplete can be called only once per call to getRemoteService");
            e eVar = this.f2922g;
            int i6 = this.f2923h;
            eVar.getClass();
            z zVar = new z(eVar, readInt, readStrongBinder, bundle);
            w wVar = eVar.f2868w;
            wVar.sendMessage(wVar.obtainMessage(1, i6, -1, zVar));
            this.f2922g = null;
        } else if (i5 == 2) {
            parcel.readInt();
            zf.g.c(parcel);
            Log.wtf("GmsClient", "received deprecated onAccountValidationComplete callback, ignoring", new Exception());
        } else {
            if (i5 != 3) {
                return false;
            }
            int readInt2 = parcel.readInt();
            IBinder readStrongBinder2 = parcel.readStrongBinder();
            b0 b0Var = (b0) zf.g.a(parcel, b0.CREATOR);
            zf.g.c(parcel);
            e eVar2 = this.f2922g;
            t.h(eVar2, "onPostInitCompleteWithConnectionInfo can be called only once per call togetRemoteService");
            t.g(b0Var);
            eVar2.R = b0Var;
            if (eVar2.s()) {
                c cVar = b0Var.f2841v;
                h a = h.a();
                i iVar = cVar == null ? null : cVar.f2842d;
                synchronized (a) {
                    if (iVar == null) {
                        iVar = h.f2888c;
                    } else {
                        i iVar2 = (i) a.a;
                        if (iVar2 != null) {
                            if (iVar2.f2889d < iVar.f2889d) {
                            }
                        }
                    }
                    a.a = iVar;
                }
            }
            Bundle bundle2 = b0Var.f2838d;
            t.h(this.f2922g, "onPostInitComplete can be called only once per call to getRemoteService");
            e eVar3 = this.f2922g;
            int i10 = this.f2923h;
            eVar3.getClass();
            z zVar2 = new z(eVar3, readInt2, readStrongBinder2, bundle2);
            w wVar2 = eVar3.f2868w;
            wVar2.sendMessage(wVar2.obtainMessage(1, i10, -1, zVar2));
            this.f2922g = null;
        }
        parcel2.writeNoException();
        return true;
    }
}

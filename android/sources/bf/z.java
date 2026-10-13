package bf;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import android.util.Log;

/* loaded from: classes3.dex */
public final class z extends r {

    /* renamed from: g, reason: collision with root package name */
    public final IBinder f2926g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ e f2927h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public z(e eVar, int i5, IBinder iBinder, Bundle bundle) {
        super(eVar, i5, bundle);
        this.f2927h = eVar;
        this.f2926g = iBinder;
    }

    @Override // bf.r
    public final boolean a() {
        IBinder iBinder = this.f2926g;
        try {
            t.g(iBinder);
            String interfaceDescriptor = iBinder.getInterfaceDescriptor();
            e eVar = this.f2927h;
            if (!eVar.p().equals(interfaceDescriptor)) {
                String p3 = eVar.p();
                Log.w("GmsClient", com.discord.chat.bridge.botuikit.a.k(new StringBuilder(p3.length() + 34 + String.valueOf(interfaceDescriptor).length()), "service descriptor mismatch: ", p3, " vs. ", interfaceDescriptor));
                return false;
            }
            IInterface l6 = eVar.l(iBinder);
            if (l6 == null || !(eVar.t(2, 4, l6) || eVar.t(3, 4, l6))) {
                return false;
            }
            eVar.P = null;
            h hVar = eVar.K;
            if (hVar == null) {
                return true;
            }
            ((ze.j) hVar.a).onConnected();
            return true;
        } catch (RemoteException unused) {
            Log.w("GmsClient", "service probably died");
            return false;
        }
    }

    @Override // bf.r
    public final void b(ye.b bVar) {
        h hVar = this.f2927h.L;
        if (hVar != null) {
            ((ze.k) hVar.a).b(bVar);
        }
        System.currentTimeMillis();
    }
}

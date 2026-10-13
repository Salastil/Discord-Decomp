package bf;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;

/* loaded from: classes3.dex */
public final class y implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public final int f2924d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e f2925e;

    public y(e eVar, int i5) {
        this.f2925e = eVar;
        this.f2924d = i5;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        int i5;
        int i6;
        e eVar = this.f2925e;
        if (iBinder == null) {
            synchronized (eVar.f2869x) {
                i5 = eVar.J;
            }
            if (i5 == 3) {
                eVar.Q = true;
                i6 = 5;
            } else {
                i6 = 4;
            }
            w wVar = eVar.f2868w;
            wVar.sendMessage(wVar.obtainMessage(i6, eVar.S.get(), 16));
            return;
        }
        synchronized (eVar.f2870y) {
            try {
                IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
                eVar.E = (queryLocalInterface == null || !(queryLocalInterface instanceof s)) ? new s(iBinder) : (s) queryLocalInterface;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        e eVar2 = this.f2925e;
        int i10 = this.f2924d;
        eVar2.getClass();
        a0 a0Var = new a0(eVar2, 0, null);
        w wVar2 = eVar2.f2868w;
        wVar2.sendMessage(wVar2.obtainMessage(7, i10, -1, a0Var));
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        e eVar = this.f2925e;
        synchronized (eVar.f2870y) {
            eVar.E = null;
        }
        e eVar2 = this.f2925e;
        int i5 = this.f2924d;
        w wVar = eVar2.f2868w;
        wVar.sendMessage(wVar.obtainMessage(6, i5, 1));
    }
}

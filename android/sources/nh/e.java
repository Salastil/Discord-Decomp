package nh;

import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import xe.i;
import xe.j;

/* loaded from: classes3.dex */
public final class e implements Handler.Callback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15476d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f15477e;

    public /* synthetic */ e(int i5, Object obj) {
        this.f15476d = i5;
        this.f15477e = obj;
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        switch (this.f15476d) {
            case 0:
                if (message.what != 0) {
                    return false;
                }
                l1.c cVar = (l1.c) this.f15477e;
                if (message.obj != null) {
                    throw new ClassCastException();
                }
                synchronized (cVar.a) {
                    throw null;
                }
            default:
                int i5 = message.arg1;
                if (Log.isLoggable("MessengerIpcClient", 3)) {
                    k0.d.q(i5, "Received response to request: ", "MessengerIpcClient");
                }
                i iVar = (i) this.f15477e;
                synchronized (iVar) {
                    try {
                        j jVar = (j) iVar.f20413w.get(i5);
                        if (jVar == null) {
                            Log.w("MessengerIpcClient", "Received response for unknown request: " + i5);
                            return true;
                        }
                        iVar.f20413w.remove(i5);
                        iVar.c();
                        Bundle data = message.getData();
                        if (data.getBoolean("unsupported", false)) {
                            jVar.b(new ap.a(8, "Not supported by GmsCore", null));
                            return true;
                        }
                        switch (jVar.f20418e) {
                            case 0:
                                if (data.getBoolean("ack", false)) {
                                    jVar.c(null);
                                    return true;
                                }
                                jVar.b(new ap.a(8, "Invalid response to one way request", null));
                                return true;
                            default:
                                Bundle bundle = data.getBundle("data");
                                if (bundle == null) {
                                    bundle = Bundle.EMPTY;
                                }
                                jVar.c(bundle);
                                return true;
                        }
                    } finally {
                    }
                }
        }
    }
}

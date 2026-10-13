package xe;

import android.content.Context;
import android.os.Bundle;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.internal.play_billing.v0;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final /* synthetic */ class h implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20407d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ i f20408e;

    public /* synthetic */ h(i iVar, int i5) {
        this.f20407d = i5;
        this.f20408e = iVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f20407d) {
            case 0:
                break;
            case 1:
                i iVar = this.f20408e;
                synchronized (iVar) {
                    if (iVar.f20409d == 1) {
                        iVar.a("Timed out while binding");
                    }
                }
                return;
            default:
                this.f20408e.a("Service disconnected");
                return;
        }
        while (true) {
            i iVar2 = this.f20408e;
            synchronized (iVar2) {
                try {
                    if (iVar2.f20409d != 2) {
                        return;
                    }
                    if (iVar2.f20412v.isEmpty()) {
                        iVar2.c();
                        return;
                    }
                    j jVar = (j) iVar2.f20412v.poll();
                    iVar2.f20413w.put(jVar.a, jVar);
                    ((ScheduledExecutorService) iVar2.f20414x.f20421c).schedule(new v0(27, iVar2, jVar), 30L, TimeUnit.SECONDS);
                    if (Log.isLoggable("MessengerIpcClient", 3)) {
                        Log.d("MessengerIpcClient", "Sending ".concat(String.valueOf(jVar)));
                    }
                    k kVar = iVar2.f20414x;
                    Messenger messenger = iVar2.f20410e;
                    int i5 = jVar.f20416c;
                    Context context = (Context) kVar.f20420b;
                    Message obtain = Message.obtain();
                    obtain.what = i5;
                    obtain.arg1 = jVar.a;
                    obtain.replyTo = messenger;
                    Bundle bundle = new Bundle();
                    bundle.putBoolean("oneWay", jVar.a());
                    bundle.putString("pkg", context.getPackageName());
                    bundle.putBundle("data", jVar.f20417d);
                    obtain.setData(bundle);
                    try {
                        io.sentry.internal.debugmeta.c cVar = iVar2.f20411i;
                        Messenger messenger2 = (Messenger) cVar.f11622e;
                        if (messenger2 != null) {
                            messenger2.send(obtain);
                        } else {
                            f fVar = (f) cVar.f11623i;
                            if (fVar == null) {
                                throw new IllegalStateException("Both messengers are null");
                            }
                            Messenger messenger3 = fVar.f20403d;
                            messenger3.getClass();
                            messenger3.send(obtain);
                        }
                    } catch (RemoteException e9) {
                        iVar2.a(e9.getMessage());
                    }
                } finally {
                }
            }
        }
    }
}
